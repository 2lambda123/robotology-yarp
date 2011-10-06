/*
 *  Yarp Modules Manager
 *  Copyright: 2011 (C) Robotics, Brain and Cognitive Sciences - Italian Institute of Technology (IIT)
 *  Authors: Ali Paikan <ali.paikan@iit.it>
 * 
 *  Copy Policy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */

#ifndef _SAFE_MANAGER_H_
#define _SAFE_MANAGER_H_


#include <yarp/os/Thread.h>
#include <yarp/os/Semaphore.h>
#include <yarp/os/Property.h>
#include <yarp/os/ConstString.h>

#include <vector>

#include "manager.h"


typedef enum __ThreadAction {
	MRUN,
	MSTOP,
	MKILL,
	MCONNECT,
	MDISCONNECT,
	MREFRESH,
	MNOTHING
} ThreadAction;


class ApplicationEvent{
public: 
	ApplicationEvent() {}
	virtual ~ApplicationEvent() {}
	virtual void onModStart(int which) {};
	virtual void onModStop(int which) {};
	virtual void onConConnect(int which) {};
	virtual void onConDisconnect(int which) {};
	virtual void onResAvailable(int which) {};
	virtual void onResUnAvailable(int which) {};
	virtual void onError(void) {};
};



class SafeManager: public Manager, yarp::os::Thread
{
public:
	SafeManager();
	virtual ~SafeManager();
	bool prepare(Manager* lazy, yarp::os::Property* config, ApplicationEvent* event=NULL); 
	
	virtual bool threadInit();
	virtual void run();
	virtual void threadRelease();
	
	void safeRun(std::vector<int>& MIDs);
	void safeStop(std::vector<int>& MIDs);
	void safeKill(std::vector<int>& MIDs);
	void safeConnect(std::vector<int>& CIDs);
	void safeDisconnect(std::vector<int>& CDs);
	void safeRefresh(std::vector<int>& MIDs, 
					 std::vector<int>& CIDs, 
					 std::vector<int>& RIDs);

	bool checkSemaphore(void){ return semManage.check(); }
	void postSemaphore(void) { semManage.post(); }
	void waitSemaphore(void) { semManage.wait(); }

protected:
	virtual void onExecutableStart(void* which);
	virtual void onExecutableStop(void* which);
	virtual void onCnnStablished(void* which);
	virtual void onExecutableDied(void* which);
	virtual void onExecutableFailed(void* which);
	virtual void onCnnFailed(void* which);

private:
	yarp::os::Property* m_pConfig;
	ApplicationEvent* eventReceiver;
	ThreadAction action;
	yarp::os::Semaphore semManage;
	std::vector<int> modIds;
	std::vector<int> conIds;
	std::vector<int> resIds;

};


#endif //_SAFE_MANAGER_H_


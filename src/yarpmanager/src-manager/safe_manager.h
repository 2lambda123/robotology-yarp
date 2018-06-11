/*
 * Copyright (C) 2006-2018 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * LGPLv2.1+ license. See the accompanying LICENSE file for details.
 */

#ifndef SAFE_MANAGER_H
#define SAFE_MANAGER_H


#include <yarp/os/Thread.h>
#include <yarp/os/Semaphore.h>
#include <yarp/os/Property.h>
#include <string>

#include <vector>

#include <yarp/manager/manager.h>


typedef enum __ThreadAction {
    MRUN,
    MSTOP,
    MKILL,
    MCONNECT,
    MDISCONNECT,
    MREFRESH,
    MREFRESH_CNN,
    MATTACHSTDOUT,
    MDETACHSTDOUT,
    MLOADBALANCE,
    MNOTHING
} ThreadAction;


class ApplicationEvent{
public:
    ApplicationEvent() {}
    virtual ~ApplicationEvent() {}
    virtual void onModStart(int which) {}
    virtual void onModStop(int which) {}
    virtual void onModStdout(int which, const char* msg) {}
    virtual void onConConnect(int which) {}
    virtual void onConDisconnect(int which) {}
    virtual void onResAvailable(int which) {}
    virtual void onResUnAvailable(int which) {}
    virtual void onConAvailable(int from, int to) {}
    virtual void onConUnAvailable(int from, int to) {}
    virtual void onError(void) {}
    virtual void onLoadBalance(void) {}
};



class SafeManager: public yarp::manager::Manager, yarp::os::Thread
{
public:
    SafeManager();
    virtual ~SafeManager();
    bool prepare(yarp::manager::Manager* lazy, yarp::os::Property* config, ApplicationEvent* event=NULL);
    void close();

    bool threadInit() override;
    void run() override;
    void threadRelease() override;

    void safeRun(std::vector<int>& MIDs, std::vector<int>& CIDs, std::vector<int>& RIDs);
    void safeStop(std::vector<int>& MIDs, std::vector<int>& CIDs, std::vector<int>& RIDs);
    void safeKill(std::vector<int>& MIDs, std::vector<int>& CIDs, std::vector<int>& RIDs);
    void safeConnect(std::vector<int>& CIDs);
    void safeDisconnect(std::vector<int>& CDs);
    void safeRefresh(std::vector<int>& MIDs,
                     std::vector<int>& CIDs,
                     std::vector<int>& RIDs);
    void safeAttachStdout(std::vector<int>& MIDs);
    void safeDetachStdout(std::vector<int>& MIDs);
    void safeLoadBalance(void);
    bool busy(void);

    bool checkSemaphore(void){ return semManage.check(); }
    void postSemaphore(void) { semManage.post(); }
    void waitSemaphore(void) { semManage.wait(); }


protected:
    void onExecutableStart(void* which) override;
    void onExecutableStop(void* which) override;
    void onExecutableStdout(void* which, const char* msg) override;
    void onCnnStablished(void* which) override;
    void onExecutableDied(void* which) override;
    void onExecutableFailed(void* which) override;
    void onCnnFailed(void* which) override;
    void onError(void* which) override;

private:
    yarp::os::Property* m_pConfig;
    ThreadAction action;
    ApplicationEvent* eventReceiver;
    bool busyAction;
    yarp::os::Semaphore semManage;
    std::vector<int> modIds;
    std::vector<int> conIds;
    std::vector<int> resIds;
    void refreshPortStatus(int id);

};


#endif // SAFE_MANAGER_H


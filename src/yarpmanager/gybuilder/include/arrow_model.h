/*
 *  Yarp Modules Manager
 *  Copyright: 2011 (C) Robotics, Brain and Cognitive Sciences - Italian Institute of Technology (IIT)
 *  Authors: Ali Paikan <ali.paikan@iit.it>
 * 
 *  Copy Policy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */

#ifndef _ARROW_MODEL__
#define _ARROW_MODEL__

#include <vector>
#include <goocanvasmm.h>
#include <goocanvasrect.h>
#include "ymm-types.h"
#include <string.h>
#include "application.h"

class ApplicationWindow;
class PortModel;
class MidpointModel;
class LabelModel;

class ArrowModel : public Goocanvas::PolylineModel, public GraphicModel
{
public:
    virtual ~ArrowModel();

    static Glib::RefPtr<ArrowModel> create(ApplicationWindow* parentWnd,
                                           Glib::RefPtr<PortModel> src, Glib::RefPtr<PortModel> dest, 
                                           const char* szLabel=NULL);

    bool onItemButtonPressEvent(const Glib::RefPtr<Goocanvas::Item>& item, 
                        GdkEventButton* event);
    bool onItemButtonReleaseEvent(const Glib::RefPtr<Goocanvas::Item>& item, 
                        GdkEventButton* event);
    bool onItemMotionNotifyEvent(const Glib::RefPtr<Goocanvas::Item>& item, 
                        GdkEventMotion* event);
    bool onItemEnterNotify(const Glib::RefPtr<Goocanvas::Item>& item, 
                        GdkEventCrossing* event);
    bool onItemLeaveNotify(const Glib::RefPtr<Goocanvas::Item>& item, 
                        GdkEventCrossing* event);
    void updatCoordiantes(void);
    void updatLabelCoordiante(void);


    void setLabel(const char* label);
    void addMidPoint(double x, double y, int index=-1);

    void setSelected(bool sel);
    bool getSelected(void) { return selected; }
    Gdk::Point getPoint(int index);
    int getIndex(double x, double y);

    bool setPoint(int index, double x, double y);
    bool setPoint(double x, double y,
                  double x_new, double y_new);
    bool addPoint(int index, double x, double y);
    int addPoint(double x, double y);
    void deletePoint(double x, double y);
    bool deletePoint(int index);
    
    Connection* getConnection(void) { return &connection; }
    Glib::RefPtr<PortModel>& getSource(void) { return source; }
    Glib::RefPtr<PortModel>& getDestination(void) { return destination; } 
    
    bool exist(void) { return bExist; } 
    void showLabel(bool bShow);
    void setConnection(Connection& con) { connection = con; }

    //bool preciseClicked(GdkEventButton* event);

    bool intersect(double x1, double y1, double x2, double y2);
    bool inside(double p1, double q1, double p2, double q2);

protected: 
    ArrowModel(ApplicationWindow* parentWnd, 
               Glib::RefPtr<PortModel> src, Glib::RefPtr<PortModel> dest, 
               const char* szLabel);

    void onPointUpdated(void);

private:
    ApplicationWindow* parentWindow;
    Glib::RefPtr<PortModel> source;
    Glib::RefPtr<PortModel> destination; 
    Glib::RefPtr<LabelModel> label; 
    std::vector< Glib::RefPtr<MidpointModel> > midpoints; 
    bool selected;
    bool bExist;
    std::string strLabel;
    Connection connection;
};

#endif //_ARROW_MODEL_


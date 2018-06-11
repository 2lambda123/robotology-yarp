/*
 * Copyright (C) 2015 Istituto Italiano di Tecnologia (IIT)
 * Authors: Ali Paikan
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LICENSE
 *
 */

#include "MainWindow.h"
#include <QApplication>
#include <yarp/os/Network.h>

int main(int argc, char *argv[])
{
    yarp::os::Network yarp;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //w.drawGraph();
    
    return a.exec();
}

/*
 * Copyright (C) 2011 Istituto Italiano di Tecnologia (IIT)
 * Authors: Paul Fitzpatrick
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 */

#include <yarp/os/NameSpace.h>
#include <yarp/os/OutputProtocol.h>
#include <yarp/os/Carriers.h>

using namespace yarp::os;
using namespace yarp::os::impl;


NameSpace::~NameSpace() {
}

bool NameSpace::checkNetwork() {
    if (localOnly()) return true;

    Contact c = queryName(getNameServerName());
    if (!c.isValid()) return false;

    OutputProtocol *out = Carriers::connect(c);
    if (out==nullptr) {
        return false;
    }

    out->close();
    delete out;
    out = nullptr;

    return true;
}

bool NameSpace::checkNetwork(double timeout) {
    Contact c = queryName(getNameServerName());
    if (!c.isValid()) return false;

    c.setTimeout((float)timeout);
    OutputProtocol *out = Carriers::connect(c);
    if (out==nullptr) {
        return false;
    }

    out->close();
    delete out;
    out = nullptr;

    return true;
}

ConstString NameSpace::getNameServerName() const {
    return getNameServerContact().getName();
}

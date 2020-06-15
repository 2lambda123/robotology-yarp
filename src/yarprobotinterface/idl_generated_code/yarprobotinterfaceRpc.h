/*
 * Copyright (C) 2006-2020 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

// Autogenerated by Thrift Compiler (0.12.0-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_SERVICE_YARPROBOTINTERFACERPC_H
#define YARP_THRIFT_GENERATOR_SERVICE_YARPROBOTINTERFACERPC_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

class yarprobotinterfaceRpc :
        public yarp::os::Wire
{
public:
    // Constructor
    yarprobotinterfaceRpc();

    /**
     * Returns current phase.
     */
    virtual std::string get_phase();

    /**
     * Returns current level.
     */
    virtual std::int32_t get_level();

    /**
     * Returns robot name.
     */
    virtual std::string get_robot();

    /**
     * Returns true if yarprobotinterface is ready (all startup actions
     * performed and no interrupt called).
     */
    virtual bool is_ready();

    /**
     * Closes yarprobotinterface.
     */
    virtual std::string quit();

    /**
     * Closes yarprobotinterface.
     */
    virtual std::string bye();

    /**
     * Closes yarprobotinterface.
     */
    virtual std::string exit();

    // help method
    virtual std::vector<std::string> help(const std::string& functionName = "--all");

    // read from ConnectionReader
    bool read(yarp::os::ConnectionReader& connection) override;
};

#endif // YARP_THRIFT_GENERATOR_SERVICE_YARPROBOTINTERFACERPC_H
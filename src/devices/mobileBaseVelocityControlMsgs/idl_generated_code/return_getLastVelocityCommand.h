/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_STRUCT_RETURN_GETLASTVELOCITYCOMMAND_H
#define YARP_THRIFT_GENERATOR_STRUCT_RETURN_GETLASTVELOCITYCOMMAND_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

class return_getLastVelocityCommand :
        public yarp::os::idl::WirePortable
{
public:
    // Fields
    bool retvalue{false};
    double x_vel{0.0};
    double y_vel{0.0};
    double theta_vel{0.0};

    // Default constructor
    return_getLastVelocityCommand() = default;

    // Constructor with field values
    return_getLastVelocityCommand(const bool retvalue,
                                  const double x_vel,
                                  const double y_vel,
                                  const double theta_vel);

    // Read structure on a Wire
    bool read(yarp::os::idl::WireReader& reader) override;

    // Read structure on a Connection
    bool read(yarp::os::ConnectionReader& connection) override;

    // Write structure on a Wire
    bool write(const yarp::os::idl::WireWriter& writer) const override;

    // Write structure on a Connection
    bool write(yarp::os::ConnectionWriter& connection) const override;

    // Convert to a printable string
    std::string toString() const;

    // If you want to serialize this class without nesting, use this helper
    typedef yarp::os::idl::Unwrapped<return_getLastVelocityCommand> unwrapped;

private:
    // read/write retvalue field
    bool read_retvalue(yarp::os::idl::WireReader& reader);
    bool write_retvalue(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_retvalue(yarp::os::idl::WireReader& reader);
    bool nested_write_retvalue(const yarp::os::idl::WireWriter& writer) const;

    // read/write x_vel field
    bool read_x_vel(yarp::os::idl::WireReader& reader);
    bool write_x_vel(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_x_vel(yarp::os::idl::WireReader& reader);
    bool nested_write_x_vel(const yarp::os::idl::WireWriter& writer) const;

    // read/write y_vel field
    bool read_y_vel(yarp::os::idl::WireReader& reader);
    bool write_y_vel(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_y_vel(yarp::os::idl::WireReader& reader);
    bool nested_write_y_vel(const yarp::os::idl::WireWriter& writer) const;

    // read/write theta_vel field
    bool read_theta_vel(yarp::os::idl::WireReader& reader);
    bool write_theta_vel(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_theta_vel(yarp::os::idl::WireReader& reader);
    bool nested_write_theta_vel(const yarp::os::idl::WireWriter& writer) const;
};

#endif // YARP_THRIFT_GENERATOR_STRUCT_RETURN_GETLASTVELOCITYCOMMAND_H

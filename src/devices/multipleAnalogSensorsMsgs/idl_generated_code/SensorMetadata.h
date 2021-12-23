/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_STRUCT_SENSORMETADATA_H
#define YARP_THRIFT_GENERATOR_STRUCT_SENSORMETADATA_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

class SensorMetadata :
        public yarp::os::idl::WirePortable
{
public:
    // Fields
    std::string name{};
    std::string frameName{};
    std::string additionalMetadata{};

    // Default constructor
    SensorMetadata() = default;

    // Constructor with field values
    SensorMetadata(const std::string& name,
                   const std::string& frameName,
                   const std::string& additionalMetadata);

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
    typedef yarp::os::idl::Unwrapped<SensorMetadata> unwrapped;

private:
    // read/write name field
    bool read_name(yarp::os::idl::WireReader& reader);
    bool write_name(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_name(yarp::os::idl::WireReader& reader);
    bool nested_write_name(const yarp::os::idl::WireWriter& writer) const;

    // read/write frameName field
    bool read_frameName(yarp::os::idl::WireReader& reader);
    bool write_frameName(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_frameName(yarp::os::idl::WireReader& reader);
    bool nested_write_frameName(const yarp::os::idl::WireWriter& writer) const;

    // read/write additionalMetadata field
    bool read_additionalMetadata(yarp::os::idl::WireReader& reader);
    bool write_additionalMetadata(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_additionalMetadata(yarp::os::idl::WireReader& reader);
    bool nested_write_additionalMetadata(const yarp::os::idl::WireWriter& writer) const;
};

#endif // YARP_THRIFT_GENERATOR_STRUCT_SENSORMETADATA_H

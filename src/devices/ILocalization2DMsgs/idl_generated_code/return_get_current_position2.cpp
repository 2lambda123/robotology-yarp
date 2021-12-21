/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_get_current_position2.h>

// Constructor with field values
return_get_current_position2::return_get_current_position2(const bool ret,
                                                           const yarp::dev::Nav2D::Map2DLocation& loc,
                                                           const yarp::sig::Matrix& cov) :
        WirePortable(),
        ret(ret),
        loc(loc),
        cov(cov)
{
}

// Read structure on a Wire
bool return_get_current_position2::read(yarp::os::idl::WireReader& reader)
{
    if (!read_ret(reader)) {
        return false;
    }
    if (!nested_read_loc(reader)) {
        return false;
    }
    if (!nested_read_cov(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool return_get_current_position2::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(3)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool return_get_current_position2::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_ret(writer)) {
        return false;
    }
    if (!nested_write_loc(writer)) {
        return false;
    }
    if (!nested_write_cov(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool return_get_current_position2::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string return_get_current_position2::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// read ret field
bool return_get_current_position2::read_ret(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(ret)) {
        ret = false;
    }
    return true;
}

// write ret field
bool return_get_current_position2::write_ret(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(ret)) {
        return false;
    }
    return true;
}

// read (nested) ret field
bool return_get_current_position2::nested_read_ret(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(ret)) {
        ret = false;
    }
    return true;
}

// write (nested) ret field
bool return_get_current_position2::nested_write_ret(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(ret)) {
        return false;
    }
    return true;
}

// read loc field
bool return_get_current_position2::read_loc(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.read(loc)) {
        reader.fail();
        return false;
    }
    return true;
}

// write loc field
bool return_get_current_position2::write_loc(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(loc)) {
        return false;
    }
    return true;
}

// read (nested) loc field
bool return_get_current_position2::nested_read_loc(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readNested(loc)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) loc field
bool return_get_current_position2::nested_write_loc(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(loc)) {
        return false;
    }
    return true;
}

// read cov field
bool return_get_current_position2::read_cov(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.read(cov)) {
        reader.fail();
        return false;
    }
    return true;
}

// write cov field
bool return_get_current_position2::write_cov(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(cov)) {
        return false;
    }
    return true;
}

// read (nested) cov field
bool return_get_current_position2::nested_read_cov(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readNested(cov)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) cov field
bool return_get_current_position2::nested_write_cov(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(cov)) {
        return false;
    }
    return true;
}

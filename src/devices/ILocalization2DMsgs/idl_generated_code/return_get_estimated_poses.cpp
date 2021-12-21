/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_get_estimated_poses.h>

// Constructor with field values
return_get_estimated_poses::return_get_estimated_poses(const bool ret,
                                                       const std::vector<yarp::dev::Nav2D::Map2DLocation>& poses) :
        WirePortable(),
        ret(ret),
        poses(poses)
{
}

// Read structure on a Wire
bool return_get_estimated_poses::read(yarp::os::idl::WireReader& reader)
{
    if (!read_ret(reader)) {
        return false;
    }
    if (!read_poses(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool return_get_estimated_poses::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool return_get_estimated_poses::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_ret(writer)) {
        return false;
    }
    if (!write_poses(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool return_get_estimated_poses::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string return_get_estimated_poses::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// read ret field
bool return_get_estimated_poses::read_ret(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(ret)) {
        ret = false;
    }
    return true;
}

// write ret field
bool return_get_estimated_poses::write_ret(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(ret)) {
        return false;
    }
    return true;
}

// read (nested) ret field
bool return_get_estimated_poses::nested_read_ret(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(ret)) {
        ret = false;
    }
    return true;
}

// write (nested) ret field
bool return_get_estimated_poses::nested_write_ret(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(ret)) {
        return false;
    }
    return true;
}

// read poses field
bool return_get_estimated_poses::read_poses(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    poses.clear();
    uint32_t _size2;
    yarp::os::idl::WireState _etype5;
    reader.readListBegin(_etype5, _size2);
    poses.resize(_size2);
    for (size_t _i6 = 0; _i6 < _size2; ++_i6) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(poses[_i6])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write poses field
bool return_get_estimated_poses::write_poses(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(poses.size()))) {
        return false;
    }
    for (const auto& _item7 : poses) {
        if (!writer.writeNested(_item7)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) poses field
bool return_get_estimated_poses::nested_read_poses(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    poses.clear();
    uint32_t _size8;
    yarp::os::idl::WireState _etype11;
    reader.readListBegin(_etype11, _size8);
    poses.resize(_size8);
    for (size_t _i12 = 0; _i12 < _size8; ++_i12) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(poses[_i12])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) poses field
bool return_get_estimated_poses::nested_write_poses(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(poses.size()))) {
        return false;
    }
    for (const auto& _item13 : poses) {
        if (!writer.writeNested(_item13)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

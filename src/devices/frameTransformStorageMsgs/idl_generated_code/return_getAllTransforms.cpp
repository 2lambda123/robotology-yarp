/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_getAllTransforms.h>

// Constructor with field values
return_getAllTransforms::return_getAllTransforms(const bool retvalue,
                                                 const std::vector<yarp::math::FrameTransform>& transforms_list) :
        WirePortable(),
        retvalue(retvalue),
        transforms_list(transforms_list)
{
}

// Read structure on a Wire
bool return_getAllTransforms::read(yarp::os::idl::WireReader& reader)
{
    if (!read_retvalue(reader)) {
        return false;
    }
    if (!read_transforms_list(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool return_getAllTransforms::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool return_getAllTransforms::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_retvalue(writer)) {
        return false;
    }
    if (!write_transforms_list(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool return_getAllTransforms::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string return_getAllTransforms::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// read retvalue field
bool return_getAllTransforms::read_retvalue(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readBool(retvalue)) {
        reader.fail();
        return false;
    }
    return true;
}

// write retvalue field
bool return_getAllTransforms::write_retvalue(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retvalue)) {
        return false;
    }
    return true;
}

// read (nested) retvalue field
bool return_getAllTransforms::nested_read_retvalue(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readBool(retvalue)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) retvalue field
bool return_getAllTransforms::nested_write_retvalue(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retvalue)) {
        return false;
    }
    return true;
}

// read transforms_list field
bool return_getAllTransforms::read_transforms_list(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    transforms_list.clear();
    uint32_t _size0;
    yarp::os::idl::WireState _etype3;
    reader.readListBegin(_etype3, _size0);
    transforms_list.resize(_size0);
    for (size_t _i4 = 0; _i4 < _size0; ++_i4) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(transforms_list[_i4])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write transforms_list field
bool return_getAllTransforms::write_transforms_list(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(transforms_list.size()))) {
        return false;
    }
    for (const auto& _item5 : transforms_list) {
        if (!writer.writeNested(_item5)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) transforms_list field
bool return_getAllTransforms::nested_read_transforms_list(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    transforms_list.clear();
    uint32_t _size6;
    yarp::os::idl::WireState _etype9;
    reader.readListBegin(_etype9, _size6);
    transforms_list.resize(_size6);
    for (size_t _i10 = 0; _i10 < _size6; ++_i10) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(transforms_list[_i10])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) transforms_list field
bool return_getAllTransforms::nested_write_transforms_list(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(transforms_list.size()))) {
        return false;
    }
    for (const auto& _item11 : transforms_list) {
        if (!writer.writeNested(_item11)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

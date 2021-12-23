/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/dev/audioBufferSizeData.h>

namespace yarp::dev {

// Constructor with field values
audioBufferSizeData::audioBufferSizeData(const std::int32_t m_samples,
                                         const std::int32_t m_channels,
                                         const std::int32_t m_depth,
                                         const std::int32_t size) :
        WirePortable(),
        m_samples(m_samples),
        m_channels(m_channels),
        m_depth(m_depth),
        size(size)
{
}

// Read structure on a Wire
bool audioBufferSizeData::read(yarp::os::idl::WireReader& reader)
{
    if (!read_m_samples(reader)) {
        return false;
    }
    if (!read_m_channels(reader)) {
        return false;
    }
    if (!read_m_depth(reader)) {
        return false;
    }
    if (!read_size(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool audioBufferSizeData::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(4)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool audioBufferSizeData::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_m_samples(writer)) {
        return false;
    }
    if (!write_m_channels(writer)) {
        return false;
    }
    if (!write_m_depth(writer)) {
        return false;
    }
    if (!write_size(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool audioBufferSizeData::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(4)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string audioBufferSizeData::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// read m_samples field
bool audioBufferSizeData::read_m_samples(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readI32(m_samples)) {
        reader.fail();
        return false;
    }
    return true;
}

// write m_samples field
bool audioBufferSizeData::write_m_samples(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeI32(m_samples)) {
        return false;
    }
    return true;
}

// read (nested) m_samples field
bool audioBufferSizeData::nested_read_m_samples(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readI32(m_samples)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) m_samples field
bool audioBufferSizeData::nested_write_m_samples(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeI32(m_samples)) {
        return false;
    }
    return true;
}

// read m_channels field
bool audioBufferSizeData::read_m_channels(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readI32(m_channels)) {
        reader.fail();
        return false;
    }
    return true;
}

// write m_channels field
bool audioBufferSizeData::write_m_channels(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeI32(m_channels)) {
        return false;
    }
    return true;
}

// read (nested) m_channels field
bool audioBufferSizeData::nested_read_m_channels(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readI32(m_channels)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) m_channels field
bool audioBufferSizeData::nested_write_m_channels(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeI32(m_channels)) {
        return false;
    }
    return true;
}

// read m_depth field
bool audioBufferSizeData::read_m_depth(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readI32(m_depth)) {
        reader.fail();
        return false;
    }
    return true;
}

// write m_depth field
bool audioBufferSizeData::write_m_depth(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeI32(m_depth)) {
        return false;
    }
    return true;
}

// read (nested) m_depth field
bool audioBufferSizeData::nested_read_m_depth(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readI32(m_depth)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) m_depth field
bool audioBufferSizeData::nested_write_m_depth(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeI32(m_depth)) {
        return false;
    }
    return true;
}

// read size field
bool audioBufferSizeData::read_size(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readI32(size)) {
        reader.fail();
        return false;
    }
    return true;
}

// write size field
bool audioBufferSizeData::write_size(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeI32(size)) {
        return false;
    }
    return true;
}

// read (nested) size field
bool audioBufferSizeData::nested_read_size(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readI32(size)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) size field
bool audioBufferSizeData::nested_write_size(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeI32(size)) {
        return false;
    }
    return true;
}

} // namespace yarp::dev

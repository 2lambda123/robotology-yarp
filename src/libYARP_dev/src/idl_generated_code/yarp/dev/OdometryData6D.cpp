/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/dev/OdometryData6D.h>

namespace yarp::dev {

// Constructor with field values
OdometryData6D::OdometryData6D(const double odom_x,
                               const double odom_y,
                               const double odom_z,
                               const double odom_roll,
                               const double odom_pitch,
                               const double odom_yaw,
                               const double base_vel_x,
                               const double base_vel_y,
                               const double base_vel_z,
                               const double base_vel_roll,
                               const double base_vel_pitch,
                               const double base_vel_yaw,
                               const double odom_vel_x,
                               const double odom_vel_y,
                               const double odom_vel_z,
                               const double odom_vel_roll,
                               const double odom_vel_pitch,
                               const double odom_vel_yaw) :
        WirePortable(),
        odom_x(odom_x),
        odom_y(odom_y),
        odom_z(odom_z),
        odom_roll(odom_roll),
        odom_pitch(odom_pitch),
        odom_yaw(odom_yaw),
        base_vel_x(base_vel_x),
        base_vel_y(base_vel_y),
        base_vel_z(base_vel_z),
        base_vel_roll(base_vel_roll),
        base_vel_pitch(base_vel_pitch),
        base_vel_yaw(base_vel_yaw),
        odom_vel_x(odom_vel_x),
        odom_vel_y(odom_vel_y),
        odom_vel_z(odom_vel_z),
        odom_vel_roll(odom_vel_roll),
        odom_vel_pitch(odom_vel_pitch),
        odom_vel_yaw(odom_vel_yaw)
{
}

// Read structure on a Wire
bool OdometryData6D::read(yarp::os::idl::WireReader& reader)
{
    if (!read_odom_x(reader)) {
        return false;
    }
    if (!read_odom_y(reader)) {
        return false;
    }
    if (!read_odom_z(reader)) {
        return false;
    }
    if (!read_odom_roll(reader)) {
        return false;
    }
    if (!read_odom_pitch(reader)) {
        return false;
    }
    if (!read_odom_yaw(reader)) {
        return false;
    }
    if (!read_base_vel_x(reader)) {
        return false;
    }
    if (!read_base_vel_y(reader)) {
        return false;
    }
    if (!read_base_vel_z(reader)) {
        return false;
    }
    if (!read_base_vel_roll(reader)) {
        return false;
    }
    if (!read_base_vel_pitch(reader)) {
        return false;
    }
    if (!read_base_vel_yaw(reader)) {
        return false;
    }
    if (!read_odom_vel_x(reader)) {
        return false;
    }
    if (!read_odom_vel_y(reader)) {
        return false;
    }
    if (!read_odom_vel_z(reader)) {
        return false;
    }
    if (!read_odom_vel_roll(reader)) {
        return false;
    }
    if (!read_odom_vel_pitch(reader)) {
        return false;
    }
    if (!read_odom_vel_yaw(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool OdometryData6D::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(18)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool OdometryData6D::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_odom_x(writer)) {
        return false;
    }
    if (!write_odom_y(writer)) {
        return false;
    }
    if (!write_odom_z(writer)) {
        return false;
    }
    if (!write_odom_roll(writer)) {
        return false;
    }
    if (!write_odom_pitch(writer)) {
        return false;
    }
    if (!write_odom_yaw(writer)) {
        return false;
    }
    if (!write_base_vel_x(writer)) {
        return false;
    }
    if (!write_base_vel_y(writer)) {
        return false;
    }
    if (!write_base_vel_z(writer)) {
        return false;
    }
    if (!write_base_vel_roll(writer)) {
        return false;
    }
    if (!write_base_vel_pitch(writer)) {
        return false;
    }
    if (!write_base_vel_yaw(writer)) {
        return false;
    }
    if (!write_odom_vel_x(writer)) {
        return false;
    }
    if (!write_odom_vel_y(writer)) {
        return false;
    }
    if (!write_odom_vel_z(writer)) {
        return false;
    }
    if (!write_odom_vel_roll(writer)) {
        return false;
    }
    if (!write_odom_vel_pitch(writer)) {
        return false;
    }
    if (!write_odom_vel_yaw(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool OdometryData6D::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(18)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string OdometryData6D::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// read odom_x field
bool OdometryData6D::read_odom_x(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_x)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_x field
bool OdometryData6D::write_odom_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_x)) {
        return false;
    }
    return true;
}

// read (nested) odom_x field
bool OdometryData6D::nested_read_odom_x(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_x)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_x field
bool OdometryData6D::nested_write_odom_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_x)) {
        return false;
    }
    return true;
}

// read odom_y field
bool OdometryData6D::read_odom_y(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_y)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_y field
bool OdometryData6D::write_odom_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_y)) {
        return false;
    }
    return true;
}

// read (nested) odom_y field
bool OdometryData6D::nested_read_odom_y(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_y)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_y field
bool OdometryData6D::nested_write_odom_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_y)) {
        return false;
    }
    return true;
}

// read odom_z field
bool OdometryData6D::read_odom_z(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_z)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_z field
bool OdometryData6D::write_odom_z(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_z)) {
        return false;
    }
    return true;
}

// read (nested) odom_z field
bool OdometryData6D::nested_read_odom_z(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_z)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_z field
bool OdometryData6D::nested_write_odom_z(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_z)) {
        return false;
    }
    return true;
}

// read odom_roll field
bool OdometryData6D::read_odom_roll(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_roll)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_roll field
bool OdometryData6D::write_odom_roll(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_roll)) {
        return false;
    }
    return true;
}

// read (nested) odom_roll field
bool OdometryData6D::nested_read_odom_roll(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_roll)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_roll field
bool OdometryData6D::nested_write_odom_roll(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_roll)) {
        return false;
    }
    return true;
}

// read odom_pitch field
bool OdometryData6D::read_odom_pitch(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_pitch)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_pitch field
bool OdometryData6D::write_odom_pitch(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_pitch)) {
        return false;
    }
    return true;
}

// read (nested) odom_pitch field
bool OdometryData6D::nested_read_odom_pitch(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_pitch)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_pitch field
bool OdometryData6D::nested_write_odom_pitch(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_pitch)) {
        return false;
    }
    return true;
}

// read odom_yaw field
bool OdometryData6D::read_odom_yaw(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_yaw)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_yaw field
bool OdometryData6D::write_odom_yaw(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_yaw)) {
        return false;
    }
    return true;
}

// read (nested) odom_yaw field
bool OdometryData6D::nested_read_odom_yaw(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_yaw)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_yaw field
bool OdometryData6D::nested_write_odom_yaw(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_yaw)) {
        return false;
    }
    return true;
}

// read base_vel_x field
bool OdometryData6D::read_base_vel_x(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_x)) {
        reader.fail();
        return false;
    }
    return true;
}

// write base_vel_x field
bool OdometryData6D::write_base_vel_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_x)) {
        return false;
    }
    return true;
}

// read (nested) base_vel_x field
bool OdometryData6D::nested_read_base_vel_x(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_x)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) base_vel_x field
bool OdometryData6D::nested_write_base_vel_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_x)) {
        return false;
    }
    return true;
}

// read base_vel_y field
bool OdometryData6D::read_base_vel_y(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_y)) {
        reader.fail();
        return false;
    }
    return true;
}

// write base_vel_y field
bool OdometryData6D::write_base_vel_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_y)) {
        return false;
    }
    return true;
}

// read (nested) base_vel_y field
bool OdometryData6D::nested_read_base_vel_y(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_y)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) base_vel_y field
bool OdometryData6D::nested_write_base_vel_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_y)) {
        return false;
    }
    return true;
}

// read base_vel_z field
bool OdometryData6D::read_base_vel_z(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_z)) {
        reader.fail();
        return false;
    }
    return true;
}

// write base_vel_z field
bool OdometryData6D::write_base_vel_z(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_z)) {
        return false;
    }
    return true;
}

// read (nested) base_vel_z field
bool OdometryData6D::nested_read_base_vel_z(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_z)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) base_vel_z field
bool OdometryData6D::nested_write_base_vel_z(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_z)) {
        return false;
    }
    return true;
}

// read base_vel_roll field
bool OdometryData6D::read_base_vel_roll(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_roll)) {
        reader.fail();
        return false;
    }
    return true;
}

// write base_vel_roll field
bool OdometryData6D::write_base_vel_roll(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_roll)) {
        return false;
    }
    return true;
}

// read (nested) base_vel_roll field
bool OdometryData6D::nested_read_base_vel_roll(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_roll)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) base_vel_roll field
bool OdometryData6D::nested_write_base_vel_roll(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_roll)) {
        return false;
    }
    return true;
}

// read base_vel_pitch field
bool OdometryData6D::read_base_vel_pitch(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_pitch)) {
        reader.fail();
        return false;
    }
    return true;
}

// write base_vel_pitch field
bool OdometryData6D::write_base_vel_pitch(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_pitch)) {
        return false;
    }
    return true;
}

// read (nested) base_vel_pitch field
bool OdometryData6D::nested_read_base_vel_pitch(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_pitch)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) base_vel_pitch field
bool OdometryData6D::nested_write_base_vel_pitch(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_pitch)) {
        return false;
    }
    return true;
}

// read base_vel_yaw field
bool OdometryData6D::read_base_vel_yaw(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_yaw)) {
        reader.fail();
        return false;
    }
    return true;
}

// write base_vel_yaw field
bool OdometryData6D::write_base_vel_yaw(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_yaw)) {
        return false;
    }
    return true;
}

// read (nested) base_vel_yaw field
bool OdometryData6D::nested_read_base_vel_yaw(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_yaw)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) base_vel_yaw field
bool OdometryData6D::nested_write_base_vel_yaw(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_yaw)) {
        return false;
    }
    return true;
}

// read odom_vel_x field
bool OdometryData6D::read_odom_vel_x(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_x)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_vel_x field
bool OdometryData6D::write_odom_vel_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_x)) {
        return false;
    }
    return true;
}

// read (nested) odom_vel_x field
bool OdometryData6D::nested_read_odom_vel_x(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_x)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_vel_x field
bool OdometryData6D::nested_write_odom_vel_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_x)) {
        return false;
    }
    return true;
}

// read odom_vel_y field
bool OdometryData6D::read_odom_vel_y(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_y)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_vel_y field
bool OdometryData6D::write_odom_vel_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_y)) {
        return false;
    }
    return true;
}

// read (nested) odom_vel_y field
bool OdometryData6D::nested_read_odom_vel_y(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_y)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_vel_y field
bool OdometryData6D::nested_write_odom_vel_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_y)) {
        return false;
    }
    return true;
}

// read odom_vel_z field
bool OdometryData6D::read_odom_vel_z(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_z)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_vel_z field
bool OdometryData6D::write_odom_vel_z(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_z)) {
        return false;
    }
    return true;
}

// read (nested) odom_vel_z field
bool OdometryData6D::nested_read_odom_vel_z(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_z)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_vel_z field
bool OdometryData6D::nested_write_odom_vel_z(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_z)) {
        return false;
    }
    return true;
}

// read odom_vel_roll field
bool OdometryData6D::read_odom_vel_roll(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_roll)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_vel_roll field
bool OdometryData6D::write_odom_vel_roll(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_roll)) {
        return false;
    }
    return true;
}

// read (nested) odom_vel_roll field
bool OdometryData6D::nested_read_odom_vel_roll(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_roll)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_vel_roll field
bool OdometryData6D::nested_write_odom_vel_roll(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_roll)) {
        return false;
    }
    return true;
}

// read odom_vel_pitch field
bool OdometryData6D::read_odom_vel_pitch(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_pitch)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_vel_pitch field
bool OdometryData6D::write_odom_vel_pitch(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_pitch)) {
        return false;
    }
    return true;
}

// read (nested) odom_vel_pitch field
bool OdometryData6D::nested_read_odom_vel_pitch(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_pitch)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_vel_pitch field
bool OdometryData6D::nested_write_odom_vel_pitch(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_pitch)) {
        return false;
    }
    return true;
}

// read odom_vel_yaw field
bool OdometryData6D::read_odom_vel_yaw(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_yaw)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_vel_yaw field
bool OdometryData6D::write_odom_vel_yaw(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_yaw)) {
        return false;
    }
    return true;
}

// read (nested) odom_vel_yaw field
bool OdometryData6D::nested_read_odom_vel_yaw(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_yaw)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_vel_yaw field
bool OdometryData6D::nested_write_odom_vel_yaw(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_yaw)) {
        return false;
    }
    return true;
}

} // namespace yarp::dev

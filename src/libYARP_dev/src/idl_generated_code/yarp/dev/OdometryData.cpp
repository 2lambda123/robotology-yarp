/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/dev/OdometryData.h>

namespace yarp::dev {

// Constructor with field values
OdometryData::OdometryData(const double odom_x,
                           const double odom_y,
                           const double odom_theta,
                           const double base_vel_x,
                           const double base_vel_y,
                           const double base_vel_theta,
                           const double odom_vel_x,
                           const double odom_vel_y,
                           const double odom_vel_theta) :
        WirePortable(),
        odom_x(odom_x),
        odom_y(odom_y),
        odom_theta(odom_theta),
        base_vel_x(base_vel_x),
        base_vel_y(base_vel_y),
        base_vel_theta(base_vel_theta),
        odom_vel_x(odom_vel_x),
        odom_vel_y(odom_vel_y),
        odom_vel_theta(odom_vel_theta)
{
}

// Read structure on a Wire
bool OdometryData::read(yarp::os::idl::WireReader& reader)
{
    if (!read_odom_x(reader)) {
        return false;
    }
    if (!read_odom_y(reader)) {
        return false;
    }
    if (!read_odom_theta(reader)) {
        return false;
    }
    if (!read_base_vel_x(reader)) {
        return false;
    }
    if (!read_base_vel_y(reader)) {
        return false;
    }
    if (!read_base_vel_theta(reader)) {
        return false;
    }
    if (!read_odom_vel_x(reader)) {
        return false;
    }
    if (!read_odom_vel_y(reader)) {
        return false;
    }
    if (!read_odom_vel_theta(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool OdometryData::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(9)) {
        return false;
    }
    if (!read_odom_x(reader)) {
        return false;
    }
    if (!read_odom_y(reader)) {
        return false;
    }
    if (!read_odom_theta(reader)) {
        return false;
    }
    if (!read_base_vel_x(reader)) {
        return false;
    }
    if (!read_base_vel_y(reader)) {
        return false;
    }
    if (!read_base_vel_theta(reader)) {
        return false;
    }
    if (!read_odom_vel_x(reader)) {
        return false;
    }
    if (!read_odom_vel_y(reader)) {
        return false;
    }
    if (!read_odom_vel_theta(reader)) {
        return false;
    }
    return !reader.isError();
}

// Write structure on a Wire
bool OdometryData::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_odom_x(writer)) {
        return false;
    }
    if (!write_odom_y(writer)) {
        return false;
    }
    if (!write_odom_theta(writer)) {
        return false;
    }
    if (!write_base_vel_x(writer)) {
        return false;
    }
    if (!write_base_vel_y(writer)) {
        return false;
    }
    if (!write_base_vel_theta(writer)) {
        return false;
    }
    if (!write_odom_vel_x(writer)) {
        return false;
    }
    if (!write_odom_vel_y(writer)) {
        return false;
    }
    if (!write_odom_vel_theta(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool OdometryData::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(9)) {
        return false;
    }
    if (!write_odom_x(writer)) {
        return false;
    }
    if (!write_odom_y(writer)) {
        return false;
    }
    if (!write_odom_theta(writer)) {
        return false;
    }
    if (!write_base_vel_x(writer)) {
        return false;
    }
    if (!write_base_vel_y(writer)) {
        return false;
    }
    if (!write_base_vel_theta(writer)) {
        return false;
    }
    if (!write_odom_vel_x(writer)) {
        return false;
    }
    if (!write_odom_vel_y(writer)) {
        return false;
    }
    if (!write_odom_vel_theta(writer)) {
        return false;
    }
    return !writer.isError();
}

// Convert to a printable string
std::string OdometryData::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
OdometryData::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new OdometryData;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
OdometryData::Editor::Editor(OdometryData& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
OdometryData::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool OdometryData::Editor::edit(OdometryData& obj, bool dirty)
{
    if (obj_owned) {
        delete this->obj;
    }
    this->obj = &obj;
    obj_owned = false;
    dirty_flags(dirty);
    return true;
}

// Editor: validity check
bool OdometryData::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
OdometryData& OdometryData::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void OdometryData::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void OdometryData::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: odom_x setter
void OdometryData::Editor::set_odom_x(const double odom_x)
{
    will_set_odom_x();
    obj->odom_x = odom_x;
    mark_dirty_odom_x();
    communicate();
    did_set_odom_x();
}

// Editor: odom_x getter
double OdometryData::Editor::get_odom_x() const
{
    return obj->odom_x;
}

// Editor: odom_x will_set
bool OdometryData::Editor::will_set_odom_x()
{
    return true;
}

// Editor: odom_x did_set
bool OdometryData::Editor::did_set_odom_x()
{
    return true;
}

// Editor: odom_y setter
void OdometryData::Editor::set_odom_y(const double odom_y)
{
    will_set_odom_y();
    obj->odom_y = odom_y;
    mark_dirty_odom_y();
    communicate();
    did_set_odom_y();
}

// Editor: odom_y getter
double OdometryData::Editor::get_odom_y() const
{
    return obj->odom_y;
}

// Editor: odom_y will_set
bool OdometryData::Editor::will_set_odom_y()
{
    return true;
}

// Editor: odom_y did_set
bool OdometryData::Editor::did_set_odom_y()
{
    return true;
}

// Editor: odom_theta setter
void OdometryData::Editor::set_odom_theta(const double odom_theta)
{
    will_set_odom_theta();
    obj->odom_theta = odom_theta;
    mark_dirty_odom_theta();
    communicate();
    did_set_odom_theta();
}

// Editor: odom_theta getter
double OdometryData::Editor::get_odom_theta() const
{
    return obj->odom_theta;
}

// Editor: odom_theta will_set
bool OdometryData::Editor::will_set_odom_theta()
{
    return true;
}

// Editor: odom_theta did_set
bool OdometryData::Editor::did_set_odom_theta()
{
    return true;
}

// Editor: base_vel_x setter
void OdometryData::Editor::set_base_vel_x(const double base_vel_x)
{
    will_set_base_vel_x();
    obj->base_vel_x = base_vel_x;
    mark_dirty_base_vel_x();
    communicate();
    did_set_base_vel_x();
}

// Editor: base_vel_x getter
double OdometryData::Editor::get_base_vel_x() const
{
    return obj->base_vel_x;
}

// Editor: base_vel_x will_set
bool OdometryData::Editor::will_set_base_vel_x()
{
    return true;
}

// Editor: base_vel_x did_set
bool OdometryData::Editor::did_set_base_vel_x()
{
    return true;
}

// Editor: base_vel_y setter
void OdometryData::Editor::set_base_vel_y(const double base_vel_y)
{
    will_set_base_vel_y();
    obj->base_vel_y = base_vel_y;
    mark_dirty_base_vel_y();
    communicate();
    did_set_base_vel_y();
}

// Editor: base_vel_y getter
double OdometryData::Editor::get_base_vel_y() const
{
    return obj->base_vel_y;
}

// Editor: base_vel_y will_set
bool OdometryData::Editor::will_set_base_vel_y()
{
    return true;
}

// Editor: base_vel_y did_set
bool OdometryData::Editor::did_set_base_vel_y()
{
    return true;
}

// Editor: base_vel_theta setter
void OdometryData::Editor::set_base_vel_theta(const double base_vel_theta)
{
    will_set_base_vel_theta();
    obj->base_vel_theta = base_vel_theta;
    mark_dirty_base_vel_theta();
    communicate();
    did_set_base_vel_theta();
}

// Editor: base_vel_theta getter
double OdometryData::Editor::get_base_vel_theta() const
{
    return obj->base_vel_theta;
}

// Editor: base_vel_theta will_set
bool OdometryData::Editor::will_set_base_vel_theta()
{
    return true;
}

// Editor: base_vel_theta did_set
bool OdometryData::Editor::did_set_base_vel_theta()
{
    return true;
}

// Editor: odom_vel_x setter
void OdometryData::Editor::set_odom_vel_x(const double odom_vel_x)
{
    will_set_odom_vel_x();
    obj->odom_vel_x = odom_vel_x;
    mark_dirty_odom_vel_x();
    communicate();
    did_set_odom_vel_x();
}

// Editor: odom_vel_x getter
double OdometryData::Editor::get_odom_vel_x() const
{
    return obj->odom_vel_x;
}

// Editor: odom_vel_x will_set
bool OdometryData::Editor::will_set_odom_vel_x()
{
    return true;
}

// Editor: odom_vel_x did_set
bool OdometryData::Editor::did_set_odom_vel_x()
{
    return true;
}

// Editor: odom_vel_y setter
void OdometryData::Editor::set_odom_vel_y(const double odom_vel_y)
{
    will_set_odom_vel_y();
    obj->odom_vel_y = odom_vel_y;
    mark_dirty_odom_vel_y();
    communicate();
    did_set_odom_vel_y();
}

// Editor: odom_vel_y getter
double OdometryData::Editor::get_odom_vel_y() const
{
    return obj->odom_vel_y;
}

// Editor: odom_vel_y will_set
bool OdometryData::Editor::will_set_odom_vel_y()
{
    return true;
}

// Editor: odom_vel_y did_set
bool OdometryData::Editor::did_set_odom_vel_y()
{
    return true;
}

// Editor: odom_vel_theta setter
void OdometryData::Editor::set_odom_vel_theta(const double odom_vel_theta)
{
    will_set_odom_vel_theta();
    obj->odom_vel_theta = odom_vel_theta;
    mark_dirty_odom_vel_theta();
    communicate();
    did_set_odom_vel_theta();
}

// Editor: odom_vel_theta getter
double OdometryData::Editor::get_odom_vel_theta() const
{
    return obj->odom_vel_theta;
}

// Editor: odom_vel_theta will_set
bool OdometryData::Editor::will_set_odom_vel_theta()
{
    return true;
}

// Editor: odom_vel_theta did_set
bool OdometryData::Editor::did_set_odom_vel_theta()
{
    return true;
}

// Editor: clean
void OdometryData::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool OdometryData::Editor::read(yarp::os::ConnectionReader& connection)
{
    if (!isValid()) {
        return false;
    }
    yarp::os::idl::WireReader reader(connection);
    reader.expectAccept();
    if (!reader.readListHeader()) {
        return false;
    }
    int len = reader.getLength();
    if (len == 0) {
        yarp::os::idl::WireWriter writer(reader);
        if (writer.isNull()) {
            return true;
        }
        if (!writer.writeListHeader(1)) {
            return false;
        }
        writer.writeString("send: 'help' or 'patch (param1 val1) (param2 val2)'");
        return true;
    }
    std::string tag;
    if (!reader.readString(tag)) {
        return false;
    }
    if (tag == "help") {
        yarp::os::idl::WireWriter writer(reader);
        if (writer.isNull()) {
            return true;
        }
        if (!writer.writeListHeader(2)) {
            return false;
        }
        if (!writer.writeTag("many", 1, 0)) {
            return false;
        }
        if (reader.getLength() > 0) {
            std::string field;
            if (!reader.readString(field)) {
                return false;
            }
            if (field == "odom_x") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double odom_x")) {
                    return false;
                }
                if (!writer.writeString("position of the robot [m], expressed in the world reference frame")) {
                    return false;
                }
            }
            if (field == "odom_y") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double odom_y")) {
                    return false;
                }
                if (!writer.writeString("position of the robot [m], expressed in the world reference frame")) {
                    return false;
                }
            }
            if (field == "odom_theta") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double odom_theta")) {
                    return false;
                }
                if (!writer.writeString("orientation the robot [deg], expressed in the world reference frame")) {
                    return false;
                }
            }
            if (field == "base_vel_x") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double base_vel_x")) {
                    return false;
                }
                if (!writer.writeString("velocity of the robot [m/s] expressed in the robot reference frame")) {
                    return false;
                }
            }
            if (field == "base_vel_y") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double base_vel_y")) {
                    return false;
                }
                if (!writer.writeString("velocity of the robot [m/s] expressed in the robot reference frame")) {
                    return false;
                }
            }
            if (field == "base_vel_theta") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double base_vel_theta")) {
                    return false;
                }
                if (!writer.writeString("angular velocity of the robot [deg/s] expressed in the robot reference frame")) {
                    return false;
                }
            }
            if (field == "odom_vel_x") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double odom_vel_x")) {
                    return false;
                }
                if (!writer.writeString("velocity of the robot [m/s] expressed in the world reference frame")) {
                    return false;
                }
            }
            if (field == "odom_vel_y") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double odom_vel_y")) {
                    return false;
                }
                if (!writer.writeString("velocity of the robot [m/s] expressed in the world reference frame")) {
                    return false;
                }
            }
            if (field == "odom_vel_theta") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double odom_vel_theta")) {
                    return false;
                }
                if (!writer.writeString("angular velocity of the robot [deg/s] expressed in the world reference frame")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(10)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("odom_x");
        writer.writeString("odom_y");
        writer.writeString("odom_theta");
        writer.writeString("base_vel_x");
        writer.writeString("base_vel_y");
        writer.writeString("base_vel_theta");
        writer.writeString("odom_vel_x");
        writer.writeString("odom_vel_y");
        writer.writeString("odom_vel_theta");
        return true;
    }
    bool nested = true;
    bool have_act = false;
    if (tag != "patch") {
        if (((len - 1) % 2) != 0) {
            return false;
        }
        len = 1 + ((len - 1) / 2);
        nested = false;
        have_act = true;
    }
    for (int i = 1; i < len; ++i) {
        if (nested && !reader.readListHeader(3)) {
            return false;
        }
        std::string act;
        std::string key;
        if (have_act) {
            act = tag;
        } else if (!reader.readString(act)) {
            return false;
        }
        if (!reader.readString(key)) {
            return false;
        }
        if (key == "odom_x") {
            will_set_odom_x();
            if (!obj->nested_read_odom_x(reader)) {
                return false;
            }
            did_set_odom_x();
        } else if (key == "odom_y") {
            will_set_odom_y();
            if (!obj->nested_read_odom_y(reader)) {
                return false;
            }
            did_set_odom_y();
        } else if (key == "odom_theta") {
            will_set_odom_theta();
            if (!obj->nested_read_odom_theta(reader)) {
                return false;
            }
            did_set_odom_theta();
        } else if (key == "base_vel_x") {
            will_set_base_vel_x();
            if (!obj->nested_read_base_vel_x(reader)) {
                return false;
            }
            did_set_base_vel_x();
        } else if (key == "base_vel_y") {
            will_set_base_vel_y();
            if (!obj->nested_read_base_vel_y(reader)) {
                return false;
            }
            did_set_base_vel_y();
        } else if (key == "base_vel_theta") {
            will_set_base_vel_theta();
            if (!obj->nested_read_base_vel_theta(reader)) {
                return false;
            }
            did_set_base_vel_theta();
        } else if (key == "odom_vel_x") {
            will_set_odom_vel_x();
            if (!obj->nested_read_odom_vel_x(reader)) {
                return false;
            }
            did_set_odom_vel_x();
        } else if (key == "odom_vel_y") {
            will_set_odom_vel_y();
            if (!obj->nested_read_odom_vel_y(reader)) {
                return false;
            }
            did_set_odom_vel_y();
        } else if (key == "odom_vel_theta") {
            will_set_odom_vel_theta();
            if (!obj->nested_read_odom_vel_theta(reader)) {
                return false;
            }
            did_set_odom_vel_theta();
        } else {
            // would be useful to have a fallback here
        }
    }
    reader.accept();
    yarp::os::idl::WireWriter writer(reader);
    if (writer.isNull()) {
        return true;
    }
    writer.writeListHeader(1);
    writer.writeVocab32('o', 'k');
    return true;
}

// Editor: write
bool OdometryData::Editor::write(yarp::os::ConnectionWriter& connection) const
{
    if (!isValid()) {
        return false;
    }
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(dirty_count + 1)) {
        return false;
    }
    if (!writer.writeString("patch")) {
        return false;
    }
    if (is_dirty_odom_x) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("odom_x")) {
            return false;
        }
        if (!obj->nested_write_odom_x(writer)) {
            return false;
        }
    }
    if (is_dirty_odom_y) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("odom_y")) {
            return false;
        }
        if (!obj->nested_write_odom_y(writer)) {
            return false;
        }
    }
    if (is_dirty_odom_theta) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("odom_theta")) {
            return false;
        }
        if (!obj->nested_write_odom_theta(writer)) {
            return false;
        }
    }
    if (is_dirty_base_vel_x) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("base_vel_x")) {
            return false;
        }
        if (!obj->nested_write_base_vel_x(writer)) {
            return false;
        }
    }
    if (is_dirty_base_vel_y) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("base_vel_y")) {
            return false;
        }
        if (!obj->nested_write_base_vel_y(writer)) {
            return false;
        }
    }
    if (is_dirty_base_vel_theta) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("base_vel_theta")) {
            return false;
        }
        if (!obj->nested_write_base_vel_theta(writer)) {
            return false;
        }
    }
    if (is_dirty_odom_vel_x) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("odom_vel_x")) {
            return false;
        }
        if (!obj->nested_write_odom_vel_x(writer)) {
            return false;
        }
    }
    if (is_dirty_odom_vel_y) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("odom_vel_y")) {
            return false;
        }
        if (!obj->nested_write_odom_vel_y(writer)) {
            return false;
        }
    }
    if (is_dirty_odom_vel_theta) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("odom_vel_theta")) {
            return false;
        }
        if (!obj->nested_write_odom_vel_theta(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void OdometryData::Editor::communicate()
{
    if (group != 0) {
        return;
    }
    if (yarp().canWrite()) {
        yarp().write(*this);
        clean();
    }
}

// Editor: mark dirty overall
void OdometryData::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: odom_x mark_dirty
void OdometryData::Editor::mark_dirty_odom_x()
{
    if (is_dirty_odom_x) {
        return;
    }
    dirty_count++;
    is_dirty_odom_x = true;
    mark_dirty();
}

// Editor: odom_y mark_dirty
void OdometryData::Editor::mark_dirty_odom_y()
{
    if (is_dirty_odom_y) {
        return;
    }
    dirty_count++;
    is_dirty_odom_y = true;
    mark_dirty();
}

// Editor: odom_theta mark_dirty
void OdometryData::Editor::mark_dirty_odom_theta()
{
    if (is_dirty_odom_theta) {
        return;
    }
    dirty_count++;
    is_dirty_odom_theta = true;
    mark_dirty();
}

// Editor: base_vel_x mark_dirty
void OdometryData::Editor::mark_dirty_base_vel_x()
{
    if (is_dirty_base_vel_x) {
        return;
    }
    dirty_count++;
    is_dirty_base_vel_x = true;
    mark_dirty();
}

// Editor: base_vel_y mark_dirty
void OdometryData::Editor::mark_dirty_base_vel_y()
{
    if (is_dirty_base_vel_y) {
        return;
    }
    dirty_count++;
    is_dirty_base_vel_y = true;
    mark_dirty();
}

// Editor: base_vel_theta mark_dirty
void OdometryData::Editor::mark_dirty_base_vel_theta()
{
    if (is_dirty_base_vel_theta) {
        return;
    }
    dirty_count++;
    is_dirty_base_vel_theta = true;
    mark_dirty();
}

// Editor: odom_vel_x mark_dirty
void OdometryData::Editor::mark_dirty_odom_vel_x()
{
    if (is_dirty_odom_vel_x) {
        return;
    }
    dirty_count++;
    is_dirty_odom_vel_x = true;
    mark_dirty();
}

// Editor: odom_vel_y mark_dirty
void OdometryData::Editor::mark_dirty_odom_vel_y()
{
    if (is_dirty_odom_vel_y) {
        return;
    }
    dirty_count++;
    is_dirty_odom_vel_y = true;
    mark_dirty();
}

// Editor: odom_vel_theta mark_dirty
void OdometryData::Editor::mark_dirty_odom_vel_theta()
{
    if (is_dirty_odom_vel_theta) {
        return;
    }
    dirty_count++;
    is_dirty_odom_vel_theta = true;
    mark_dirty();
}

// Editor: dirty_flags
void OdometryData::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_odom_x = flag;
    is_dirty_odom_y = flag;
    is_dirty_odom_theta = flag;
    is_dirty_base_vel_x = flag;
    is_dirty_base_vel_y = flag;
    is_dirty_base_vel_theta = flag;
    is_dirty_odom_vel_x = flag;
    is_dirty_odom_vel_y = flag;
    is_dirty_odom_vel_theta = flag;
    dirty_count = flag ? 9 : 0;
}

// read odom_x field
bool OdometryData::read_odom_x(yarp::os::idl::WireReader& reader)
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
bool OdometryData::write_odom_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_x)) {
        return false;
    }
    return true;
}

// read (nested) odom_x field
bool OdometryData::nested_read_odom_x(yarp::os::idl::WireReader& reader)
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
bool OdometryData::nested_write_odom_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_x)) {
        return false;
    }
    return true;
}

// read odom_y field
bool OdometryData::read_odom_y(yarp::os::idl::WireReader& reader)
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
bool OdometryData::write_odom_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_y)) {
        return false;
    }
    return true;
}

// read (nested) odom_y field
bool OdometryData::nested_read_odom_y(yarp::os::idl::WireReader& reader)
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
bool OdometryData::nested_write_odom_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_y)) {
        return false;
    }
    return true;
}

// read odom_theta field
bool OdometryData::read_odom_theta(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_theta)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_theta field
bool OdometryData::write_odom_theta(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_theta)) {
        return false;
    }
    return true;
}

// read (nested) odom_theta field
bool OdometryData::nested_read_odom_theta(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_theta)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_theta field
bool OdometryData::nested_write_odom_theta(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_theta)) {
        return false;
    }
    return true;
}

// read base_vel_x field
bool OdometryData::read_base_vel_x(yarp::os::idl::WireReader& reader)
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
bool OdometryData::write_base_vel_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_x)) {
        return false;
    }
    return true;
}

// read (nested) base_vel_x field
bool OdometryData::nested_read_base_vel_x(yarp::os::idl::WireReader& reader)
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
bool OdometryData::nested_write_base_vel_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_x)) {
        return false;
    }
    return true;
}

// read base_vel_y field
bool OdometryData::read_base_vel_y(yarp::os::idl::WireReader& reader)
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
bool OdometryData::write_base_vel_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_y)) {
        return false;
    }
    return true;
}

// read (nested) base_vel_y field
bool OdometryData::nested_read_base_vel_y(yarp::os::idl::WireReader& reader)
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
bool OdometryData::nested_write_base_vel_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_y)) {
        return false;
    }
    return true;
}

// read base_vel_theta field
bool OdometryData::read_base_vel_theta(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_theta)) {
        reader.fail();
        return false;
    }
    return true;
}

// write base_vel_theta field
bool OdometryData::write_base_vel_theta(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_theta)) {
        return false;
    }
    return true;
}

// read (nested) base_vel_theta field
bool OdometryData::nested_read_base_vel_theta(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(base_vel_theta)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) base_vel_theta field
bool OdometryData::nested_write_base_vel_theta(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(base_vel_theta)) {
        return false;
    }
    return true;
}

// read odom_vel_x field
bool OdometryData::read_odom_vel_x(yarp::os::idl::WireReader& reader)
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
bool OdometryData::write_odom_vel_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_x)) {
        return false;
    }
    return true;
}

// read (nested) odom_vel_x field
bool OdometryData::nested_read_odom_vel_x(yarp::os::idl::WireReader& reader)
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
bool OdometryData::nested_write_odom_vel_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_x)) {
        return false;
    }
    return true;
}

// read odom_vel_y field
bool OdometryData::read_odom_vel_y(yarp::os::idl::WireReader& reader)
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
bool OdometryData::write_odom_vel_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_y)) {
        return false;
    }
    return true;
}

// read (nested) odom_vel_y field
bool OdometryData::nested_read_odom_vel_y(yarp::os::idl::WireReader& reader)
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
bool OdometryData::nested_write_odom_vel_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_y)) {
        return false;
    }
    return true;
}

// read odom_vel_theta field
bool OdometryData::read_odom_vel_theta(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_theta)) {
        reader.fail();
        return false;
    }
    return true;
}

// write odom_vel_theta field
bool OdometryData::write_odom_vel_theta(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_theta)) {
        return false;
    }
    return true;
}

// read (nested) odom_vel_theta field
bool OdometryData::nested_read_odom_vel_theta(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(odom_vel_theta)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) odom_vel_theta field
bool OdometryData::nested_write_odom_vel_theta(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(odom_vel_theta)) {
        return false;
    }
    return true;
}

} // namespace yarp::dev

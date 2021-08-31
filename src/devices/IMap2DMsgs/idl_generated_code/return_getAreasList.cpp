/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_getAreasList.h>

// Default constructor
return_getAreasList::return_getAreasList() :
        WirePortable(),
        retval(false),
        areas()
{
}

// Constructor with field values
return_getAreasList::return_getAreasList(const bool retval,
                                         const std::vector<std::string>& areas) :
        WirePortable(),
        retval(retval),
        areas(areas)
{
}

// Read structure on a Wire
bool return_getAreasList::read(yarp::os::idl::WireReader& reader)
{
    if (!read_retval(reader)) {
        return false;
    }
    if (!read_areas(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool return_getAreasList::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool return_getAreasList::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_retval(writer)) {
        return false;
    }
    if (!write_areas(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool return_getAreasList::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string return_getAreasList::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
return_getAreasList::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new return_getAreasList;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
return_getAreasList::Editor::Editor(return_getAreasList& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
return_getAreasList::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool return_getAreasList::Editor::edit(return_getAreasList& obj, bool dirty)
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
bool return_getAreasList::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
return_getAreasList& return_getAreasList::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void return_getAreasList::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void return_getAreasList::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: retval setter
void return_getAreasList::Editor::set_retval(const bool retval)
{
    will_set_retval();
    obj->retval = retval;
    mark_dirty_retval();
    communicate();
    did_set_retval();
}

// Editor: retval getter
bool return_getAreasList::Editor::get_retval() const
{
    return obj->retval;
}

// Editor: retval will_set
bool return_getAreasList::Editor::will_set_retval()
{
    return true;
}

// Editor: retval did_set
bool return_getAreasList::Editor::did_set_retval()
{
    return true;
}

// Editor: areas setter
void return_getAreasList::Editor::set_areas(const std::vector<std::string>& areas)
{
    will_set_areas();
    obj->areas = areas;
    mark_dirty_areas();
    communicate();
    did_set_areas();
}

// Editor: areas setter (list)
void return_getAreasList::Editor::set_areas(size_t index, const std::string& elem)
{
    will_set_areas();
    obj->areas[index] = elem;
    mark_dirty_areas();
    communicate();
    did_set_areas();
}

// Editor: areas getter
const std::vector<std::string>& return_getAreasList::Editor::get_areas() const
{
    return obj->areas;
}

// Editor: areas will_set
bool return_getAreasList::Editor::will_set_areas()
{
    return true;
}

// Editor: areas did_set
bool return_getAreasList::Editor::did_set_areas()
{
    return true;
}

// Editor: clean
void return_getAreasList::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool return_getAreasList::Editor::read(yarp::os::ConnectionReader& connection)
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
            if (field == "retval") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("bool retval")) {
                    return false;
                }
            }
            if (field == "areas") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("std::vector<std::string> areas")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(3)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("retval");
        writer.writeString("areas");
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
        if (key == "retval") {
            will_set_retval();
            if (!obj->nested_read_retval(reader)) {
                return false;
            }
            did_set_retval();
        } else if (key == "areas") {
            will_set_areas();
            if (!obj->nested_read_areas(reader)) {
                return false;
            }
            did_set_areas();
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
bool return_getAreasList::Editor::write(yarp::os::ConnectionWriter& connection) const
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
    if (is_dirty_retval) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("retval")) {
            return false;
        }
        if (!obj->nested_write_retval(writer)) {
            return false;
        }
    }
    if (is_dirty_areas) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("areas")) {
            return false;
        }
        if (!obj->nested_write_areas(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void return_getAreasList::Editor::communicate()
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
void return_getAreasList::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: retval mark_dirty
void return_getAreasList::Editor::mark_dirty_retval()
{
    if (is_dirty_retval) {
        return;
    }
    dirty_count++;
    is_dirty_retval = true;
    mark_dirty();
}

// Editor: areas mark_dirty
void return_getAreasList::Editor::mark_dirty_areas()
{
    if (is_dirty_areas) {
        return;
    }
    dirty_count++;
    is_dirty_areas = true;
    mark_dirty();
}

// Editor: dirty_flags
void return_getAreasList::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_retval = flag;
    is_dirty_areas = flag;
    dirty_count = flag ? 2 : 0;
}

// read retval field
bool return_getAreasList::read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = 0;
    }
    return true;
}

// write retval field
bool return_getAreasList::write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read (nested) retval field
bool return_getAreasList::nested_read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = 0;
    }
    return true;
}

// write (nested) retval field
bool return_getAreasList::nested_write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read areas field
bool return_getAreasList::read_areas(yarp::os::idl::WireReader& reader)
{
    areas.clear();
    uint32_t _size24;
    yarp::os::idl::WireState _etype27;
    reader.readListBegin(_etype27, _size24);
    areas.resize(_size24);
    for (size_t _i28 = 0; _i28 < _size24; ++_i28) {
        if (!reader.readString(areas[_i28])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write areas field
bool return_getAreasList::write_areas(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_STRING, static_cast<uint32_t>(areas.size()))) {
        return false;
    }
    for (const auto& _item29 : areas) {
        if (!writer.writeString(_item29)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) areas field
bool return_getAreasList::nested_read_areas(yarp::os::idl::WireReader& reader)
{
    areas.clear();
    uint32_t _size30;
    yarp::os::idl::WireState _etype33;
    reader.readListBegin(_etype33, _size30);
    areas.resize(_size30);
    for (size_t _i34 = 0; _i34 < _size30; ++_i34) {
        if (!reader.readString(areas[_i34])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) areas field
bool return_getAreasList::nested_write_areas(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_STRING, static_cast<uint32_t>(areas.size()))) {
        return false;
    }
    for (const auto& _item35 : areas) {
        if (!writer.writeString(_item35)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

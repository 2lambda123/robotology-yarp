/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_get_all_areas.h>

// Default constructor
return_get_all_areas::return_get_all_areas() :
        WirePortable(),
        retval(false),
        areas()
{
}

// Constructor with field values
return_get_all_areas::return_get_all_areas(const bool retval,
                                           const std::vector<yarp::dev::Nav2D::Map2DArea>& areas) :
        WirePortable(),
        retval(retval),
        areas(areas)
{
}

// Read structure on a Wire
bool return_get_all_areas::read(yarp::os::idl::WireReader& reader)
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
bool return_get_all_areas::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    if (!read_retval(reader)) {
        return false;
    }
    if (!read_areas(reader)) {
        return false;
    }
    return !reader.isError();
}

// Write structure on a Wire
bool return_get_all_areas::write(const yarp::os::idl::WireWriter& writer) const
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
bool return_get_all_areas::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!write_retval(writer)) {
        return false;
    }
    if (!write_areas(writer)) {
        return false;
    }
    return !writer.isError();
}

// Convert to a printable string
std::string return_get_all_areas::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
return_get_all_areas::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new return_get_all_areas;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
return_get_all_areas::Editor::Editor(return_get_all_areas& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
return_get_all_areas::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool return_get_all_areas::Editor::edit(return_get_all_areas& obj, bool dirty)
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
bool return_get_all_areas::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
return_get_all_areas& return_get_all_areas::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void return_get_all_areas::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void return_get_all_areas::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: retval setter
void return_get_all_areas::Editor::set_retval(const bool retval)
{
    will_set_retval();
    obj->retval = retval;
    mark_dirty_retval();
    communicate();
    did_set_retval();
}

// Editor: retval getter
bool return_get_all_areas::Editor::get_retval() const
{
    return obj->retval;
}

// Editor: retval will_set
bool return_get_all_areas::Editor::will_set_retval()
{
    return true;
}

// Editor: retval did_set
bool return_get_all_areas::Editor::did_set_retval()
{
    return true;
}

// Editor: areas setter
void return_get_all_areas::Editor::set_areas(const std::vector<yarp::dev::Nav2D::Map2DArea>& areas)
{
    will_set_areas();
    obj->areas = areas;
    mark_dirty_areas();
    communicate();
    did_set_areas();
}

// Editor: areas setter (list)
void return_get_all_areas::Editor::set_areas(size_t index, const yarp::dev::Nav2D::Map2DArea& elem)
{
    will_set_areas();
    obj->areas[index] = elem;
    mark_dirty_areas();
    communicate();
    did_set_areas();
}

// Editor: areas getter
const std::vector<yarp::dev::Nav2D::Map2DArea>& return_get_all_areas::Editor::get_areas() const
{
    return obj->areas;
}

// Editor: areas will_set
bool return_get_all_areas::Editor::will_set_areas()
{
    return true;
}

// Editor: areas did_set
bool return_get_all_areas::Editor::did_set_areas()
{
    return true;
}

// Editor: clean
void return_get_all_areas::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool return_get_all_areas::Editor::read(yarp::os::ConnectionReader& connection)
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
                if (!writer.writeString("std::vector<yarp::dev::Nav2D::Map2DArea> areas")) {
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
bool return_get_all_areas::Editor::write(yarp::os::ConnectionWriter& connection) const
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
void return_get_all_areas::Editor::communicate()
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
void return_get_all_areas::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: retval mark_dirty
void return_get_all_areas::Editor::mark_dirty_retval()
{
    if (is_dirty_retval) {
        return;
    }
    dirty_count++;
    is_dirty_retval = true;
    mark_dirty();
}

// Editor: areas mark_dirty
void return_get_all_areas::Editor::mark_dirty_areas()
{
    if (is_dirty_areas) {
        return;
    }
    dirty_count++;
    is_dirty_areas = true;
    mark_dirty();
}

// Editor: dirty_flags
void return_get_all_areas::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_retval = flag;
    is_dirty_areas = flag;
    dirty_count = flag ? 2 : 0;
}

// read retval field
bool return_get_all_areas::read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = false;
    }
    return true;
}

// write retval field
bool return_get_all_areas::write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read (nested) retval field
bool return_get_all_areas::nested_read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = false;
    }
    return true;
}

// write (nested) retval field
bool return_get_all_areas::nested_write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read areas field
bool return_get_all_areas::read_areas(yarp::os::idl::WireReader& reader)
{
    areas.clear();
    uint32_t _size60;
    yarp::os::idl::WireState _etype63;
    reader.readListBegin(_etype63, _size60);
    areas.resize(_size60);
    for (size_t _i64 = 0; _i64 < _size60; ++_i64) {
        if (!reader.readNested(areas[_i64])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write areas field
bool return_get_all_areas::write_areas(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(areas.size()))) {
        return false;
    }
    for (const auto& _item65 : areas) {
        if (!writer.writeNested(_item65)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) areas field
bool return_get_all_areas::nested_read_areas(yarp::os::idl::WireReader& reader)
{
    areas.clear();
    uint32_t _size66;
    yarp::os::idl::WireState _etype69;
    reader.readListBegin(_etype69, _size66);
    areas.resize(_size66);
    for (size_t _i70 = 0; _i70 < _size66; ++_i70) {
        if (!reader.readNested(areas[_i70])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) areas field
bool return_get_all_areas::nested_write_areas(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(areas.size()))) {
        return false;
    }
    for (const auto& _item71 : areas) {
        if (!writer.writeNested(_item71)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_get_paths_list.h>

// Default constructor
return_get_paths_list::return_get_paths_list() :
        WirePortable(),
        retval(false),
        paths()
{
}

// Constructor with field values
return_get_paths_list::return_get_paths_list(const bool retval,
                                             const std::vector<std::string>& paths) :
        WirePortable(),
        retval(retval),
        paths(paths)
{
}

// Read structure on a Wire
bool return_get_paths_list::read(yarp::os::idl::WireReader& reader)
{
    if (!read_retval(reader)) {
        return false;
    }
    if (!read_paths(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool return_get_paths_list::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    if (!read_retval(reader)) {
        return false;
    }
    if (!read_paths(reader)) {
        return false;
    }
    return !reader.isError();
}

// Write structure on a Wire
bool return_get_paths_list::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_retval(writer)) {
        return false;
    }
    if (!write_paths(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool return_get_paths_list::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!write_retval(writer)) {
        return false;
    }
    if (!write_paths(writer)) {
        return false;
    }
    return !writer.isError();
}

// Convert to a printable string
std::string return_get_paths_list::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
return_get_paths_list::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new return_get_paths_list;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
return_get_paths_list::Editor::Editor(return_get_paths_list& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
return_get_paths_list::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool return_get_paths_list::Editor::edit(return_get_paths_list& obj, bool dirty)
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
bool return_get_paths_list::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
return_get_paths_list& return_get_paths_list::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void return_get_paths_list::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void return_get_paths_list::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: retval setter
void return_get_paths_list::Editor::set_retval(const bool retval)
{
    will_set_retval();
    obj->retval = retval;
    mark_dirty_retval();
    communicate();
    did_set_retval();
}

// Editor: retval getter
bool return_get_paths_list::Editor::get_retval() const
{
    return obj->retval;
}

// Editor: retval will_set
bool return_get_paths_list::Editor::will_set_retval()
{
    return true;
}

// Editor: retval did_set
bool return_get_paths_list::Editor::did_set_retval()
{
    return true;
}

// Editor: paths setter
void return_get_paths_list::Editor::set_paths(const std::vector<std::string>& paths)
{
    will_set_paths();
    obj->paths = paths;
    mark_dirty_paths();
    communicate();
    did_set_paths();
}

// Editor: paths setter (list)
void return_get_paths_list::Editor::set_paths(size_t index, const std::string& elem)
{
    will_set_paths();
    obj->paths[index] = elem;
    mark_dirty_paths();
    communicate();
    did_set_paths();
}

// Editor: paths getter
const std::vector<std::string>& return_get_paths_list::Editor::get_paths() const
{
    return obj->paths;
}

// Editor: paths will_set
bool return_get_paths_list::Editor::will_set_paths()
{
    return true;
}

// Editor: paths did_set
bool return_get_paths_list::Editor::did_set_paths()
{
    return true;
}

// Editor: clean
void return_get_paths_list::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool return_get_paths_list::Editor::read(yarp::os::ConnectionReader& connection)
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
            if (field == "paths") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("std::vector<std::string> paths")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(3)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("retval");
        writer.writeString("paths");
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
        } else if (key == "paths") {
            will_set_paths();
            if (!obj->nested_read_paths(reader)) {
                return false;
            }
            did_set_paths();
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
bool return_get_paths_list::Editor::write(yarp::os::ConnectionWriter& connection) const
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
    if (is_dirty_paths) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("paths")) {
            return false;
        }
        if (!obj->nested_write_paths(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void return_get_paths_list::Editor::communicate()
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
void return_get_paths_list::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: retval mark_dirty
void return_get_paths_list::Editor::mark_dirty_retval()
{
    if (is_dirty_retval) {
        return;
    }
    dirty_count++;
    is_dirty_retval = true;
    mark_dirty();
}

// Editor: paths mark_dirty
void return_get_paths_list::Editor::mark_dirty_paths()
{
    if (is_dirty_paths) {
        return;
    }
    dirty_count++;
    is_dirty_paths = true;
    mark_dirty();
}

// Editor: dirty_flags
void return_get_paths_list::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_retval = flag;
    is_dirty_paths = flag;
    dirty_count = flag ? 2 : 0;
}

// read retval field
bool return_get_paths_list::read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = false;
    }
    return true;
}

// write retval field
bool return_get_paths_list::write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read (nested) retval field
bool return_get_paths_list::nested_read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = false;
    }
    return true;
}

// write (nested) retval field
bool return_get_paths_list::nested_write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read paths field
bool return_get_paths_list::read_paths(yarp::os::idl::WireReader& reader)
{
    paths.clear();
    uint32_t _size36;
    yarp::os::idl::WireState _etype39;
    reader.readListBegin(_etype39, _size36);
    paths.resize(_size36);
    for (size_t _i40 = 0; _i40 < _size36; ++_i40) {
        if (!reader.readString(paths[_i40])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write paths field
bool return_get_paths_list::write_paths(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_STRING, static_cast<uint32_t>(paths.size()))) {
        return false;
    }
    for (const auto& _item41 : paths) {
        if (!writer.writeString(_item41)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) paths field
bool return_get_paths_list::nested_read_paths(yarp::os::idl::WireReader& reader)
{
    paths.clear();
    uint32_t _size42;
    yarp::os::idl::WireState _etype45;
    reader.readListBegin(_etype45, _size42);
    paths.resize(_size42);
    for (size_t _i46 = 0; _i46 < _size42; ++_i46) {
        if (!reader.readString(paths[_i46])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) paths field
bool return_get_paths_list::nested_write_paths(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_STRING, static_cast<uint32_t>(paths.size()))) {
        return false;
    }
    for (const auto& _item47 : paths) {
        if (!writer.writeString(_item47)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

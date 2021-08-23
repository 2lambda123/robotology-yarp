/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/dev/Map2DAreaData.h>

namespace yarp {
namespace dev {

// Default constructor
Map2DAreaData::Map2DAreaData() :
        WirePortable(),
        map_id(""),
        points(),
        description("")
{
}

// Constructor with field values
Map2DAreaData::Map2DAreaData(const std::string& map_id,
                             const std::vector<yarp::math::Vec2D<double>>& points,
                             const std::string& description) :
        WirePortable(),
        map_id(map_id),
        points(points),
        description(description)
{
}

// Read structure on a Wire
bool Map2DAreaData::read(yarp::os::idl::WireReader& reader)
{
    if (!read_map_id(reader)) {
        return false;
    }
    if (!read_points(reader)) {
        return false;
    }
    if (!read_description(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool Map2DAreaData::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(3)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool Map2DAreaData::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_map_id(writer)) {
        return false;
    }
    if (!write_points(writer)) {
        return false;
    }
    if (!write_description(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool Map2DAreaData::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string Map2DAreaData::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
Map2DAreaData::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new Map2DAreaData;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
Map2DAreaData::Editor::Editor(Map2DAreaData& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
Map2DAreaData::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool Map2DAreaData::Editor::edit(Map2DAreaData& obj, bool dirty)
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
bool Map2DAreaData::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
Map2DAreaData& Map2DAreaData::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void Map2DAreaData::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void Map2DAreaData::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: map_id setter
void Map2DAreaData::Editor::set_map_id(const std::string& map_id)
{
    will_set_map_id();
    obj->map_id = map_id;
    mark_dirty_map_id();
    communicate();
    did_set_map_id();
}

// Editor: map_id getter
const std::string& Map2DAreaData::Editor::get_map_id() const
{
    return obj->map_id;
}

// Editor: map_id will_set
bool Map2DAreaData::Editor::will_set_map_id()
{
    return true;
}

// Editor: map_id did_set
bool Map2DAreaData::Editor::did_set_map_id()
{
    return true;
}

// Editor: points setter
void Map2DAreaData::Editor::set_points(const std::vector<yarp::math::Vec2D<double>>& points)
{
    will_set_points();
    obj->points = points;
    mark_dirty_points();
    communicate();
    did_set_points();
}

// Editor: points setter (list)
void Map2DAreaData::Editor::set_points(size_t index, const yarp::math::Vec2D<double>& elem)
{
    will_set_points();
    obj->points[index] = elem;
    mark_dirty_points();
    communicate();
    did_set_points();
}

// Editor: points getter
const std::vector<yarp::math::Vec2D<double>>& Map2DAreaData::Editor::get_points() const
{
    return obj->points;
}

// Editor: points will_set
bool Map2DAreaData::Editor::will_set_points()
{
    return true;
}

// Editor: points did_set
bool Map2DAreaData::Editor::did_set_points()
{
    return true;
}

// Editor: description setter
void Map2DAreaData::Editor::set_description(const std::string& description)
{
    will_set_description();
    obj->description = description;
    mark_dirty_description();
    communicate();
    did_set_description();
}

// Editor: description getter
const std::string& Map2DAreaData::Editor::get_description() const
{
    return obj->description;
}

// Editor: description will_set
bool Map2DAreaData::Editor::will_set_description()
{
    return true;
}

// Editor: description did_set
bool Map2DAreaData::Editor::did_set_description()
{
    return true;
}

// Editor: clean
void Map2DAreaData::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool Map2DAreaData::Editor::read(yarp::os::ConnectionReader& connection)
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
            if (field == "map_id") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("std::string map_id")) {
                    return false;
                }
                if (!writer.writeString("name of the map")) {
                    return false;
                }
            }
            if (field == "points") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("std::vector<yarp::math::Vec2D<double>> points")) {
                    return false;
                }
                if (!writer.writeString("list of points which define the vertices of the area")) {
                    return false;
                }
            }
            if (field == "description") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("std::string description")) {
                    return false;
                }
                if (!writer.writeString("user defined string")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(4)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("map_id");
        writer.writeString("points");
        writer.writeString("description");
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
        if (key == "map_id") {
            will_set_map_id();
            if (!obj->nested_read_map_id(reader)) {
                return false;
            }
            did_set_map_id();
        } else if (key == "points") {
            will_set_points();
            if (!obj->nested_read_points(reader)) {
                return false;
            }
            did_set_points();
        } else if (key == "description") {
            will_set_description();
            if (!obj->nested_read_description(reader)) {
                return false;
            }
            did_set_description();
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
bool Map2DAreaData::Editor::write(yarp::os::ConnectionWriter& connection) const
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
    if (is_dirty_map_id) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("map_id")) {
            return false;
        }
        if (!obj->nested_write_map_id(writer)) {
            return false;
        }
    }
    if (is_dirty_points) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("points")) {
            return false;
        }
        if (!obj->nested_write_points(writer)) {
            return false;
        }
    }
    if (is_dirty_description) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("description")) {
            return false;
        }
        if (!obj->nested_write_description(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void Map2DAreaData::Editor::communicate()
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
void Map2DAreaData::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: map_id mark_dirty
void Map2DAreaData::Editor::mark_dirty_map_id()
{
    if (is_dirty_map_id) {
        return;
    }
    dirty_count++;
    is_dirty_map_id = true;
    mark_dirty();
}

// Editor: points mark_dirty
void Map2DAreaData::Editor::mark_dirty_points()
{
    if (is_dirty_points) {
        return;
    }
    dirty_count++;
    is_dirty_points = true;
    mark_dirty();
}

// Editor: description mark_dirty
void Map2DAreaData::Editor::mark_dirty_description()
{
    if (is_dirty_description) {
        return;
    }
    dirty_count++;
    is_dirty_description = true;
    mark_dirty();
}

// Editor: dirty_flags
void Map2DAreaData::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_map_id = flag;
    is_dirty_points = flag;
    is_dirty_description = flag;
    dirty_count = flag ? 3 : 0;
}

// read map_id field
bool Map2DAreaData::read_map_id(yarp::os::idl::WireReader& reader)
{
    if (!reader.readString(map_id)) {
        reader.fail();
        return false;
    }
    return true;
}

// write map_id field
bool Map2DAreaData::write_map_id(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(map_id)) {
        return false;
    }
    return true;
}

// read (nested) map_id field
bool Map2DAreaData::nested_read_map_id(yarp::os::idl::WireReader& reader)
{
    if (!reader.readString(map_id)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) map_id field
bool Map2DAreaData::nested_write_map_id(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(map_id)) {
        return false;
    }
    return true;
}

// read points field
bool Map2DAreaData::read_points(yarp::os::idl::WireReader& reader)
{
    points.clear();
    uint32_t _size0;
    yarp::os::idl::WireState _etype3;
    reader.readListBegin(_etype3, _size0);
    points.resize(_size0);
    for (size_t _i4 = 0; _i4 < _size0; ++_i4) {
        if (!reader.readNested(points[_i4])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write points field
bool Map2DAreaData::write_points(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(points.size()))) {
        return false;
    }
    for (const auto& _item5 : points) {
        if (!writer.writeNested(_item5)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) points field
bool Map2DAreaData::nested_read_points(yarp::os::idl::WireReader& reader)
{
    points.clear();
    uint32_t _size6;
    yarp::os::idl::WireState _etype9;
    reader.readListBegin(_etype9, _size6);
    points.resize(_size6);
    for (size_t _i10 = 0; _i10 < _size6; ++_i10) {
        if (!reader.readNested(points[_i10])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) points field
bool Map2DAreaData::nested_write_points(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(points.size()))) {
        return false;
    }
    for (const auto& _item11 : points) {
        if (!writer.writeNested(_item11)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read description field
bool Map2DAreaData::read_description(yarp::os::idl::WireReader& reader)
{
    if (!reader.readString(description)) {
        reader.fail();
        return false;
    }
    return true;
}

// write description field
bool Map2DAreaData::write_description(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(description)) {
        return false;
    }
    return true;
}

// read (nested) description field
bool Map2DAreaData::nested_read_description(yarp::os::idl::WireReader& reader)
{
    if (!reader.readString(description)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) description field
bool Map2DAreaData::nested_write_description(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(description)) {
        return false;
    }
    return true;
}

} // namespace yarp
} // namespace dev

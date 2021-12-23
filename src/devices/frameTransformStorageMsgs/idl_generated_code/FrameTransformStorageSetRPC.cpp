/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <FrameTransformStorageSetRPC.h>

#include <yarp/os/idl/WireTypes.h>

#include <algorithm>

// setTransformsRPC helper class declaration
class FrameTransformStorageSetRPC_setTransformsRPC_helper :
        public yarp::os::Portable
{
public:
    FrameTransformStorageSetRPC_setTransformsRPC_helper() = default;
    explicit FrameTransformStorageSetRPC_setTransformsRPC_helper(const std::vector<yarp::math::FrameTransform>& transforms);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    class Command :
            public yarp::os::idl::WirePortable
    {
    public:
        Command() = default;
        explicit Command(const std::vector<yarp::math::FrameTransform>& transforms);

        ~Command() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool writeTag(const yarp::os::idl::WireWriter& writer) const;
        bool writeArgs(const yarp::os::idl::WireWriter& writer) const;

        bool read(yarp::os::idl::WireReader& reader) override;
        bool readTag(yarp::os::idl::WireReader& reader);
        bool readArgs(yarp::os::idl::WireReader& reader);

        std::vector<yarp::math::FrameTransform> transforms{};
    };

    class Reply :
            public yarp::os::idl::WirePortable
    {
    public:
        Reply() = default;
        ~Reply() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool read(yarp::os::idl::WireReader& reader) override;

        bool return_helper{false};
    };

    using funcptr_t = bool (*)(const std::vector<yarp::math::FrameTransform>&);
    void call(FrameTransformStorageSetRPC* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"setTransformsRPC"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{2};
    static constexpr size_t s_reply_len{1};
    static constexpr const char* s_prototype{"bool FrameTransformStorageSetRPC::setTransformsRPC(const std::vector<yarp::math::FrameTransform>& transforms)"};
    static constexpr const char* s_help{""};
};

// setTransformRPC helper class declaration
class FrameTransformStorageSetRPC_setTransformRPC_helper :
        public yarp::os::Portable
{
public:
    FrameTransformStorageSetRPC_setTransformRPC_helper() = default;
    explicit FrameTransformStorageSetRPC_setTransformRPC_helper(const yarp::math::FrameTransform& transform);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    class Command :
            public yarp::os::idl::WirePortable
    {
    public:
        Command() = default;
        explicit Command(const yarp::math::FrameTransform& transform);

        ~Command() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool writeTag(const yarp::os::idl::WireWriter& writer) const;
        bool writeArgs(const yarp::os::idl::WireWriter& writer) const;

        bool read(yarp::os::idl::WireReader& reader) override;
        bool readTag(yarp::os::idl::WireReader& reader);
        bool readArgs(yarp::os::idl::WireReader& reader);

        yarp::math::FrameTransform transform{};
    };

    class Reply :
            public yarp::os::idl::WirePortable
    {
    public:
        Reply() = default;
        ~Reply() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool read(yarp::os::idl::WireReader& reader) override;

        bool return_helper{false};
    };

    using funcptr_t = bool (*)(const yarp::math::FrameTransform&);
    void call(FrameTransformStorageSetRPC* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"setTransformRPC"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{2};
    static constexpr size_t s_reply_len{1};
    static constexpr const char* s_prototype{"bool FrameTransformStorageSetRPC::setTransformRPC(const yarp::math::FrameTransform& transform)"};
    static constexpr const char* s_help{""};
};

// deleteTransformRPC helper class declaration
class FrameTransformStorageSetRPC_deleteTransformRPC_helper :
        public yarp::os::Portable
{
public:
    FrameTransformStorageSetRPC_deleteTransformRPC_helper() = default;
    FrameTransformStorageSetRPC_deleteTransformRPC_helper(const std::string& src, const std::string& dst);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    class Command :
            public yarp::os::idl::WirePortable
    {
    public:
        Command() = default;
        Command(const std::string& src, const std::string& dst);

        ~Command() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool writeTag(const yarp::os::idl::WireWriter& writer) const;
        bool writeArgs(const yarp::os::idl::WireWriter& writer) const;

        bool read(yarp::os::idl::WireReader& reader) override;
        bool readTag(yarp::os::idl::WireReader& reader);
        bool readArgs(yarp::os::idl::WireReader& reader);

        std::string src{};
        std::string dst{};
    };

    class Reply :
            public yarp::os::idl::WirePortable
    {
    public:
        Reply() = default;
        ~Reply() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool read(yarp::os::idl::WireReader& reader) override;

        bool return_helper{false};
    };

    using funcptr_t = bool (*)(const std::string&, const std::string&);
    void call(FrameTransformStorageSetRPC* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"deleteTransformRPC"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{3};
    static constexpr size_t s_reply_len{1};
    static constexpr const char* s_prototype{"bool FrameTransformStorageSetRPC::deleteTransformRPC(const std::string& src, const std::string& dst)"};
    static constexpr const char* s_help{""};
};

// clearAllRPC helper class declaration
class FrameTransformStorageSetRPC_clearAllRPC_helper :
        public yarp::os::Portable
{
public:
    FrameTransformStorageSetRPC_clearAllRPC_helper() = default;
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    class Command :
            public yarp::os::idl::WirePortable
    {
    public:
        Command() = default;
        ~Command() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool writeTag(const yarp::os::idl::WireWriter& writer) const;
        bool writeArgs(const yarp::os::idl::WireWriter& writer) const;

        bool read(yarp::os::idl::WireReader& reader) override;
        bool readTag(yarp::os::idl::WireReader& reader);
        bool readArgs(yarp::os::idl::WireReader& reader);
    };

    class Reply :
            public yarp::os::idl::WirePortable
    {
    public:
        Reply() = default;
        ~Reply() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool read(yarp::os::idl::WireReader& reader) override;

        bool return_helper{false};
    };

    using funcptr_t = bool (*)();
    void call(FrameTransformStorageSetRPC* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"clearAllRPC"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{1};
    static constexpr size_t s_reply_len{1};
    static constexpr const char* s_prototype{"bool FrameTransformStorageSetRPC::clearAllRPC()"};
    static constexpr const char* s_help{""};
};

// setTransformsRPC helper class implementation
FrameTransformStorageSetRPC_setTransformsRPC_helper::FrameTransformStorageSetRPC_setTransformsRPC_helper(const std::vector<yarp::math::FrameTransform>& transforms) :
        cmd{transforms}
{
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

FrameTransformStorageSetRPC_setTransformsRPC_helper::Command::Command(const std::vector<yarp::math::FrameTransform>& transforms) :
        transforms{transforms}
{
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(transforms.size()))) {
        return false;
    }
    for (const auto& _item : transforms) {
        if (!writer.writeNested(_item)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::Command::readTag(yarp::os::idl::WireReader& reader)
{
    std::string tag = reader.readTag(s_tag_len);
    if (reader.isError()) {
        return false;
    }
    if (tag != s_tag) {
        reader.fail();
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    transforms.clear();
    uint32_t _size;
    yarp::os::idl::WireState _etype;
    reader.readListBegin(_etype, _size);
    transforms.resize(_size);
    for (size_t _i = 0; _i < _size; ++_i) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(transforms[_i])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.isNull()) {
        if (!writer.writeListHeader(s_reply_len)) {
            return false;
        }
        if (!writer.writeBool(return_helper)) {
            return false;
        }
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformsRPC_helper::Reply::read(yarp::os::idl::WireReader& reader)
{
    if (!reader.readListReturn()) {
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readBool(return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

void FrameTransformStorageSetRPC_setTransformsRPC_helper::call(FrameTransformStorageSetRPC* ptr)
{
    reply.return_helper = ptr->setTransformsRPC(cmd.transforms);
}

// setTransformRPC helper class implementation
FrameTransformStorageSetRPC_setTransformRPC_helper::FrameTransformStorageSetRPC_setTransformRPC_helper(const yarp::math::FrameTransform& transform) :
        cmd{transform}
{
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

FrameTransformStorageSetRPC_setTransformRPC_helper::Command::Command(const yarp::math::FrameTransform& transform) :
        transform{transform}
{
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(transform)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::Command::readTag(yarp::os::idl::WireReader& reader)
{
    std::string tag = reader.readTag(s_tag_len);
    if (reader.isError()) {
        return false;
    }
    if (tag != s_tag) {
        reader.fail();
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readNested(transform)) {
        reader.fail();
        return false;
    }
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.isNull()) {
        if (!writer.writeListHeader(s_reply_len)) {
            return false;
        }
        if (!writer.writeBool(return_helper)) {
            return false;
        }
    }
    return true;
}

bool FrameTransformStorageSetRPC_setTransformRPC_helper::Reply::read(yarp::os::idl::WireReader& reader)
{
    if (!reader.readListReturn()) {
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readBool(return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

void FrameTransformStorageSetRPC_setTransformRPC_helper::call(FrameTransformStorageSetRPC* ptr)
{
    reply.return_helper = ptr->setTransformRPC(cmd.transform);
}

// deleteTransformRPC helper class implementation
FrameTransformStorageSetRPC_deleteTransformRPC_helper::FrameTransformStorageSetRPC_deleteTransformRPC_helper(const std::string& src, const std::string& dst) :
        cmd{src, dst}
{
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

FrameTransformStorageSetRPC_deleteTransformRPC_helper::Command::Command(const std::string& src, const std::string& dst) :
        src{src},
        dst{dst}
{
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(src)) {
        return false;
    }
    if (!writer.writeString(dst)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::Command::readTag(yarp::os::idl::WireReader& reader)
{
    std::string tag = reader.readTag(s_tag_len);
    if (reader.isError()) {
        return false;
    }
    if (tag != s_tag) {
        reader.fail();
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readString(src)) {
        reader.fail();
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readString(dst)) {
        reader.fail();
        return false;
    }
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.isNull()) {
        if (!writer.writeListHeader(s_reply_len)) {
            return false;
        }
        if (!writer.writeBool(return_helper)) {
            return false;
        }
    }
    return true;
}

bool FrameTransformStorageSetRPC_deleteTransformRPC_helper::Reply::read(yarp::os::idl::WireReader& reader)
{
    if (!reader.readListReturn()) {
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readBool(return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

void FrameTransformStorageSetRPC_deleteTransformRPC_helper::call(FrameTransformStorageSetRPC* ptr)
{
    reply.return_helper = ptr->deleteTransformRPC(cmd.src, cmd.dst);
}

// clearAllRPC helper class implementation
bool FrameTransformStorageSetRPC_clearAllRPC_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer [[maybe_unused]]) const
{
    return true;
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::Command::readTag(yarp::os::idl::WireReader& reader)
{
    std::string tag = reader.readTag(s_tag_len);
    if (reader.isError()) {
        return false;
    }
    if (tag != s_tag) {
        reader.fail();
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.isNull()) {
        if (!writer.writeListHeader(s_reply_len)) {
            return false;
        }
        if (!writer.writeBool(return_helper)) {
            return false;
        }
    }
    return true;
}

bool FrameTransformStorageSetRPC_clearAllRPC_helper::Reply::read(yarp::os::idl::WireReader& reader)
{
    if (!reader.readListReturn()) {
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readBool(return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

void FrameTransformStorageSetRPC_clearAllRPC_helper::call(FrameTransformStorageSetRPC* ptr)
{
    reply.return_helper = ptr->clearAllRPC();
}

// Constructor
FrameTransformStorageSetRPC::FrameTransformStorageSetRPC()
{
    yarp().setOwner(*this);
}

bool FrameTransformStorageSetRPC::setTransformsRPC(const std::vector<yarp::math::FrameTransform>& transforms)
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", FrameTransformStorageSetRPC_setTransformsRPC_helper::s_prototype);
    }
    FrameTransformStorageSetRPC_setTransformsRPC_helper helper{transforms};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : bool{};
}

bool FrameTransformStorageSetRPC::setTransformRPC(const yarp::math::FrameTransform& transform)
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", FrameTransformStorageSetRPC_setTransformRPC_helper::s_prototype);
    }
    FrameTransformStorageSetRPC_setTransformRPC_helper helper{transform};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : bool{};
}

bool FrameTransformStorageSetRPC::deleteTransformRPC(const std::string& src, const std::string& dst)
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", FrameTransformStorageSetRPC_deleteTransformRPC_helper::s_prototype);
    }
    FrameTransformStorageSetRPC_deleteTransformRPC_helper helper{src, dst};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : bool{};
}

bool FrameTransformStorageSetRPC::clearAllRPC()
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", FrameTransformStorageSetRPC_clearAllRPC_helper::s_prototype);
    }
    FrameTransformStorageSetRPC_clearAllRPC_helper helper{};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : bool{};
}

// help method
std::vector<std::string> FrameTransformStorageSetRPC::help(const std::string& functionName)
{
    bool showAll = (functionName == "--all");
    std::vector<std::string> helpString;
    if (showAll) {
        helpString.emplace_back("*** Available commands:");
        helpString.emplace_back(FrameTransformStorageSetRPC_setTransformsRPC_helper::s_tag);
        helpString.emplace_back(FrameTransformStorageSetRPC_setTransformRPC_helper::s_tag);
        helpString.emplace_back(FrameTransformStorageSetRPC_deleteTransformRPC_helper::s_tag);
        helpString.emplace_back(FrameTransformStorageSetRPC_clearAllRPC_helper::s_tag);
        helpString.emplace_back("help");
    } else {
        if (functionName == FrameTransformStorageSetRPC_setTransformsRPC_helper::s_tag) {
            helpString.emplace_back(FrameTransformStorageSetRPC_setTransformsRPC_helper::s_prototype);
        }
        if (functionName == FrameTransformStorageSetRPC_setTransformRPC_helper::s_tag) {
            helpString.emplace_back(FrameTransformStorageSetRPC_setTransformRPC_helper::s_prototype);
        }
        if (functionName == FrameTransformStorageSetRPC_deleteTransformRPC_helper::s_tag) {
            helpString.emplace_back(FrameTransformStorageSetRPC_deleteTransformRPC_helper::s_prototype);
        }
        if (functionName == FrameTransformStorageSetRPC_clearAllRPC_helper::s_tag) {
            helpString.emplace_back(FrameTransformStorageSetRPC_clearAllRPC_helper::s_prototype);
        }
        if (functionName == "help") {
            helpString.emplace_back("std::vector<std::string> help(const std::string& functionName = \"--all\")");
            helpString.emplace_back("Return list of available commands, or help message for a specific function");
            helpString.emplace_back("@param functionName name of command for which to get a detailed description. If none or '--all' is provided, print list of available commands");
            helpString.emplace_back("@return list of strings (one string per line)");
        }
    }
    if (helpString.empty()) {
        helpString.emplace_back("Command not found");
    }
    return helpString;
}

// read from ConnectionReader
bool FrameTransformStorageSetRPC::read(yarp::os::ConnectionReader& connection)
{
    constexpr size_t max_tag_len = 1;
    size_t tag_len = 1;

    yarp::os::idl::WireReader reader(connection);
    reader.expectAccept();
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }

    std::string tag = reader.readTag(1);
    bool direct = (tag == "__direct__");
    if (direct) {
        tag = reader.readTag(1);
    }
    while (tag_len <= max_tag_len && !reader.isError()) {
        if (tag == FrameTransformStorageSetRPC_setTransformsRPC_helper::s_tag) {
            FrameTransformStorageSetRPC_setTransformsRPC_helper helper;
            if (!helper.cmd.readArgs(reader)) {
                return false;
            }

            helper.call(this);

            yarp::os::idl::WireWriter writer(reader);
            if (!helper.reply.write(writer)) {
                return false;
            }
            reader.accept();
            return true;
        }
        if (tag == FrameTransformStorageSetRPC_setTransformRPC_helper::s_tag) {
            FrameTransformStorageSetRPC_setTransformRPC_helper helper;
            if (!helper.cmd.readArgs(reader)) {
                return false;
            }

            helper.call(this);

            yarp::os::idl::WireWriter writer(reader);
            if (!helper.reply.write(writer)) {
                return false;
            }
            reader.accept();
            return true;
        }
        if (tag == FrameTransformStorageSetRPC_deleteTransformRPC_helper::s_tag) {
            FrameTransformStorageSetRPC_deleteTransformRPC_helper helper;
            if (!helper.cmd.readArgs(reader)) {
                return false;
            }

            helper.call(this);

            yarp::os::idl::WireWriter writer(reader);
            if (!helper.reply.write(writer)) {
                return false;
            }
            reader.accept();
            return true;
        }
        if (tag == FrameTransformStorageSetRPC_clearAllRPC_helper::s_tag) {
            FrameTransformStorageSetRPC_clearAllRPC_helper helper;
            if (!helper.cmd.readArgs(reader)) {
                return false;
            }

            helper.call(this);

            yarp::os::idl::WireWriter writer(reader);
            if (!helper.reply.write(writer)) {
                return false;
            }
            reader.accept();
            return true;
        }
        if (tag == "help") {
            std::string functionName;
            if (!reader.readString(functionName)) {
                functionName = "--all";
            }
            auto help_strings = help(functionName);
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeTag("many", 1, 0)) {
                    return false;
                }
                if (!writer.writeListBegin(BOTTLE_TAG_INT32, static_cast<uint32_t>(help_strings.size()))) {
                    return false;
                }
                for (const auto& help_string : help_strings) {
                    if (!writer.writeString(help_string)) {
                        return false;
                    }
                }
                if (!writer.writeListEnd()) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        std::string next_tag = reader.readTag(1);
        if (next_tag.empty()) {
            break;
        }
        tag.append("_").append(next_tag);
        tag_len = std::count(tag.begin(), tag.end(), '_') + 1;
    }
    return false;
}

/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <MobileBaseVelocityControlRPC.h>

#include <yarp/os/idl/WireTypes.h>

#include <algorithm>

// applyVelocityCommandRPC helper class declaration
class MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper :
        public yarp::os::Portable
{
public:
    MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper() = default;
    MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper(const double x_vel, const double y_vel, const double theta_vel, const double timeout);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    class Command :
            public yarp::os::idl::WirePortable
    {
    public:
        Command() = default;
        Command(const double x_vel, const double y_vel, const double theta_vel, const double timeout);

        ~Command() override = default;

        bool write(yarp::os::ConnectionWriter& connection) const override;
        bool read(yarp::os::ConnectionReader& connection) override;

        bool write(const yarp::os::idl::WireWriter& writer) const override;
        bool writeTag(const yarp::os::idl::WireWriter& writer) const;
        bool writeArgs(const yarp::os::idl::WireWriter& writer) const;

        bool read(yarp::os::idl::WireReader& reader) override;
        bool readTag(yarp::os::idl::WireReader& reader);
        bool readArgs(yarp::os::idl::WireReader& reader);

        double x_vel{0.0};
        double y_vel{0.0};
        double theta_vel{0.0};
        double timeout{0.0};
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

    using funcptr_t = bool (*)(const double, const double, const double, const double);
    void call(MobileBaseVelocityControlRPC* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"applyVelocityCommandRPC"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{5};
    static constexpr size_t s_reply_len{1};
    static constexpr const char* s_prototype{"bool MobileBaseVelocityControlRPC::applyVelocityCommandRPC(const double x_vel, const double y_vel, const double theta_vel, const double timeout)"};
    static constexpr const char* s_help{""};
};

// getLastVelocityCommandRPC helper class declaration
class MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper :
        public yarp::os::Portable
{
public:
    MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper() = default;
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

        return_getLastVelocityCommand return_helper{};
    };

    using funcptr_t = return_getLastVelocityCommand (*)();
    void call(MobileBaseVelocityControlRPC* ptr);

    Command cmd;
    Reply reply;

    static constexpr const char* s_tag{"getLastVelocityCommandRPC"};
    static constexpr size_t s_tag_len{1};
    static constexpr size_t s_cmd_len{1};
    static constexpr size_t s_reply_len{4};
    static constexpr const char* s_prototype{"return_getLastVelocityCommand MobileBaseVelocityControlRPC::getLastVelocityCommandRPC()"};
    static constexpr const char* s_help{""};
};

// applyVelocityCommandRPC helper class implementation
MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper(const double x_vel, const double y_vel, const double theta_vel, const double timeout) :
        cmd{x_vel, y_vel, theta_vel, timeout}
{
}

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Command::Command(const double x_vel, const double y_vel, const double theta_vel, const double timeout) :
        x_vel{x_vel},
        y_vel{y_vel},
        theta_vel{theta_vel},
        timeout{timeout}
{
}

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(x_vel)) {
        return false;
    }
    if (!writer.writeFloat64(y_vel)) {
        return false;
    }
    if (!writer.writeFloat64(theta_vel)) {
        return false;
    }
    if (!writer.writeFloat64(timeout)) {
        return false;
    }
    return true;
}

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Command::readTag(yarp::os::idl::WireReader& reader)
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

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(x_vel)) {
        reader.fail();
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(y_vel)) {
        reader.fail();
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(theta_vel)) {
        reader.fail();
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readFloat64(timeout)) {
        reader.fail();
        return false;
    }
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
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

bool MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::Reply::read(yarp::os::idl::WireReader& reader)
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

void MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::call(MobileBaseVelocityControlRPC* ptr)
{
    reply.return_helper = ptr->applyVelocityCommandRPC(cmd.x_vel, cmd.y_vel, cmd.theta_vel, cmd.timeout);
}

// getLastVelocityCommandRPC helper class implementation
bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::write(yarp::os::ConnectionWriter& connection) const
{
    return cmd.write(connection);
}

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::read(yarp::os::ConnectionReader& connection)
{
    return reply.read(connection);
}

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::Command::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(s_cmd_len)) {
        return false;
    }
    return write(writer);
}

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::Command::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }
    return read(reader);
}

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::Command::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writeTag(writer)) {
        return false;
    }
    if (!writeArgs(writer)) {
        return false;
    }
    return true;
}

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::Command::writeTag(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeTag(s_tag, 1, s_tag_len)) {
        return false;
    }
    return true;
}

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::Command::writeArgs(const yarp::os::idl::WireWriter& writer [[maybe_unused]]) const
{
    return true;
}

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::Command::read(yarp::os::idl::WireReader& reader)
{
    if (!readTag(reader)) {
        return false;
    }
    if (!readArgs(reader)) {
        return false;
    }
    return true;
}

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::Command::readTag(yarp::os::idl::WireReader& reader)
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

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::Command::readArgs(yarp::os::idl::WireReader& reader)
{
    if (!reader.noMore()) {
        reader.fail();
        return false;
    }
    return true;
}

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::Reply::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    return write(writer);
}

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::Reply::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    return read(reader);
}

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::Reply::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.isNull()) {
        if (!writer.writeListHeader(s_reply_len)) {
            return false;
        }
        if (!writer.write(return_helper)) {
            return false;
        }
    }
    return true;
}

bool MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::Reply::read(yarp::os::idl::WireReader& reader)
{
    if (!reader.readListReturn()) {
        return false;
    }
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.read(return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

void MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::call(MobileBaseVelocityControlRPC* ptr)
{
    reply.return_helper = ptr->getLastVelocityCommandRPC();
}

// Constructor
MobileBaseVelocityControlRPC::MobileBaseVelocityControlRPC()
{
    yarp().setOwner(*this);
}

bool MobileBaseVelocityControlRPC::applyVelocityCommandRPC(const double x_vel, const double y_vel, const double theta_vel, const double timeout)
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::s_prototype);
    }
    MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper helper{x_vel, y_vel, theta_vel, timeout};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : bool{};
}

return_getLastVelocityCommand MobileBaseVelocityControlRPC::getLastVelocityCommandRPC()
{
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::s_prototype);
    }
    MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper helper{};
    bool ok = yarp().write(helper, helper);
    return ok ? helper.reply.return_helper : return_getLastVelocityCommand{};
}

// help method
std::vector<std::string> MobileBaseVelocityControlRPC::help(const std::string& functionName)
{
    bool showAll = (functionName == "--all");
    std::vector<std::string> helpString;
    if (showAll) {
        helpString.emplace_back("*** Available commands:");
        helpString.emplace_back(MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::s_tag);
        helpString.emplace_back(MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::s_tag);
        helpString.emplace_back("help");
    } else {
        if (functionName == MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::s_tag) {
            helpString.emplace_back(MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::s_prototype);
        }
        if (functionName == MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::s_tag) {
            helpString.emplace_back(MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::s_prototype);
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
bool MobileBaseVelocityControlRPC::read(yarp::os::ConnectionReader& connection)
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
        if (tag == MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper::s_tag) {
            MobileBaseVelocityControlRPC_applyVelocityCommandRPC_helper helper;
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
        if (tag == MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper::s_tag) {
            MobileBaseVelocityControlRPC_getLastVelocityCommandRPC_helper helper;
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

/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_SERVICE_ISPEECHSYNTHESIZERMSGS_H
#define YARP_THRIFT_GENERATOR_SERVICE_ISPEECHSYNTHESIZERMSGS_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>
#include <return_get_language.h>
#include <return_get_pitch.h>
#include <return_get_speed.h>
#include <return_get_voice.h>
#include <return_synthesize.h>

class ISpeechSynthesizerMsgs :
        public yarp::os::Wire
{
public:
    // Constructor
    ISpeechSynthesizerMsgs();

    virtual bool set_language(const std::string& language);

    virtual return_get_language get_language();

    virtual bool set_voice(const std::string& language);

    virtual return_get_voice get_voice();

    virtual bool set_speed(const double speed);

    virtual return_get_speed get_speed();

    virtual bool set_pitch(const double pitch);

    virtual return_get_pitch get_pitch();

    virtual return_synthesize synthesize(const std::string& text);

    // help method
    virtual std::vector<std::string> help(const std::string& functionName = "--all");

    // read from ConnectionReader
    bool read(yarp::os::ConnectionReader& connection) override;
};

#endif // YARP_THRIFT_GENERATOR_SERVICE_ISPEECHSYNTHESIZERMSGS_H

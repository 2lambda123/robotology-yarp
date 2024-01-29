/*
 * SPDX-FileCopyrightText: 2023-2023 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */


// Generated by yarpDeviceParamParserGenerator (1.0)
// This is an automatically generated file. Please do not edit it.
// It will be re-generated if the cmake flag ALLOW_DEVICE_PARAM_PARSER_GERNERATION is ON.

// Generated on: Mon Jan 29 11:01:56 2024


#ifndef AUDIOTOFILEDEVICE_PARAMSPARSER_H
#define AUDIOTOFILEDEVICE_PARAMSPARSER_H

#include <yarp/os/Searchable.h>
#include <yarp/dev/IDeviceDriverParams.h>
#include <string>

/**
* This class is the parameters parser for class AudioToFileDevice.
*
* These are the used parameters:
* | Group name | Parameter name | Type   | Units | Default Value  | Required | Description                                                                                      | Notes                                  |
* |:----------:|:--------------:|:------:|:-----:|:--------------:|:--------:|:------------------------------------------------------------------------------------------------:|:--------------------------------------:|
* | -          | file_name      | string | -     | audio_out.wav  | 0        | The name of the file written by the module                                                       | Only .wav and .mp3 files are supported |
* | -          | save_mode      | string | -     | overwrite_file | 0        | Affects the behavior of the module and defines the save mode, as described in the documentation. | -                                      |
* | -          | add_marker     | bool   | -     | -              | 0        | If set, it will add a marker at the beginning and at the ending of each received waveform.       | -                                      |
*
* The device can be launched by yarpdev using one of the following examples:
* \code{.unparsed}
* yarpdev --device AudioToFileDevice --file_name audio_out.wav --save_mode overwrite_file --add_marker <optional_value>
* \endcode
*
* \code{.unparsed}
* yarpdev --device AudioToFileDevice
* \endcode
*
*/

class AudioToFileDevice_ParamsParser : public yarp::dev::IDeviceDriverParams
{
public:
    ~AudioToFileDevice_ParamsParser() override = default;

public:
    const std::string m_device_type = {"AudioToFileDevice"};
    bool m_parser_is_strict = false;
    struct parser_version_type
    {
         int major = 1;
         int minor = 0;
    };
    const parser_version_type m_parser_version;
    std::string m_file_name = {"audio_out.wav"};
    std::string m_save_mode = {"overwrite_file"};
    bool m_add_marker;

    bool          parseParams(const yarp::os::Searchable & config) override;
    std::string   getDeviceType() const override { return m_device_type; }
    std::string   getDocumentationOfDeviceParams() const override;
    std::vector<std::string> getListOfParams() const override;
};

#endif

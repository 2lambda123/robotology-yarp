/*
 * Copyright (C) 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * Copyright (C) 2006-2010 RobotCub Consortium
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

#ifndef YARP_FRAMEGRABBER_PROTOCOL_CAMERAVOCABS_H
#define YARP_FRAMEGRABBER_PROTOCOL_CAMERAVOCABS_H

#include <yarp/conf/numeric.h>
#include <yarp/dev/GenericVocabs.h>

/*
 *  Vocab for interfaces
 */
constexpr yarp::conf::vocab32_t VOCAB_FRAMEGRABBER_IMAGE        = yarp::os::createVocab('f','g','i');
constexpr yarp::conf::vocab32_t VOCAB_FRAMEGRABBER_IMAGERAW     = yarp::os::createVocab('f','g','i','r');
constexpr yarp::conf::vocab32_t VOCAB_RGB_VISUAL_PARAMS         = yarp::os::createVocab('v','i','s','r');
constexpr yarp::conf::vocab32_t VOCAB_DEPTH_VISUAL_PARAMS       = yarp::os::createVocab('v','i','s','d');
constexpr yarp::conf::vocab32_t VOCAB_RGBD_SENSOR               = yarp::os::createVocab('r','g','d','b');
constexpr yarp::conf::vocab32_t VOCAB_RGBD_PROTOCOL_VERSION     = yarp::os::createVocab('p','r','o','t');

/*
 * Generic capabilities defines
 */
constexpr yarp::conf::vocab32_t VOCAB_BRIGHTNESS                = yarp::os::createVocab('b','r','i');
constexpr yarp::conf::vocab32_t VOCAB_EXPOSURE                  = yarp::os::createVocab('e','x','p','o');
constexpr yarp::conf::vocab32_t VOCAB_SHARPNESS                 = yarp::os::createVocab('s','h','a','r');
constexpr yarp::conf::vocab32_t VOCAB_WHITE                     = yarp::os::createVocab('w','h','i','t');
constexpr yarp::conf::vocab32_t VOCAB_HUE                       = yarp::os::createVocab('h','u','e');
constexpr yarp::conf::vocab32_t VOCAB_SATURATION                = yarp::os::createVocab('s','a','t','u');
constexpr yarp::conf::vocab32_t VOCAB_GAMMA                     = yarp::os::createVocab('g','a','m','m');
constexpr yarp::conf::vocab32_t VOCAB_SHUTTER                   = yarp::os::createVocab('s','h','u','t');
constexpr yarp::conf::vocab32_t VOCAB_GAIN                      = yarp::os::createVocab('g','a','i','n');
constexpr yarp::conf::vocab32_t VOCAB_IRIS                      = yarp::os::createVocab('i','r','i','s');

// General usage vocabs
constexpr yarp::conf::vocab32_t VOCAB_CROP                      = yarp::os::createVocab('c','r','o','p');
constexpr yarp::conf::vocab32_t VOCAB_FRAMEGRABBER_CONTROL      = yarp::os::createVocab('f','g','c');
constexpr yarp::conf::vocab32_t VOCAB_FRAMEGRABBER_CONTROL_DC1394 = yarp::os::createVocab('f','g','f','w');
constexpr yarp::conf::vocab32_t VOCAB_CAMERA_DESCRIPTION        = yarp::os::createVocab('c','a','m','d');
constexpr yarp::conf::vocab32_t VOCAB_HAS                       = yarp::os::createVocab('h','a','s');
constexpr yarp::conf::vocab32_t VOCAB_FEATURE                   = yarp::os::createVocab('f','e','a','t');
constexpr yarp::conf::vocab32_t VOCAB_FEATURE2                  = yarp::os::createVocab('f','e','a','2');
constexpr yarp::conf::vocab32_t VOCAB_ONOFF                     = yarp::os::createVocab('o','n','o','f');
constexpr yarp::conf::vocab32_t VOCAB_AUTO                      = yarp::os::createVocab('a','u','t','o');
constexpr yarp::conf::vocab32_t VOCAB_MANUAL                    = yarp::os::createVocab('m','a','n');
constexpr yarp::conf::vocab32_t VOCAB_ONEPUSH                   = yarp::os::createVocab('o','n','e','p');
constexpr yarp::conf::vocab32_t VOCAB_ACTIVE                    = yarp::os::createVocab('a','c','t','v');
constexpr yarp::conf::vocab32_t VOCAB_MODE                      = yarp::os::createVocab('m','o','d','e');


// IFrameGrabberControlsDC1394 interface
constexpr yarp::conf::vocab32_t VOCAB_DRHASFEA = yarp::os::createVocab('D','R','2','a');// 00
constexpr yarp::conf::vocab32_t VOCAB_DRSETVAL = yarp::os::createVocab('D','R','2','b');// 01
constexpr yarp::conf::vocab32_t VOCAB_DRGETVAL = yarp::os::createVocab('D','R','2','c');// 02
constexpr yarp::conf::vocab32_t VOCAB_DRHASACT = yarp::os::createVocab('D','R','2','d');// 03
constexpr yarp::conf::vocab32_t VOCAB_DRSETACT = yarp::os::createVocab('D','R','2','e');// 04
constexpr yarp::conf::vocab32_t VOCAB_DRGETACT = yarp::os::createVocab('D','R','2','f');// 05
constexpr yarp::conf::vocab32_t VOCAB_DRHASMAN = yarp::os::createVocab('D','R','2','g');// 06
constexpr yarp::conf::vocab32_t VOCAB_DRHASAUT = yarp::os::createVocab('D','R','2','h');// 07
constexpr yarp::conf::vocab32_t VOCAB_DRHASONP = yarp::os::createVocab('D','R','2','i');// 08
constexpr yarp::conf::vocab32_t VOCAB_DRSETMOD = yarp::os::createVocab('D','R','2','j');// 09
constexpr yarp::conf::vocab32_t VOCAB_DRGETMOD = yarp::os::createVocab('D','R','2','k');// 10
constexpr yarp::conf::vocab32_t VOCAB_DRSETONP = yarp::os::createVocab('D','R','2','l');// 11
// masks
constexpr yarp::conf::vocab32_t VOCAB_DRGETMSK = yarp::os::createVocab('D','R','2','m'); // 12
constexpr yarp::conf::vocab32_t VOCAB_DRGETVMD = yarp::os::createVocab('D','R','2','n'); // 13
constexpr yarp::conf::vocab32_t VOCAB_DRSETVMD = yarp::os::createVocab('D','R','2','o'); // 14
constexpr yarp::conf::vocab32_t VOCAB_DRGETFPM = yarp::os::createVocab('D','R','2','p'); // 15
constexpr yarp::conf::vocab32_t VOCAB_DRGETFPS = yarp::os::createVocab('D','R','2','q'); // 16
constexpr yarp::conf::vocab32_t VOCAB_DRSETFPS = yarp::os::createVocab('D','R','2','r'); // 17
constexpr yarp::conf::vocab32_t VOCAB_DRGETISO = yarp::os::createVocab('D','R','2','s'); // 18
constexpr yarp::conf::vocab32_t VOCAB_DRSETISO = yarp::os::createVocab('D','R','2','t'); // 19
constexpr yarp::conf::vocab32_t VOCAB_DRGETCCM = yarp::os::createVocab('D','R','2','u'); // 20
constexpr yarp::conf::vocab32_t VOCAB_DRGETCOD = yarp::os::createVocab('D','R','2','v'); // 21
constexpr yarp::conf::vocab32_t VOCAB_DRSETCOD = yarp::os::createVocab('D','R','2','w'); // 22
constexpr yarp::conf::vocab32_t VOCAB_DRSETWHB = yarp::os::createVocab('D','R','2','x'); // 23
constexpr yarp::conf::vocab32_t VOCAB_DRGETWHB = yarp::os::createVocab('D','R','2','y'); // 24
constexpr yarp::conf::vocab32_t VOCAB_DRGETF7M = yarp::os::createVocab('D','R','2','z'); // 25
constexpr yarp::conf::vocab32_t VOCAB_DRGETWF7 = yarp::os::createVocab('D','R','2','A'); // 26
constexpr yarp::conf::vocab32_t VOCAB_DRSETWF7 = yarp::os::createVocab('D','R','2','B'); // 27
constexpr yarp::conf::vocab32_t VOCAB_DRSETOPM = yarp::os::createVocab('D','R','2','C'); // 28
constexpr yarp::conf::vocab32_t VOCAB_DRGETOPM = yarp::os::createVocab('D','R','2','D'); // 29
constexpr yarp::conf::vocab32_t VOCAB_DRSETTXM = yarp::os::createVocab('D','R','2','E'); // 30
constexpr yarp::conf::vocab32_t VOCAB_DRGETTXM = yarp::os::createVocab('D','R','2','F'); // 31


constexpr yarp::conf::vocab32_t VOCAB_DRSETBCS = yarp::os::createVocab('D','R','2','I'); // 34
constexpr yarp::conf::vocab32_t VOCAB_DRSETDEF = yarp::os::createVocab('D','R','2','J'); // 35
constexpr yarp::conf::vocab32_t VOCAB_DRSETRST = yarp::os::createVocab('D','R','2','K'); // 36
constexpr yarp::conf::vocab32_t VOCAB_DRSETPWR = yarp::os::createVocab('D','R','2','L'); // 37
constexpr yarp::conf::vocab32_t VOCAB_DRSETCAP = yarp::os::createVocab('D','R','2','M'); // 38
constexpr yarp::conf::vocab32_t VOCAB_DRSETBPP = yarp::os::createVocab('D','R','2','N'); // 39
constexpr yarp::conf::vocab32_t VOCAB_DRGETBPP = yarp::os::createVocab('D','R','2','O'); // 40


// Rgb and depth
constexpr yarp::conf::vocab32_t VOCAB_RGB               = yarp::os::createVocab('r','g','b');
constexpr yarp::conf::vocab32_t VOCAB_DEPTH             = yarp::os::createVocab('d','e','p','t');
constexpr yarp::conf::vocab32_t VOCAB_MIRROR            = yarp::os::createVocab('m','i','r','r');

// Methods
constexpr yarp::conf::vocab32_t VOCAB_RESOLUTION        = yarp::os::createVocab('r','e','s');
constexpr yarp::conf::vocab32_t VOCAB_FOV               = yarp::os::createVocab('f','o','v');
constexpr yarp::conf::vocab32_t VOCAB_INTRINSIC_PARAM   = yarp::os::createVocab('i','n','t','p');
constexpr yarp::conf::vocab32_t VOCAB_SUPPORTED_CONF    = yarp::os::createVocab('c','o','n','f');

// Depth only
constexpr yarp::conf::vocab32_t VOCAB_ACCURACY          = yarp::os::createVocab('a','c','r','c');
constexpr yarp::conf::vocab32_t VOCAB_CLIP_PLANES       = yarp::os::createVocab('c','l','i','p');

// IRGBDSensor Methods
constexpr yarp::conf::vocab32_t VOCAB_EXTRINSIC_PARAM   = yarp::os::createVocab('e','x','t');
constexpr yarp::conf::vocab32_t VOCAB_ERROR_MSG         = yarp::os::createVocab('m','e','s','s');
constexpr yarp::conf::vocab32_t VOCAB_RGB_IMAGE         = yarp::os::createVocab('i','m','g','r');
constexpr yarp::conf::vocab32_t VOCAB_DEPTH_IMAGE       = yarp::os::createVocab('i','m','g','d');
constexpr yarp::conf::vocab32_t VOCAB_IMAGES            = yarp::os::createVocab('i','m','m','s');
constexpr yarp::conf::vocab32_t VOCAB_STATUS            = yarp::os::createVocab('s','t','a','t');

#endif // YARP_FRAMEGRABBER_PROTOCOL_CAMERAVOCABS_H

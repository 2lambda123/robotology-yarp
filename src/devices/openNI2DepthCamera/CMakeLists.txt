# SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
# SPDX-License-Identifier: BSD-3-Clause

yarp_prepare_plugin(openNI2DepthCamera
  CATEGORY device
  TYPE depthCameraDriver
  INCLUDE depthCameraDriver.h
  EXTRA_CONFIG
    WRAPPER=rgbdSensor_nws_yarp
  DEPENDS "YARP_HAS_OpenNI2"
)

if(ENABLE_openNI2DepthCamera)
  yarp_add_plugin(yarp_openNI2DepthCamera)

  target_sources(yarp_openNI2DepthCamera
    PRIVATE
      depthCameraDriver.cpp
      depthCameraDriver.h
  )

  target_link_libraries(yarp_openNI2DepthCamera
    PRIVATE
      YARP::YARP_os
      YARP::YARP_sig
      YARP::YARP_dev
  )
  list(APPEND YARP_${YARP_PLUGIN_MASTER}_PRIVATE_DEPS
    YARP_os
    YARP_sig
    YARP_dev
  )

  target_include_directories(yarp_openNI2DepthCamera SYSTEM PRIVATE ${OpenNI2_INCLUDE_DIRS})
  target_link_libraries(yarp_openNI2DepthCamera PRIVATE ${OpenNI2_LIBRARIES})
#   list(APPEND YARP_${YARP_PLUGIN_MASTER}_PRIVATE_DEPS OpenNI2) (not using targets)

  yarp_install(
    TARGETS yarp_openNI2DepthCamera
    EXPORT YARP_${YARP_PLUGIN_MASTER}
    COMPONENT ${YARP_PLUGIN_MASTER}
    LIBRARY DESTINATION ${YARP_DYNAMIC_PLUGINS_INSTALL_DIR}
    ARCHIVE DESTINATION ${YARP_STATIC_PLUGINS_INSTALL_DIR}
    YARP_INI DESTINATION ${YARP_PLUGIN_MANIFESTS_INSTALL_DIR}
  )

  set(YARP_${YARP_PLUGIN_MASTER}_PRIVATE_DEPS ${YARP_${YARP_PLUGIN_MASTER}_PRIVATE_DEPS} PARENT_SCOPE)

  set_property(TARGET yarp_openNI2DepthCamera PROPERTY FOLDER "Plugins/Device")
endif()

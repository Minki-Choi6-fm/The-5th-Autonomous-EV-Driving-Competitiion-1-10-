# --------------------------------------------------------------------------------------------------
# SPDX-License-Identifier: Apache-2.0
# Copyright (c) 2025 Minkyu Kil
# --------------------------------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.22)
project(erp_mini_rqt_plugin)

# --------------------------------------------------------------------------------------------------
# Find required packages
# --------------------------------------------------------------------------------------------------
find_package(erp_mini_cmake REQUIRED)
erp_mini_package()

# --------------------------------------------------------------------------------------------------
# Add library
# --------------------------------------------------------------------------------------------------
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(ERP_MINI_RQT_PLUGIN_SOURCE
    src/control_panel_plugin.cpp
    src/feedback_monitor_plugin.cpp
)

qt5_wrap_cpp(ERP_MINI_RQT_PLUGIN_MOC
    include/erp_mini_rqt_plugin/control_panel_plugin.hpp
    include/erp_mini_rqt_plugin/feedback_monitor_plugin.hpp
)

qt5_wrap_ui(ERP_MINI_RQT_PLUGIN_UI
    ui/control_panel.ui
    ui/feedback_monitor.ui
)

ament_auto_add_library(${PROJECT_NAME} SHARED
    ${ERP_MINI_RQT_PLUGIN_SOURCE}
    ${ERP_MINI_RQT_PLUGIN_MOC}
    ${ERP_MINI_RQT_PLUGIN_UI}
)

# --------------------------------------------------------------------------------------------------
# Install package
# --------------------------------------------------------------------------------------------------
pluginlib_export_plugin_description_file(rqt_gui "plugin.xml")
ament_auto_package(USE_SCOPED_HEADER_INSTALL_DIR)

install(
    FILES plugin.xml
    DESTINATION share/${PROJECT_NAME}
)

install(
    DIRECTORY ui
    DESTINATION share/${PROJECT_NAME}
)
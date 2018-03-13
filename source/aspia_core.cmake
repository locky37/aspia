
include_directories(
    ${PROJECT_SOURCE_DIR}
    ${ASPIA_THIRD_PARTY_DIR}/libvpx/include
    ${ASPIA_THIRD_PARTY_DIR}/libyuv/include
    ${ASPIA_THIRD_PARTY_DIR}/zlib-ng/include
    ${ASPIA_THIRD_PARTY_DIR}/protobuf/include
    ${ASPIA_THIRD_PARTY_DIR}/libsodium/include
    ${ASPIA_THIRD_PARTY_DIR}/wtl/include
    ${ASPIA_THIRD_PARTY_DIR}/asio/include
    ${ASPIA_THIRD_PARTY_DIR}/rapidjson/include
    ${ASPIA_THIRD_PARTY_DIR}/rapidxml/include)

link_directories(
    ${ASPIA_THIRD_PARTY_DIR}/libvpx/lib
    ${ASPIA_THIRD_PARTY_DIR}/libyuv/lib
    ${ASPIA_THIRD_PARTY_DIR}/zlib-ng/lib
    ${ASPIA_THIRD_PARTY_DIR}/protobuf/lib
    ${ASPIA_THIRD_PARTY_DIR}/qt/lib
    ${ASPIA_THIRD_PARTY_DIR}/qt/plugins/platforms
    ${ASPIA_THIRD_PARTY_DIR}/libsodium/lib)

list(APPEND SOURCE_ADDRESS_BOOK
    ${PROJECT_SOURCE_DIR}/address_book/address_book.cc
    ${PROJECT_SOURCE_DIR}/address_book/address_book.h
    ${PROJECT_SOURCE_DIR}/address_book/address_book_dialog.cc
    ${PROJECT_SOURCE_DIR}/address_book/address_book_dialog.h
    ${PROJECT_SOURCE_DIR}/address_book/address_book_dialog.ui
    ${PROJECT_SOURCE_DIR}/address_book/address_book_main.cc
    ${PROJECT_SOURCE_DIR}/address_book/address_book_main.h
    ${PROJECT_SOURCE_DIR}/address_book/address_book_window.cc
    ${PROJECT_SOURCE_DIR}/address_book/address_book_window.h
    ${PROJECT_SOURCE_DIR}/address_book/address_book_window.ui
    ${PROJECT_SOURCE_DIR}/address_book/computer.cc
    ${PROJECT_SOURCE_DIR}/address_book/computer.h
    ${PROJECT_SOURCE_DIR}/address_book/computer_dialog.cc
    ${PROJECT_SOURCE_DIR}/address_book/computer_dialog.h
    ${PROJECT_SOURCE_DIR}/address_book/computer_dialog.ui
    ${PROJECT_SOURCE_DIR}/address_book/computer_group.cc
    ${PROJECT_SOURCE_DIR}/address_book/computer_group.h
    ${PROJECT_SOURCE_DIR}/address_book/computer_group_dialog.cc
    ${PROJECT_SOURCE_DIR}/address_book/computer_group_dialog.h
    ${PROJECT_SOURCE_DIR}/address_book/computer_group_dialog.ui
    ${PROJECT_SOURCE_DIR}/address_book/computer_group_drag.h
    ${PROJECT_SOURCE_DIR}/address_book/computer_group_mime_data.h
    ${PROJECT_SOURCE_DIR}/address_book/computer_group_tree.cc
    ${PROJECT_SOURCE_DIR}/address_book/computer_group_tree.h
    ${PROJECT_SOURCE_DIR}/address_book/computer_tree.cc
    ${PROJECT_SOURCE_DIR}/address_book/computer_tree.h
    ${PROJECT_SOURCE_DIR}/address_book/open_address_book_dialog.cc
    ${PROJECT_SOURCE_DIR}/address_book/open_address_book_dialog.h
    ${PROJECT_SOURCE_DIR}/address_book/open_address_book_dialog.ui)

list(APPEND SOURCE_BASE
    ${PROJECT_SOURCE_DIR}/base/aligned_memory.cc
    ${PROJECT_SOURCE_DIR}/base/aligned_memory.h
    ${PROJECT_SOURCE_DIR}/base/bitset.h
    ${PROJECT_SOURCE_DIR}/base/byte_order.cc
    ${PROJECT_SOURCE_DIR}/base/byte_order.h
    ${PROJECT_SOURCE_DIR}/base/command_line.cc
    ${PROJECT_SOURCE_DIR}/base/command_line.h
    ${PROJECT_SOURCE_DIR}/base/cpu_info.cc
    ${PROJECT_SOURCE_DIR}/base/cpu_info.h
    ${PROJECT_SOURCE_DIR}/base/cpuid.h
    ${PROJECT_SOURCE_DIR}/base/datetime.cc
    ${PROJECT_SOURCE_DIR}/base/datetime.h
    ${PROJECT_SOURCE_DIR}/base/desktop.cc
    ${PROJECT_SOURCE_DIR}/base/desktop.h
    ${PROJECT_SOURCE_DIR}/base/logging.cc
    ${PROJECT_SOURCE_DIR}/base/logging.h
    ${PROJECT_SOURCE_DIR}/base/macros.h
    ${PROJECT_SOURCE_DIR}/base/message_window.cc
    ${PROJECT_SOURCE_DIR}/base/message_window.h
    ${PROJECT_SOURCE_DIR}/base/object_watcher.cc
    ${PROJECT_SOURCE_DIR}/base/object_watcher.h
    ${PROJECT_SOURCE_DIR}/base/registry.cc
    ${PROJECT_SOURCE_DIR}/base/registry.h
    ${PROJECT_SOURCE_DIR}/base/scoped_bstr.cc
    ${PROJECT_SOURCE_DIR}/base/scoped_bstr.h
    ${PROJECT_SOURCE_DIR}/base/scoped_clipboard.cc
    ${PROJECT_SOURCE_DIR}/base/scoped_clipboard.h
    ${PROJECT_SOURCE_DIR}/base/scoped_com_initializer.h
    ${PROJECT_SOURCE_DIR}/base/scoped_comptr.h
    ${PROJECT_SOURCE_DIR}/base/scoped_device_info.h
    ${PROJECT_SOURCE_DIR}/base/scoped_gdi_object.h
    ${PROJECT_SOURCE_DIR}/base/scoped_hdc.h
    ${PROJECT_SOURCE_DIR}/base/scoped_hglobal.h
    ${PROJECT_SOURCE_DIR}/base/scoped_impersonator.cc
    ${PROJECT_SOURCE_DIR}/base/scoped_impersonator.h
    ${PROJECT_SOURCE_DIR}/base/scoped_local.h
    ${PROJECT_SOURCE_DIR}/base/scoped_native_library.h
    ${PROJECT_SOURCE_DIR}/base/scoped_object.h
    ${PROJECT_SOURCE_DIR}/base/scoped_privilege.cc
    ${PROJECT_SOURCE_DIR}/base/scoped_privilege.h
    ${PROJECT_SOURCE_DIR}/base/scoped_refptr.h
    ${PROJECT_SOURCE_DIR}/base/scoped_select_object.h
    ${PROJECT_SOURCE_DIR}/base/scoped_thread_desktop.cc
    ${PROJECT_SOURCE_DIR}/base/scoped_thread_desktop.h
    ${PROJECT_SOURCE_DIR}/base/scoped_user_object.h
    ${PROJECT_SOURCE_DIR}/base/scoped_variant.cc
    ${PROJECT_SOURCE_DIR}/base/scoped_variant.h
    ${PROJECT_SOURCE_DIR}/base/scoped_wts_memory.h
    ${PROJECT_SOURCE_DIR}/base/security_helpers.cc
    ${PROJECT_SOURCE_DIR}/base/security_helpers.h
    ${PROJECT_SOURCE_DIR}/base/service.cc
    ${PROJECT_SOURCE_DIR}/base/service.h
    ${PROJECT_SOURCE_DIR}/base/service_enumerator.cc
    ${PROJECT_SOURCE_DIR}/base/service_enumerator.h
    ${PROJECT_SOURCE_DIR}/base/service_manager.cc
    ${PROJECT_SOURCE_DIR}/base/service_manager.h
    ${PROJECT_SOURCE_DIR}/base/settings.cc
    ${PROJECT_SOURCE_DIR}/base/settings.h
    ${PROJECT_SOURCE_DIR}/base/settings_manager.cc
    ${PROJECT_SOURCE_DIR}/base/settings_manager.h
    ${PROJECT_SOURCE_DIR}/base/settings_registry.cc
    ${PROJECT_SOURCE_DIR}/base/settings_registry.h
    ${PROJECT_SOURCE_DIR}/base/typed_buffer.h
    ${PROJECT_SOURCE_DIR}/base/waitable_timer.cc
    ${PROJECT_SOURCE_DIR}/base/waitable_timer.h)

list(APPEND SOURCE_BASE_DEVICES
    ${PROJECT_SOURCE_DIR}/base/devices/device.cc
    ${PROJECT_SOURCE_DIR}/base/devices/device.h
    ${PROJECT_SOURCE_DIR}/base/devices/device_enumerator.cc
    ${PROJECT_SOURCE_DIR}/base/devices/device_enumerator.h
    ${PROJECT_SOURCE_DIR}/base/devices/device_spti.cc
    ${PROJECT_SOURCE_DIR}/base/devices/device_spti.h
    ${PROJECT_SOURCE_DIR}/base/devices/edid.cc
    ${PROJECT_SOURCE_DIR}/base/devices/edid.h
    ${PROJECT_SOURCE_DIR}/base/devices/monitor_enumerator.cc
    ${PROJECT_SOURCE_DIR}/base/devices/monitor_enumerator.h
    ${PROJECT_SOURCE_DIR}/base/devices/physical_drive_enumerator.cc
    ${PROJECT_SOURCE_DIR}/base/devices/physical_drive_enumerator.h
    ${PROJECT_SOURCE_DIR}/base/devices/physical_drive_smart.h
    ${PROJECT_SOURCE_DIR}/base/devices/physical_drive_util.cc
    ${PROJECT_SOURCE_DIR}/base/devices/physical_drive_util.h
    ${PROJECT_SOURCE_DIR}/base/devices/smbios.cc
    ${PROJECT_SOURCE_DIR}/base/devices/smbios.h
    ${PROJECT_SOURCE_DIR}/base/devices/smbios_reader.cc
    ${PROJECT_SOURCE_DIR}/base/devices/smbios_reader.h
    ${PROJECT_SOURCE_DIR}/base/devices/video_adapter_enumerator.cc
    ${PROJECT_SOURCE_DIR}/base/devices/video_adapter_enumerator.h)

list(APPEND SOURCE_BASE_FILES
    ${PROJECT_SOURCE_DIR}/base/files/base_paths.cc
    ${PROJECT_SOURCE_DIR}/base/files/base_paths.h
    ${PROJECT_SOURCE_DIR}/base/files/file.cc
    ${PROJECT_SOURCE_DIR}/base/files/file.h
    ${PROJECT_SOURCE_DIR}/base/files/file_enumerator.cc
    ${PROJECT_SOURCE_DIR}/base/files/file_enumerator.h
    ${PROJECT_SOURCE_DIR}/base/files/file_helpers.cc
    ${PROJECT_SOURCE_DIR}/base/files/file_helpers.h
    ${PROJECT_SOURCE_DIR}/base/files/file_util.cc
    ${PROJECT_SOURCE_DIR}/base/files/file_util.h
    ${PROJECT_SOURCE_DIR}/base/files/file_win.cc
    ${PROJECT_SOURCE_DIR}/base/files/logical_drive_enumerator.cc
    ${PROJECT_SOURCE_DIR}/base/files/logical_drive_enumerator.h
    ${PROJECT_SOURCE_DIR}/base/files/platform_file.h
    ${PROJECT_SOURCE_DIR}/base/files/scoped_file.h)

list(APPEND SOURCE_BASE_MESSAGE_LOOP
    ${PROJECT_SOURCE_DIR}/base/message_loop/message_loop.cc
    ${PROJECT_SOURCE_DIR}/base/message_loop/message_loop.h
    ${PROJECT_SOURCE_DIR}/base/message_loop/message_loop_proxy.cc
    ${PROJECT_SOURCE_DIR}/base/message_loop/message_loop_proxy.h
    ${PROJECT_SOURCE_DIR}/base/message_loop/message_pump.h
    ${PROJECT_SOURCE_DIR}/base/message_loop/message_pump_default.cc
    ${PROJECT_SOURCE_DIR}/base/message_loop/message_pump_default.h
    ${PROJECT_SOURCE_DIR}/base/message_loop/message_pump_dispatcher.h
    ${PROJECT_SOURCE_DIR}/base/message_loop/message_pump_ui.cc
    ${PROJECT_SOURCE_DIR}/base/message_loop/message_pump_ui.h
    ${PROJECT_SOURCE_DIR}/base/message_loop/pending_task.cc
    ${PROJECT_SOURCE_DIR}/base/message_loop/pending_task.h)

list(APPEND SOURCE_BASE_PROCESS
    ${PROJECT_SOURCE_DIR}/base/process/process.cc
    ${PROJECT_SOURCE_DIR}/base/process/process.h
    ${PROJECT_SOURCE_DIR}/base/process/process_enumerator.cc
    ${PROJECT_SOURCE_DIR}/base/process/process_enumerator.h
    ${PROJECT_SOURCE_DIR}/base/process/process_helpers.cc
    ${PROJECT_SOURCE_DIR}/base/process/process_helpers.h
    ${PROJECT_SOURCE_DIR}/base/process/process_watcher.cc
    ${PROJECT_SOURCE_DIR}/base/process/process_watcher.h)

list(APPEND SOURCE_BASE_STRINGS
    ${PROJECT_SOURCE_DIR}/base/strings/string_printf.cc
    ${PROJECT_SOURCE_DIR}/base/strings/string_printf.h
    ${PROJECT_SOURCE_DIR}/base/strings/string_util.cc
    ${PROJECT_SOURCE_DIR}/base/strings/string_util.h
    ${PROJECT_SOURCE_DIR}/base/strings/string_util_constants.cc
    ${PROJECT_SOURCE_DIR}/base/strings/string_util_constants.h
    ${PROJECT_SOURCE_DIR}/base/strings/unicode.cc
    ${PROJECT_SOURCE_DIR}/base/strings/unicode.h)

list(APPEND SOURCE_BASE_THREADING
    ${PROJECT_SOURCE_DIR}/base/threading/simple_thread.cc
    ${PROJECT_SOURCE_DIR}/base/threading/simple_thread.h
    ${PROJECT_SOURCE_DIR}/base/threading/thread.cc
    ${PROJECT_SOURCE_DIR}/base/threading/thread.h)

list(APPEND SOURCE_CATEGORY
    ${PROJECT_SOURCE_DIR}/category/category.cc
    ${PROJECT_SOURCE_DIR}/category/category.h
    ${PROJECT_SOURCE_DIR}/category/category_application.cc
    ${PROJECT_SOURCE_DIR}/category/category_application.h
    ${PROJECT_SOURCE_DIR}/category/category_application.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_application.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_application.proto
    ${PROJECT_SOURCE_DIR}/category/category_ata.cc
    ${PROJECT_SOURCE_DIR}/category/category_ata.h
    ${PROJECT_SOURCE_DIR}/category/category_ata.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_ata.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_ata.proto
    ${PROJECT_SOURCE_DIR}/category/category_connection.cc
    ${PROJECT_SOURCE_DIR}/category/category_connection.h
    ${PROJECT_SOURCE_DIR}/category/category_connection.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_connection.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_connection.proto
    ${PROJECT_SOURCE_DIR}/category/category_cpu.cc
    ${PROJECT_SOURCE_DIR}/category/category_cpu.h
    ${PROJECT_SOURCE_DIR}/category/category_cpu.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_cpu.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_cpu.proto
    ${PROJECT_SOURCE_DIR}/category/category_dmi_baseboard.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_baseboard.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_baseboard.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_baseboard.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_baseboard.proto
    ${PROJECT_SOURCE_DIR}/category/category_dmi_bios.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_bios.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_bios.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_bios.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_bios.proto
    ${PROJECT_SOURCE_DIR}/category/category_dmi_cache.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_cache.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_cache.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_cache.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_cache.proto
    ${PROJECT_SOURCE_DIR}/category/category_dmi_chassis.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_chassis.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_chassis.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_chassis.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_chassis.proto
    ${PROJECT_SOURCE_DIR}/category/category_dmi_memory_device.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_memory_device.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_memory_device.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_memory_device.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_memory_device.proto
    ${PROJECT_SOURCE_DIR}/category/category_dmi_onboard_device.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_onboard_device.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_onboard_device.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_onboard_device.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_onboard_device.proto
    ${PROJECT_SOURCE_DIR}/category/category_dmi_pointing_device.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_pointing_device.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_pointing_device.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_pointing_device.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_pointing_device.proto
    ${PROJECT_SOURCE_DIR}/category/category_dmi_port_connector.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_port_connector.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_port_connector.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_port_connector.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_port_connector.proto
    ${PROJECT_SOURCE_DIR}/category/category_dmi_portable_battery.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_portable_battery.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_portable_battery.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_portable_battery.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_portable_battery.proto
    ${PROJECT_SOURCE_DIR}/category/category_dmi_processor.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_processor.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_processor.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_processor.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_processor.proto
    ${PROJECT_SOURCE_DIR}/category/category_dmi_system.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_system.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_system.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_system.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_system.proto
    ${PROJECT_SOURCE_DIR}/category/category_dmi_system_slot.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_system_slot.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_system_slot.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_dmi_system_slot.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_dmi_system_slot.proto
    ${PROJECT_SOURCE_DIR}/category/category_driver.cc
    ${PROJECT_SOURCE_DIR}/category/category_driver.h
    ${PROJECT_SOURCE_DIR}/category/category_driver.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_driver.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_driver.proto
    ${PROJECT_SOURCE_DIR}/category/category_environment_variables.cc
    ${PROJECT_SOURCE_DIR}/category/category_environment_variables.h
    ${PROJECT_SOURCE_DIR}/category/category_environment_variables.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_environment_variables.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_environment_variables.proto
    ${PROJECT_SOURCE_DIR}/category/category_eventlog.cc
    ${PROJECT_SOURCE_DIR}/category/category_eventlog.h
    ${PROJECT_SOURCE_DIR}/category/category_eventlog.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_eventlog.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_eventlog.proto
    ${PROJECT_SOURCE_DIR}/category/category_license.cc
    ${PROJECT_SOURCE_DIR}/category/category_license.h
    ${PROJECT_SOURCE_DIR}/category/category_license.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_license.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_license.proto
    ${PROJECT_SOURCE_DIR}/category/category_logical_drive.cc
    ${PROJECT_SOURCE_DIR}/category/category_logical_drive.h
    ${PROJECT_SOURCE_DIR}/category/category_logical_drive.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_logical_drive.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_logical_drive.proto
    ${PROJECT_SOURCE_DIR}/category/category_memory.cc
    ${PROJECT_SOURCE_DIR}/category/category_memory.h
    ${PROJECT_SOURCE_DIR}/category/category_memory.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_memory.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_memory.proto
    ${PROJECT_SOURCE_DIR}/category/category_monitor.cc
    ${PROJECT_SOURCE_DIR}/category/category_monitor.h
    ${PROJECT_SOURCE_DIR}/category/category_monitor.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_monitor.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_monitor.proto
    ${PROJECT_SOURCE_DIR}/category/category_network_card.cc
    ${PROJECT_SOURCE_DIR}/category/category_network_card.h
    ${PROJECT_SOURCE_DIR}/category/category_network_card.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_network_card.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_network_card.proto
    ${PROJECT_SOURCE_DIR}/category/category_open_files.cc
    ${PROJECT_SOURCE_DIR}/category/category_open_files.h
    ${PROJECT_SOURCE_DIR}/category/category_open_files.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_open_files.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_open_files.proto
    ${PROJECT_SOURCE_DIR}/category/category_optical_drive.cc
    ${PROJECT_SOURCE_DIR}/category/category_optical_drive.h
    ${PROJECT_SOURCE_DIR}/category/category_optical_drive.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_optical_drive.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_optical_drive.proto
    ${PROJECT_SOURCE_DIR}/category/category_os.cc
    ${PROJECT_SOURCE_DIR}/category/category_os.h
    ${PROJECT_SOURCE_DIR}/category/category_os.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_os.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_os.proto
    ${PROJECT_SOURCE_DIR}/category/category_power_options.cc
    ${PROJECT_SOURCE_DIR}/category/category_power_options.h
    ${PROJECT_SOURCE_DIR}/category/category_power_options.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_power_options.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_power_options.proto
    ${PROJECT_SOURCE_DIR}/category/category_printer.cc
    ${PROJECT_SOURCE_DIR}/category/category_printer.h
    ${PROJECT_SOURCE_DIR}/category/category_printer.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_printer.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_printer.proto
    ${PROJECT_SOURCE_DIR}/category/category_process.cc
    ${PROJECT_SOURCE_DIR}/category/category_process.h
    ${PROJECT_SOURCE_DIR}/category/category_process.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_process.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_process.proto
    ${PROJECT_SOURCE_DIR}/category/category_ras.cc
    ${PROJECT_SOURCE_DIR}/category/category_ras.h
    ${PROJECT_SOURCE_DIR}/category/category_ras.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_ras.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_ras.proto
    ${PROJECT_SOURCE_DIR}/category/category_route.cc
    ${PROJECT_SOURCE_DIR}/category/category_route.h
    ${PROJECT_SOURCE_DIR}/category/category_route.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_route.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_route.proto
    ${PROJECT_SOURCE_DIR}/category/category_service.cc
    ${PROJECT_SOURCE_DIR}/category/category_service.h
    ${PROJECT_SOURCE_DIR}/category/category_service.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_service.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_service.proto
    ${PROJECT_SOURCE_DIR}/category/category_session.cc
    ${PROJECT_SOURCE_DIR}/category/category_session.h
    ${PROJECT_SOURCE_DIR}/category/category_session.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_session.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_session.proto
    ${PROJECT_SOURCE_DIR}/category/category_share.cc
    ${PROJECT_SOURCE_DIR}/category/category_share.h
    ${PROJECT_SOURCE_DIR}/category/category_share.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_share.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_share.proto
    ${PROJECT_SOURCE_DIR}/category/category_smart.cc
    ${PROJECT_SOURCE_DIR}/category/category_smart.h
    ${PROJECT_SOURCE_DIR}/category/category_smart.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_smart.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_smart.proto
    ${PROJECT_SOURCE_DIR}/category/category_task_scheduler.cc
    ${PROJECT_SOURCE_DIR}/category/category_task_scheduler.h
    ${PROJECT_SOURCE_DIR}/category/category_task_scheduler.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_task_scheduler.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_task_scheduler.proto
    ${PROJECT_SOURCE_DIR}/category/category_update.cc
    ${PROJECT_SOURCE_DIR}/category/category_update.h
    ${PROJECT_SOURCE_DIR}/category/category_update.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_update.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_update.proto
    ${PROJECT_SOURCE_DIR}/category/category_user.cc
    ${PROJECT_SOURCE_DIR}/category/category_user.h
    ${PROJECT_SOURCE_DIR}/category/category_user.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_user.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_user.proto
    ${PROJECT_SOURCE_DIR}/category/category_user_group.cc
    ${PROJECT_SOURCE_DIR}/category/category_user_group.h
    ${PROJECT_SOURCE_DIR}/category/category_user_group.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_user_group.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_user_group.proto
    ${PROJECT_SOURCE_DIR}/category/category_video_adapter.cc
    ${PROJECT_SOURCE_DIR}/category/category_video_adapter.h
    ${PROJECT_SOURCE_DIR}/category/category_video_adapter.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_video_adapter.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_video_adapter.proto
    ${PROJECT_SOURCE_DIR}/category/category_windows_device.cc
    ${PROJECT_SOURCE_DIR}/category/category_windows_device.h
    ${PROJECT_SOURCE_DIR}/category/category_windows_device.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_windows_device.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_windows_device.proto
    ${PROJECT_SOURCE_DIR}/category/category_wsus.cc
    ${PROJECT_SOURCE_DIR}/category/category_wsus.h
    ${PROJECT_SOURCE_DIR}/category/category_wsus.pb.cc
    ${PROJECT_SOURCE_DIR}/category/category_wsus.pb.h
    ${PROJECT_SOURCE_DIR}/category/category_wsus.proto)

list(APPEND SOURCE_CLIENT
    ${PROJECT_SOURCE_DIR}/client/client.cc
    ${PROJECT_SOURCE_DIR}/client/client.h
    ${PROJECT_SOURCE_DIR}/client/client_main.cc
    ${PROJECT_SOURCE_DIR}/client/client_main.h
    ${PROJECT_SOURCE_DIR}/client/client_session.h
    ${PROJECT_SOURCE_DIR}/client/client_session_desktop_manage.cc
    ${PROJECT_SOURCE_DIR}/client/client_session_desktop_manage.h
    ${PROJECT_SOURCE_DIR}/client/client_session_desktop_view.cc
    ${PROJECT_SOURCE_DIR}/client/client_session_desktop_view.h)

list(APPEND SOURCE_CLIENT_UI
    ${PROJECT_SOURCE_DIR}/client/ui/authorization_dialog.cc
    ${PROJECT_SOURCE_DIR}/client/ui/authorization_dialog.h
    ${PROJECT_SOURCE_DIR}/client/ui/authorization_dialog.ui
    ${PROJECT_SOURCE_DIR}/client/ui/client_dialog.cc
    ${PROJECT_SOURCE_DIR}/client/ui/client_dialog.h
    ${PROJECT_SOURCE_DIR}/client/ui/client_dialog.ui
    ${PROJECT_SOURCE_DIR}/client/ui/desktop_config_dialog.cc
    ${PROJECT_SOURCE_DIR}/client/ui/desktop_config_dialog.h
    ${PROJECT_SOURCE_DIR}/client/ui/desktop_config_dialog.ui
    ${PROJECT_SOURCE_DIR}/client/ui/desktop_panel.cc
    ${PROJECT_SOURCE_DIR}/client/ui/desktop_panel.h
    ${PROJECT_SOURCE_DIR}/client/ui/desktop_panel.ui
    ${PROJECT_SOURCE_DIR}/client/ui/desktop_widget.cc
    ${PROJECT_SOURCE_DIR}/client/ui/desktop_widget.h
    ${PROJECT_SOURCE_DIR}/client/ui/desktop_window.cc
    ${PROJECT_SOURCE_DIR}/client/ui/desktop_window.h
    ${PROJECT_SOURCE_DIR}/client/ui/desktop_window.ui
    ${PROJECT_SOURCE_DIR}/client/ui/key_sequence_dialog.cc
    ${PROJECT_SOURCE_DIR}/client/ui/key_sequence_dialog.h
    ${PROJECT_SOURCE_DIR}/client/ui/key_sequence_dialog.ui
    ${PROJECT_SOURCE_DIR}/client/ui/status_dialog.cc
    ${PROJECT_SOURCE_DIR}/client/ui/status_dialog.h
    ${PROJECT_SOURCE_DIR}/client/ui/status_dialog.ui)

list(APPEND SOURCE_CODEC
    ${PROJECT_SOURCE_DIR}/codec/compressor.h
    ${PROJECT_SOURCE_DIR}/codec/compressor_zlib.cc
    ${PROJECT_SOURCE_DIR}/codec/compressor_zlib.h
    ${PROJECT_SOURCE_DIR}/codec/cursor_decoder.cc
    ${PROJECT_SOURCE_DIR}/codec/cursor_decoder.h
    ${PROJECT_SOURCE_DIR}/codec/cursor_encoder.cc
    ${PROJECT_SOURCE_DIR}/codec/cursor_encoder.h
    ${PROJECT_SOURCE_DIR}/codec/decompressor.h
    ${PROJECT_SOURCE_DIR}/codec/decompressor_zlib.cc
    ${PROJECT_SOURCE_DIR}/codec/decompressor_zlib.h
    ${PROJECT_SOURCE_DIR}/codec/pixel_translator.cc
    ${PROJECT_SOURCE_DIR}/codec/pixel_translator.h
    ${PROJECT_SOURCE_DIR}/codec/scoped_vpx_codec.cc
    ${PROJECT_SOURCE_DIR}/codec/scoped_vpx_codec.h
    ${PROJECT_SOURCE_DIR}/codec/video_decoder.cc
    ${PROJECT_SOURCE_DIR}/codec/video_decoder.h
    ${PROJECT_SOURCE_DIR}/codec/video_decoder_vpx.cc
    ${PROJECT_SOURCE_DIR}/codec/video_decoder_vpx.h
    ${PROJECT_SOURCE_DIR}/codec/video_decoder_zlib.cc
    ${PROJECT_SOURCE_DIR}/codec/video_decoder_zlib.h
    ${PROJECT_SOURCE_DIR}/codec/video_encoder.h
    ${PROJECT_SOURCE_DIR}/codec/video_encoder_vpx.cc
    ${PROJECT_SOURCE_DIR}/codec/video_encoder_vpx.h
    ${PROJECT_SOURCE_DIR}/codec/video_encoder_zlib.cc
    ${PROJECT_SOURCE_DIR}/codec/video_encoder_zlib.h
    ${PROJECT_SOURCE_DIR}/codec/video_helpers.cc
    ${PROJECT_SOURCE_DIR}/codec/video_helpers.h)

list(APPEND SOURCE_CRYPTO
    ${PROJECT_SOURCE_DIR}/crypto/random.cc
    ${PROJECT_SOURCE_DIR}/crypto/random.h
    ${PROJECT_SOURCE_DIR}/crypto/string_encryptor.cc
    ${PROJECT_SOURCE_DIR}/crypto/string_encryptor.h)

list(APPEND SOURCE_DESKTOP_CAPTURE
    ${PROJECT_SOURCE_DIR}/desktop_capture/capture_scheduler.cc
    ${PROJECT_SOURCE_DIR}/desktop_capture/capture_scheduler.h
    ${PROJECT_SOURCE_DIR}/desktop_capture/capturer.h
    ${PROJECT_SOURCE_DIR}/desktop_capture/capturer_gdi.cc
    ${PROJECT_SOURCE_DIR}/desktop_capture/capturer_gdi.h
    ${PROJECT_SOURCE_DIR}/desktop_capture/desktop_frame.cc
    ${PROJECT_SOURCE_DIR}/desktop_capture/desktop_frame.h
    ${PROJECT_SOURCE_DIR}/desktop_capture/desktop_frame_aligned.cc
    ${PROJECT_SOURCE_DIR}/desktop_capture/desktop_frame_aligned.h
    ${PROJECT_SOURCE_DIR}/desktop_capture/desktop_frame_dib.cc
    ${PROJECT_SOURCE_DIR}/desktop_capture/desktop_frame_dib.h
    ${PROJECT_SOURCE_DIR}/desktop_capture/desktop_frame_qimage.cc
    ${PROJECT_SOURCE_DIR}/desktop_capture/desktop_frame_qimage.h
    ${PROJECT_SOURCE_DIR}/desktop_capture/diff_block_sse2.cc
    ${PROJECT_SOURCE_DIR}/desktop_capture/diff_block_sse2.h
    ${PROJECT_SOURCE_DIR}/desktop_capture/differ.cc
    ${PROJECT_SOURCE_DIR}/desktop_capture/differ.h
    ${PROJECT_SOURCE_DIR}/desktop_capture/mouse_cursor.cc
    ${PROJECT_SOURCE_DIR}/desktop_capture/mouse_cursor.h
    ${PROJECT_SOURCE_DIR}/desktop_capture/mouse_cursor_cache.cc
    ${PROJECT_SOURCE_DIR}/desktop_capture/mouse_cursor_cache.h
    ${PROJECT_SOURCE_DIR}/desktop_capture/pixel_format.cc
    ${PROJECT_SOURCE_DIR}/desktop_capture/pixel_format.h)

list(APPEND SOURCE_HOST
    ${PROJECT_SOURCE_DIR}/host/clipboard_thread.cc
    ${PROJECT_SOURCE_DIR}/host/clipboard_thread.h
    ${PROJECT_SOURCE_DIR}/host/console_session_watcher.cc
    ${PROJECT_SOURCE_DIR}/host/console_session_watcher.h
    ${PROJECT_SOURCE_DIR}/host/host.cc
    ${PROJECT_SOURCE_DIR}/host/host.h
    ${PROJECT_SOURCE_DIR}/host/host_config_main.cc
    ${PROJECT_SOURCE_DIR}/host/host_config_main.h
    ${PROJECT_SOURCE_DIR}/host/host_main.cc
    ${PROJECT_SOURCE_DIR}/host/host_main.h
    ${PROJECT_SOURCE_DIR}/host/host_pool.cc
    ${PROJECT_SOURCE_DIR}/host/host_pool.h
    ${PROJECT_SOURCE_DIR}/host/host_process_connector.cc
    ${PROJECT_SOURCE_DIR}/host/host_process_connector.h
    ${PROJECT_SOURCE_DIR}/host/host_service.cc
    ${PROJECT_SOURCE_DIR}/host/host_service.h
    ${PROJECT_SOURCE_DIR}/host/host_service_main.cc
    ${PROJECT_SOURCE_DIR}/host/host_service_main.h
    ${PROJECT_SOURCE_DIR}/host/host_session.cc
    ${PROJECT_SOURCE_DIR}/host/host_session.h
    ${PROJECT_SOURCE_DIR}/host/host_session_desktop.cc
    ${PROJECT_SOURCE_DIR}/host/host_session_desktop.h
    ${PROJECT_SOURCE_DIR}/host/host_session_file_transfer.cc
    ${PROJECT_SOURCE_DIR}/host/host_session_file_transfer.h
    ${PROJECT_SOURCE_DIR}/host/host_session_launcher.cc
    ${PROJECT_SOURCE_DIR}/host/host_session_launcher.h
    ${PROJECT_SOURCE_DIR}/host/host_session_system_info.cc
    ${PROJECT_SOURCE_DIR}/host/host_session_system_info.h
    ${PROJECT_SOURCE_DIR}/host/host_switches.cc
    ${PROJECT_SOURCE_DIR}/host/host_switches.h
    ${PROJECT_SOURCE_DIR}/host/input_injector.cc
    ${PROJECT_SOURCE_DIR}/host/input_injector.h
    ${PROJECT_SOURCE_DIR}/host/scoped_sas_police.cc
    ${PROJECT_SOURCE_DIR}/host/scoped_sas_police.h
    ${PROJECT_SOURCE_DIR}/host/screen_updater.cc
    ${PROJECT_SOURCE_DIR}/host/screen_updater.h
    ${PROJECT_SOURCE_DIR}/host/user.cc
    ${PROJECT_SOURCE_DIR}/host/user.h
    ${PROJECT_SOURCE_DIR}/host/user_list.cc
    ${PROJECT_SOURCE_DIR}/host/user_list.h)

list(APPEND SOURCE_HOST_UI
    ${PROJECT_SOURCE_DIR}/host/ui/user_dialog.cc
    ${PROJECT_SOURCE_DIR}/host/ui/user_dialog.h
    ${PROJECT_SOURCE_DIR}/host/ui/user_dialog.ui
    ${PROJECT_SOURCE_DIR}/host/ui/user_list_dialog.cc
    ${PROJECT_SOURCE_DIR}/host/ui/user_list_dialog.h
    ${PROJECT_SOURCE_DIR}/host/ui/user_list_dialog.ui
    ${PROJECT_SOURCE_DIR}/host/ui/user_tree_item.cc
    ${PROJECT_SOURCE_DIR}/host/ui/user_tree_item.h)

list(APPEND SOURCE_IPC
    ${PROJECT_SOURCE_DIR}/ipc/pipe_channel.cc
    ${PROJECT_SOURCE_DIR}/ipc/pipe_channel.h
    ${PROJECT_SOURCE_DIR}/ipc/pipe_channel_proxy.cc
    ${PROJECT_SOURCE_DIR}/ipc/pipe_channel_proxy.h)

list(APPEND SOURCE_NETWORK
    ${PROJECT_SOURCE_DIR}/network/channel.cc
    ${PROJECT_SOURCE_DIR}/network/channel.h
    ${PROJECT_SOURCE_DIR}/network/firewall_manager.cc
    ${PROJECT_SOURCE_DIR}/network/firewall_manager.h
    ${PROJECT_SOURCE_DIR}/network/network_adapter_enumerator.cc
    ${PROJECT_SOURCE_DIR}/network/network_adapter_enumerator.h
    ${PROJECT_SOURCE_DIR}/network/network_channel.cc
    ${PROJECT_SOURCE_DIR}/network/network_channel.h
    ${PROJECT_SOURCE_DIR}/network/network_channel_proxy.cc
    ${PROJECT_SOURCE_DIR}/network/network_channel_proxy.h
    ${PROJECT_SOURCE_DIR}/network/network_channel_tcp.cc
    ${PROJECT_SOURCE_DIR}/network/network_channel_tcp.h
    ${PROJECT_SOURCE_DIR}/network/network_server_tcp.cc
    ${PROJECT_SOURCE_DIR}/network/network_server_tcp.h)

list(APPEND SOURCE_PROTO
    ${PROJECT_SOURCE_DIR}/proto/address_book.pb.cc
    ${PROJECT_SOURCE_DIR}/proto/address_book.pb.h
    ${PROJECT_SOURCE_DIR}/proto/address_book.proto
    ${PROJECT_SOURCE_DIR}/proto/auth_session.pb.cc
    ${PROJECT_SOURCE_DIR}/proto/auth_session.pb.h
    ${PROJECT_SOURCE_DIR}/proto/auth_session.proto
    ${PROJECT_SOURCE_DIR}/proto/computer.pb.cc
    ${PROJECT_SOURCE_DIR}/proto/computer.pb.h
    ${PROJECT_SOURCE_DIR}/proto/computer.proto
    ${PROJECT_SOURCE_DIR}/proto/desktop_session.pb.cc
    ${PROJECT_SOURCE_DIR}/proto/desktop_session.pb.h
    ${PROJECT_SOURCE_DIR}/proto/desktop_session.proto
    ${PROJECT_SOURCE_DIR}/proto/file_transfer_session.pb.cc
    ${PROJECT_SOURCE_DIR}/proto/file_transfer_session.pb.h
    ${PROJECT_SOURCE_DIR}/proto/file_transfer_session.proto
    ${PROJECT_SOURCE_DIR}/proto/key_exchange.pb.cc
    ${PROJECT_SOURCE_DIR}/proto/key_exchange.pb.h
    ${PROJECT_SOURCE_DIR}/proto/key_exchange.proto
    ${PROJECT_SOURCE_DIR}/proto/system_info_session.pb.cc
    ${PROJECT_SOURCE_DIR}/proto/system_info_session.pb.h
    ${PROJECT_SOURCE_DIR}/proto/system_info_session.proto)

list(APPEND SOURCE_PROTOCOL
    ${PROJECT_SOURCE_DIR}/protocol/clipboard.cc
    ${PROJECT_SOURCE_DIR}/protocol/clipboard.h
    ${PROJECT_SOURCE_DIR}/protocol/file_depacketizer.cc
    ${PROJECT_SOURCE_DIR}/protocol/file_depacketizer.h
    ${PROJECT_SOURCE_DIR}/protocol/file_packetizer.cc
    ${PROJECT_SOURCE_DIR}/protocol/file_packetizer.h
    ${PROJECT_SOURCE_DIR}/protocol/filesystem.cc
    ${PROJECT_SOURCE_DIR}/protocol/filesystem.h
    ${PROJECT_SOURCE_DIR}/protocol/keycode_converter.cc
    ${PROJECT_SOURCE_DIR}/protocol/keycode_converter.h
    ${PROJECT_SOURCE_DIR}/protocol/message_serialization.h)

list(APPEND SOURCE_REPORT
    ${PROJECT_SOURCE_DIR}/report/column_list.cc
    ${PROJECT_SOURCE_DIR}/report/column_list.h
    ${PROJECT_SOURCE_DIR}/report/group.cc
    ${PROJECT_SOURCE_DIR}/report/group.h
    ${PROJECT_SOURCE_DIR}/report/report.h
    ${PROJECT_SOURCE_DIR}/report/report_creator.cc
    ${PROJECT_SOURCE_DIR}/report/report_creator.h
    ${PROJECT_SOURCE_DIR}/report/report_creator_proxy.cc
    ${PROJECT_SOURCE_DIR}/report/report_creator_proxy.h
    ${PROJECT_SOURCE_DIR}/report/report_html_file.cc
    ${PROJECT_SOURCE_DIR}/report/report_html_file.h
    ${PROJECT_SOURCE_DIR}/report/report_json_file.cc
    ${PROJECT_SOURCE_DIR}/report/report_json_file.h
    ${PROJECT_SOURCE_DIR}/report/report_xml_file.cc
    ${PROJECT_SOURCE_DIR}/report/report_xml_file.h
    ${PROJECT_SOURCE_DIR}/report/row.cc
    ${PROJECT_SOURCE_DIR}/report/row.h
    ${PROJECT_SOURCE_DIR}/report/table.cc
    ${PROJECT_SOURCE_DIR}/report/table.h
    ${PROJECT_SOURCE_DIR}/report/value.cc
    ${PROJECT_SOURCE_DIR}/report/value.h)

list(APPEND SOURCE_RESOURCES
    ${PROJECT_SOURCE_DIR}/resources/resources.qrc)

list(APPEND SOURCE_UI
    ${PROJECT_SOURCE_DIR}/ui/misc.cc
    ${PROJECT_SOURCE_DIR}/ui/misc.h
    ${PROJECT_SOURCE_DIR}/ui/resource.h)

list(APPEND SOURCE_UI_FILE_TRANSFER
    ${PROJECT_SOURCE_DIR}/ui/file_transfer/file_status_dialog.cc
    ${PROJECT_SOURCE_DIR}/ui/file_transfer/file_status_dialog.h)

list(APPEND SOURCE_UI_LANG
    ${PROJECT_SOURCE_DIR}/ui/lang/en-US.rc)

list(APPEND SOURCE
    ${PROJECT_SOURCE_DIR}/build_config.cc
    ${PROJECT_SOURCE_DIR}/build_config.h
    ${PROJECT_SOURCE_DIR}/export.h
    ${PROJECT_SOURCE_DIR}/global.h
    ${PROJECT_SOURCE_DIR}/aspia_core.rc)
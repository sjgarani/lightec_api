add_library(lightec_api INTERFACE)
target_include_directories(lightec_api INTERFACE include)
set_target_properties(lightec_api PROPERTIES
    "INTERFACE_DESCRIPTOR"
    "${CMAKE_CURRENT_LIST_DIR}/avro/generated/com.garani.lightec.api.LedService.avpr")
add_library(backend STATIC
    dummy.cpp
)

target_include_directories(backend PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
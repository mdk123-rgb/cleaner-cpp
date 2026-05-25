find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(SystemCleaner)

target_sources(SystemCleaner PRIVATE
    main.cpp
)

target_link_libraries(SystemCleaner PRIVATE Qt6::Widgets backend)
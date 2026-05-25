find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(SystemCleaner)

target_sources(SystemCleaner PRIVATE
    main.cpp
    mainWindow.cpp
)

target_link_libraries(SystemCleaner PRIVATE Qt6::Widgets backend)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
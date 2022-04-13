cmake_minimum_required(VERSION 3.9.0)
project(smtp)

set(SOURCES
        src/emailaddress.cpp
        src/mimeattachment.cpp
        src/mimecontentformatter.cpp
        src/mimefile.cpp
        src/mimehtml.cpp
        src/mimeinlinefile.cpp
        src/mimemessage.cpp
        src/mimemultipart.cpp
        src/mimepart.cpp
        src/mimetext.cpp
        src/quotedprintable.cpp
        src/smtpclient.cpp
)

set(HEADERS
        include/${PROJECT_NAME}/emailaddress.h
        include/${PROJECT_NAME}/mimeattachment.h
        include/${PROJECT_NAME}/mimecontentformatter.h
        include/${PROJECT_NAME}/mimefile.h
        include/${PROJECT_NAME}/mimehtml.h
        include/${PROJECT_NAME}/mimeinlinefile.h
        include/${PROJECT_NAME}/mimemessage.h
        include/${PROJECT_NAME}/mimemultipart.h
        include/${PROJECT_NAME}/mimepart.h
        include/${PROJECT_NAME}/mimetext.h
        include/${PROJECT_NAME}/quotedprintable.h
        include/${PROJECT_NAME}/smtpclient.h
)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_COLOR_MAKEFILE   ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Core CONFIG REQUIRED)

add_library(${PROJECT_NAME} "" ${SOURCES} ${HEADERS})
include(GenerateExportHeader)
generate_export_header(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC include/${PROJECT_NAME} ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries(${PROJECT_NAME}
        PUBLIC
                Qt5::Core
                Qt5::Network
)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17)

project(Bindings.Sofa.Helper)

set(HEADER_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/Binding_Utils.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Binding_Vector.h
    ${CMAKE_CURRENT_SOURCE_DIR}/System/Submodule_System.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Binding_MessageHandler.h
    ${CMAKE_CURRENT_SOURCE_DIR}/System/Binding_FileRepository.h
)

set(SOURCE_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/Submodule_Helper.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Binding_MessageHandler.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Binding_Utils.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Binding_Vector.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/System/Submodule_System.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/System/Binding_FileRepository.cpp
)

sofa_find_package(Sofa.Core REQUIRED)

SP3_add_python_module(
    TARGET       ${PROJECT_NAME}
    PACKAGE      Bindings.Sofa
    MODULE       Helper
    DESTINATION  Sofa
    SOURCES      ${SOURCE_FILES}
    HEADERS      ${HEADER_FILES}
    DEPENDS      Sofa.Core SofaPython3::Plugin
)

cmake_minimum_required(VERSION 3.10)

project(hlsl2glslfork)

option(HLSL2GLSL_TEST "Enable tests" OFF)
option(HLSL2GLSL_GENERATE "Generate bison & flex files" OFF)

set(HEADER_FILES
    hlslang/Include/BaseTypes.h
    hlslang/Include/Common.h
    hlslang/Include/InfoSink.h
    hlslang/Include/InitializeGlobals.h
    hlslang/Include/InitializeParseContext.h
    hlslang/Include/intermediate.h
    hlslang/Include/PoolAlloc.h
    hlslang/Include/Types.h
    hlslang/MachineIndependent/SymbolTable.h)
source_group("Header Files" FILES ${HEADER_FILES})

set(GLSL_CODE_GEN_FILES
    hlslang/GLSLCodeGen/glslCommon.cpp
    hlslang/GLSLCodeGen/glslCommon.h
    hlslang/GLSLCodeGen/glslFunction.cpp
    hlslang/GLSLCodeGen/glslFunction.h
    hlslang/GLSLCodeGen/glslOutput.cpp
    hlslang/GLSLCodeGen/glslOutput.h
    hlslang/GLSLCodeGen/glslStruct.cpp
    hlslang/GLSLCodeGen/glslStruct.h
    hlslang/GLSLCodeGen/glslSymbol.cpp
    hlslang/GLSLCodeGen/glslSymbol.h
    hlslang/GLSLCodeGen/hlslCrossCompiler.cpp
    hlslang/GLSLCodeGen/hlslCrossCompiler.h
    hlslang/GLSLCodeGen/hlslLinker.cpp
    hlslang/GLSLCodeGen/hlslLinker.h
    hlslang/GLSLCodeGen/hlslSupportLib.cpp
    hlslang/GLSLCodeGen/hlslSupportLib.h
    hlslang/GLSLCodeGen/propagateMutable.cpp
    hlslang/GLSLCodeGen/propagateMutable.h
    hlslang/GLSLCodeGen/typeSamplers.cpp
    hlslang/GLSLCodeGen/typeSamplers.h)
source_group("GLSL Code Gen" FILES ${GLSL_CODE_GEN_FILES})

set(INCLUDE_FILES include)

source_group("include" FILES ${INCLUDE_FILES})

set(MACHINE_INDEPENDENT_FILES
    hlslang/MachineIndependent/HLSL2GLSL.cpp
    hlslang/MachineIndependent/hlslang.l
    hlslang/MachineIndependent/hlslang.y
    hlslang/MachineIndependent/hlslang_tab.cpp
    hlslang/MachineIndependent/InfoSink.cpp
    hlslang/MachineIndependent/Initialize.cpp
    hlslang/MachineIndependent/Initialize.h
    hlslang/MachineIndependent/Intermediate.cpp
    hlslang/MachineIndependent/intermOut.cpp
    hlslang/MachineIndependent/IntermTraverse.cpp
    hlslang/MachineIndependent/localintermediate.h
    # hlslang/MachineIndependent/parseConst.cpp
    hlslang/MachineIndependent/ParseHelper.cpp
    hlslang/MachineIndependent/ParseHelper.h
    hlslang/MachineIndependent/PoolAlloc.cpp
    hlslang/MachineIndependent/RemoveTree.cpp
    hlslang/MachineIndependent/RemoveTree.h
    hlslang/MachineIndependent/SymbolTable.cpp
    hlslang/MachineIndependent/SymbolTable.h
    hlslang/MachineIndependent/ConstantFolding.cpp)

source_group("Machine Independent" FILES ${MACHINE_INDEPENDENT_FILES})

set(MACHINE_INDEPENDENT_CPP_FILES
    hlslang/MachineIndependent/preprocessor/mojoshader_common.cpp
    hlslang/MachineIndependent/preprocessor/mojoshader_internal.h
    hlslang/MachineIndependent/preprocessor/mojoshader_lexer.cpp
    hlslang/MachineIndependent/preprocessor/mojoshader_preprocessor.cpp
    hlslang/MachineIndependent/preprocessor/mojoshader.cpp
    hlslang/MachineIndependent/preprocessor/mojoshader.h
    hlslang/MachineIndependent/preprocessor/sourceloc.cpp
    hlslang/MachineIndependent/preprocessor/sourceloc.h)

source_group("Machine Independent\\CPP" FILES ${MACHINE_INDEPENDENT_CPP_FILES})

set(MACHINE_INDEPENDENT_GENERATED_SOURCE_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/hlslang/MachineIndependent/gen_hlslang.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/hlslang/MachineIndependent/hlslang_tab.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/hlslang/MachineIndependent/hlslang_tab.h)

source_group("Machine Independent\\Generated Source"
             FILES ${MACHINE_INDEPENDENT_GENERATED_SOURCE_FILES})

# Add BISON & FLEX targets
if(HLSL2GLSL_GENERATE)
  find_package(BISON REQUIRED)
  find_package(FLEX REQUIRED)
  bison_target(
    HLSLLangTab hlslang/MachineIndependent/hlslang.y
    ${CMAKE_CURRENT_SOURCE_DIR}/hlslang/MachineIndependent/hlslang_tab.cpp
    DEFINES_FILE
      ${CMAKE_CURRENT_SOURCE_DIR}/hlslang/MachineIndependent/hlslang_tab.h)
  flex_target(
    HLSLLang hlslang/MachineIndependent/hlslang.l
    ${CMAKE_CURRENT_SOURCE_DIR}/hlslang/MachineIndependent/gen_hlslang.cpp)
  add_flex_bison_dependency(HLSLLang HLSLLangTab)
endif()

# OS dependent
set(OSDEPENDENT_INCLUDE_DIR "")
if(WIN32)
  set(OSDEPENDENT_FILES
      hlslang/OSDependent/Windows/main.cpp
      hlslang/OSDependent/Windows/osinclude.h
      hlslang/OSDependent/Windows/ossource.cpp)
  set(OSDEPENDENT_INCLUDE_DIR hlslang/OSDependent/Windows)
  source_group("OSDependent\\Windows" FILES ${OSDEPENDENT_FILES})
elseif(APPLE)
  set(OSDEPENDENT_FILES hlslang/OSDependent/Mac/osinclude.h
                        hlslang/OSDependent/Mac/ossource.cpp)
  set(OSDEPENDENT_INCLUDE_DIR hlslang/OSDependent/Mac)
  source_group("OSDependent\\Mac" FILES ${OSDEPENDENT_FILES})
  find_library(OPENGL_LIBRARY OpenGL)
  find_library(COCOA_LIBRARY Cocoa)
elseif(UNIX)
  set(OSDEPENDENT_FILES hlslang/OSDependent/Linux/osinclude.h
                        hlslang/OSDependent/Linux/ossource.cpp)
  set(OSDEPENDENT_INCLUDE_DIR hlslang/OSDependent/Linux)
  source_group("OSDependent\\Linux" FILES ${OSDEPENDENT_FILES})
endif()

add_library(
  hlsl2glsl
  ${HEADER_FILES}
  ${GLSL_CODE_GEN_FILES}
  ${INCLUDE_FILES}
  ${MACHINE_INDEPENDENT_FILES}
  ${MACHINE_INDEPENDENT_CPP_FILES}
  ${OSDEPENDENT_FILES}
  ${MACHINE_INDEPENDENT_GENERATED_SOURCE_FILES})
target_include_directories(
  hlsl2glsl
  PRIVATE ${OSDEPENDENT_INCLUDE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/hlslang
          ${CMAKE_CURRENT_SOURCE_DIR}/hlslang/MachineIndependent)
target_include_directories(hlsl2glsl PUBLIC ${INCLUDE_FILES})

if(HLSL2GLSL_TEST)
  add_executable(hlsl2glsltest tests/hlsl2glsltest/hlsl2glsltest.cpp)
  find_package(OpenGL REQUIRED)
  target_link_libraries(hlsl2glsltest hlsl2glsl OpenGL::GL)
  if(UNIX)
    find_package(GLEW REQUIRED)
    find_package(GLUT REQUIRED)
    target_link_libraries(hlsl2glsltest hlsl2glsl GLEW::GLEW GLUT::GLUT)
  endif()
endif()

cmake_minimum_required(VERSION 3.20)

project(sp_26_27 LANGUAGES CXX)

# Select the session and folder to show in the IDE, then reload CMake.
set(ACTIVE_AUD "aud2")
set(ACTIVE_FOLDER "starters") # starters, solved, prep, or your own practice folder

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXERCISE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/aud/${ACTIVE_AUD}/${ACTIVE_FOLDER}")

if(NOT IS_DIRECTORY "${EXERCISE_DIR}")
    message(FATAL_ERROR "Selected exercise folder does not exist: ${EXERCISE_DIR}")
endif()

file(GLOB EXERCISES CONFIGURE_DEPENDS
        "${EXERCISE_DIR}/*.cpp"
)

# Legacy source files are preserved as comments, not executable programs.
list(FILTER EXERCISES EXCLUDE REGEX "/old/")

if(NOT EXERCISES)
    message(FATAL_ERROR "No C++ exercises found in: ${EXERCISE_DIR}")
endif()

foreach(SOURCE_FILE IN LISTS EXERCISES)

    file(RELATIVE_PATH REL_PATH
            "${CMAKE_SOURCE_DIR}"
            "${SOURCE_FILE}"
    )

    string(REPLACE "/" "_" TARGET_NAME "${REL_PATH}")
    string(REPLACE ".cpp" "" TARGET_NAME "${TARGET_NAME}")

    add_executable("${TARGET_NAME}" "${SOURCE_FILE}")

endforeach()

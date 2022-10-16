SET(SRC_LIST ${PROJECT_SOURCE_DIR}/src/main.cc)

file(GLOB SRCS "*.cc")
file(GLOB HDRS "*.h")
message(STATUS "srcs:${SRCS}  hdrs:${HDRS}")
ADD_EXECUTABLE(hello ${SRCS} ${HDRS})

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/output)
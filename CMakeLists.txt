cmake_minimum_required(VERSION 3.16)

# set the project name
project(SignallingServer)

include(FetchContent)

FetchContent_Declare(
  gRPC
  GIT_REPOSITORY https://github.com/grpc/grpc
  GIT_TAG        v1.28.0
  )
set(FETCHCONTENT_QUIET OFF)
FetchContent_MakeAvailable(gRPC)

# define libraries
set(_PROTOBUF_LIBPROTOBUF libprotobuf)
set(_REFLECTION grpc++_reflection)
set(_PROTOBUF_PROTOC $<TARGET_FILE:protoc>)
set(_GRPC_GRPCPP grpc++)
set(CMAKE_CXX_FLAGS "-O0")

# message(FATAL_ERROR $<TARGET_FILE:protoc>)

# Generated sources
set(auth_proto_srcs "build/gen/auth.pb.cc")
set(auth_proto_hdrs "build/gen/auth.pb.h")
set(auth_grpc_srcs "build/gen/auth.grpc.pb.cc")
set(auth_grpc_hdrs "build/gen/auth.grpc.pb.h")

# /media/dan/storage/projects/signalling-server-cpp/build/_deps/grpc-build/third_party/protobuf/protoc -I ./proto --grpc_out=./build/gen --plugin=protoc-gen-grpc=/media/dan/storage/projects/signalling-server-cpp/build/_deps/grpc-build/grpc_cpp_plugin ./proto/auth.proto
# /media/dan/storage/projects/signalling-server-cpp/build/_deps/grpc-build/third_party/protobuf/protoc -I ./proto --cpp_out=./build/gen ./proto/auth.proto

# Proto file
get_filename_component(auth_proto "proto/auth.proto" ABSOLUTE)

# add_custom_command(
#       OUTPUT "${auth_grpc_srcs}" "${auth_grpc_hdrs}" "${auth_proto_srcs}" "${auth_proto_hdrs}"
#       COMMAND ${_PROTOBUF_PROTOC}
#       ARGS --grpc_out "build/gen"
#         --cpp_out "build/gen"
#         -I "./proto"
#         --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
#         "${auth_proto}"
#       DEPENDS "${auth_proto}")

# Include generated *.pb.h files
include_directories("${CMAKE_CURRENT_BINARY_DIR}")

# auth_grpc_proto
add_library(auth_grpc_proto
  ${auth_grpc_srcs}
  ${auth_grpc_hdrs}
  ${auth_proto_srcs}
  ${auth_proto_hdrs})
target_link_libraries(auth_grpc_proto
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF})

# boost
FIND_PACKAGE( Boost 1.71 COMPONENTS program_options REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

# add the executable
add_executable(SignallingServer
src/main.cpp
src/signalling/server.cpp
src/socket/server.cpp
src/socket/session.cpp
src/socket/error.cpp)

# add link libaries
target_link_libraries(SignallingServer 
    auth_grpc_proto
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF}
    ${Boost_LIBRARIES}
    #${CMAKE_CXX_FLAGS_DEBUG_INIT}
)
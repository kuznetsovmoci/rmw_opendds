# Copyright 2017 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# copied from rmw_opendds/rmw_opendds_cpp-extras.cmake

find_package(opendds_cmake_module QUIET)
find_package(OpenDDS MODULE QUIET)

if(NOT OpenDDS_FOUND)
  message(STATUS
    "Could not find OpenDDS - skipping rmw_opendds_cpp")
  set(rmw_opendds_cpp_FOUND FALSE)
else()
  list(APPEND rmw_opendsd_cpp_LIBRARIES ${OpenDDS_LIBRARIES})
endif()

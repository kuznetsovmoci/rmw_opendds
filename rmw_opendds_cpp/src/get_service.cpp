// Copyright 2017 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "rmw_opendds_cpp/get_service.hpp"

#include "rmw_opendds_cpp/opendds_static_service_info.hpp"
#include "rmw_opendds_cpp/identifier.hpp"

namespace rmw_opendds_cpp
{

void *
get_replier(rmw_service_t * service)
{
  if (!service) {
    return NULL;
  }
  if (service->implementation_identifier != opendds_identifier) {
    return NULL;
  }
  OpenDDSStaticServiceInfo * impl = static_cast<OpenDDSStaticServiceInfo *>(service->data);
  return impl->replier_;
}

}  // namespace rmw_opendds_cpp

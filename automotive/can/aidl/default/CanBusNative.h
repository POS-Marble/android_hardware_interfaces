/*
 * Copyright 2022, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include "CanBus.h"

namespace aidl::android::hardware::automotive::can {

class CanBusNative : public CanBus {
  public:
    CanBusNative(const std::string& ifname, uint32_t bitrate);

  protected:
    virtual Result preUp() override;

  private:
    const uint32_t mBitrate;
};

}  // namespace aidl::android::hardware::automotive::can

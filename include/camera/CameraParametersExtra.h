/*
 * Copyright (C) 2016 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define CAMERA_PARAMETERS_EXTRA_C \
const char KEY_APP_MASK[] = "app-mask"; \
const char KEY_MAX_LONG_EXPOSURE_TIME[] = "max-long-exposure-time"; \
const char KEY_DNG_RAW_SIZE[] = "dng-raw-size"; \
const char KEY_SENSOR_ID[] = "sensor-id"; \
const char KEY_FACE_PREVIEW_PARAM[] = "face-beauty-preview-param"; \
const char KEY_REMOSAIC_FACE_BEAUTY[] = "is-remosaic-fb";

#define CAMERA_PARAMETERS_EXTRA_H \
    static const char KEY_APP_MASK[]; \
    static const char KEY_MAX_LONG_EXPOSURE_TIME[]; \
    static const char KEY_DNG_RAW_SIZE[]; \
    static const char KEY_SENSOR_ID[]; \
    static const char KEY_FACE_PREVIEW_PARAM[]; \
    static const char KEY_REMOSAIC_FACE_BEAUTY[];

// Tencent is pleased to support the open source community by making RapidJSON available.
// 
// Copyright (C) 2015 THL A29 Limited, a Tencent company, and Milo Yip. All rights reserved.
//
// Licensed under the MIT License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// http://opensource.org/licenses/MIT
//
// Unless required by applicable law or agreed to in writing, software distributed 
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR 
// CONDITIONS OF ANY KIND, either express or implied. See the License for the 
// specific language governing permissions and limitations under the License.

#ifndef RAPIDJSON_ALLOCATORS_HPP_
#define RAPIDJSON_ALLOCATORS_HPP_

#include "rapidjson.h"

RAPIDJSON_NAMESPACE_BEGIN

void* __cdecl RapidJsonDefaultAlloc(size_t size) noexcept
{
    return malloc(size);
}

void __cdecl RapidJsonDefaultFree(void* pointer) noexcept
{
    free(pointer);
}

typedef void* (__cdecl* RapidJsonMemAllocFunction)(size_t size);
typedef void(__cdecl* RapidJsonMemFreeFunction)(void* pointer);

RapidJsonMemAllocFunction g_pRapidJsonMemAllocHook{ RapidJsonDefaultAlloc };
RapidJsonMemFreeFunction g_pRapidJsonMemFreeHook{ RapidJsonDefaultFree };

RAPIDJSON_NAMESPACE_END

#endif // RAPIDJSON_ENCODINGS_HPP_

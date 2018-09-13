// Copyright 2018 Luis Gasco Poderoso (LuisGP).

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

/**
* @file Module.h
*
*/

#ifndef _ULTRASCADA_MODULE_H_
#define _ULTRASCADA_MODULE_H_

namespace ultrascada
{
namespace core
{

class Module
{
    public:
        struct ModuleInfo
        {
            std::string name;
            std::string version;
            uint32_t revision;
            std::string description;
            std::string author;
        } info;

        bool Start();
        bool Stop();
};

} // core
} // ultrascada

#endif // _ULTRASCADA_MODULE_H_

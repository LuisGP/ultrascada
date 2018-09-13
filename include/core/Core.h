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
* @file Core.h
*
*/

#ifndef _ULTRASCADA_CORE_H_
#define _ULTRASCADA_CORE_H_

#include <string.h>
#include <map.h>
#include "Module.h"

namespace ultrascada
{
namespace core
{

class Core final
{
    public:
        static bool Start();
        static bool Shutdown();
        static bool LoadModule(const std::string &moduleName);
        static bool ScanModules();
    private:
        static std::map<std::string, Module> loadedModules;
        static std::map<std::string, Module> foundModules;
};

} // ns - core
} // ns - ultrascada

#endif // _ULTRASCADA_CORE_H_

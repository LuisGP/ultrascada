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
* @file EventManager.h
*
*/

#ifndef _ULTRASCADA_EVENT_MANAGER_H
#define _ULTRASCADA_EVENT_MANAGER_H

#include <ultrascada/core/EventListener.h>

namespace ultrascada
{
namespace core
{

/**
 * Static class to manage Events. Listener register in categories (and optionally subcategories) of interest
 * and EventManager will notify them when an Event of his filter occurs.
 * */
class EventManager
{
    public:
        static bool registerListener(EventListener* listener, const std::string& category);
        static bool registerListener(EventListener* listener, const std::string& category, const std::string& subcategory);
        static bool notify(const EventData& eventData);
        static bool unregisterListener(EventListener* listener);
    private:
        std::map<std::string, std::map<std::string, EventListener*>> m_mListeners;
        BlockingQueue<EventData> m_bqEventQueue;
};

} // core
} // ultrascada

#endif // _ULTRASCADA_EVENT_MANAGER_H

/*
* This source file is part of an OSTIS project. For the latest info, see http://ostis.net
* Distributed under the MIT License
* (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
*/

#pragma once

#include <sc-memory/cpp/kpm/sc_agent.hpp>

#include "keynodes/keynodes.hpp"
#include "HeadmanSearchAgent.generated.hpp"

namespace exampleModule
{

class HeadmanSearchAgent : public ScAgent
{
  SC_CLASS(Agent, Event(Keynodes::question_find_headman, ScEvent::Type::AddOutputEdge))
  SC_GENERATED_BODY()
};

} // namespace exampleModule

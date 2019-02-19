#pragma once

#include <exception>
#include "mydefs.hpp"

struct LASwriterFileWritingError : std::exception
{
};
#include "LogMethodStdout.hpp"

#include <iostream>

#include "LogLevels.hpp"

void LogMethodStdout::log (const LogLevel& level, std::string message) const
{
	std::cout << level.getLevelString() << message << std::endl;
}

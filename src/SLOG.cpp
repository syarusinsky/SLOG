#include "SLOG.hpp"

#include "LogMethods.hpp"

void SLOG::log (const LogLevel& level, const LogMethod& method, std::string message, int lineNum, std::string fileName)
{
	if ( lineNum > -1 )
	{
		message = message + " " + fileName + "::" + std::to_string(lineNum);
	}

	method.log( level, message );
}

#include "SLOG.hpp"

#include "LogMethods.hpp"

void SLOG::log (const LogLevel& level, const LogMethod& method, std::string message)
{
	method.log( level, message );
}

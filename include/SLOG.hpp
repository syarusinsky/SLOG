#ifndef SLOG_HPP
#define SLOG_HPP

/**************************************************************************
 * The SLOG class provides functionality for logging at given log levels
 * (error, warning, info, ect) and with given log methods (console, file,
 * ect).
**************************************************************************/

#include <string>

class LogLevel;
class LogMethod;

class SLOG
{
	public:
		static void log (const LogLevel& level, const LogMethod& method, std::string message);
};

#endif // SLOG_HPP

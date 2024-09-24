#ifndef SLOG_HPP
#define SLOG_HPP

/**************************************************************************
 * The SLOG class provides functionality for logging at given log levels
 * (error, warning, info, ect) and with given log methods (console, file,
 * ect). The user should create a file called SLOGE in their project that
 * extends the logging methods (see SLOGE_SAMPLE for an example).
**************************************************************************/

#include <string>

class LogLevel;
class LogMethod;

class SLOG
{
	public:
		static void log (const LogLevel& level, const LogMethod& method, std::string message, int lineNum = -1, std::string fileName = "");
};

#endif // SLOG_HPP

#ifndef LOGMETHODSTDOUT_HPP
#define LOGMETHODSTDOUT_HPP

/**************************************************************************
 * The LogMethodStdout class provides the ability to log to stdout at a
 * given logging level (error, warn, info).
**************************************************************************/

#include "LogMethods.hpp"

class LogMethodStdout : public LogMethod
{
	public:
		void log (const LogLevel& level, std::string message) const override;
};

#endif // LOGMETHODSTDOUT_HPP

#ifndef LOGMETHODSTD_HPP
#define LOGMETHODSTD_HPP

/**************************************************************************
 * The LogMethodStd classes provides the ability to log to stdout or stderr
 * at a given logging level (error, warn, info).
**************************************************************************/

#include "LogMethods.hpp"

class LogMethodStdout : public LogMethod
{
	public:
		void log (const LogLevel& level, std::string message) const override;
};

class LogMethodStderr : public LogMethod
{
	public:
		void log (const LogLevel& level, std::string message) const override;
};

#endif // LOGMETHODSTD_HPP

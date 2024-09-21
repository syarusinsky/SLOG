#ifndef LOGMETHODS_HPP
#define LOGMETHODS_HPP

/**************************************************************************
 * The LogMethod base class defines a method with which to log at a given
 * logging level (error, warn, info, ect). You can define your own logging
 * methods by inheriting from this class and defining the log function.
 *
 * The LogMethods class defines static members of commonly used logging
 * methods, but the user is expected to inherit from this class and provide
 * their own logging methods as well, as is done for the LogLevels class.
**************************************************************************/

#include <string>

class LogLevel;

class LogMethod
{
	public:
		virtual void log (const LogLevel& level, std::string message) const = 0;
};

class LogMethods
{
};

#endif // LOGMETHODS_HPP

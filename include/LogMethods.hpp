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
 * The name of the inherited class should typically be named LogMethodsE.
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
	// this class should be inherited from and the following should be defined at a minimum
	//
	// static const LogMethod INFO;
	// static const LogMethod WARN;
	// static const LogMethod ERROR;
};

#endif // LOGMETHODS_HPP

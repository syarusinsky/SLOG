#ifndef LOGLEVELS_HPP
#define LOGLEVELS_HPP

#include <string>

/**************************************************************************
 * The LogLevel base class defines a method for retrieving a string that
 * defines the logging level, as well as some common levels such as error,
 * warning, ect.
 *
 * You can extend your own levels by inheriting from LogLevel, then
 * inheriting from LogLevels to extend the static defines. The extended
 * LogLevels class should typically be named LogLevelsE.
**************************************************************************/

class LogLevelError;
class LogLevelWarn;
class LogLevelInfo;

class LogLevel
{
	public:
		virtual const std::string getLevelString() const = 0;
};

class LogLevels
{
	public:
		static const LogLevelError ERROR;
		static const LogLevelWarn  WARN;
		static const LogLevelInfo  INFO;
};

class LogLevelError : public LogLevel
{
	friend LogLevels;

	public:
		const std::string getLevelString() const override;

	private:
		LogLevelError() = default;
};

class LogLevelWarn : public LogLevel
{
	friend LogLevels;

	public:
		const std::string getLevelString() const override;

	private:
		LogLevelWarn() = default;
};

class LogLevelInfo : public LogLevel
{
	friend LogLevels;

	public:
		const std::string getLevelString() const override;

	private:
		LogLevelInfo() = default;
};

#endif // LOGLEVELS_HPP

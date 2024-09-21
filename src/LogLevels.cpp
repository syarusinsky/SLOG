#include "LogLevels.hpp"

const std::string LogLevelError::getLevelString() const
{
	return "ERROR: ";
}

const std::string LogLevelWarn::getLevelString() const
{
	return "WARN: ";
}

const std::string LogLevelInfo::getLevelString() const
{
	return "INFO: ";
}

const LogLevelError LogLevels::ERROR = LogLevelError();
const LogLevelWarn LogLevels::WARN = LogLevelWarn();
const LogLevelInfo LogLevels::INFO = LogLevelInfo();

#pragma once

#include <Platform/PlatformLogger.h>

class SdlLogger: public PlatformLogger {
 public:
    virtual void setLogLevel(PlatformLogCategory category, PlatformLogLevel logLevel) override;
    virtual PlatformLogLevel logLevel(PlatformLogCategory category) const override;

    virtual void log(PlatformLogCategory category, PlatformLogLevel logLevel, const char *message) override;
};

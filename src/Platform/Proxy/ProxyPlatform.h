#pragma once

#include <memory>
#include <string>
#include <vector>

#include "Platform/Platform.h"

#include "ProxyBase.h"

class ProxyPlatform : public ProxyBase<Platform> {
 public:
    explicit ProxyPlatform(Platform *base = nullptr);

    virtual ~ProxyPlatform() = default;

    virtual std::unique_ptr<PlatformWindow> createWindow() override;
    virtual std::unique_ptr<PlatformEventLoop> createEventLoop() override;
    virtual std::unique_ptr<PlatformGamepad> createGamepad(uint32_t id) override;
    virtual void setCursorShown(bool cursorShown) override;
    virtual bool isCursorShown() const override;
    virtual std::vector<Recti> displayGeometries() const override;
    virtual void showMessageBox(const std::string& title, const std::string &message) const override;
    virtual int64_t tickCount() const override;
    virtual std::string winQueryRegistry(const std::wstring &path) const override;
    virtual std::string storagePath(const PlatformStorage type) const override;
};

#include "PlatformEventHandler.h"


void PlatformEventHandler::Event(PlatformWindow *window, const PlatformEvent *event) {
    switch (event->type) {
    case PlatformEvent::KeyPress:
        KeyPressEvent(window, static_cast<const PlatformKeyEvent *>(event));
        return;
    case PlatformEvent::KeyRelease:
        KeyReleaseEvent(window, static_cast<const PlatformKeyEvent *>(event));
        return;
    case PlatformEvent::MouseMove:
        MouseMoveEvent(window, static_cast<const PlatformMouseEvent *>(event));
        return;
    case PlatformEvent::MouseButtonPress:
        MousePressEvent(window, static_cast<const PlatformMouseEvent *>(event));
        return;
    case PlatformEvent::MouseButtonRelease:
        MouseReleaseEvent(window, static_cast<const PlatformMouseEvent *>(event));
        return;
    case PlatformEvent::MouseWheel:
        WheelEvent(window, static_cast<const PlatformWheelEvent *>(event));
        return;
    case PlatformEvent::WindowActivated:
    case PlatformEvent::WindowDeactivated:
        ActivationEvent(window, event);
        return;
    case PlatformEvent::WindowCloseRequested:
        CloseEvent(window, event);
        return;
    default:
        return;
    }
}

void PlatformEventHandler::KeyPressEvent(PlatformWindow *, const PlatformKeyEvent *) {}
void PlatformEventHandler::KeyReleaseEvent(PlatformWindow *, const PlatformKeyEvent *) {}
void PlatformEventHandler::MouseMoveEvent(PlatformWindow *, const PlatformMouseEvent *) {}
void PlatformEventHandler::MousePressEvent(PlatformWindow *, const PlatformMouseEvent *) {}
void PlatformEventHandler::MouseReleaseEvent(PlatformWindow *, const PlatformMouseEvent *) {}
void PlatformEventHandler::WheelEvent(PlatformWindow *, const PlatformWheelEvent *) {}
void PlatformEventHandler::ActivationEvent(PlatformWindow *, const PlatformEvent *) {}
void PlatformEventHandler::CloseEvent(PlatformWindow *, const PlatformEvent *) {}

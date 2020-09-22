#pragma once

#include <string>
#include <functional>

#include "Engine/Events/Event.h"

namespace Geng {

    struct WindowProps {
        std::string Title;
        unsigned int Width, Height;

        WindowProps(const std::string title = "Geng Engine",
                unsigned int width = 640,
                unsigned int height = 480)
                : Title(title), Width(width), Height(height) {}
    };

    class Window {
    public:
        using EventCallbackFn = std::function<void(Event&)>;

        virtual ~Window() {};

        virtual void OnUpdate() = 0;

        virtual unsigned int GetWidth() = 0;
        virtual unsigned int GetHeight() = 0;

        virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
        virtual void SetVSync(bool enabled) = 0;
        virtual bool IsVSync() const = 0;

        static Window* Create(const WindowProps& props = WindowProps());
    };

}

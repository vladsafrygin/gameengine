#pragma once

#include "Engine/Core/Window.h"
#include "Engine/Events/AppEvent.h"

namespace Geng {

    class Application {
    public:
        Application();
        virtual ~Application();

        void Run();
        void OnEvent(Event& e);

    private:
        bool OnWindowClose(WindowCloseEvent& e);

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    // To be defined in application
    Application* CreateApplication();

}
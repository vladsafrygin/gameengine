#include "Engine/Core/Application.h"
#include "Engine/Core/Log.h"

#include <GLFW/glfw3.h>
#include <Engine/Events/AppEvent.h>

namespace Geng {

    Application::Application() {
        m_Window = std::unique_ptr<Window>(Window::Create());
        m_Window->SetEventCallback(GG_BIND_EVENT_FN(OnEvent));
    }

    Application::~Application() {

    }

    void Application::OnEvent(Event &e) {
        EventDispatcher dispatcher(e);
        dispatcher.Dispatch<WindowCloseEvent>(GG_BIND_EVENT_FN(OnWindowClose));

        GG_LOG_TRACE("{0}", e);
    }

    void Application::Run() {
        while (m_Running) {
            glClearColor(1, 0, 1, 1);
            glClear(GL_COLOR_BUFFER_BIT);
            m_Window->OnUpdate();
        }
    }

    bool Application::OnWindowClose(WindowCloseEvent &e) {
        m_Running = false;
        return true;
    }

}
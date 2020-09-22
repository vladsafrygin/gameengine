#pragma once

extern Geng::Application* Geng::CreateApplication();

int main() {
    Geng::Log::Init();

    auto app = Geng::CreateApplication();
    app->Run();
    delete app;
}
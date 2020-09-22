#include <Geng.h>

class Sandbox : public Geng::Application {
public:
    Sandbox() {};
    ~Sandbox() {};
};

Geng::Application* Geng::CreateApplication() {
    return new Sandbox();
}


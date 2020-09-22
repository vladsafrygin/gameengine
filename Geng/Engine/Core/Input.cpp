#include "Core.h"
#include "Input.h"

#ifdef GG_PLATFORM_WINDOWS
    #include "Platform/Windows/WindowsInput.h"
#endif

namespace Geng {

    Scope <Input> Input::s_Instance = Input::Create();
    Scope <Input> Input::Create() {
        #if defined(GG_PLATFORM_WINDOWS) || defined(GG_PLATFORM_LINUX)
            return CreateScope<WindowsInput>();
        #else
            GG_ASSERT(false, "Unknown platform!");
            return nullptr;
        #endif
    }

}
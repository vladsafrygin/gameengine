#pragma once

#include <memory>
#include <csignal>
#include "Engine/Core/Log.h"

// Platform detection using predefined macros
#ifdef _WIN32
    /* Windows x64/x86 */

    #ifdef _WIN64
        #define GG_PLATFORM_WINDOWS
    #else
        #error "x86 Builds are not supported"
    #endif

#elif defined(__APPLE__) || defined(__MACH__)
    #include <TargetConditionals.h>

    /* TARGET_OS_MAC exists on all the platforms
     * so we must check all of them (in this order)
     * to ensure that we're running on MAC
     * and not some other Apple platform */

    #if TARGET_IPHONE_SIMULATOR == 1
        #error "IOS simulator is not supported!"
    #elif TARGET_OS_IPHONE == 1
        #error "IOS is not supported!"
    #elif TARGET_OS_MAC == 1
        #error "MacOS is not supported!"
    #else
        #error "Unknown Apple platform!"
    #endif

/* We also have to check __ANDROID__ before __linux__
* since android is based on the linux kernel
* it has __linux__ defined */

#elif defined(__ANDROID__)
    #error "Android is not supported!"
#elif defined(__linux__)
    #define GG_PLATFORM_LINUX
#else
    /* Unknown compiler/platform */
    #error "Unknown platform!"
#endif // End of platform detection

#ifdef GG_DEBUG
    #define GG_ENABLE_ASSERTS
#endif

#ifdef GG_ENABLE_ASSERTS
    #define GG_ASSERT(x, ...) { if(!(x)) { GG_LOG_ERROR("Assertion Failed: {0}", __VA_ARGS__);  raise(SIGABRT); } }
#else
    #define GG_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#define GG_BIND_EVENT_FN(fn) std::bind(&Application::fn, this, std::placeholders::_1)


namespace Geng {

    template<typename T>
    using Scope = std::unique_ptr<T>;

    template<typename T, typename ... Args>
    constexpr Scope<T> CreateScope(Args &&... args) {
        return std::make_unique<T>(std::forward<Args>(args)...);
    }

    template<typename T>
    using Ref = std::shared_ptr<T>;

    template<typename T, typename ... Args>
    constexpr Ref<T> CreateRef(Args &&... args) {
        return std::make_shared<T>(std::forward<Args>(args)...);
    }

}

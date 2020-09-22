#pragma once

#include <memory>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace Geng {

    class Log {
    public:
        static void Init();
        inline static std::shared_ptr<spdlog::logger>& GetLogger() { return s_Logger; }
    private:
        static std::shared_ptr<spdlog::logger> s_Logger;
    };

}

// Log macros
#define GG_LOG_TRACE(...)   ::Geng::Log::GetLogger()->trace(__VA_ARGS__)
#define GG_LOG_INFO(...)    ::Geng::Log::GetLogger()->info(__VA_ARGS__)
#define GG_LOG_WARN(...)    ::Geng::Log::GetLogger()->warn(__VA_ARGS__)
#define GG_LOG_ERROR(...)   ::Geng::Log::GetLogger()->error(__VA_ARGS__)
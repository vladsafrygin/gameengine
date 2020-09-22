#include "Log.h"

namespace Geng {

    std::shared_ptr<spdlog::logger> Log::s_Logger;

    void Log::Init() {
        spdlog::set_pattern("[%H:%M:%S] [%^%=9l%$] %v");
        s_Logger = spdlog::stdout_color_mt("LOGGER");
        s_Logger->set_level(spdlog::level::trace);
    }

}
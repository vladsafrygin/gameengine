#pragma once

namespace Geng {

    typedef enum class KeyCode : uint16_t {

        // From glfw3.h
        Space = 32,
        Apostrophe = 39, /* ' */
        Comma = 44, /* , */
        Minus = 45, /* - */
        Period = 46, /* . */
        Slash = 47, /* / */

        D0 = 48, /* 0 */
        D1 = 49, /* 1 */
        D2 = 50, /* 2 */
        D3 = 51, /* 3 */
        D4 = 52, /* 4 */
        D5 = 53, /* 5 */
        D6 = 54, /* 6 */
        D7 = 55, /* 7 */
        D8 = 56, /* 8 */
        D9 = 57, /* 9 */

        Semicolon = 59, /* ; */
        Equal = 61, /* = */

        A = 65,
        B = 66,
        C = 67,
        D = 68,
        E = 69,
        F = 70,
        G = 71,
        H = 72,
        I = 73,
        J = 74,
        K = 75,
        L = 76,
        M = 77,
        N = 78,
        O = 79,
        P = 80,
        Q = 81,
        R = 82,
        S = 83,
        T = 84,
        U = 85,
        V = 86,
        W = 87,
        X = 88,
        Y = 89,
        Z = 90,

        LeftBracket = 91,  /* [ */
        Backslash = 92,  /* \ */
        RightBracket = 93,  /* ] */
        GraveAccent = 96,  /* ` */

        World1 = 161, /* non-US #1 */
        World2 = 162, /* non-US #2 */

        /* Function keys */
        Escape = 256,
        Enter = 257,
        Tab = 258,
        Backspace = 259,
        Insert = 260,
        Delete = 261,
        Right = 262,
        Left = 263,
        Down = 264,
        Up = 265,
        PageUp = 266,
        PageDown = 267,
        Home = 268,
        End = 269,
        CapsLock = 280,
        ScrollLock = 281,
        NumLock = 282,
        PrintScreen = 283,
        Pause = 284,
        F1 = 290,
        F2 = 291,
        F3 = 292,
        F4 = 293,
        F5 = 294,
        F6 = 295,
        F7 = 296,
        F8 = 297,
        F9 = 298,
        F10 = 299,
        F11 = 300,
        F12 = 301,
        F13 = 302,
        F14 = 303,
        F15 = 304,
        F16 = 305,
        F17 = 306,
        F18 = 307,
        F19 = 308,
        F20 = 309,
        F21 = 310,
        F22 = 311,
        F23 = 312,
        F24 = 313,
        F25 = 314,

        /* Keypad */
        KP0 = 320,
        KP1 = 321,
        KP2 = 322,
        KP3 = 323,
        KP4 = 324,
        KP5 = 325,
        KP6 = 326,
        KP7 = 327,
        KP8 = 328,
        KP9 = 329,
        KPDecimal = 330,
        KPDivide = 331,
        KPMultiply = 332,
        KPSubtract = 333,
        KPAdd = 334,
        KPEnter = 335,
        KPEqual = 336,

        LeftShift = 340,
        LeftControl = 341,
        LeftAlt = 342,
        LeftSuper = 343,
        RightShift = 344,
        RightControl = 345,
        RightAlt = 346,
        RightSuper = 347,
        Menu = 348
    } Key;

    inline std::ostream &operator<<(std::ostream &os, KeyCode keyCode) {
        os << static_cast<int32_t>(keyCode);
        return os;
    }

}

// From glfw3.h
#define GG_KEY_SPACE           ::Geng::Key::Space
#define GG_KEY_APOSTROPHE      ::Geng::Key::Apostrophe    /* ' */
#define GG_KEY_COMMA           ::Geng::Key::Comma         /* , */
#define GG_KEY_MINUS           ::Geng::Key::Minus         /* - */
#define GG_KEY_PERIOD          ::Geng::Key::Period        /* . */
#define GG_KEY_SLASH           ::Geng::Key::Slash         /* / */
#define GG_KEY_0               ::Geng::Key::D0
#define GG_KEY_1               ::Geng::Key::D1
#define GG_KEY_2               ::Geng::Key::D2
#define GG_KEY_3               ::Geng::Key::D3
#define GG_KEY_4               ::Geng::Key::D4
#define GG_KEY_5               ::Geng::Key::D5
#define GG_KEY_6               ::Geng::Key::D6
#define GG_KEY_7               ::Geng::Key::D7
#define GG_KEY_8               ::Geng::Key::D8
#define GG_KEY_9               ::Geng::Key::D9
#define GG_KEY_SEMICOLON       ::Geng::Key::Semicolon     /* ; */
#define GG_KEY_EQUAL           ::Geng::Key::Equal         /* = */
#define GG_KEY_A               ::Geng::Key::A
#define GG_KEY_B               ::Geng::Key::B
#define GG_KEY_C               ::Geng::Key::C
#define GG_KEY_D               ::Geng::Key::D
#define GG_KEY_E               ::Geng::Key::E
#define GG_KEY_F               ::Geng::Key::F
#define GG_KEY_G               ::Geng::Key::G
#define GG_KEY_H               ::Geng::Key::H
#define GG_KEY_I               ::Geng::Key::I
#define GG_KEY_J               ::Geng::Key::J
#define GG_KEY_K               ::Geng::Key::K
#define GG_KEY_L               ::Geng::Key::L
#define GG_KEY_M               ::Geng::Key::M
#define GG_KEY_N               ::Geng::Key::N
#define GG_KEY_O               ::Geng::Key::O
#define GG_KEY_P               ::Geng::Key::P
#define GG_KEY_Q               ::Geng::Key::Q
#define GG_KEY_R               ::Geng::Key::R
#define GG_KEY_S               ::Geng::Key::S
#define GG_KEY_T               ::Geng::Key::T
#define GG_KEY_U               ::Geng::Key::U
#define GG_KEY_V               ::Geng::Key::V
#define GG_KEY_W               ::Geng::Key::W
#define GG_KEY_X               ::Geng::Key::X
#define GG_KEY_Y               ::Geng::Key::Y
#define GG_KEY_Z               ::Geng::Key::Z
#define GG_KEY_LEFT_BRACKET    ::Geng::Key::LeftBracket   /* [ */
#define GG_KEY_BACKSLASH       ::Geng::Key::Backslash     /* \ */
#define GG_KEY_RIGHT_BRACKET   ::Geng::Key::RightBracket  /* ] */
#define GG_KEY_GRAVE_ACCENT    ::Geng::Key::GraveAccent   /* ` */
#define GG_KEY_WORLD_1         ::Geng::Key::World1        /* non-US #1 */
#define GG_KEY_WORLD_2         ::Geng::Key::World2        /* non-US #2 */

/* Function keys */
#define GG_KEY_ESCAPE          ::Geng::Key::Escape
#define GG_KEY_ENTER           ::Geng::Key::Enter
#define GG_KEY_TAB             ::Geng::Key::Tab
#define GG_KEY_BACKSPACE       ::Geng::Key::Backspace
#define GG_KEY_INSERT          ::Geng::Key::Insert
#define GG_KEY_DELETE          ::Geng::Key::Delete
#define GG_KEY_RIGHT           ::Geng::Key::Right
#define GG_KEY_LEFT            ::Geng::Key::Left
#define GG_KEY_DOWN            ::Geng::Key::Down
#define GG_KEY_UP              ::Geng::Key::Up
#define GG_KEY_PAGE_UP         ::Geng::Key::PageUp
#define GG_KEY_PAGE_DOWN       ::Geng::Key::PageDown
#define GG_KEY_HOME            ::Geng::Key::Home
#define GG_KEY_END             ::Geng::Key::End
#define GG_KEY_CAPS_LOCK       ::Geng::Key::CapsLock
#define GG_KEY_SCROLL_LOCK     ::Geng::Key::ScrollLock
#define GG_KEY_NUM_LOCK        ::Geng::Key::NumLock
#define GG_KEY_PRINT_SCREEN    ::Geng::Key::PrintScreen
#define GG_KEY_PAUSE           ::Geng::Key::Pause
#define GG_KEY_F1              ::Geng::Key::F1
#define GG_KEY_F2              ::Geng::Key::F2
#define GG_KEY_F3              ::Geng::Key::F3
#define GG_KEY_F4              ::Geng::Key::F4
#define GG_KEY_F5              ::Geng::Key::F5
#define GG_KEY_F6              ::Geng::Key::F6
#define GG_KEY_F7              ::Geng::Key::F7
#define GG_KEY_F8              ::Geng::Key::F8
#define GG_KEY_F9              ::Geng::Key::F9
#define GG_KEY_F10             ::Geng::Key::F10
#define GG_KEY_F11             ::Geng::Key::F11
#define GG_KEY_F12             ::Geng::Key::F12
#define GG_KEY_F13             ::Geng::Key::F13
#define GG_KEY_F14             ::Geng::Key::F14
#define GG_KEY_F15             ::Geng::Key::F15
#define GG_KEY_F16             ::Geng::Key::F16
#define GG_KEY_F17             ::Geng::Key::F17
#define GG_KEY_F18             ::Geng::Key::F18
#define GG_KEY_F19             ::Geng::Key::F19
#define GG_KEY_F20             ::Geng::Key::F20
#define GG_KEY_F21             ::Geng::Key::F21
#define GG_KEY_F22             ::Geng::Key::F22
#define GG_KEY_F23             ::Geng::Key::F23
#define GG_KEY_F24             ::Geng::Key::F24
#define GG_KEY_F25             ::Geng::Key::F25

/* Keypad */
#define GG_KEY_KP_0            ::Geng::Key::KP0
#define GG_KEY_KP_1            ::Geng::Key::KP1
#define GG_KEY_KP_2            ::Geng::Key::KP2
#define GG_KEY_KP_3            ::Geng::Key::KP3
#define GG_KEY_KP_4            ::Geng::Key::KP4
#define GG_KEY_KP_5            ::Geng::Key::KP5
#define GG_KEY_KP_6            ::Geng::Key::KP6
#define GG_KEY_KP_7            ::Geng::Key::KP7
#define GG_KEY_KP_8            ::Geng::Key::KP8
#define GG_KEY_KP_9            ::Geng::Key::KP9
#define GG_KEY_KP_DECIMAL      ::Geng::Key::KPDecimal
#define GG_KEY_KP_DIVIDE       ::Geng::Key::KPDivide
#define GG_KEY_KP_MULTIPLY     ::Geng::Key::KPMultiply
#define GG_KEY_KP_SUBTRACT     ::Geng::Key::KPSubtract
#define GG_KEY_KP_ADD          ::Geng::Key::KPAdd
#define GG_KEY_KP_ENTER        ::Geng::Key::KPEnter
#define GG_KEY_KP_EQUAL        ::Geng::Key::KPEqual
#define GG_KEY_LEFT_SHIFT      ::Geng::Key::LeftShift
#define GG_KEY_LEFT_CONTROL    ::Geng::Key::LeftControl
#define GG_KEY_LEFT_ALT        ::Geng::Key::LeftAlt
#define GG_KEY_LEFT_SUPER      ::Geng::Key::LeftSuper
#define GG_KEY_RIGHT_SHIFT     ::Geng::Key::RightShift
#define GG_KEY_RIGHT_CONTROL   ::Geng::Key::RightControl
#define GG_KEY_RIGHT_ALT       ::Geng::Key::RightAlt
#define GG_KEY_RIGHT_SUPER     ::Geng::Key::RightSuper
#define GG_KEY_MENU            ::Geng::Key::Menu
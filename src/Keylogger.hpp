#ifndef __KEYLOGGER_HPP__
#define __KEYLOGGER_HPP__

#include <string>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifdef BUILDING_KEYLOGGER_DLL
#define KEYLOGGER_DLL __declspec(dllexport)
#else /* BUILDING_KEYLOGGER_DLL */
#define KEYLOGGER_DLL __declspec(dllimport)
#endif /* BUILDING_KEYLOGGER_DLL */

#ifdef __cplusplus
}
#endif /* __cplusplus */

std::string KEYLOGGER_DLL GetKey();

#endif /* __KEYLOGGER_HPP__ */

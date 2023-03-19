#pragma once

// Generic helper definitions for shared library support
#if defined _WIN32 || defined __CYGWIN__
    #define DLL_IMPORT __declspec(dllimport)
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_IMPORT __attribute__ ((visibility ("hidden")))
    #define DLL_EXPORT __attribute__ ((visibility ("default")))
#endif

#ifdef CGCUSTOMMATH_DLL_EXPORTS
    #define CGCUSTOMMATH_API    DLL_EXPORT
#else
    #define CGCUSTOMMATH_API    DLL_IMPORT
#endif

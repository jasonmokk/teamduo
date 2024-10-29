#ifndef TEAMDUO__VISIBILITY_CONTROL_H_
#define TEAMDUO__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TEAMDUO_EXPORT __attribute__ ((dllexport))
    #define TEAMDUO_IMPORT __attribute__ ((dllimport))
  #else
    #define TEAMDUO_EXPORT __declspec(dllexport)
    #define TEAMDUO_IMPORT __declspec(dllimport)
  #endif
  #ifdef TEAMDUO_BUILDING_LIBRARY
    #define TEAMDUO_PUBLIC TEAMDUO_EXPORT
  #else
    #define TEAMDUO_PUBLIC TEAMDUO_IMPORT
  #endif
  #define TEAMDUO_PUBLIC_TYPE TEAMDUO_PUBLIC
  #define TEAMDUO_LOCAL
#else
  #define TEAMDUO_EXPORT __attribute__ ((visibility("default")))
  #define TEAMDUO_IMPORT
  #if __GNUC__ >= 4
    #define TEAMDUO_PUBLIC __attribute__ ((visibility("default")))
    #define TEAMDUO_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TEAMDUO_PUBLIC
    #define TEAMDUO_LOCAL
  #endif
  #define TEAMDUO_PUBLIC_TYPE
#endif
#endif  // TEAMDUO__VISIBILITY_CONTROL_H_
// Generated 29-Oct-2024 12:00:02
// Copyright 2019-2020 The MathWorks, Inc.

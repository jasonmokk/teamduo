#ifndef TEAMDUO0X2810X29__VISIBILITY_CONTROL_H_
#define TEAMDUO0X2810X29__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TEAMDUO0X2810X29_EXPORT __attribute__ ((dllexport))
    #define TEAMDUO0X2810X29_IMPORT __attribute__ ((dllimport))
  #else
    #define TEAMDUO0X2810X29_EXPORT __declspec(dllexport)
    #define TEAMDUO0X2810X29_IMPORT __declspec(dllimport)
  #endif
  #ifdef TEAMDUO0X2810X29_BUILDING_LIBRARY
    #define TEAMDUO0X2810X29_PUBLIC TEAMDUO0X2810X29_EXPORT
  #else
    #define TEAMDUO0X2810X29_PUBLIC TEAMDUO0X2810X29_IMPORT
  #endif
  #define TEAMDUO0X2810X29_PUBLIC_TYPE TEAMDUO0X2810X29_PUBLIC
  #define TEAMDUO0X2810X29_LOCAL
#else
  #define TEAMDUO0X2810X29_EXPORT __attribute__ ((visibility("default")))
  #define TEAMDUO0X2810X29_IMPORT
  #if __GNUC__ >= 4
    #define TEAMDUO0X2810X29_PUBLIC __attribute__ ((visibility("default")))
    #define TEAMDUO0X2810X29_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TEAMDUO0X2810X29_PUBLIC
    #define TEAMDUO0X2810X29_LOCAL
  #endif
  #define TEAMDUO0X2810X29_PUBLIC_TYPE
#endif
#endif  // TEAMDUO0X2810X29__VISIBILITY_CONTROL_H_
// Generated 30-Oct-2024 21:09:10
// Copyright 2019-2020 The MathWorks, Inc.

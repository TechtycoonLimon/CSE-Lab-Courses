#ifndef __khrplatform_h_
#define __khrplatform_h_

#if defined(_WIN32)
  #ifndef WIN32_LEAN_AND_MEAN
    #define WIN32_LEAN_AND_MEAN 1
  #endif
  #include <windows.h>
#endif

#if defined(__GNUC__) && __GNUC__ >= 4
  #define KHRONOS_APICALL __attribute__((visibility("default")))
#elif defined(_WIN32)
  #define KHRONOS_APICALL __declspec(dllimport)
#else
  #define KHRONOS_APICALL
#endif

#ifndef KHRONOS_APIENTRY
  #define KHRONOS_APIENTRY
#endif

#ifndef KHRONOS_APIATTRIBUTES
  #define KHRONOS_APIATTRIBUTES
#endif

#include <stdint.h>

typedef int32_t khronos_int32_t;
typedef uint32_t khronos_uint32_t;
typedef int64_t khronos_int64_t;
typedef uint64_t khronos_uint64_t;
typedef signed char khronos_int8_t;
typedef unsigned char khronos_uint8_t;
typedef signed short khronos_int16_t;
typedef unsigned short khronos_uint16_t;
typedef signed long long khronos_intptr_t;
typedef unsigned long long khronos_uintptr_t;
typedef signed long long khronos_ssize_t;
typedef unsigned long long khronos_usize_t;

typedef float khronos_float_t;
typedef double khronos_double_t;

typedef unsigned long khronos_utime_nanoseconds_t;
typedef long khronos_stime_nanoseconds_t;

#endif

/**
* LICENSE PLACEHOLDER
*
* @file definitions.h
* @package OpenPST
* @brief standard definitions
*
* @author Gassan Idriss <ghassani@gmail.com>
*/

#ifndef _INCLUDE_DEFINITIONS_H
#define _INCLUDE_DEFINITIONS_H


#if defined(_WIN32) && !defined(__MINGW32__)
	#include "win_stdint.h"
	#include "win_inttypes.h"

    #define PACKED( __Declaration__ ) __pragma( pack(push, 1) ) __Declaration__ __pragma( pack(pop) )

#else
	#include <stdint.h>
    #define PACKED( __Declaration__ ) __Declaration__ __attribute__((__packed__))
#endif

#ifdef DEBUG
#define DEBUG_ENABLED 1
#else
#define DEBUG_ENABLED 0
#endif

#define LOGD(fmt, ...) do { if (DEBUG_ENABLED) fprintf(stderr, fmt, __VA_ARGS__); } while (0)
#define LOGI(fmt, ...) do { fprintf(stderr, fmt, __VA_ARGS__); } while (0)


#endif //_INCLUDE_DEFINITIONS_H

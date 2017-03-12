/*  =========================================================================
    echoz - generated layer of public API

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of echoz.                                        
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef ECHOZ_LIBRARY_H_INCLUDED
#define ECHOZ_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>

//  ECHOZ version macros for compile-time API detection
#define ECHOZ_VERSION_MAJOR 0
#define ECHOZ_VERSION_MINOR 1
#define ECHOZ_VERSION_PATCH 0

#define ECHOZ_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define ECHOZ_VERSION \
    ECHOZ_MAKE_VERSION(ECHOZ_VERSION_MAJOR, ECHOZ_VERSION_MINOR, ECHOZ_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined ECHOZ_STATIC
#       define ECHOZ_EXPORT
#   elif defined ECHOZ_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define ECHOZ_EXPORT __declspec(dllexport)
#       else
#           define ECHOZ_EXPORT
#       endif
#   elif defined ECHOZ_EXPORTS
#       define ECHOZ_EXPORT __declspec(dllexport)
#   else
#       define ECHOZ_EXPORT __declspec(dllimport)
#   endif
#   define ECHOZ_PRIVATE
#else
#   define ECHOZ_EXPORT
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define ECHOZ_PRIVATE __attribute__ ((visibility ("hidden")))
#   else
#       define ECHOZ_PRIVATE
#   endif
#endif

//  Project has no stable classes, so we build the draft API
#undef  ECHOZ_BUILD_DRAFT_API
#define ECHOZ_BUILD_DRAFT_API

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
//  Draft classes are by default not built in stable releases
#ifdef ECHOZ_BUILD_DRAFT_API
typedef struct _zechoer_t zechoer_t;
#define ZECHOER_T_DEFINED
typedef struct _zecho_actor_t zecho_actor_t;
#define ZECHO_ACTOR_T_DEFINED
#endif // ECHOZ_BUILD_DRAFT_API


//  Public classes, each with its own header file
#ifdef ECHOZ_BUILD_DRAFT_API
#include "zechoer.h"
#include "zecho_actor.h"
#endif // ECHOZ_BUILD_DRAFT_API

#ifdef ECHOZ_BUILD_DRAFT_API
//  Self test for private classes
ECHOZ_EXPORT void
    echoz_private_selftest (bool verbose);
#endif // ECHOZ_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/

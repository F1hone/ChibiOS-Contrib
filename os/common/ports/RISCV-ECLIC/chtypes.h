/*
    ChibiOS - Copyright (C) 2020 Patrick Seidel.

    This file is part of ChibiOS.

    ChibiOS is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @file    templates/chtypes.h
 * @brief   System types template.
 *
 * @addtogroup port_types
 * @details The types defined in this file may change depending on the target
 *          architecture. You may also try to optimize the size of the various
 *          types in order to privilege size or performance, be careful in
 *          doing so.
 * @{
 */

#ifndef CHTYPES_H
#define CHTYPES_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

/**
 * @name    Kernel types
 * @{
 */
typedef uint64_t            rtcnt_t;        /**< Realtime counter.          */
typedef uint64_t            rttime_t;       /**< Realtime accumulator.      */
typedef uint32_t            syssts_t;       /**< System status word.        */
typedef uint8_t             tmode_t;        /**< Thread flags.              */
typedef uint8_t             tstate_t;       /**< Thread state.              */
typedef uint8_t             trefs_t;        /**< Thread references counter. */
typedef uint8_t             tslices_t;      /**< Thread time slices counter.*/
typedef uint32_t            tprio_t;        /**< Thread priority.           */
typedef int32_t             msg_t;          /**< Inter-thread message.      */
typedef int32_t             eventid_t;      /**< Numeric event identifier.  */
typedef uint32_t            eventmask_t;    /**< Mask of event identifiers. */
typedef uint32_t            eventflags_t;   /**< Mask of event flags.       */
typedef int32_t             cnt_t;          /**< Generic signed counter.    */
typedef uint32_t            ucnt_t;         /**< Generic unsigned counter.  */
/** @} */

/**
 * @brief   ROM constant modifier.
 * @note    It is set to use the "const" keyword in this port.
 */
#define ROMCONST            const

/**
 * @brief   Makes functions not inlineable.
 * @note    If the compiler does not support such attribute then the
 *          realtime counter precision could be degraded.
 */
#define NOINLINE            __attribute__((noinline))

/**
 * @brief   Optimized thread function declaration macro.
 */
#define PORT_THD_FUNCTION(tname, arg) void tname(void *arg)

/**
 * @brief   Packed variable specifier.
 */
#define PACKED_VAR          __attribute__((packed))

/**
 * @brief   Memory alignment enforcement for variables.
 */
#define ALIGNED_VAR(n)      __attribute__((aligned(n)))

/**
 * @brief   Size of a pointer.
 * @note    To be used where the sizeof operator cannot be used, preprocessor
 *          expressions for example.
 */
#define SIZEOF_PTR          4

/**
 * @brief   True if alignment is low-high in current architecture.
 */
#define REVERSE_ORDER       1

#endif /* CHTYPES_H */

/** @} */

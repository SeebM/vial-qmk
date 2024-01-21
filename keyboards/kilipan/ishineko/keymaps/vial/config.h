// Copyright 2023 kilipan (@kilipan)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define VIAL_KEYBOARD_UID {0x25, 0x13, 0x12, 0x6E, 0x33, 0x1B, 0x61, 0x16}

    #define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
    #define VIAL_UNLOCK_COMBO_COLS { 0, 14 }

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once

#define USE_SERIAL

#define VIAL_KEYBOARD_UID {0x4A, 0x8D, 0x12, 0xEA, 0x1D, 0x05, 0x44, 0x39}

// Vial unlock
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

// Vial features
#define DYNAMIC_KEYMAP_LAYER_COUNT 5
/* looks like this `DYNAMIC_MACRO_SIZE` doesn't change anything:
   - it doesn't affect a Vial tab
   - it doesn't affect size of the firmware */ 
#define DYNAMIC_MACRO_SIZE 0
/* 8 entries take only 6 bytes more than 2 entries
   Thus, 8 and 0 are the only reasonable values. */ 
#define VIAL_KEY_OVERRIDE_ENTRIES 8
#define VIAL_TAP_DANCE_ENTRIES 8
#define VIAL_COMBO_ENTRIES 8


// Lighting
#define WS2812_DI_PIN D1
#define RGBLED_NUM 18
#define RGBLED_SPLIT { 9, 9 }
#define RGBLIGHT_SPLIT
#define RGBLIGHT_SLEEP

// Bootmagic lite
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1
#define BOOTMAGIC_LITE_ROW_RIGHT 0
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5
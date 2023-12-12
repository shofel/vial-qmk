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

// #define USE_SERIAL

#define VIAL_KEYBOARD_UID {0x61, 0xCE, 0x48, 0x9C, 0x30, 0x20, 0xA3, 0xC1}

// Vial unlock
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }


// Lighting
#define WS2812_DI_PIN D1
#define RGBLED_NUM 18
#define RGBLED_SPLIT { 9, 9 }
#define RGBLIGHT_SPLIT
#define RGBLIGHT_SLEEP

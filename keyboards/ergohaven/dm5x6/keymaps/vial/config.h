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

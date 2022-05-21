/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Geeetech GT2560 V4.1b Pins
 */

#define BOARD_INFO_NAME "GT2560 4.1b"

#ifdef REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
    #define BTN_EN1                         21
#endif
#ifdef REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
    #define BTN_EN2                         5
#endif
#ifdef REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
    #define LCD_PINS_RS                     36
#endif


#include "pins_GT2560_V3.h"
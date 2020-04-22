/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

#pragma once

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_Y            0
#define STATUS_LOGO_WIDTH       38

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000011,B10001110,B01111110,B00011110,B00000000,
  B00000011,B10001110,B01111111,B00111111,B00000000,
  B00000011,B10001110,B00000111,B01110011,B10000000,
  B00000011,B10001110,B00000111,B01110011,B10000000,
  B00000011,B10001110,B00111110,B01110011,B10000000,
  B00000011,B10001110,B00111110,B01110011,B10000000,
  B00000011,B10001110,B00000111,B01110011,B10000000,
  B00000011,B10001110,B00000111,B01110011,B10000000,
  B00000011,B10001110,B00000111,B01110011,B10000000,
  B00000001,B11111100,B01111111,B00111111,B00000000,
  B00000000,B11111000,B01111100,B00011110,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000
};

//#define LOGO_CHARS sizeof(status_logo_bmp)

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_LOGO_X          0
#define STATUS_HEATERS_X      50
#define STATUS_BED_X          74

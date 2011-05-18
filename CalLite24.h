

/*
 *
 * CalLite24 Font
 *
 * Copyright (C) 2010 by Integrated Mapping Ltd
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : CalLite24.h
 * Date                : 21.11.2010
 * Font size in bytes  : 27002
 * Font width          : 10
 * Font height         : 25
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

//#ifndef NEW_FONT_H
//#define NEW_FONT_H

//#define NEW_FONT_WIDTH 10
//#define NEW_FONT_HEIGHT 25

static uint8_t CalLite24[] PROGMEM = {
    0x69, 0x7A, // size
    0x0A, // width
    0x19, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x07, 0x03, 0x07, 0x0F, 0x0C, 0x16, 0x10, 0x02, 0x07, 0x07, 
    0x0B, 0x0F, 0x04, 0x07, 0x03, 0x0A, 0x0C, 0x0A, 0x0C, 0x0B, 
    0x0D, 0x0C, 0x0C, 0x0C, 0x0C, 0x0D, 0x03, 0x04, 0x0D, 0x0E, 
    0x0E, 0x0A, 0x14, 0x10, 0x0D, 0x0F, 0x0F, 0x0C, 0x0B, 0x10, 
    0x0E, 0x06, 0x08, 0x0E, 0x0B, 0x10, 0x0E, 0x11, 0x0C, 0x11, 
    0x0E, 0x0D, 0x0F, 0x0D, 0x0F, 0x15, 0x0E, 0x0D, 0x0E, 0x06, 
    0x0A, 0x06, 0x0E, 0x0F, 0x04, 0x0B, 0x0C, 0x0B, 0x0C, 0x0C, 
    0x07, 0x0C, 0x0B, 0x03, 0x06, 0x0C, 0x02, 0x13, 0x0B, 0x0C, 
    0x0C, 0x0C, 0x08, 0x0A, 0x08, 0x0B, 0x0C, 0x11, 0x0C, 0x0C, 
    0x0B, 0x0B, 0x02, 0x0B, 0x0F, 0x00, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 32
    0x38, 0xF8, 0xF8, 0x00, 0x7F, 0x7F, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x00, // 33
    0xFC, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0xF0, 0xB8, 0x80, 0x80, 0x80, 0xF8, 0x98, 0x80, 0x80, 0x40, 0x60, 0x61, 0x61, 0xF1, 0x7F, 0x43, 0x41, 0xE1, 0xF9, 0x7F, 0x61, 0x61, 0x61, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x03, 0x00, 0x00, 0x08, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 35
    0x80, 0xC0, 0xE0, 0x60, 0x60, 0xFC, 0x60, 0x60, 0x60, 0x60, 0xE0, 0x00, 0x07, 0x0F, 0x1C, 0x18, 0x18, 0xFF, 0x38, 0x30, 0x30, 0xE0, 0xE0, 0x80, 0x06, 0x0E, 0x0C, 0x0C, 0x0C, 0xFF, 0x0C, 0x0C, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 36
    0xF0, 0xF8, 0x18, 0x0C, 0x0C, 0x1C, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0x38, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0C, 0x08, 0x08, 0x0C, 0x0F, 0x07, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0x00, 0xF8, 0xF8, 0x0C, 0x0C, 0x0C, 0x1C, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0C, 0x08, 0x0C, 0x0C, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 37
    0x00, 0x60, 0xF8, 0xF8, 0x0C, 0x0C, 0x0C, 0x0C, 0xF8, 0xF8, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF9, 0x0F, 0x07, 0x06, 0x0E, 0x1B, 0x31, 0x71, 0xE0, 0xC0, 0xFC, 0x3C, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x06, 0x07, 0x03, 0x03, 0x07, 0x0E, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 38
    0xFC, 0xFC, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, // 39
    0x00, 0x80, 0xE0, 0x78, 0x1C, 0x0C, 0x04, 0xFC, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x3F, 0x78, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, // 40
    0x04, 0x0C, 0x1C, 0x78, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87, 0xFF, 0xFC, 0x00, 0x80, 0xE0, 0x78, 0x3F, 0x0F, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, // 41
    0x10, 0x30, 0x20, 0x60, 0xC0, 0xFC, 0xC0, 0x60, 0x20, 0x30, 0x10, 0x02, 0x02, 0x03, 0x01, 0x01, 0x1F, 0x01, 0x01, 0x03, 0x02, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xFF, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0x3E, 0x0E, 0x00, 0x00, 0x00, 0x00, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x0E, 0x0E, 0x00, 0x00, 0x00, // 46
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0x3C, 0x04, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0x3F, 0x07, 0x00, 0x00, 0x00, 0xE0, 0x78, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0xC0, 0xF0, 0x78, 0x18, 0x0C, 0x0C, 0x0C, 0x18, 0x38, 0xF0, 0xE0, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1, 0xFF, 0x3F, 0x01, 0x07, 0x07, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 48
    0x00, 0x60, 0x60, 0x70, 0xF8, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x0F, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 49
    0x00, 0x18, 0x18, 0x0C, 0x0C, 0x0C, 0x1C, 0x18, 0x78, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0F, 0x07, 0x01, 0x00, 0x0E, 0x0F, 0x0F, 0x0D, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 50
    0x00, 0x18, 0x18, 0x1C, 0x0C, 0x0C, 0x0C, 0x1C, 0x38, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0E, 0x0E, 0x0E, 0x1B, 0xF9, 0xF0, 0x06, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 51
    0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x70, 0x78, 0x6E, 0x67, 0x63, 0x61, 0x60, 0x60, 0xFF, 0xFF, 0xFF, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 52
    0x00, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x0E, 0x0C, 0xFC, 0xF8, 0xE0, 0x06, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 53
    0x80, 0xE0, 0xF0, 0x30, 0x18, 0x18, 0x08, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0xFF, 0xFF, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0E, 0xBC, 0xF8, 0xF0, 0x01, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 54
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x98, 0xF8, 0x78, 0x38, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x78, 0x1E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0xE0, 0xF0, 0xB8, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0x18, 0xF8, 0xF0, 0x00, 0xF1, 0xF3, 0x1F, 0x0E, 0x06, 0x0C, 0x0C, 0x1C, 0x1E, 0xF3, 0xF1, 0xC0, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x08, 0x08, 0x0C, 0x0C, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 56
    0x80, 0xE0, 0xF0, 0x18, 0x18, 0x0C, 0x0C, 0x0C, 0x18, 0x38, 0xF0, 0xE0, 0xC0, 0x01, 0x0F, 0x1F, 0x18, 0x38, 0x30, 0x30, 0x30, 0x10, 0x98, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x06, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 57
    0x80, 0x80, 0x80, 0x03, 0x03, 0x03, 0x0E, 0x0E, 0x0E, 0x00, 0x00, 0x00, // 58
    0x00, 0x80, 0x80, 0x80, 0x00, 0x03, 0x03, 0x03, 0xE0, 0xFC, 0x3E, 0x06, 0x00, 0x00, 0x00, 0x00, // 59
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xC0, 0x18, 0x38, 0x38, 0x6C, 0x6C, 0xC6, 0xC6, 0xC3, 0x83, 0x81, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x83, 0x83, 0xC3, 0xC6, 0x66, 0x6C, 0x3C, 0x38, 0x38, 0x10, 0x06, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x18, 0x18, 0x0C, 0x0C, 0x0C, 0x1C, 0x18, 0xF8, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x78, 0x78, 0x0C, 0x0E, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0x00, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x18, 0x88, 0x88, 0x8C, 0x8C, 0x8C, 0x88, 0x88, 0x18, 0x30, 0x70, 0xE0, 0x80, 0x00, 0x7C, 0xFF, 0x01, 0x00, 0x00, 0xFC, 0xFF, 0x83, 0x01, 0x01, 0x01, 0x01, 0x81, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7C, 0x00, 0x03, 0x07, 0x0C, 0x18, 0x30, 0x31, 0x23, 0x23, 0x63, 0x63, 0x63, 0x61, 0x23, 0x03, 0x02, 0x02, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 64
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0x38, 0x38, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0x7F, 0x6F, 0x61, 0x60, 0x60, 0x60, 0x67, 0x7F, 0xFC, 0xE0, 0x00, 0x00, 0x08, 0x0E, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x0F, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 65
    0xF8, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xB8, 0xF0, 0xE0, 0x00, 0xFF, 0xFF, 0xFF, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x0E, 0x0F, 0x1D, 0xF8, 0xF0, 0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x06, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 66
    0x00, 0x80, 0xE0, 0xF0, 0x38, 0x18, 0x18, 0x0C, 0x0C, 0x0C, 0x1C, 0x18, 0x18, 0x38, 0x30, 0x1E, 0xFF, 0xF3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x07, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 67
    0xF8, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x30, 0x70, 0xE0, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF3, 0xFF, 0x3F, 0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x06, 0x07, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 68
    0xF8, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xFF, 0xFF, 0xFF, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 69
    0xF8, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xFF, 0xFF, 0xFF, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0x00, 0x80, 0xE0, 0xF0, 0x30, 0x18, 0x18, 0x08, 0x0C, 0x0C, 0x0C, 0x0C, 0x18, 0x18, 0x38, 0x30, 0x1E, 0xFF, 0xF3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x38, 0xF8, 0xF8, 0x00, 0x00, 0x03, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 71
    0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xFF, 0xFF, 0xFF, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 72
    0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x0C, 0x0C, 0x0F, 0x0F, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 73
    0x00, 0x00, 0x08, 0x08, 0x08, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x07, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 74
    0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x18, 0x08, 0x00, 0xFF, 0xFF, 0xFF, 0x1C, 0x1E, 0x1F, 0x7F, 0xF1, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 75
    0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 76
    0xF8, 0xF8, 0xF8, 0x78, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x78, 0x38, 0xF8, 0xF8, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x07, 0x1E, 0x78, 0x70, 0x3E, 0x07, 0x01, 0x00, 0x00, 0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 77
    0xF8, 0xF8, 0xF8, 0x38, 0xF0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0x0F, 0x3E, 0xF8, 0xE0, 0x80, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 78
    0x00, 0xC0, 0xE0, 0xF0, 0x38, 0x18, 0x18, 0x0C, 0x0C, 0x0C, 0x18, 0x18, 0x38, 0xF0, 0xE0, 0x80, 0x00, 0x1E, 0xFF, 0xF3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF3, 0xFF, 0x3E, 0x00, 0x00, 0x03, 0x07, 0x06, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x06, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 79
    0xF8, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x38, 0x70, 0xE0, 0xC0, 0xFF, 0xFF, 0xFF, 0x10, 0x10, 0x18, 0x18, 0x18, 0x1C, 0x0E, 0x07, 0x03, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0x00, 0xC0, 0xE0, 0xF0, 0x38, 0x18, 0x18, 0x0C, 0x0C, 0x0C, 0x18, 0x18, 0x38, 0xF0, 0xE0, 0x80, 0x00, 0x1E, 0xFF, 0xF3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE7, 0xFF, 0x1E, 0x00, 0x00, 0x03, 0x07, 0x06, 0x0E, 0x0C, 0x0C, 0x0C, 0x1C, 0x7C, 0xFE, 0xC6, 0xC7, 0x83, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, // 81
    0xF8, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78, 0xF0, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x18, 0x18, 0x18, 0x38, 0x78, 0xEC, 0xC7, 0x87, 0x01, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 82
    0xE0, 0xF0, 0x38, 0x18, 0x1C, 0x0C, 0x0C, 0x0C, 0x1C, 0x18, 0x18, 0x18, 0x00, 0x03, 0x07, 0x07, 0x0E, 0x0C, 0x0C, 0x0C, 0x1C, 0x1C, 0x18, 0x78, 0xF0, 0xE0, 0x06, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 83
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 84
    0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x07, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 85
    0x38, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0x78, 0x08, 0x00, 0x01, 0x07, 0x3F, 0xFC, 0xE0, 0x00, 0x00, 0xC0, 0xF0, 0x7E, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x0F, 0x0E, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 86
    0x08, 0xF8, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x78, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0x78, 0x00, 0x00, 0x0F, 0x7F, 0xF8, 0x80, 0x00, 0xF0, 0x7F, 0x07, 0x00, 0x00, 0x0F, 0xFF, 0xF0, 0x00, 0xC0, 0xFC, 0x7F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 87
    0x00, 0x18, 0x38, 0xF0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0x78, 0x38, 0x18, 0x00, 0x00, 0x00, 0x80, 0xE1, 0x77, 0x3F, 0x1E, 0x7F, 0xF3, 0xC0, 0x80, 0x00, 0x00, 0x08, 0x0C, 0x0F, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0E, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 88
    0x18, 0x78, 0xF0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0x38, 0x08, 0x00, 0x00, 0x00, 0x03, 0x07, 0xFE, 0xFC, 0xFE, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 89
    0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x98, 0xF8, 0xF8, 0x38, 0x18, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x3C, 0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x0C, 0x0E, 0x0F, 0x0D, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 90
    0xFC, 0xFC, 0x04, 0x04, 0x04, 0x04, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 91
    0x0C, 0x3C, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x3E, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3F, 0x78, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 92
    0x04, 0x04, 0x04, 0x04, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 93
    0x00, 0x00, 0x80, 0xC0, 0xE0, 0x38, 0x18, 0x38, 0x70, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x0C, 0x0E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 95
    0x03, 0x0F, 0x1C, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0xE1, 0xE1, 0x31, 0x31, 0x31, 0x11, 0x19, 0x19, 0xFF, 0xFF, 0x03, 0x07, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x06, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 97
    0xFC, 0xFC, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x8F, 0xFE, 0xF8, 0x0F, 0x0F, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 98
    0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0xF8, 0xFE, 0x8F, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 99
    0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0xFC, 0xFC, 0xF8, 0xFE, 0x8F, 0x03, 0x01, 0x00, 0x00, 0x01, 0x01, 0x03, 0xFF, 0xFF, 0x00, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x06, 0x06, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 100
    0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x78, 0xFE, 0xFF, 0x33, 0x31, 0x31, 0x30, 0x31, 0x31, 0x33, 0x3F, 0x3C, 0x00, 0x03, 0x07, 0x06, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 101
    0x80, 0xE0, 0xF8, 0xBC, 0x8C, 0x8C, 0x8C, 0x01, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 102
    0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x78, 0xFE, 0xCF, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0xFF, 0xFE, 0x00, 0x03, 0xC7, 0x86, 0x8E, 0x8C, 0x8C, 0x86, 0xC6, 0xF7, 0x7F, 0x0F, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, // 103
    0xFC, 0xFC, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0xFF, 0xFF, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x03, 0xFF, 0xFE, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 104
    0x9C, 0x9C, 0x00, 0xFF, 0xFF, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, // 105
    0x00, 0x80, 0x80, 0x80, 0x9C, 0x9C, 0x00, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0xC0, 0xFF, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, // 106
    0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0xFF, 0xFF, 0xE0, 0x70, 0x78, 0xFC, 0xCE, 0x87, 0x03, 0x01, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 107
    0xFC, 0xFC, 0xFF, 0xFF, 0x0F, 0x0F, 0x00, 0x00, // 108
    0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0xFF, 0xFF, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x07, 0xFF, 0xFF, 0x03, 0x01, 0x01, 0x01, 0x01, 0x03, 0xFF, 0xFF, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 109
    0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0xFF, 0xFF, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x03, 0xFF, 0xFE, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 110
    0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0x8F, 0x03, 0x01, 0x00, 0x00, 0x01, 0x01, 0x07, 0xFF, 0xFC, 0x00, 0x03, 0x07, 0x0E, 0x1C, 0x18, 0x18, 0x1C, 0x0C, 0x07, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 111
    0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x8F, 0xFE, 0x78, 0xFF, 0xFF, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x06, 0x07, 0x01, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 112
    0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x78, 0xFE, 0xCF, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0xFF, 0xFF, 0x00, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x06, 0x07, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 113
    0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x07, 0x03, 0x01, 0x01, 0x01, 0x01, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 114
    0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x1F, 0x3F, 0x31, 0x31, 0x71, 0x61, 0x61, 0xE1, 0xC3, 0x06, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 115
    0x80, 0xF8, 0xF8, 0x80, 0x80, 0x80, 0x80, 0x80, 0x01, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x03, 0x07, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 116
    0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x07, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x06, 0x06, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 117
    0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x01, 0x07, 0x3F, 0xF8, 0xE0, 0x00, 0x00, 0xC0, 0xF8, 0x3E, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 118
    0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x01, 0x1F, 0xFF, 0xF0, 0x00, 0x80, 0xF8, 0x3F, 0x07, 0x0F, 0x7E, 0xF0, 0x80, 0x80, 0xF8, 0x7F, 0x07, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 119
    0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x01, 0x03, 0x8F, 0xDC, 0xF8, 0xF8, 0xFC, 0x8E, 0x07, 0x01, 0x00, 0x08, 0x0C, 0x0F, 0x03, 0x01, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 120
    0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x01, 0x07, 0x3F, 0xFC, 0xE0, 0x80, 0x00, 0xE0, 0xF8, 0x3E, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x80, 0xF3, 0x7F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 121
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x01, 0x01, 0x81, 0xC1, 0xE1, 0x71, 0x1D, 0x0F, 0x07, 0x03, 0x00, 0x0C, 0x0E, 0x0F, 0x0D, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 122
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x0C, 0x0C, 0x04, 0x04, 0x30, 0x30, 0x30, 0x78, 0xCE, 0x87, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7F, 0xFE, 0xC0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 123
    0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x80, // 124
    0x04, 0x04, 0x0C, 0x0C, 0x3C, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87, 0xCF, 0x58, 0x70, 0x30, 0x30, 0x80, 0x80, 0x80, 0xC0, 0xF0, 0x7F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 125
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x78, 0x1C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x60, 0x60, 0x60, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    
};

//#endif

// Part of SimCoupe - A SAM Coup� emulator
//
// Font.h: Font data used for on-screen text
//
//  Copyright (c) 1999-2001  Simon Owen
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

#ifndef FONT_H
#define FONT_H

typedef struct
{
    WORD    wHeight, wCharSize;
    BYTE    bFirst, bLast;

    const BYTE* pcbData;
}
FONT;

extern const BYTE abOldFont[];
extern const BYTE abGUIFont[];

static FONT sOldFont = { 8, 9, 32, 127, abOldFont };
static FONT sNewFont = { 11, 12, 32, 127, abGUIFont };

#endif

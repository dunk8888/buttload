/*
             BUTTLOAD - Butterfly ISP Programmer
				
              Copyright (C) Dean Camera, 2006.
                  dean_camera@hotmail.com
*/

/*
   ButtTag.H: This file can be included in user projects to
   allow the embedding of �ButtTags�, small strings of text
   which may be read by ButtLoad (if the program is stored in
   ButtLoad's non-volatile memory) or by other C management
   programs. Each ButtTag must have a unique name and be less
   that 20 characters in length.
*/

#ifndef BLTAG_H
#define BLTAG_H

#include <avr/io.h>
#include <avr/pgmspace.h>

struct ButtLoadData
{
	uint8_t MagicString[4];
	uint8_t TagData[];
};

#define BT_TAGHEADER          {'@','(','#',')'}
#define BUTTLOADTAG(id, data) const struct ButtLoadData BUTTTAG_##id PROGMEM = {BT_TAGHEADER, data}

#endif

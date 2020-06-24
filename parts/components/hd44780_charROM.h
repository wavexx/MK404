
/*
	HD44780_charROM.h - A00 character ROM data for the HD44780 LCD.

  Copyright 2020, VintagePC <https://github.com/vintagepc/>

 	This file is part of MK3SIM.

	MK3SIM is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	MK3SIM is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with MK3SIM.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

static const struct {
  unsigned int w;
  unsigned int h;
  unsigned int data_size;
  unsigned char data[1792];
} hd44780_ROM_AOO = {5,7,1792,
  {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x04,
    0x04,
    0x04,
    0x04,
    0x00,
    0x00,
    0x04,
    0x0a,
    0x0a,
    0x0a,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0a,
    0x0a,
    0x1f,
    0x0a,
    0x1f,
    0x0a,
    0x0a,
    0x04,
    0x0f,
    0x14,
    0x0e,
    0x05,
    0x1e,
    0x04,
    0x18,
    0x19,
    0x02,
    0x04,
    0x08,
    0x13,
    0x03,
    0x0c,
    0x12,
    0x14,
    0x08,
    0x15,
    0x12,
    0x0d,
    0x0c,
    0x04,
    0x08,
    0x00,
    0x00,
    0x00,
    0x00,
    0x02,
    0x04,
    0x08,
    0x08,
    0x08,
    0x04,
    0x02,
    0x08,
    0x04,
    0x02,
    0x02,
    0x02,
    0x04,
    0x08,
    0x00,
    0x04,
    0x15,
    0x0e,
    0x15,
    0x04,
    0x00,
    0x00,
    0x04,
    0x04,
    0x1f,
    0x04,
    0x04,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0c,
    0x04,
    0x08,
    0x00,
    0x00,
    0x00,
    0x1f,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0c,
    0x0c,
    0x00,
    0x01,
    0x02,
    0x04,
    0x08,
    0x10,
    0x00,
    0x0e,
    0x11,
    0x13,
    0x15,
    0x19,
    0x11,
    0x0e,
    0x04,
    0x0c,
    0x04,
    0x04,
    0x04,
    0x04,
    0x0e,
    0x0e,
    0x11,
    0x01,
    0x02,
    0x04,
    0x08,
    0x1f,
    0x1f,
    0x02,
    0x04,
    0x02,
    0x01,
    0x11,
    0x0e,
    0x02,
    0x06,
    0x0a,
    0x12,
    0x1f,
    0x02,
    0x02,
    0x1f,
    0x10,
    0x1e,
    0x01,
    0x01,
    0x11,
    0x0e,
    0x06,
    0x08,
    0x10,
    0x1e,
    0x11,
    0x11,
    0x0e,
    0x1f,
    0x01,
    0x02,
    0x04,
    0x08,
    0x08,
    0x08,
    0x0e,
    0x11,
    0x11,
    0x0e,
    0x11,
    0x11,
    0x0e,
    0x0e,
    0x11,
    0x11,
    0x0f,
    0x01,
    0x02,
    0x0c,
    0x00,
    0x0c,
    0x0c,
    0x00,
    0x0c,
    0x0c,
    0x00,
    0x00,
    0x0c,
    0x0c,
    0x00,
    0x0c,
    0x04,
    0x08,
    0x02,
    0x04,
    0x08,
    0x10,
    0x08,
    0x04,
    0x02,
    0x00,
    0x00,
    0x1f,
    0x00,
    0x1f,
    0x00,
    0x00,
    0x10,
    0x08,
    0x04,
    0x02,
    0x04,
    0x08,
    0x10,
    0x0e,
    0x11,
    0x01,
    0x02,
    0x04,
    0x00,
    0x04,
    0x0e,
    0x11,
    0x01,
    0x0d,
    0x15,
    0x15,
    0x0e,
    0x0e,
    0x11,
    0x11,
    0x11,
    0x1f,
    0x11,
    0x11,
    0x1e,
    0x11,
    0x11,
    0x1e,
    0x11,
    0x11,
    0x1e,
    0x0e,
    0x11,
    0x10,
    0x10,
    0x10,
    0x11,
    0x0e,
    0x1e,
    0x11,
    0x11,
    0x11,
    0x11,
    0x11,
    0x1e,
    0x1f,
    0x10,
    0x10,
    0x1e,
    0x10,
    0x10,
    0x1f,
    0x1f,
    0x10,
    0x10,
    0x1e,
    0x10,
    0x10,
    0x10,
    0x0e,
    0x11,
    0x10,
    0x17,
    0x11,
    0x11,
    0x0f,
    0x11,
    0x11,
    0x11,
    0x1f,
    0x11,
    0x11,
    0x11,
    0x0e,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x0e,
    0x07,
    0x02,
    0x02,
    0x02,
    0x02,
    0x12,
    0x0c,
    0x11,
    0x12,
    0x14,
    0x18,
    0x14,
    0x12,
    0x11,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x1f,
    0x11,
    0x1b,
    0x15,
    0x11,
    0x11,
    0x11,
    0x11,
    0x11,
    0x11,
    0x19,
    0x15,
    0x13,
    0x11,
    0x11,
    0x0e,
    0x11,
    0x11,
    0x11,
    0x11,
    0x11,
    0x0e,
    0x1e,
    0x11,
    0x11,
    0x1e,
    0x10,
    0x10,
    0x10,
    0x0e,
    0x11,
    0x11,
    0x11,
    0x15,
    0x12,
    0x0d,
    0x1e,
    0x11,
    0x11,
    0x1e,
    0x14,
    0x12,
    0x11,
    0x0f,
    0x10,
    0x10,
    0x0e,
    0x01,
    0x01,
    0x1e,
    0x1f,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x11,
    0x11,
    0x11,
    0x11,
    0x11,
    0x11,
    0x0e,
    0x11,
    0x11,
    0x11,
    0x11,
    0x11,
    0x0a,
    0x04,
    0x11,
    0x11,
    0x11,
    0x15,
    0x15,
    0x15,
    0x0a,
    0x11,
    0x11,
    0x0a,
    0x04,
    0x0a,
    0x11,
    0x11,
    0x11,
    0x11,
    0x11,
    0x0a,
    0x04,
    0x04,
    0x04,
    0x1f,
    0x01,
    0x02,
    0x04,
    0x08,
    0x10,
    0x1f,
    0x0e,
    0x08,
    0x08,
    0x08,
    0x08,
    0x08,
    0x0e,
    0x11,
    0x0a,
    0x1f,
    0x04,
    0x1f,
    0x04,
    0x04,
    0x0e,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x0e,
    0x04,
    0x0a,
    0x11,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x1f,
    0x08,
    0x04,
    0x02,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0e,
    0x01,
    0x0f,
    0x11,
    0x0f,
    0x10,
    0x10,
    0x16,
    0x19,
    0x11,
    0x11,
    0x1e,
    0x00,
    0x00,
    0x0e,
    0x10,
    0x10,
    0x11,
    0x0e,
    0x01,
    0x01,
    0x0d,
    0x13,
    0x11,
    0x11,
    0x0f,
    0x00,
    0x00,
    0x0e,
    0x11,
    0x1f,
    0x10,
    0x0e,
    0x06,
    0x09,
    0x08,
    0x1c,
    0x08,
    0x08,
    0x08,
    0x0f,
    0x11,
    0x11,
    0x0f,
    0x01,
    0x01,
    0x0e,
    0x10,
    0x10,
    0x16,
    0x19,
    0x11,
    0x11,
    0x11,
    0x04,
    0x00,
    0x0c,
    0x04,
    0x04,
    0x04,
    0x0e,
    0x02,
    0x00,
    0x06,
    0x02,
    0x02,
    0x12,
    0x0c,
    0x10,
    0x10,
    0x12,
    0x14,
    0x18,
    0x14,
    0x12,
    0x0c,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x0e,
    0x00,
    0x00,
    0x1a,
    0x15,
    0x15,
    0x11,
    0x11,
    0x00,
    0x00,
    0x16,
    0x19,
    0x11,
    0x11,
    0x11,
    0x00,
    0x00,
    0x0e,
    0x11,
    0x11,
    0x11,
    0x0e,
    0x00,
    0x00,
    0x1e,
    0x11,
    0x1e,
    0x10,
    0x10,
    0x00,
    0x00,
    0x0d,
    0x13,
    0x0f,
    0x01,
    0x01,
    0x00,
    0x00,
    0x16,
    0x19,
    0x10,
    0x10,
    0x10,
    0x00,
    0x00,
    0x0f,
    0x10,
    0x0e,
    0x01,
    0x1e,
    0x08,
    0x1c,
    0x08,
    0x08,
    0x08,
    0x09,
    0x06,
    0x00,
    0x00,
    0x11,
    0x11,
    0x11,
    0x13,
    0x0d,
    0x00,
    0x00,
    0x11,
    0x11,
    0x11,
    0x0a,
    0x04,
    0x00,
    0x00,
    0x11,
    0x11,
    0x15,
    0x15,
    0x0a,
    0x00,
    0x00,
    0x11,
    0x0a,
    0x04,
    0x0a,
    0x11,
    0x00,
    0x00,
    0x11,
    0x11,
    0x0f,
    0x01,
    0x0e,
    0x00,
    0x00,
    0x1f,
    0x02,
    0x04,
    0x08,
    0x1f,
    0x02,
    0x04,
    0x04,
    0x08,
    0x04,
    0x04,
    0x02,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x08,
    0x04,
    0x04,
    0x02,
    0x04,
    0x04,
    0x08,
    0x00,
    0x04,
    0x02,
    0x1f,
    0x02,
    0x04,
    0x00,
    0x00,
    0x04,
    0x08,
    0x1f,
    0x08,
    0x04,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x1c,
    0x14,
    0x1c,
    0x07,
    0x04,
    0x04,
    0x04,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x04,
    0x04,
    0x04,
    0x1c,
    0x00,
    0x00,
    0x00,
    0x00,
    0x10,
    0x08,
    0x04,
    0x00,
    0x00,
    0x00,
    0x0c,
    0x0c,
    0x00,
    0x00,
    0x00,
    0x1f,
    0x01,
    0x1f,
    0x01,
    0x02,
    0x04,
    0x00,
    0x00,
    0x1f,
    0x01,
    0x06,
    0x04,
    0x08,
    0x00,
    0x00,
    0x02,
    0x04,
    0x0c,
    0x14,
    0x04,
    0x00,
    0x00,
    0x04,
    0x1f,
    0x11,
    0x01,
    0x06,
    0x00,
    0x00,
    0x00,
    0x1f,
    0x04,
    0x04,
    0x1f,
    0x00,
    0x00,
    0x02,
    0x1f,
    0x06,
    0x0a,
    0x12,
    0x00,
    0x00,
    0x08,
    0x1f,
    0x09,
    0x0a,
    0x08,
    0x00,
    0x00,
    0x00,
    0x0e,
    0x02,
    0x02,
    0x1f,
    0x00,
    0x00,
    0x1e,
    0x02,
    0x1e,
    0x02,
    0x1e,
    0x00,
    0x00,
    0x00,
    0x15,
    0x15,
    0x01,
    0x06,
    0x00,
    0x00,
    0x00,
    0x00,
    0x1f,
    0x00,
    0x00,
    0x1f,
    0x01,
    0x05,
    0x06,
    0x04,
    0x04,
    0x08,
    0x01,
    0x02,
    0x04,
    0x0c,
    0x14,
    0x04,
    0x04,
    0x04,
    0x1f,
    0x11,
    0x11,
    0x01,
    0x02,
    0x04,
    0x00,
    0x00,
    0x1f,
    0x04,
    0x04,
    0x04,
    0x1f,
    0x02,
    0x1f,
    0x02,
    0x06,
    0x0a,
    0x12,
    0x02,
    0x08,
    0x1f,
    0x09,
    0x09,
    0x09,
    0x09,
    0x12,
    0x04,
    0x1f,
    0x04,
    0x1f,
    0x04,
    0x04,
    0x04,
    0x00,
    0x0f,
    0x09,
    0x11,
    0x01,
    0x02,
    0x0c,
    0x08,
    0x0f,
    0x12,
    0x02,
    0x02,
    0x02,
    0x04,
    0x00,
    0x1f,
    0x01,
    0x01,
    0x01,
    0x01,
    0x1f,
    0x0a,
    0x1f,
    0x0a,
    0x0a,
    0x02,
    0x04,
    0x08,
    0x00,
    0x18,
    0x01,
    0x19,
    0x01,
    0x02,
    0x1c,
    0x00,
    0x1f,
    0x01,
    0x02,
    0x04,
    0x0a,
    0x11,
    0x08,
    0x1f,
    0x09,
    0x0a,
    0x08,
    0x08,
    0x07,
    0x00,
    0x11,
    0x11,
    0x09,
    0x01,
    0x02,
    0x0c,
    0x00,
    0x0f,
    0x09,
    0x15,
    0x03,
    0x02,
    0x0c,
    0x02,
    0x1c,
    0x04,
    0x1f,
    0x04,
    0x04,
    0x08,
    0x00,
    0x15,
    0x15,
    0x01,
    0x01,
    0x02,
    0x04,
    0x0e,
    0x00,
    0x1f,
    0x04,
    0x04,
    0x04,
    0x08,
    0x08,
    0x08,
    0x08,
    0x0c,
    0x0a,
    0x08,
    0x08,
    0x04,
    0x04,
    0x1f,
    0x04,
    0x04,
    0x08,
    0x10,
    0x00,
    0x0e,
    0x00,
    0x00,
    0x00,
    0x00,
    0x1f,
    0x00,
    0x1f,
    0x01,
    0x0a,
    0x04,
    0x0a,
    0x10,
    0x04,
    0x1f,
    0x02,
    0x04,
    0x0e,
    0x15,
    0x04,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x04,
    0x08,
    0x00,
    0x04,
    0x02,
    0x11,
    0x11,
    0x11,
    0x11,
    0x10,
    0x10,
    0x1f,
    0x10,
    0x10,
    0x10,
    0x0f,
    0x00,
    0x1f,
    0x01,
    0x01,
    0x01,
    0x02,
    0x0c,
    0x00,
    0x08,
    0x14,
    0x02,
    0x01,
    0x01,
    0x00,
    0x04,
    0x1f,
    0x04,
    0x04,
    0x15,
    0x15,
    0x04,
    0x00,
    0x1f,
    0x01,
    0x01,
    0x0a,
    0x04,
    0x02,
    0x00,
    0x0e,
    0x00,
    0x0e,
    0x00,
    0x0e,
    0x01,
    0x00,
    0x04,
    0x08,
    0x10,
    0x11,
    0x1f,
    0x01,
    0x00,
    0x01,
    0x01,
    0x0a,
    0x04,
    0x0a,
    0x10,
    0x00,
    0x1f,
    0x08,
    0x1f,
    0x08,
    0x08,
    0x07,
    0x08,
    0x08,
    0x1f,
    0x09,
    0x0a,
    0x08,
    0x08,
    0x00,
    0x0e,
    0x02,
    0x02,
    0x02,
    0x02,
    0x1f,
    0x00,
    0x1f,
    0x01,
    0x1f,
    0x01,
    0x01,
    0x1f,
    0x0e,
    0x00,
    0x1f,
    0x01,
    0x01,
    0x02,
    0x04,
    0x12,
    0x12,
    0x12,
    0x12,
    0x02,
    0x04,
    0x08,
    0x00,
    0x04,
    0x14,
    0x14,
    0x15,
    0x15,
    0x16,
    0x00,
    0x10,
    0x10,
    0x11,
    0x12,
    0x14,
    0x18,
    0x00,
    0x1f,
    0x11,
    0x11,
    0x11,
    0x11,
    0x1f,
    0x00,
    0x1f,
    0x11,
    0x11,
    0x01,
    0x02,
    0x04,
    0x00,
    0x18,
    0x00,
    0x01,
    0x01,
    0x02,
    0x1c,
    0x04,
    0x12,
    0x08,
    0x00,
    0x00,
    0x00,
    0x00,
    0x1c,
    0x14,
    0x1c,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x09,
    0x15,
    0x12,
    0x12,
    0x0d,
    0x0a,
    0x00,
    0x0e,
    0x01,
    0x0f,
    0x11,
    0x0f,
    0x00,
    0x0e,
    0x11,
    0x1e,
    0x11,
    0x1e,
    0x10,
    0x00,
    0x00,
    0x0e,
    0x10,
    0x0c,
    0x11,
    0x0e,
    0x00,
    0x11,
    0x11,
    0x11,
    0x13,
    0x1d,
    0x10,
    0x00,
    0x00,
    0x0f,
    0x14,
    0x12,
    0x11,
    0x0e,
    0x00,
    0x06,
    0x09,
    0x11,
    0x11,
    0x1e,
    0x10,
    0x00,
    0x0f,
    0x11,
    0x11,
    0x11,
    0x0f,
    0x01,
    0x00,
    0x00,
    0x07,
    0x04,
    0x04,
    0x14,
    0x08,
    0x02,
    0x1a,
    0x02,
    0x00,
    0x00,
    0x00,
    0x00,
    0x02,
    0x00,
    0x06,
    0x02,
    0x02,
    0x02,
    0x02,
    0x00,
    0x14,
    0x08,
    0x14,
    0x00,
    0x00,
    0x00,
    0x04,
    0x0e,
    0x14,
    0x15,
    0x0e,
    0x04,
    0x00,
    0x08,
    0x08,
    0x1c,
    0x08,
    0x1c,
    0x08,
    0x0f,
    0x0e,
    0x00,
    0x16,
    0x19,
    0x11,
    0x11,
    0x11,
    0x0a,
    0x00,
    0x0e,
    0x11,
    0x11,
    0x11,
    0x0e,
    0x00,
    0x16,
    0x19,
    0x11,
    0x11,
    0x1e,
    0x10,
    0x00,
    0x0d,
    0x13,
    0x11,
    0x11,
    0x0f,
    0x01,
    0x0e,
    0x11,
    0x1f,
    0x11,
    0x11,
    0x0e,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0b,
    0x15,
    0x1a,
    0x00,
    0x0e,
    0x11,
    0x11,
    0x0a,
    0x1b,
    0x00,
    0x0a,
    0x00,
    0x11,
    0x11,
    0x11,
    0x13,
    0x0d,
    0x1f,
    0x10,
    0x08,
    0x04,
    0x08,
    0x10,
    0x1f,
    0x00,
    0x1f,
    0x0a,
    0x0a,
    0x0a,
    0x13,
    0x00,
    0x1f,
    0x00,
    0x11,
    0x0a,
    0x04,
    0x0a,
    0x11,
    0x00,
    0x11,
    0x11,
    0x11,
    0x11,
    0x0f,
    0x01,
    0x01,
    0x1e,
    0x04,
    0x1f,
    0x04,
    0x04,
    0x00,
    0x00,
    0x1f,
    0x08,
    0x0f,
    0x09,
    0x11,
    0x00,
    0x00,
    0x00,
    0x1f,
    0x15,
    0x1f,
    0x11,
    0x11,
    0x00,
    0x00,
    0x04,
    0x00,
    0x1f,
    0x00,
    0x04,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x1f,
    0x1f,
    0x1f,
    0x1f,
    0x1f,
    0x1f,
    0x1f}
  };
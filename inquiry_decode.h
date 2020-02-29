/***************************************************************************
Aaru Data Preservation Suite
----------------------------------------------------------------------------

Filename       : inquiry_decode.h
Author(s)      : Natalia Portillo

Component      : Aaru.Device.Report

--[ Description ] ----------------------------------------------------------

Contains definitions for SCSI INQUIRY structure.

--[ License ] --------------------------------------------------------------

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

----------------------------------------------------------------------------
Copyright © 2011-2020 Natalia Portillo
****************************************************************************/

#ifndef AARU_DEVICE_REPORT_INQUIRY_DECODE_H
#define AARU_DEVICE_REPORT_INQUIRY_DECODE_H

char *DecodeTPGSValues(uint8_t capabilities);

char *DecodePeripheralDeviceType(uint8_t capabilities);

char *DecodePeripheralQualifier(uint8_t capabilities);

char *DecodeSPIClocking(uint8_t capabilities);

#endif //AARU_DEVICE_REPORT_INQUIRY_DECODE_H

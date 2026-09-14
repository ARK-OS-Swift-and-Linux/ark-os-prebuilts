/*
 * Copyright 2026 Aarav Ravindra Kharade
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _EFI_ROMLOAD_H
#define _EFI_ROMLOAD_H

#define ROM_SIGNATURE 0xaa55
#define PCIDS_SIGNATURE "PCIR"
#pragma pack(push)
#pragma pack(1)
typedef struct 
{
    UINT8    Pcids_Sig[4];
    UINT16  VendId;
    UINT16  DevId;
    UINT16  Vpd_Off;
    UINT16  Size;
    UINT8 Rev;
    UINT8 Class_Code[3];
    UINT16  Image_Len;
    UINT16  Rev_Lvl;
    UINT8 Code_Type;
    UINT8 Indi;
    UINT16  Rsvd;
}PciDataStructure;
typedef struct
{
    UINT16 Size;
    UINT32 Header_Sig;
    UINT16 SubSystem;
    UINT16 MachineType;
    UINT8  Resvd[10];
    UINT16 EfiOffset;
}ArchData;
typedef struct 
{
    UINT16 Rom_Sig;
    ArchData Arch_Data;
    UINT16 Pcids_Off;
    UINT8 resvd[38];
}RomHeader;
#pragma pack(pop)

#endif

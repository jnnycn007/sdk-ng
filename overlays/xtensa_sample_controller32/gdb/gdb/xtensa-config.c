/* Configuration for the Xtensa architecture for GDB, the GNU debugger.

   Copyright (c) 2003-2019 Tensilica Inc.

   Permission is hereby granted, free of charge, to any person obtaining
   a copy of this software and associated documentation files (the
   "Software"), to deal in the Software without restriction, including
   without limitation the rights to use, copy, modify, merge, publish,
   distribute, sublicense, and/or sell copies of the Software, and to
   permit persons to whom the Software is furnished to do so, subject to
   the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
   IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
   CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
   TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
   SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.  */

#define XTENSA_CONFIG_VERSION 0x60

#include "defs.h"
#include "xtensa-config.h"
#include "xtensa-tdep.h"



/* Masked registers.  */
xtensa_reg_mask_t xtensa_submask0[] = { { 38, 0, 4 } };
const xtensa_mask_t xtensa_mask0 = { 1, xtensa_submask0 };
xtensa_reg_mask_t xtensa_submask1[] = { { 38, 5, 1 } };
const xtensa_mask_t xtensa_mask1 = { 1, xtensa_submask1 };
xtensa_reg_mask_t xtensa_submask2[] = { { 38, 18, 1 } };
const xtensa_mask_t xtensa_mask2 = { 1, xtensa_submask2 };
xtensa_reg_mask_t xtensa_submask3[] = { { 38, 6, 2 } };
const xtensa_mask_t xtensa_mask3 = { 1, xtensa_submask3 };
xtensa_reg_mask_t xtensa_submask4[] = { { 38, 4, 1 } };
const xtensa_mask_t xtensa_mask4 = { 1, xtensa_submask4 };
xtensa_reg_mask_t xtensa_submask5[] = { { 38, 16, 2 } };
const xtensa_mask_t xtensa_mask5 = { 1, xtensa_submask5 };
xtensa_reg_mask_t xtensa_submask6[] = { { 38, 8, 4 } };
const xtensa_mask_t xtensa_mask6 = { 1, xtensa_submask6 };
xtensa_reg_mask_t xtensa_submask7[] = { { 80, 8, 4 } };
const xtensa_mask_t xtensa_mask7 = { 1, xtensa_submask7 };


/* Register map.  */
xtensa_register_t xtensa_rmap[] =
{
  /*    idx ofs bi sz al targno  flags cp typ group name  */
  XTREG(  0,  0,32, 4, 4,0x0020,0x0006,-2, 9,0x2100,pc,          0,0,0,0,0,0)
  XTREG(  1,  4,32, 4, 4,0x0100,0x0006,-2, 1,0x0002,ar0,         0,0,0,0,0,0)
  XTREG(  2,  8,32, 4, 4,0x0101,0x0006,-2, 1,0x0002,ar1,         0,0,0,0,0,0)
  XTREG(  3, 12,32, 4, 4,0x0102,0x0006,-2, 1,0x0002,ar2,         0,0,0,0,0,0)
  XTREG(  4, 16,32, 4, 4,0x0103,0x0006,-2, 1,0x0002,ar3,         0,0,0,0,0,0)
  XTREG(  5, 20,32, 4, 4,0x0104,0x0006,-2, 1,0x0002,ar4,         0,0,0,0,0,0)
  XTREG(  6, 24,32, 4, 4,0x0105,0x0006,-2, 1,0x0002,ar5,         0,0,0,0,0,0)
  XTREG(  7, 28,32, 4, 4,0x0106,0x0006,-2, 1,0x0002,ar6,         0,0,0,0,0,0)
  XTREG(  8, 32,32, 4, 4,0x0107,0x0006,-2, 1,0x0002,ar7,         0,0,0,0,0,0)
  XTREG(  9, 36,32, 4, 4,0x0108,0x0006,-2, 1,0x0002,ar8,         0,0,0,0,0,0)
  XTREG( 10, 40,32, 4, 4,0x0109,0x0006,-2, 1,0x0002,ar9,         0,0,0,0,0,0)
  XTREG( 11, 44,32, 4, 4,0x010a,0x0006,-2, 1,0x0002,ar10,        0,0,0,0,0,0)
  XTREG( 12, 48,32, 4, 4,0x010b,0x0006,-2, 1,0x0002,ar11,        0,0,0,0,0,0)
  XTREG( 13, 52,32, 4, 4,0x010c,0x0006,-2, 1,0x0002,ar12,        0,0,0,0,0,0)
  XTREG( 14, 56,32, 4, 4,0x010d,0x0006,-2, 1,0x0002,ar13,        0,0,0,0,0,0)
  XTREG( 15, 60,32, 4, 4,0x010e,0x0006,-2, 1,0x0002,ar14,        0,0,0,0,0,0)
  XTREG( 16, 64,32, 4, 4,0x010f,0x0006,-2, 1,0x0002,ar15,        0,0,0,0,0,0)
  XTREG( 17, 68,32, 4, 4,0x0110,0x0006,-2, 1,0x0002,ar16,        0,0,0,0,0,0)
  XTREG( 18, 72,32, 4, 4,0x0111,0x0006,-2, 1,0x0002,ar17,        0,0,0,0,0,0)
  XTREG( 19, 76,32, 4, 4,0x0112,0x0006,-2, 1,0x0002,ar18,        0,0,0,0,0,0)
  XTREG( 20, 80,32, 4, 4,0x0113,0x0006,-2, 1,0x0002,ar19,        0,0,0,0,0,0)
  XTREG( 21, 84,32, 4, 4,0x0114,0x0006,-2, 1,0x0002,ar20,        0,0,0,0,0,0)
  XTREG( 22, 88,32, 4, 4,0x0115,0x0006,-2, 1,0x0002,ar21,        0,0,0,0,0,0)
  XTREG( 23, 92,32, 4, 4,0x0116,0x0006,-2, 1,0x0002,ar22,        0,0,0,0,0,0)
  XTREG( 24, 96,32, 4, 4,0x0117,0x0006,-2, 1,0x0002,ar23,        0,0,0,0,0,0)
  XTREG( 25,100,32, 4, 4,0x0118,0x0006,-2, 1,0x0002,ar24,        0,0,0,0,0,0)
  XTREG( 26,104,32, 4, 4,0x0119,0x0006,-2, 1,0x0002,ar25,        0,0,0,0,0,0)
  XTREG( 27,108,32, 4, 4,0x011a,0x0006,-2, 1,0x0002,ar26,        0,0,0,0,0,0)
  XTREG( 28,112,32, 4, 4,0x011b,0x0006,-2, 1,0x0002,ar27,        0,0,0,0,0,0)
  XTREG( 29,116,32, 4, 4,0x011c,0x0006,-2, 1,0x0002,ar28,        0,0,0,0,0,0)
  XTREG( 30,120,32, 4, 4,0x011d,0x0006,-2, 1,0x0002,ar29,        0,0,0,0,0,0)
  XTREG( 31,124,32, 4, 4,0x011e,0x0006,-2, 1,0x0002,ar30,        0,0,0,0,0,0)
  XTREG( 32,128,32, 4, 4,0x011f,0x0006,-2, 1,0x0002,ar31,        0,0,0,0,0,0)
  XTREG( 33,132, 6, 4, 4,0x0203,0x0006,-2, 2,0x1100,sar,         0,0,0,0,0,0)
  XTREG( 34,136, 3, 4, 4,0x0248,0x0006,-2, 2,0x1002,windowbase,  0,0,0,0,0,0)
  XTREG( 35,140, 8, 4, 4,0x0249,0x0006,-2, 2,0x1002,windowstart, 0,0,0,0,0,0)
  XTREG( 36,144,32, 4, 4,0x02b0,0x0002,-2, 2,0x1000,configid0,   0,0,0,0,0,0)
  XTREG( 37,148,32, 4, 4,0x02d0,0x0002,-2, 2,0x1000,configid1,   0,0,0,0,0,0)
  XTREG( 38,152,19, 4, 4,0x02e6,0x0006,-2, 2,0x1100,ps,          0,0,0,0,0,0)
  XTREG( 39,156,32, 4, 4,0x03e6,0x000e,-1, 3,0x0110,expstate,    0,0,0,0,0,0)
  XTREG( 40,160,32, 4, 4,0x0259,0x000d,-2, 2,0x1000,mmid,        0,0,0,0,0,0)
  XTREG( 41,164,32, 4, 4,0x025a,0x0007,-2, 2,0x1000,mpuenb,      0,0,0,0,0,0)
  XTREG( 42,168,16, 4, 4,0x025f,0x0007,-2, 2,0x1000,eraccess,    0,0,0,0,0,0)
  XTREG( 43,172, 2, 4, 4,0x0260,0x0007,-2, 2,0x1000,ibreakenable,0,0,0,0,0,0)
  XTREG( 44,176, 8, 4, 4,0x0262,0x0007,-2, 2,0x1000,cacheadrdis, 0,0,0,0,0,0)
  XTREG( 45,180, 9, 4, 4,0x0263,0x0007,-2, 2,0x1000,atomctl,     0,0,0,0,0,0)
  XTREG( 46,184,32, 4, 4,0x0268,0x0007,-2, 2,0x1000,ddr,         0,0,0,0,0,0)
  XTREG( 47,188,32, 4, 4,0x0280,0x0007,-2, 2,0x1000,ibreaka0,    0,0,0,0,0,0)
  XTREG( 48,192,32, 4, 4,0x0281,0x0007,-2, 2,0x1000,ibreaka1,    0,0,0,0,0,0)
  XTREG( 49,196,32, 4, 4,0x0290,0x0007,-2, 2,0x1000,dbreaka0,    0,0,0,0,0,0)
  XTREG( 50,200,32, 4, 4,0x0291,0x0007,-2, 2,0x1000,dbreaka1,    0,0,0,0,0,0)
  XTREG( 51,204,32, 4, 4,0x02a0,0x0007,-2, 2,0x1000,dbreakc0,    0,0,0,0,0,0)
  XTREG( 52,208,32, 4, 4,0x02a1,0x0007,-2, 2,0x1000,dbreakc1,    0,0,0,0,0,0)
  XTREG( 53,212,32, 4, 4,0x02b1,0x0007,-2, 2,0x1000,epc1,        0,0,0,0,0,0)
  XTREG( 54,216,32, 4, 4,0x02b2,0x0007,-2, 2,0x1000,epc2,        0,0,0,0,0,0)
  XTREG( 55,220,32, 4, 4,0x02b3,0x0007,-2, 2,0x1000,epc3,        0,0,0,0,0,0)
  XTREG( 56,224,32, 4, 4,0x02b4,0x0007,-2, 2,0x1000,epc4,        0,0,0,0,0,0)
  XTREG( 57,228,32, 4, 4,0x02b5,0x0007,-2, 2,0x1000,epc5,        0,0,0,0,0,0)
  XTREG( 58,232,32, 4, 4,0x02b6,0x0007,-2, 2,0x1000,epc6,        0,0,0,0,0,0)
  XTREG( 59,236,32, 4, 4,0x02b7,0x0007,-2, 2,0x1000,epc7,        0,0,0,0,0,0)
  XTREG( 60,240,32, 4, 4,0x02c0,0x0007,-2, 2,0x1000,depc,        0,0,0,0,0,0)
  XTREG( 61,244,19, 4, 4,0x02c2,0x0007,-2, 2,0x1000,eps2,        0,0,0,0,0,0)
  XTREG( 62,248,19, 4, 4,0x02c3,0x0007,-2, 2,0x1000,eps3,        0,0,0,0,0,0)
  XTREG( 63,252,19, 4, 4,0x02c4,0x0007,-2, 2,0x1000,eps4,        0,0,0,0,0,0)
  XTREG( 64,256,19, 4, 4,0x02c5,0x0007,-2, 2,0x1000,eps5,        0,0,0,0,0,0)
  XTREG( 65,260,19, 4, 4,0x02c6,0x0007,-2, 2,0x1000,eps6,        0,0,0,0,0,0)
  XTREG( 66,264,19, 4, 4,0x02c7,0x0007,-2, 2,0x1000,eps7,        0,0,0,0,0,0)
  XTREG( 67,268,32, 4, 4,0x02d1,0x0007,-2, 2,0x1000,excsave1,    0,0,0,0,0,0)
  XTREG( 68,272,32, 4, 4,0x02d2,0x0007,-2, 2,0x1000,excsave2,    0,0,0,0,0,0)
  XTREG( 69,276,32, 4, 4,0x02d3,0x0007,-2, 2,0x1000,excsave3,    0,0,0,0,0,0)
  XTREG( 70,280,32, 4, 4,0x02d4,0x0007,-2, 2,0x1000,excsave4,    0,0,0,0,0,0)
  XTREG( 71,284,32, 4, 4,0x02d5,0x0007,-2, 2,0x1000,excsave5,    0,0,0,0,0,0)
  XTREG( 72,288,32, 4, 4,0x02d6,0x0007,-2, 2,0x1000,excsave6,    0,0,0,0,0,0)
  XTREG( 73,292,32, 4, 4,0x02d7,0x0007,-2, 2,0x1000,excsave7,    0,0,0,0,0,0)
  XTREG( 74,296,23, 4, 4,0x02e2,0x000b,-2, 2,0x1000,interrupt,   0,0,0,0,0,0)
  XTREG( 75,300,23, 4, 4,0x02e2,0x000d,-2, 2,0x1000,intset,      0,0,0,0,0,0)
  XTREG( 76,304,23, 4, 4,0x02e3,0x000d,-2, 2,0x1000,intclear,    0,0,0,0,0,0)
  XTREG( 77,308,23, 4, 4,0x02e4,0x0007,-2, 2,0x1000,intenable,   0,0,0,0,0,0)
  XTREG( 78,312,32, 4, 4,0x02e7,0x0007,-2, 2,0x1000,vecbase,     0,0,0,0,0,0)
  XTREG( 79,316, 6, 4, 4,0x02e8,0x0007,-2, 2,0x1000,exccause,    0,0,0,0,0,0)
  XTREG( 80,320,12, 4, 4,0x02e9,0x0003,-2, 2,0x1000,debugcause,  0,0,0,0,0,0)
  XTREG( 81,324,32, 4, 4,0x02ea,0x000f,-2, 2,0x1000,ccount,      0,0,0,0,0,0)
  XTREG( 82,328,32, 4, 4,0x02eb,0x0003,-2, 2,0x1000,prid,        0,0,0,0,0,0)
  XTREG( 83,332,32, 4, 4,0x02ec,0x000f,-2, 2,0x1000,icount,      0,0,0,0,0,0)
  XTREG( 84,336, 4, 4, 4,0x02ed,0x0007,-2, 2,0x1000,icountlevel, 0,0,0,0,0,0)
  XTREG( 85,340,32, 4, 4,0x02ee,0x0007,-2, 2,0x1000,excvaddr,    0,0,0,0,0,0)
  XTREG( 86,344,32, 4, 4,0x02f0,0x000f,-2, 2,0x1000,ccompare0,   0,0,0,0,0,0)
  XTREG( 87,348,32, 4, 4,0x02f1,0x000f,-2, 2,0x1000,ccompare1,   0,0,0,0,0,0)
  XTREG( 88,352,32, 4, 4,0x02f2,0x000f,-2, 2,0x1000,ccompare2,   0,0,0,0,0,0)
  XTREG( 89,356,32, 4, 4,0x02f4,0x0007,-2, 2,0x1000,misc0,       0,0,0,0,0,0)
  XTREG( 90,360,32, 4, 4,0x02f5,0x0007,-2, 2,0x1000,misc1,       0,0,0,0,0,0)
  XTREG( 91,364,32, 4, 4,0x0000,0x0006,-2, 8,0x2100,a0,          0,0,0,0,0,0)
  XTREG( 92,368,32, 4, 4,0x0001,0x0006,-2, 8,0x2100,a1,          0,0,0,0,0,0)
  XTREG( 93,372,32, 4, 4,0x0002,0x0006,-2, 8,0x2100,a2,          0,0,0,0,0,0)
  XTREG( 94,376,32, 4, 4,0x0003,0x0006,-2, 8,0x2100,a3,          0,0,0,0,0,0)
  XTREG( 95,380,32, 4, 4,0x0004,0x0006,-2, 8,0x2100,a4,          0,0,0,0,0,0)
  XTREG( 96,384,32, 4, 4,0x0005,0x0006,-2, 8,0x2100,a5,          0,0,0,0,0,0)
  XTREG( 97,388,32, 4, 4,0x0006,0x0006,-2, 8,0x2100,a6,          0,0,0,0,0,0)
  XTREG( 98,392,32, 4, 4,0x0007,0x0006,-2, 8,0x2100,a7,          0,0,0,0,0,0)
  XTREG( 99,396,32, 4, 4,0x0008,0x0006,-2, 8,0x2100,a8,          0,0,0,0,0,0)
  XTREG(100,400,32, 4, 4,0x0009,0x0006,-2, 8,0x2100,a9,          0,0,0,0,0,0)
  XTREG(101,404,32, 4, 4,0x000a,0x0006,-2, 8,0x2100,a10,         0,0,0,0,0,0)
  XTREG(102,408,32, 4, 4,0x000b,0x0006,-2, 8,0x2100,a11,         0,0,0,0,0,0)
  XTREG(103,412,32, 4, 4,0x000c,0x0006,-2, 8,0x2100,a12,         0,0,0,0,0,0)
  XTREG(104,416,32, 4, 4,0x000d,0x0006,-2, 8,0x2100,a13,         0,0,0,0,0,0)
  XTREG(105,420,32, 4, 4,0x000e,0x0006,-2, 8,0x2100,a14,         0,0,0,0,0,0)
  XTREG(106,424,32, 4, 4,0x000f,0x0006,-2, 8,0x2100,a15,         0,0,0,0,0,0)
  XTREG(107,428, 4, 4, 4,0x2008,0x0006,-2, 6,0x1010,psintlevel,
            0,0,&xtensa_mask0,0,0,0)
  XTREG(108,432, 1, 4, 4,0x2009,0x0006,-2, 6,0x1010,psum,
            0,0,&xtensa_mask1,0,0,0)
  XTREG(109,436, 1, 4, 4,0x200a,0x0006,-2, 6,0x1010,pswoe,
            0,0,&xtensa_mask2,0,0,0)
  XTREG(110,440, 2, 4, 4,0x200b,0x0006,-2, 6,0x1010,psring,
            0,0,&xtensa_mask3,0,0,0)
  XTREG(111,444, 1, 4, 4,0x200c,0x0006,-2, 6,0x1010,psexcm,
            0,0,&xtensa_mask4,0,0,0)
  XTREG(112,448, 2, 4, 4,0x200d,0x0006,-2, 6,0x1010,pscallinc,
            0,0,&xtensa_mask5,0,0,0)
  XTREG(113,452, 4, 4, 4,0x200e,0x0006,-2, 6,0x1010,psowb,
            0,0,&xtensa_mask6,0,0,0)
  XTREG_END
};



#ifdef XTENSA_CONFIG_INSTANTIATE
XTENSA_CONFIG_INSTANTIATE(xtensa_rmap,0)
#endif

xtensa_gdbarch_tdep xtensa_tdep (xtensa_rmap);
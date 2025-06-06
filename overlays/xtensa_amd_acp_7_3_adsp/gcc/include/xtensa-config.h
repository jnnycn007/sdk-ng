/* Xtensa configuration settings.
   Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008
   Free Software Foundation, Inc.
   Contributed by Bob Wilson (bob.wilson@acm.org) at Tensilica.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, 51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.  */

   #ifndef XTENSA_CONFIG_H
   #define XTENSA_CONFIG_H
   
   /* The macros defined here match those with the same names in the Xtensa
      compile-time HAL (Hardware Abstraction Layer).  Please refer to the
      Xtensa System Software Reference Manual for documentation of these
      macros.  */
   
   #undef XCHAL_HAVE_BE
   #define XCHAL_HAVE_BE			0
   
   #undef XCHAL_HAVE_DENSITY
   #define XCHAL_HAVE_DENSITY		1
   
   #undef XCHAL_HAVE_CONST16
   #define XCHAL_HAVE_CONST16		0
   
   #undef XCHAL_HAVE_ABS
   #define XCHAL_HAVE_ABS			1
   
   #undef XCHAL_HAVE_ADDX
   #define XCHAL_HAVE_ADDX			1
   
   #undef XCHAL_HAVE_L32R
   #define XCHAL_HAVE_L32R			1
   
   #undef XSHAL_USE_ABSOLUTE_LITERALS
   #define XSHAL_USE_ABSOLUTE_LITERALS	0
   
   #undef XSHAL_HAVE_TEXT_SECTION_LITERALS
   #define XSHAL_HAVE_TEXT_SECTION_LITERALS 1 /* Set if there is some memory that allows both code and literals.  */
   
   #undef XCHAL_HAVE_MAC16
   #define XCHAL_HAVE_MAC16		0
   
   #undef XCHAL_HAVE_MUL16
   #define XCHAL_HAVE_MUL16		1
   
   #undef XCHAL_HAVE_MUL32
   #define XCHAL_HAVE_MUL32		1
   
   #undef XCHAL_HAVE_MUL32_HIGH
   #define XCHAL_HAVE_MUL32_HIGH		1
   
   #undef XCHAL_HAVE_DIV32
   #define XCHAL_HAVE_DIV32		1
   
   #undef XCHAL_HAVE_NSA
   #define XCHAL_HAVE_NSA			1
   
   #undef XCHAL_HAVE_MINMAX
   #define XCHAL_HAVE_MINMAX		1
   
   #undef XCHAL_HAVE_SEXT
   #define XCHAL_HAVE_SEXT			1
   
   #undef XCHAL_HAVE_LOOPS
   #define XCHAL_HAVE_LOOPS		1
   
   #undef XCHAL_HAVE_THREADPTR
   #define XCHAL_HAVE_THREADPTR		1
   
   #undef XCHAL_HAVE_RELEASE_SYNC
   #define XCHAL_HAVE_RELEASE_SYNC		1
   
   #undef XCHAL_HAVE_S32C1I
   #define XCHAL_HAVE_S32C1I		0
   
   #undef XCHAL_HAVE_BOOLEANS
   #define XCHAL_HAVE_BOOLEANS		1
   
   #undef XCHAL_HAVE_FP
   #define XCHAL_HAVE_FP			0
   
   #undef XCHAL_HAVE_FP_DIV
   #define XCHAL_HAVE_FP_DIV		0
   
   #undef XCHAL_HAVE_FP_RECIP
   #define XCHAL_HAVE_FP_RECIP		0
   
   #undef XCHAL_HAVE_FP_SQRT
   #define XCHAL_HAVE_FP_SQRT		0
   
   #undef XCHAL_HAVE_FP_RSQRT
   #define XCHAL_HAVE_FP_RSQRT		0
   
   #undef XCHAL_HAVE_DFP_ACCEL
   #define XCHAL_HAVE_DFP_ACCEL		0
   /* For backward compatibility */
   #undef XCHAL_HAVE_DFP_accel
   #define XCHAL_HAVE_DFP_accel		XCHAL_HAVE_DFP_ACCEL
   
   #undef XCHAL_HAVE_WINDOWED
   #define XCHAL_HAVE_WINDOWED		1
   
   #undef XCHAL_NUM_AREGS
   #define XCHAL_NUM_AREGS			64
   
   #undef XCHAL_HAVE_WIDE_BRANCHES
   #define XCHAL_HAVE_WIDE_BRANCHES	0
   
   #undef XCHAL_HAVE_PREDICTED_BRANCHES
   #define XCHAL_HAVE_PREDICTED_BRANCHES	0
   
   
   #undef XCHAL_ICACHE_SIZE
   #define XCHAL_ICACHE_SIZE		131072
   
   #undef XCHAL_DCACHE_SIZE
   #define XCHAL_DCACHE_SIZE		131072
   
   #undef XCHAL_ICACHE_LINESIZE
   #define XCHAL_ICACHE_LINESIZE		128
   
   #undef XCHAL_DCACHE_LINESIZE
   #define XCHAL_DCACHE_LINESIZE		128
   
   #undef XCHAL_ICACHE_LINEWIDTH
   #define XCHAL_ICACHE_LINEWIDTH		7
   
   #undef XCHAL_DCACHE_LINEWIDTH
   #define XCHAL_DCACHE_LINEWIDTH		7
   
   #undef XCHAL_DCACHE_IS_WRITEBACK
   #define XCHAL_DCACHE_IS_WRITEBACK	1
   
   
   #undef XCHAL_HAVE_MMU
   #define XCHAL_HAVE_MMU			0
   
   
   #undef XCHAL_HAVE_DEBUG
   #define XCHAL_HAVE_DEBUG		1
   
   #undef XCHAL_NUM_IBREAK
   #define XCHAL_NUM_IBREAK		2
   
   #undef XCHAL_NUM_DBREAK
   #define XCHAL_NUM_DBREAK		2
   
   #undef XCHAL_DEBUGLEVEL
   #define XCHAL_DEBUGLEVEL		6
   
   
   #undef XCHAL_MAX_INSTRUCTION_SIZE
   #define XCHAL_MAX_INSTRUCTION_SIZE	16
   
   #undef XCHAL_INST_FETCH_WIDTH
   #define XCHAL_INST_FETCH_WIDTH		16
   
   
   #undef XSHAL_ABI
   #undef XTHAL_ABI_WINDOWED
   #undef XTHAL_ABI_CALL0
   #define XSHAL_ABI			XTHAL_ABI_WINDOWED
   #define XTHAL_ABI_WINDOWED		0
   #define XTHAL_ABI_CALL0			1
   
   
   #undef XCHAL_M_STAGE
   #define XCHAL_M_STAGE			3
   
   #undef XTENSA_MARCH_LATEST
   #define XTENSA_MARCH_LATEST		281090
   
   #undef XTENSA_MARCH_EARLIEST
   #define XTENSA_MARCH_EARLIEST		281090
   
   
   #endif /* !XTENSA_CONFIG_H */
   
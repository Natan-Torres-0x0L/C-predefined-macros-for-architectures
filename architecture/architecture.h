#ifndef _ARCHITECTURE__ARCHITECTURE_H
#define _ARCHITECTURE__ARCHITECTURE_H

#include <stddef.h>

#if defined __alpha__ || defined __alpha || defined _M_ALPHA
  #define ARCHITECTURE_NAME "Alpha"

  #if defined __alpha_ev4__
    #define ARCHITECTURE_VERSION "Alpha EV4"

  #elif defined __alpha_ev5__
    #define ARCHITECTURE_VERSION "Alpha EV5"

  #elif defined __alpha_ev6__
    #define ARCHITECTURE_VERSION "Alpha EV6"

  #else
    #define ARCHITECTURE_VERSION "*"

  #endif

#elif defined __amd64__ || defined __amd64 || defined __x86_64__ || defined __x86_64 || defined _M_AMD64
  #define ARCHITECTURE_NAME "AMD64"
  #define ARCHITECTURE_VERSION "*"

#elif defined __arm__ || defined __thumb__ || defined __TARGET_ARCH_ARM || defined __TARGET_ARCH_THUMB || defined _ARM || defined _M_ARM || defined _M_ARMT || defined __arm
  #define ARCHITECTURE_NAME "ARM"

  #if defined __ARM_ARCH_2__
    #define ARCHITECTURE_VERSION "ARM 2"

  #elif defined __ARM_ARCH_3__ || defined __ARM_ARCH_3M__
    #define ARCHITECTURE_VERSION "ARM 3"
	
  #elif defined __ARM_ARCH_4T__ || defined __TARGET_ARM_4T
    #define ARCHITECTURE_VERSION "ARM 4T"
	
  #elif defined __ARM_ARCH_5__ || defined __ARM_ARCH_5E__
    #define ARCHITECTURE_VERSION "ARM 5"

  #elif defined __ARM_ARCH_5T__ || defined __ARM_ARCH_5TE__ || defined __ARM_ARCH_5TEJ__
    #define ARCHITECTURE_VERSION "ARM 5T"

  #elif defined __ARM_ARCH_6__ || defined __ARM_ARCH_6J__ || defined __ARM_ARCH_6K__ || defined __ARM_ARCH_6Z__ || defined __ARM_ARCH_6ZK__
    #define ARCHITECTURE_VERSION "ARM 6"

  #elif defined __ARM_ARCH_6T2__
    #define ARCHITECTURE_VERSION "ARM 6T2"

  #elif defined __ARM_ARCH_7__ || defined __ARM_ARCH_7A__ || defined __ARM_ARCH_7R__ || defined __ARM_ARCH_7M__ || defined __ARM_ARCH_7S__
    #define ARCHITECTURE_VERSION "ARM 7"

  #else
    #define ARCHITECTURE_VERSION "*"

  #endif

#elif defined __aarch64__
  #define ARCHITECTURE_NAME "ARM64"
  #define ARCHITECTURE_VERSION "*"

#elif defined __bfin || defined __BFIN__
  #define ARCHITECTURE_NAME "Blackfin"
  #define ARCHITECTURE_VERSION "*"

#elif defined __convex__
  #define ARCHITECTURE_NAME "Convex"

  #if defined __convex_c1__
    #define ARCHITECTURE_VERSION "Convex C1"

  #elif defined __convex_c2__
    #define ARCHITECTURE_VERSION "Convex C2"

  #elif defined __convex_c32__
    #define ARCHITECTURE_VERSION "Convex C32xx series"

  #elif defined __convex_c34__
    #define ARCHITECTURE_VERSION "Convex C34xx series"

  #elif defined __convex_c38__
    #define ARCHITECTURE_VERSION "Convex C38xx series"

  #else
    #define ARCHITECTURE_VERSION "*"

  #endif

#elif defined __epiphany__
  #define ARCHITECTURE_NAME "Epiphany"
  #define ARCHITECTURE_VERSION "*"

#elif defined __hppa__ || defined __HPPA__ || defined __hppa
  #define ARCHITECTURE_NAME "HP/PA RISC"

  #if defined _PA_RISC1_0
    #define ARCHITECTURE_VERSION "PA RISC 1.0"

  #elif defined _PA_RISC1_1 || defined __HPPA11__ || defined __PA7100__
    #define ARCHITECTURE_VERSION "PA RISC 1.1"

  #elif defined _PA_RISC2_0 || defined __RISC2_0__ || defined __HPPA20__ || defined __PA8000__
    #define ARCHITECTURE_VERSION "PA RISC 2.0"

  #else
    #define ARCHITECTURE_VERSION "*"

  #endif

#elif defined i386 || defined __i386 || defined __i386__ || defined __i386 || defined __i386 || defined __IA32__ || defined _M_I86 || defined _M_IX86 || defined __X86__ || defined _X86_ || defined __THW_INTEL__ || defined __I86__ || defined __INTEL__ || defined __386
  #define ARCHITECTURE_NAME "Intel x86"
  #define ARCHITECTURE_VERSION "*"

#elif defined __ia64__ || defined _IA64 || defined __IA64__ || defined __ia64 || defined _M_IA64 || defined _M_IA64 || defined __itanium__
  #define ARCHITECTURE_NAME "Intel Itanium (IA-64)"
  #define ARCHITECTURE_VERSION "*"

#elif defined __m68k__ || defined M68000 || defined __MC68K__
  #define ARCHITECTURE_NAME "Motorola 68k"
  #define ARCHITECTURE_VERSION "*"

  #if defined __mc68000__ || defined __MC68000__
    #define ARCHITECTURE_VERSION "68000"

  #elif defined __mc68010__
    #define ARCHITECTURE_VERSION "68010"

  #elif defined __mc68020__ || defined __MC68020__
    #define ARCHITECTURE_VERSION "68020"

  #elif defined __mc68030__ || defined __MC68030__
    #define ARCHITECTURE_VERSION "68030"

  #elif defined __mc68040__
    #define ARCHITECTURE_VERSION "68040"

  #elif defined __mc68060__
    #define ARCHITECTURE_VERSION "68060"

  #else
    #define ARCHITECTURE_VERSION "*"

  #endif

#elif defined __mips__ || defined mips || defined __mips || defined __MIPS__
  #define ARCHITECTURE_NAME "MIPS"

  #if defined _MIPS_ISA_MIPS1
    #define ARCHITECTURE_VERSION "R2000"

  #elif defined _MIPS_ISA_MIPS1 || defined _R3000
    #define ARCHITECTURE_VERSION "R3000"

  #elif defined _MIPS_ISA_MIPS2 || defined __MIPS_ISA2__
    #define ARCHITECTURE_VERSION "R6000"

  #elif defined _R4000
    #define ARCHITECTURE_VERSION "R4000"

  #elif defined _MIPS_ISA_MIPS3 || defined __MIPS_ISA3__
    #define ARCHITECTURE_VERSION "R4400"

  #elif defined _MIPS_ISA_MIPS4 || defined __MIPS_ISA4__
    #define ARCHITECTURE_VERSION "R8000"

  #elif defined _MIPS_ISA_MIPS4 || defined __MIPS_ISA4__
    #define ARCHITECTURE_VERSION "R10000"

  #else
    #define ARCHITECTURE_VERSION "*"

  #endif

#elif defined __powerpc || defined __powerpc__ || defined __powerpc64__ || defined __POWERPC__ || defined __ppc__ || defined __ppc64__ || defined __PPC__ || defined __PPC64__ || defined _ARCH_PPC || defined _ARCH_PPC64 || defined _M_PPC || defined _ARCH_PPC || defined _ARCH_PPC64 || defined __ppc
  #define ARCHITECTURE_NAME "PowerPc"

  #if defined _ARCH_440
    #define ARCHITECTURE_VERSION "PowerPC 440"

  #elif defined _ARCH_450
    #define ARCHITECTURE_VERSION "PowerPC 450"

  #elif defined __ppc601__ || defined _ARCH_601
    #define ARCHITECTURE_VERSION "PowerPC 601"

  #elif defined __ppc603__ || defined _ARCH_603
    #define ARCHITECTURE_VERSION "PowerPC 603"

  #elif defined __ppc604__ || defined _ARCH_604
    #define ARCHITECTURE_VERSION "PowerPC 604"

  #else
    #define ARCHITECTURE_VERSION "*"

  #endif

#elif defined pyr
  #define ARCHITECTURE_NAME "Pyramid 9810"
  #define ARCHITECTURE_VERSION "*"

#elif defined __THW_RS6000 || defined _IBMR2 || defined _POWER || defined _ARCH_PWR || defined _ARCH_PWR2 || defined _ARCH_PWR3 || defined _ARCH_PWR4
  #define ARCHITECTURE_NAME "RS/6000"
  #define ARCHITECTURE_VERSION "*"

#elif defined __sparc__ || defined __sparc
  #define ARCHITECTURE_NAME "SPARC"

  #if defined __sparc_v8__ || defined __sparcv8
    #define ARCHITECTURE_VERSION "SPARC v8 (SuperSPARC)"

  #elif defined __sparc_v9__ || defined __sparcv9
    #define ARCHITECTURE_VERSION "SPARC v9 (UltraSPARC)"

  #else
    #define ARCHITECTURE_VERSION "*"

  #endif

#elif defined __sh__
  #define ARCHITECTURE_NAME "SuperH"

  #if defined __sh1__
    #define ARCHITECTURE_VERSION "SuperH 1"

  #elif defined __sh2__
    #define ARCHITECTURE_VERSION "SuperH 2"

  #elif defined __sh3__ || defined __SH3__
    #define ARCHITECTURE_VERSION "SuperH 3"

  #elif defined __SH4__
    #define ARCHITECTURE_VERSION "SuperH 4"

  #elif defined __SH5__
    #define ARCHITECTURE_VERSION "SuperH 5"

  #else
    #define ARCHITECTURE_VERSION "*"

  #endif

#elif defined __370__ || defined __THW_370__ || defined __s390__ || defined __s390x__ || defined __zarch__ || defined __SYSC_ZARCH__
  #define ARCHITECTURE_NAME "SystemZ"
  #define ARCHITECTURE_VERSION "*"

#elif defined _TMS320C2XX || defined __TMS320C2000__ || defined _TMS320C5X || defined __TMS320C55X__ || defined _TMS320C6X || defined __TMS320C6X__ || defined __TMS470__
  #define ARCHITECTURE_NAME "TMS320"

  #if defined _TMS320C28X
    #define ARCHITECTURE_VERSION "C28xx"

  #elif defined _TMS320C5XX
    #define ARCHITECTURE_VERSION "C54x"

  #elif defined __TMS320C55X__
    #define ARCHITECTURE_VERSION "C55x"

  #elif defined _TMS320C6200
    #define ARCHITECTURE_VERSION "C6200"

  #elif defined _TMS320C6400
    #define ARCHITECTURE_VERSION "C6400"

  #elif defined _TMS320C6400_PLUS
    #define ARCHITECTURE_VERSION "C6400+"

  #elif defined _TMS320C6600
    #define ARCHITECTURE_VERSION "C6600"

  #elif defined _TMS320C6700
    #define ARCHITECTURE_VERSION "C6700"

  #elif defined _TMS320C6700_PLUS
    #define ARCHITECTURE_VERSION "C6700+"

  #elif defined _TMS320C6740
    #define ARCHITECTURE_VERSION "C6740"

  #else
    #define ARCHITECTURE_VERSION "*"

  #endif

#else
  #define ARCHITECTURE_NAME "*"
  #define ARCHITECTURE_VERSION "*"

#endif

#define ARCHITECTURE_CPU (((size_t)-1 > 0xffffffffUL) ? "x64" : "x32" /* "x86 */)

#endif

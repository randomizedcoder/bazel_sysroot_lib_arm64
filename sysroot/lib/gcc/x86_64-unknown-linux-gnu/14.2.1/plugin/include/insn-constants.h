/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define XMM13_REG 49
#define PPERM_SIGN 0xc0
#define R16_REG 76
#define XMM10_REG 46
#define R22_REG 82
#define XMM17_REG 53
#define COM_FALSE_P 3
#define R13_REG 41
#define XMM6_REG 26
#define FPSR_REG 18
#define XMM18_REG 54
#define R10_REG 38
#define XMM3_REG 23
#define ST5_REG 13
#define SI_REG 4
#define MM6_REG 34
#define AX_REG 0
#define XMM0_REG 20
#define DI_REG 5
#define MM3_REG 31
#define MASK7_REG 75
#define ST2_REG 10
#define ROUND_SAE 8
#define ROUND_NEAREST_INT 0
#define R27_REG 87
#define PPERM_ZERO 0x80
#define MM0_REG 28
#define CX_REG 2
#define MASK4_REG 72
#define ROUND_NO_EXC 0x8
#define XMM27_REG 63
#define R24_REG 84
#define R9_REG 37
#define ABI_DEFAULT 0
#define MASK1_REG 69
#define XMM24_REG 60
#define MM2_REG 30
#define R30_REG 90
#define XMM15_REG 51
#define NO_ROUND 4
#define XMM30_REG 66
#define PPERM_SRC1 0x00
#define PPERM_SRC2 0x10
#define R18_REG 78
#define XMM12_REG 48
#define R15_REG 43
#define PCOM_FALSE 0
#define R21_REG 81
#define XMM5_REG 25
#define R12_REG 40
#define R8_REG 36
#define ST7_REG 15
#define PPERM_REVERSE 0x40
#define BP_REG 6
#define XMM2_REG 22
#define PCOM_TRUE 1
#define ST4_REG 12
#define MM5_REG 33
#define ROUND_TRUNC 0x3
#define XMM7_REG 27
#define XMM21_REG 57
#define PPERM_SRC 0x00
#define R29_REG 89
#define ST1_REG 9
#define MASK6_REG 74
#define XMM8_REG 44
#define ROUND_ROUNDEVEN 0x0
#define R26_REG 86
#define XMM9_REG 45
#define MASK3_REG 71
#define XMM26_REG 62
#define ROUND_MXCSR 0x4
#define PPERM_ONES 0xa0
#define ROUND_ZERO 3
#define FIRST_PSEUDO_REG 92
#define ABI_UNKNOWN 2
#define ROUND_FLOOR 0x1
#define COM_TRUE_S 4
#define PPERM_INV_SIGN 0xe0
#define XMM23_REG 59
#define ROUND_NEG_INF 1
#define XMM14_REG 50
#define XMM25_REG 61
#define COM_FALSE_S 2
#define BX_REG 3
#define XMM20_REG 56
#define XMM11_REG 47
#define FRAME_REG 19
#define PPERM_INVERT 0x20
#define R23_REG 83
#define PPERM_REV_INV 0x60
#define R14_REG 42
#define R17_REG 77
#define ROUND_CEIL 0x2
#define ABI_VZEROUPPER 1
#define COM_TRUE_P 5
#define R20_REG 80
#define R11_REG 39
#define XMM4_REG 24
#define ST6_REG 14
#define MM7_REG 35
#define SP_REG 7
#define ARGP_REG 16
#define MASK0_REG 68
#define XMM1_REG 21
#define XMM29_REG 65
#define ST3_REG 11
#define MM4_REG 32
#define R28_REG 88
#define ST0_REG 8
#define MM1_REG 29
#define MASK5_REG 73
#define ROUND_POS_INF 2
#define XMM28_REG 64
#define XMM19_REG 55
#define R25_REG 85
#define MASK2_REG 70
#define R31_REG 91
#define FLAGS_REG 17
#define DX_REG 1
#define XMM16_REG 52
#define XMM31_REG 67
#define R19_REG 79
#define XMM22_REG 58

enum unspec {
  UNSPEC_GOT = 0,
  UNSPEC_GOTOFF = 1,
  UNSPEC_GOTPCREL = 2,
  UNSPEC_GOTTPOFF = 3,
  UNSPEC_TPOFF = 4,
  UNSPEC_NTPOFF = 5,
  UNSPEC_DTPOFF = 6,
  UNSPEC_GOTNTPOFF = 7,
  UNSPEC_INDNTPOFF = 8,
  UNSPEC_PLTOFF = 9,
  UNSPEC_MACHOPIC_OFFSET = 10,
  UNSPEC_PCREL = 11,
  UNSPEC_SIZEOF = 12,
  UNSPEC_STACK_ALLOC = 13,
  UNSPEC_SET_GOT = 14,
  UNSPEC_SET_RIP = 15,
  UNSPEC_SET_GOT_OFFSET = 16,
  UNSPEC_MEMORY_BLOCKAGE = 17,
  UNSPEC_PROBE_STACK = 18,
  UNSPEC_TP = 19,
  UNSPEC_TLS_GD = 20,
  UNSPEC_TLS_LD_BASE = 21,
  UNSPEC_TLSDESC = 22,
  UNSPEC_TLS_IE_SUN = 23,
  UNSPEC_SCAS = 24,
  UNSPEC_FNSTSW = 25,
  UNSPEC_SAHF = 26,
  UNSPEC_NOTRAP = 27,
  UNSPEC_PARITY = 28,
  UNSPEC_FSTCW = 29,
  UNSPEC_REP = 30,
  UNSPEC_LD_MPIC = 31,
  UNSPEC_TRUNC_NOOP = 32,
  UNSPEC_DIV_ALREADY_SPLIT = 33,
  UNSPEC_PAUSE = 34,
  UNSPEC_LEA_ADDR = 35,
  UNSPEC_XBEGIN_ABORT = 36,
  UNSPEC_STOS = 37,
  UNSPEC_PEEPSIB = 38,
  UNSPEC_INSN_FALSE_DEP = 39,
  UNSPEC_SBB = 40,
  UNSPEC_CC_NE = 41,
  UNSPEC_STC = 42,
  UNSPEC_PUSHFL = 43,
  UNSPEC_POPFL = 44,
  UNSPEC_FIX_NOTRUNC = 45,
  UNSPEC_MASKMOV = 46,
  UNSPEC_MOVCC_MASK = 47,
  UNSPEC_MOVMSK = 48,
  UNSPEC_INSERTPS = 49,
  UNSPEC_BLENDV = 50,
  UNSPEC_PSHUFB = 51,
  UNSPEC_XOP_PERMUTE = 52,
  UNSPEC_RCP = 53,
  UNSPEC_RSQRT = 54,
  UNSPEC_PSADBW = 55,
  UNSPEC_US_TRUNCATE = 56,
  UNSPEC_SCALEF = 57,
  UNSPEC_PCMP = 58,
  UNSPEC_CVTBFSF = 59,
  UNSPEC_IEEE_MIN = 60,
  UNSPEC_IEEE_MAX = 61,
  UNSPEC_SIN = 62,
  UNSPEC_COS = 63,
  UNSPEC_FPATAN = 64,
  UNSPEC_FYL2X = 65,
  UNSPEC_FYL2XP1 = 66,
  UNSPEC_FRNDINT = 67,
  UNSPEC_FIST = 68,
  UNSPEC_F2XM1 = 69,
  UNSPEC_TAN = 70,
  UNSPEC_FXAM = 71,
  UNSPEC_FRNDINT_ROUNDEVEN = 72,
  UNSPEC_FRNDINT_FLOOR = 73,
  UNSPEC_FRNDINT_CEIL = 74,
  UNSPEC_FRNDINT_TRUNC = 75,
  UNSPEC_FIST_FLOOR = 76,
  UNSPEC_FIST_CEIL = 77,
  UNSPEC_SINCOS_COS = 78,
  UNSPEC_SINCOS_SIN = 79,
  UNSPEC_XTRACT_FRACT = 80,
  UNSPEC_XTRACT_EXP = 81,
  UNSPEC_FSCALE_FRACT = 82,
  UNSPEC_FSCALE_EXP = 83,
  UNSPEC_FPREM_F = 84,
  UNSPEC_FPREM_U = 85,
  UNSPEC_FPREM1_F = 86,
  UNSPEC_FPREM1_U = 87,
  UNSPEC_C2_FLAG = 88,
  UNSPEC_FXAM_MEM = 89,
  UNSPEC_SP_SET = 90,
  UNSPEC_SP_TEST = 91,
  UNSPEC_ROUND = 92,
  UNSPEC_CRC32 = 93,
  UNSPEC_LZCNT = 94,
  UNSPEC_TZCNT = 95,
  UNSPEC_BEXTR = 96,
  UNSPEC_PDEP = 97,
  UNSPEC_PEXT = 98,
  UNSPEC_INTERRUPT_RETURN = 99,
  UNSPEC_MOVDIRI = 100,
  UNSPEC_MOVDIR64B = 101,
  UNSPEC_CALLEE_ABI = 102,
  UNSPEC_APXPUSH2 = 103,
  UNSPEC_APXPOP2_LOW = 104,
  UNSPEC_APXPOP2_HIGH = 105,
  UNSPEC_APX_PPX = 106,
  UNSPEC_3DNOW = 107,
  UNSPEC_MOVNTQ = 108,
  UNSPEC_PFRCP = 109,
  UNSPEC_PFRCPIT1 = 110,
  UNSPEC_PFRCPIT2 = 111,
  UNSPEC_PFRSQRT = 112,
  UNSPEC_PFRSQIT1 = 113,
  UNSPEC_MOVNT = 114,
  UNSPEC_MOVDI_TO_SSE = 115,
  UNSPEC_LDDQU = 116,
  UNSPEC_PSIGN = 117,
  UNSPEC_PALIGNR = 118,
  UNSPEC_EXTRQI = 119,
  UNSPEC_EXTRQ = 120,
  UNSPEC_INSERTQI = 121,
  UNSPEC_INSERTQ = 122,
  UNSPEC_DP = 123,
  UNSPEC_MOVNTDQA = 124,
  UNSPEC_MPSADBW = 125,
  UNSPEC_PHMINPOSUW = 126,
  UNSPEC_PTEST = 127,
  UNSPEC_PCMPESTR = 128,
  UNSPEC_PCMPISTR = 129,
  UNSPEC_FMADDSUB = 130,
  UNSPEC_XOP_UNSIGNED_CMP = 131,
  UNSPEC_XOP_TRUEFALSE = 132,
  UNSPEC_FRCZ = 133,
  UNSPEC_AESENC = 134,
  UNSPEC_AESENCLAST = 135,
  UNSPEC_AESDEC = 136,
  UNSPEC_AESDECLAST = 137,
  UNSPEC_AESIMC = 138,
  UNSPEC_AESKEYGENASSIST = 139,
  UNSPEC_PCLMUL = 140,
  UNSPEC_VPERMIL = 141,
  UNSPEC_VPERMIL2 = 142,
  UNSPEC_VPERMIL2F128 = 143,
  UNSPEC_CAST = 144,
  UNSPEC_VTESTP = 145,
  UNSPEC_VCVTPH2PS = 146,
  UNSPEC_VCVTPS2PH = 147,
  UNSPEC_VPERMVAR = 148,
  UNSPEC_VPERMTI = 149,
  UNSPEC_GATHER = 150,
  UNSPEC_VSIBADDR = 151,
  UNSPEC_VPERMT2 = 152,
  UNSPEC_UNSIGNED_FIX_NOTRUNC = 153,
  UNSPEC_UNSIGNED_PCMP = 154,
  UNSPEC_TESTM = 155,
  UNSPEC_TESTNM = 156,
  UNSPEC_SCATTER = 157,
  UNSPEC_RCP14 = 158,
  UNSPEC_RSQRT14 = 159,
  UNSPEC_FIXUPIMM = 160,
  UNSPEC_VTERNLOG = 161,
  UNSPEC_GETEXP = 162,
  UNSPEC_GETMANT = 163,
  UNSPEC_ALIGN = 164,
  UNSPEC_CONFLICT = 165,
  UNSPEC_COMPRESS = 166,
  UNSPEC_COMPRESS_STORE = 167,
  UNSPEC_EXPAND = 168,
  UNSPEC_MASKOP = 169,
  UNSPEC_KORTEST = 170,
  UNSPEC_KTEST = 171,
  UNSPEC_MASKLOAD = 172,
  UNSPEC_EMBEDDED_ROUNDING = 173,
  UNSPEC_GATHER_PREFETCH = 174,
  UNSPEC_SCATTER_PREFETCH = 175,
  UNSPEC_EXP2 = 176,
  UNSPEC_RCP28 = 177,
  UNSPEC_RSQRT28 = 178,
  UNSPEC_SHA1MSG1 = 179,
  UNSPEC_SHA1MSG2 = 180,
  UNSPEC_SHA1NEXTE = 181,
  UNSPEC_SHA1RNDS4 = 182,
  UNSPEC_SHA256MSG1 = 183,
  UNSPEC_SHA256MSG2 = 184,
  UNSPEC_SHA256RNDS2 = 185,
  UNSPEC_DBPSADBW = 186,
  UNSPEC_PMADDUBSW512 = 187,
  UNSPEC_PMADDWD512 = 188,
  UNSPEC_PSHUFHW = 189,
  UNSPEC_PSHUFLW = 190,
  UNSPEC_CVTINT2MASK = 191,
  UNSPEC_REDUCE = 192,
  UNSPEC_FPCLASS = 193,
  UNSPEC_RANGE = 194,
  UNSPEC_VPMADD52LUQ = 195,
  UNSPEC_VPMADD52HUQ = 196,
  UNSPEC_VPMULTISHIFT = 197,
  UNSPEC_VP4FMADD = 198,
  UNSPEC_VP4FNMADD = 199,
  UNSPEC_VP4DPWSSD = 200,
  UNSPEC_VP4DPWSSDS = 201,
  UNSPEC_GF2P8AFFINEINV = 202,
  UNSPEC_GF2P8AFFINE = 203,
  UNSPEC_GF2P8MUL = 204,
  UNSPEC_VPSHLD = 205,
  UNSPEC_VPSHRD = 206,
  UNSPEC_VPSHRDV = 207,
  UNSPEC_VPSHLDV = 208,
  UNSPEC_VPDPBUSD = 209,
  UNSPEC_VPDPBUSDS = 210,
  UNSPEC_VPDPWSSD = 211,
  UNSPEC_VPDPWSSDS = 212,
  UNSPEC_VAESDEC = 213,
  UNSPEC_VAESDECLAST = 214,
  UNSPEC_VAESENC = 215,
  UNSPEC_VAESENCLAST = 216,
  UNSPEC_VPCLMULQDQ = 217,
  UNSPEC_VPSHUFBIT = 218,
  UNSPEC_VP2INTERSECT = 219,
  UNSPEC_VDPBF16PS = 220,
  UNSPEC_COMPLEX_FMA = 221,
  UNSPEC_COMPLEX_FMA_PAIR = 222,
  UNSPEC_COMPLEX_FCMA = 223,
  UNSPEC_COMPLEX_FCMA_PAIR = 224,
  UNSPEC_COMPLEX_FMUL = 225,
  UNSPEC_COMPLEX_FCMUL = 226,
  UNSPEC_COMPLEX_MASK = 227,
  UNSPEC_SM3MSG1 = 228,
  UNSPEC_SM3MSG2 = 229,
  UNSPEC_SM3RNDS2 = 230,
  UNSPEC_VPDPBSSD = 231,
  UNSPEC_VPDPBSSDS = 232,
  UNSPEC_VPDPBSUD = 233,
  UNSPEC_VPDPBSUDS = 234,
  UNSPEC_VPDPBUUD = 235,
  UNSPEC_VPDPBUUDS = 236,
  UNSPEC_VPDPWUSD = 237,
  UNSPEC_VPDPWUSDS = 238,
  UNSPEC_VPDPWSUD = 239,
  UNSPEC_VPDPWSUDS = 240,
  UNSPEC_VPDPWUUD = 241,
  UNSPEC_VPDPWUUDS = 242,
  UNSPEC_SHA512MSG1 = 243,
  UNSPEC_SHA512MSG2 = 244,
  UNSPEC_SHA512RNDS2 = 245,
  UNSPEC_SM4KEY4 = 246,
  UNSPEC_SM4RNDS4 = 247,
  UNSPEC_LFENCE = 248,
  UNSPEC_SFENCE = 249,
  UNSPEC_MFENCE = 250,
  UNSPEC_FILD_ATOMIC = 251,
  UNSPEC_FIST_ATOMIC = 252,
  UNSPEC_LDX_ATOMIC = 253,
  UNSPEC_STX_ATOMIC = 254,
  UNSPEC_LDA = 255,
  UNSPEC_STA = 256
};
#define NUM_UNSPEC_VALUES 257
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_UD2 = 0,
  UNSPECV_BLOCKAGE = 1,
  UNSPECV_STACK_PROBE = 2,
  UNSPECV_PROBE_STACK_RANGE = 3,
  UNSPECV_ALIGN = 4,
  UNSPECV_PROLOGUE_USE = 5,
  UNSPECV_SPLIT_STACK_RETURN = 6,
  UNSPECV_CLD = 7,
  UNSPECV_NOPS = 8,
  UNSPECV_RDTSC = 9,
  UNSPECV_RDTSCP = 10,
  UNSPECV_RDPMC = 11,
  UNSPECV_LLWP_INTRINSIC = 12,
  UNSPECV_SLWP_INTRINSIC = 13,
  UNSPECV_LWPVAL_INTRINSIC = 14,
  UNSPECV_LWPINS_INTRINSIC = 15,
  UNSPECV_RDFSBASE = 16,
  UNSPECV_RDGSBASE = 17,
  UNSPECV_WRFSBASE = 18,
  UNSPECV_WRGSBASE = 19,
  UNSPECV_FXSAVE = 20,
  UNSPECV_FXRSTOR = 21,
  UNSPECV_FXSAVE64 = 22,
  UNSPECV_FXRSTOR64 = 23,
  UNSPECV_XSAVE = 24,
  UNSPECV_XRSTOR = 25,
  UNSPECV_XSAVE64 = 26,
  UNSPECV_XRSTOR64 = 27,
  UNSPECV_XSAVEOPT = 28,
  UNSPECV_XSAVEOPT64 = 29,
  UNSPECV_XSAVES = 30,
  UNSPECV_XRSTORS = 31,
  UNSPECV_XSAVES64 = 32,
  UNSPECV_XRSTORS64 = 33,
  UNSPECV_XSAVEC = 34,
  UNSPECV_XSAVEC64 = 35,
  UNSPECV_XGETBV = 36,
  UNSPECV_XSETBV = 37,
  UNSPECV_WBINVD = 38,
  UNSPECV_WBNOINVD = 39,
  UNSPECV_FNSTENV = 40,
  UNSPECV_FLDENV = 41,
  UNSPECV_FNSTSW = 42,
  UNSPECV_FNCLEX = 43,
  UNSPECV_RDRAND = 44,
  UNSPECV_RDSEED = 45,
  UNSPECV_XBEGIN = 46,
  UNSPECV_XEND = 47,
  UNSPECV_XABORT = 48,
  UNSPECV_XTEST = 49,
  UNSPECV_NLGR = 50,
  UNSPECV_CLWB = 51,
  UNSPECV_CLFLUSHOPT = 52,
  UNSPECV_MONITORX = 53,
  UNSPECV_MWAITX = 54,
  UNSPECV_CLZERO = 55,
  UNSPECV_PKU = 56,
  UNSPECV_RDPID = 57,
  UNSPECV_NOP_ENDBR = 58,
  UNSPECV_NOP_RDSSP = 59,
  UNSPECV_INCSSP = 60,
  UNSPECV_SAVEPREVSSP = 61,
  UNSPECV_RSTORSSP = 62,
  UNSPECV_WRSS = 63,
  UNSPECV_WRUSS = 64,
  UNSPECV_SETSSBSY = 65,
  UNSPECV_CLRSSBSY = 66,
  UNSPECV_XSUSLDTRK = 67,
  UNSPECV_XRESLDTRK = 68,
  UNSPECV_UMWAIT = 69,
  UNSPECV_UMONITOR = 70,
  UNSPECV_TPAUSE = 71,
  UNSPECV_CLUI = 72,
  UNSPECV_STUI = 73,
  UNSPECV_TESTUI = 74,
  UNSPECV_SENDUIPI = 75,
  UNSPECV_CLDEMOTE = 76,
  UNSPECV_SPECULATION_BARRIER = 77,
  UNSPECV_PTWRITE = 78,
  UNSPECV_ENQCMD = 79,
  UNSPECV_ENQCMDS = 80,
  UNSPECV_SERIALIZE = 81,
  UNSPECV_PATCHABLE_AREA = 82,
  UNSPECV_HRESET = 83,
  UNSPECV_PREFETCHI = 84,
  UNSPECV_URDMSR = 85,
  UNSPECV_UWRMSR = 86,
  UNSPECV_LDTILECFG = 87,
  UNSPECV_STTILECFG = 88,
  UNSPECV_EMMS = 89,
  UNSPECV_FEMMS = 90,
  UNSPECV_LDMXCSR = 91,
  UNSPECV_STMXCSR = 92,
  UNSPECV_CLFLUSH = 93,
  UNSPECV_MONITOR = 94,
  UNSPECV_MWAIT = 95,
  UNSPECV_VZEROALL = 96,
  UNSPECV_LOADIWKEY = 97,
  UNSPECV_AESDEC128KLU8 = 98,
  UNSPECV_AESENC128KLU8 = 99,
  UNSPECV_AESDEC256KLU8 = 100,
  UNSPECV_AESENC256KLU8 = 101,
  UNSPECV_AESDECWIDE128KLU8 = 102,
  UNSPECV_AESENCWIDE128KLU8 = 103,
  UNSPECV_AESDECWIDE256KLU8 = 104,
  UNSPECV_AESENCWIDE256KLU8 = 105,
  UNSPECV_ENCODEKEY128U32 = 106,
  UNSPECV_ENCODEKEY256U32 = 107,
  UNSPECV_CMPXCHG = 108,
  UNSPECV_XCHG = 109,
  UNSPECV_LOCK = 110,
  UNSPECV_CMPCCXADD = 111,
  UNSPECV_RAOINT = 112
};
#define NUM_UNSPECV_VALUES 113
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */

/* Generated automatically by the program `genopinit'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x010405, CODE_FOR_extendqihi2 },
  { 0x010406, CODE_FOR_extendqisi2 },
  { 0x010407, CODE_FOR_extendqidi2 },
  { 0x010505, CODE_FOR_extendhihi2 },
  { 0x010506, CODE_FOR_extendhisi2 },
  { 0x010507, CODE_FOR_extendhidi2 },
  { 0x010607, CODE_FOR_extendsidi2 },
  { 0x011b1c, CODE_FOR_extendsfdf2 },
  { 0x021c1b, CODE_FOR_truncdfsf2 },
  { 0x030405, CODE_FOR_zero_extendqihi2 },
  { 0x030406, CODE_FOR_zero_extendqisi2 },
  { 0x030407, CODE_FOR_zero_extendqidi2 },
  { 0x030506, CODE_FOR_zero_extendhisi2 },
  { 0x030507, CODE_FOR_zero_extendhidi2 },
  { 0x030607, CODE_FOR_zero_extendsidi2 },
  { 0x06061b, CODE_FOR_floatsisf2 },
  { 0x06061c, CODE_FOR_floatsidf2 },
  { 0x06071b, CODE_FOR_floatdisf2 },
  { 0x06071c, CODE_FOR_floatdidf2 },
  { 0x07061b, CODE_FOR_floatunssisf2 },
  { 0x07061c, CODE_FOR_floatunssidf2 },
  { 0x07071b, CODE_FOR_floatunsdisf2 },
  { 0x07071c, CODE_FOR_floatunsdidf2 },
  { 0x081b06, CODE_FOR_lrintsfsi2 },
  { 0x081b07, CODE_FOR_lrintsfdi2 },
  { 0x081c06, CODE_FOR_lrintdfsi2 },
  { 0x081c07, CODE_FOR_lrintdfdi2 },
  { 0x091b06, CODE_FOR_lroundsfsi2 },
  { 0x091b07, CODE_FOR_lroundsfdi2 },
  { 0x091c06, CODE_FOR_lrounddfsi2 },
  { 0x091c07, CODE_FOR_lrounddfdi2 },
  { 0x101b06, CODE_FOR_fix_truncsfsi2 },
  { 0x101b07, CODE_FOR_fix_truncsfdi2 },
  { 0x101c06, CODE_FOR_fix_truncdfsi2 },
  { 0x101c07, CODE_FOR_fix_truncdfdi2 },
  { 0x111b06, CODE_FOR_fixuns_truncsfsi2 },
  { 0x111b07, CODE_FOR_fixuns_truncsfdi2 },
  { 0x111c06, CODE_FOR_fixuns_truncdfsi2 },
  { 0x111c07, CODE_FOR_fixuns_truncdfdi2 },
  { 0x120607, CODE_FOR_mulsidi3 },
  { 0x120708, CODE_FOR_mulditi3 },
  { 0x130607, CODE_FOR_umulsidi3 },
  { 0x130708, CODE_FOR_umulditi3 },
  { 0x140607, CODE_FOR_usmulsidi3 },
  { 0x140708, CODE_FOR_usmulditi3 },
  { 0x150607, CODE_FOR_maddsidi4 },
  { 0x160607, CODE_FOR_umaddsidi4 },
  { 0x170607, CODE_FOR_ssmaddsidi4 },
  { 0x180607, CODE_FOR_usmaddsidi4 },
  { 0x190607, CODE_FOR_msubsidi4 },
  { 0x1a0607, CODE_FOR_umsubsidi4 },
  { 0x1b0607, CODE_FOR_ssmsubsidi4 },
  { 0x1c0706, CODE_FOR_usmsubsidi4 },
  { 0x310006, CODE_FOR_addsi3 },
  { 0x310007, CODE_FOR_adddi3 },
  { 0x31001b, CODE_FOR_addsf3 },
  { 0x31001c, CODE_FOR_adddf3 },
  { 0x310029, CODE_FOR_addv4qi3 },
  { 0x31002a, CODE_FOR_addv2hi3 },
  { 0x31002b, CODE_FOR_addv8qi3 },
  { 0x31002c, CODE_FOR_addv4hi3 },
  { 0x31002d, CODE_FOR_addv2si3 },
  { 0x350006, CODE_FOR_subsi3 },
  { 0x350007, CODE_FOR_subdi3 },
  { 0x35001b, CODE_FOR_subsf3 },
  { 0x35001c, CODE_FOR_subdf3 },
  { 0x350029, CODE_FOR_subv4qi3 },
  { 0x35002a, CODE_FOR_subv2hi3 },
  { 0x35002b, CODE_FOR_subv8qi3 },
  { 0x35002c, CODE_FOR_subv4hi3 },
  { 0x35002d, CODE_FOR_subv2si3 },
  { 0x390006, CODE_FOR_mulsi3 },
  { 0x390007, CODE_FOR_muldi3 },
  { 0x39001b, CODE_FOR_mulsf3 },
  { 0x39001c, CODE_FOR_muldf3 },
  { 0x3d0006, CODE_FOR_divsi3 },
  { 0x3d0007, CODE_FOR_divdi3 },
  { 0x3d001b, CODE_FOR_divsf3 },
  { 0x3d001c, CODE_FOR_divdf3 },
  { 0x400006, CODE_FOR_udivsi3 },
  { 0x400007, CODE_FOR_udivdi3 },
  { 0x440006, CODE_FOR_modsi3 },
  { 0x440007, CODE_FOR_moddi3 },
  { 0x450006, CODE_FOR_umodsi3 },
  { 0x450007, CODE_FOR_umoddi3 },
  { 0x470006, CODE_FOR_andsi3 },
  { 0x470007, CODE_FOR_anddi3 },
  { 0x480006, CODE_FOR_iorsi3 },
  { 0x480007, CODE_FOR_iordi3 },
  { 0x490006, CODE_FOR_xorsi3 },
  { 0x490007, CODE_FOR_xordi3 },
  { 0x4a0006, CODE_FOR_ashlsi3 },
  { 0x4a0007, CODE_FOR_ashldi3 },
  { 0x4a0029, CODE_FOR_ashlv4qi3 },
  { 0x4a002a, CODE_FOR_ashlv2hi3 },
  { 0x4a002b, CODE_FOR_ashlv8qi3 },
  { 0x4a002c, CODE_FOR_ashlv4hi3 },
  { 0x4a002d, CODE_FOR_ashlv2si3 },
  { 0x4d0006, CODE_FOR_ashrsi3 },
  { 0x4d0007, CODE_FOR_ashrdi3 },
  { 0x4d0029, CODE_FOR_ashrv4qi3 },
  { 0x4d002a, CODE_FOR_ashrv2hi3 },
  { 0x4d002b, CODE_FOR_ashrv8qi3 },
  { 0x4d002c, CODE_FOR_ashrv4hi3 },
  { 0x4d002d, CODE_FOR_ashrv2si3 },
  { 0x4e0006, CODE_FOR_lshrsi3 },
  { 0x4e0007, CODE_FOR_lshrdi3 },
  { 0x4e0029, CODE_FOR_lshrv4qi3 },
  { 0x4e002a, CODE_FOR_lshrv2hi3 },
  { 0x4e002b, CODE_FOR_lshrv8qi3 },
  { 0x4e002c, CODE_FOR_lshrv4hi3 },
  { 0x4e002d, CODE_FOR_lshrv2si3 },
  { 0x560006, CODE_FOR_sminsi3 },
  { 0x560007, CODE_FOR_smindi3 },
  { 0x56001b, CODE_FOR_sminsf3 },
  { 0x56001c, CODE_FOR_smindf3 },
  { 0x560029, CODE_FOR_sminv4qi3 },
  { 0x56002a, CODE_FOR_sminv2hi3 },
  { 0x56002b, CODE_FOR_sminv8qi3 },
  { 0x56002c, CODE_FOR_sminv4hi3 },
  { 0x56002d, CODE_FOR_sminv2si3 },
  { 0x570006, CODE_FOR_smaxsi3 },
  { 0x570007, CODE_FOR_smaxdi3 },
  { 0x57001b, CODE_FOR_smaxsf3 },
  { 0x57001c, CODE_FOR_smaxdf3 },
  { 0x570029, CODE_FOR_smaxv4qi3 },
  { 0x57002a, CODE_FOR_smaxv2hi3 },
  { 0x57002b, CODE_FOR_smaxv8qi3 },
  { 0x57002c, CODE_FOR_smaxv4hi3 },
  { 0x57002d, CODE_FOR_smaxv2si3 },
  { 0x580029, CODE_FOR_uminv4qi3 },
  { 0x58002a, CODE_FOR_uminv2hi3 },
  { 0x58002b, CODE_FOR_uminv8qi3 },
  { 0x58002c, CODE_FOR_uminv4hi3 },
  { 0x58002d, CODE_FOR_uminv2si3 },
  { 0x590029, CODE_FOR_umaxv4qi3 },
  { 0x59002a, CODE_FOR_umaxv2hi3 },
  { 0x59002b, CODE_FOR_umaxv8qi3 },
  { 0x59002c, CODE_FOR_umaxv4hi3 },
  { 0x59002d, CODE_FOR_umaxv2si3 },
  { 0x5a0006, CODE_FOR_negsi2 },
  { 0x5a0007, CODE_FOR_negdi2 },
  { 0x5a001b, CODE_FOR_negsf2 },
  { 0x5a001c, CODE_FOR_negdf2 },
  { 0x5e001b, CODE_FOR_abssf2 },
  { 0x5e001c, CODE_FOR_absdf2 },
  { 0x600006, CODE_FOR_one_cmplsi2 },
  { 0x600007, CODE_FOR_one_cmpldi2 },
  { 0x630006, CODE_FOR_clzsi2 },
  { 0x630029, CODE_FOR_clzv4qi2 },
  { 0x63002a, CODE_FOR_clzv2hi2 },
  { 0x63002b, CODE_FOR_clzv8qi2 },
  { 0x63002c, CODE_FOR_clzv4hi2 },
  { 0x63002d, CODE_FOR_clzv2si2 },
  { 0x650006, CODE_FOR_clrsbsi2 },
  { 0x650029, CODE_FOR_clrsbv4qi2 },
  { 0x65002a, CODE_FOR_clrsbv2hi2 },
  { 0x65002b, CODE_FOR_clrsbv8qi2 },
  { 0x65002c, CODE_FOR_clrsbv4hi2 },
  { 0x65002d, CODE_FOR_clrsbv2si2 },
  { 0x72001b, CODE_FOR_sqrtsf2 },
  { 0x72001c, CODE_FOR_sqrtdf2 },
  { 0x810004, CODE_FOR_movqi },
  { 0x810005, CODE_FOR_movhi },
  { 0x810006, CODE_FOR_movsi },
  { 0x810007, CODE_FOR_movdi },
  { 0x81001b, CODE_FOR_movsf },
  { 0x81001c, CODE_FOR_movdf },
  { 0x810029, CODE_FOR_movv4qi },
  { 0x81002a, CODE_FOR_movv2hi },
  { 0x81002b, CODE_FOR_movv8qi },
  { 0x81002c, CODE_FOR_movv4hi },
  { 0x81002d, CODE_FOR_movv2si },
  { 0x8e0004, CODE_FOR_cbranchqi4 },
  { 0x8e0006, CODE_FOR_cbranchsi4 },
  { 0x8e0007, CODE_FOR_cbranchdi4 },
  { 0x8e001b, CODE_FOR_cbranchsf4 },
  { 0x8e001c, CODE_FOR_cbranchdf4 },
  { 0x920006, CODE_FOR_movsicc },
  { 0x920007, CODE_FOR_movdicc },
  { 0xa90006, CODE_FOR_cstoresi4 },
  { 0xa90007, CODE_FOR_cstoredi4 },
  { 0xa9001b, CODE_FOR_cstoresf4 },
  { 0xa9001c, CODE_FOR_cstoredf4 },
  { 0xb30006, CODE_FOR_smulsi3_highpart },
  { 0xb3002d, CODE_FOR_smulv2si3_highpart },
  { 0xb40006, CODE_FOR_umulsi3_highpart },
  { 0xb40007, CODE_FOR_umuldi3_highpart },
  { 0xb80006, CODE_FOR_cpymemsi },
  { 0xbc001b, CODE_FOR_fmasf4 },
  { 0xbc001c, CODE_FOR_fmadf4 },
  { 0xbd001b, CODE_FOR_fmssf4 },
  { 0xbd001c, CODE_FOR_fmsdf4 },
  { 0xbe001b, CODE_FOR_fnmasf4 },
  { 0xbe001c, CODE_FOR_fnmadf4 },
  { 0xbf001b, CODE_FOR_fnmssf4 },
  { 0xbf001c, CODE_FOR_fnmsdf4 },
  { 0xce001b, CODE_FOR_copysignsf3 },
  { 0xce001c, CODE_FOR_copysigndf3 },
  { 0x1470006, CODE_FOR_atomic_addsi },
  { 0x1470007, CODE_FOR_atomic_adddi },
  { 0x1490006, CODE_FOR_atomic_andsi },
  { 0x1490007, CODE_FOR_atomic_anddi },
  { 0x14d0006, CODE_FOR_atomic_compare_and_swapsi },
  { 0x14d0007, CODE_FOR_atomic_compare_and_swapdi },
  { 0x14e0006, CODE_FOR_atomic_exchangesi },
  { 0x14e0007, CODE_FOR_atomic_exchangedi },
  { 0x14f0006, CODE_FOR_atomic_fetch_addsi },
  { 0x14f0007, CODE_FOR_atomic_fetch_adddi },
  { 0x1500006, CODE_FOR_atomic_fetch_andsi },
  { 0x1500007, CODE_FOR_atomic_fetch_anddi },
  { 0x1520006, CODE_FOR_atomic_fetch_orsi },
  { 0x1520007, CODE_FOR_atomic_fetch_ordi },
  { 0x1540006, CODE_FOR_atomic_fetch_xorsi },
  { 0x1540007, CODE_FOR_atomic_fetch_xordi },
  { 0x1590006, CODE_FOR_atomic_orsi },
  { 0x1590007, CODE_FOR_atomic_ordi },
  { 0x15a0006, CODE_FOR_atomic_storesi },
  { 0x15a0007, CODE_FOR_atomic_storedi },
  { 0x15e0006, CODE_FOR_atomic_xorsi },
  { 0x15e0007, CODE_FOR_atomic_xordi },
  { 0x15f0006, CODE_FOR_get_thread_pointersi },
  { 0x15f0007, CODE_FOR_get_thread_pointerdi },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhihi2;
  ena[4] = HAVE_extendhisi2;
  ena[5] = HAVE_extendhidi2;
  ena[6] = HAVE_extendsidi2;
  ena[7] = HAVE_extendsfdf2;
  ena[8] = HAVE_truncdfsf2;
  ena[9] = HAVE_zero_extendqihi2;
  ena[10] = HAVE_zero_extendqisi2;
  ena[11] = HAVE_zero_extendqidi2;
  ena[12] = HAVE_zero_extendhisi2;
  ena[13] = HAVE_zero_extendhidi2;
  ena[14] = HAVE_zero_extendsidi2;
  ena[15] = HAVE_floatsisf2;
  ena[16] = HAVE_floatsidf2;
  ena[17] = HAVE_floatdisf2;
  ena[18] = HAVE_floatdidf2;
  ena[19] = HAVE_floatunssisf2;
  ena[20] = HAVE_floatunssidf2;
  ena[21] = HAVE_floatunsdisf2;
  ena[22] = HAVE_floatunsdidf2;
  ena[23] = HAVE_lrintsfsi2;
  ena[24] = HAVE_lrintsfdi2;
  ena[25] = HAVE_lrintdfsi2;
  ena[26] = HAVE_lrintdfdi2;
  ena[27] = HAVE_lroundsfsi2;
  ena[28] = HAVE_lroundsfdi2;
  ena[29] = HAVE_lrounddfsi2;
  ena[30] = HAVE_lrounddfdi2;
  ena[31] = HAVE_fix_truncsfsi2;
  ena[32] = HAVE_fix_truncsfdi2;
  ena[33] = HAVE_fix_truncdfsi2;
  ena[34] = HAVE_fix_truncdfdi2;
  ena[35] = HAVE_fixuns_truncsfsi2;
  ena[36] = HAVE_fixuns_truncsfdi2;
  ena[37] = HAVE_fixuns_truncdfsi2;
  ena[38] = HAVE_fixuns_truncdfdi2;
  ena[39] = HAVE_mulsidi3;
  ena[40] = HAVE_mulditi3;
  ena[41] = HAVE_umulsidi3;
  ena[42] = HAVE_umulditi3;
  ena[43] = HAVE_usmulsidi3;
  ena[44] = HAVE_usmulditi3;
  ena[45] = HAVE_maddsidi4;
  ena[46] = HAVE_umaddsidi4;
  ena[47] = HAVE_ssmaddsidi4;
  ena[48] = HAVE_usmaddsidi4;
  ena[49] = HAVE_msubsidi4;
  ena[50] = HAVE_umsubsidi4;
  ena[51] = HAVE_ssmsubsidi4;
  ena[52] = HAVE_usmsubsidi4;
  ena[53] = HAVE_addsi3;
  ena[54] = HAVE_adddi3;
  ena[55] = HAVE_addsf3;
  ena[56] = HAVE_adddf3;
  ena[57] = HAVE_addv4qi3;
  ena[58] = HAVE_addv2hi3;
  ena[59] = HAVE_addv8qi3;
  ena[60] = HAVE_addv4hi3;
  ena[61] = HAVE_addv2si3;
  ena[62] = HAVE_subsi3;
  ena[63] = HAVE_subdi3;
  ena[64] = HAVE_subsf3;
  ena[65] = HAVE_subdf3;
  ena[66] = HAVE_subv4qi3;
  ena[67] = HAVE_subv2hi3;
  ena[68] = HAVE_subv8qi3;
  ena[69] = HAVE_subv4hi3;
  ena[70] = HAVE_subv2si3;
  ena[71] = HAVE_mulsi3;
  ena[72] = HAVE_muldi3;
  ena[73] = HAVE_mulsf3;
  ena[74] = HAVE_muldf3;
  ena[75] = HAVE_divsi3;
  ena[76] = HAVE_divdi3;
  ena[77] = HAVE_divsf3;
  ena[78] = HAVE_divdf3;
  ena[79] = HAVE_udivsi3;
  ena[80] = HAVE_udivdi3;
  ena[81] = HAVE_modsi3;
  ena[82] = HAVE_moddi3;
  ena[83] = HAVE_umodsi3;
  ena[84] = HAVE_umoddi3;
  ena[85] = HAVE_andsi3;
  ena[86] = HAVE_anddi3;
  ena[87] = HAVE_iorsi3;
  ena[88] = HAVE_iordi3;
  ena[89] = HAVE_xorsi3;
  ena[90] = HAVE_xordi3;
  ena[91] = HAVE_ashlsi3;
  ena[92] = HAVE_ashldi3;
  ena[93] = HAVE_ashlv4qi3;
  ena[94] = HAVE_ashlv2hi3;
  ena[95] = HAVE_ashlv8qi3;
  ena[96] = HAVE_ashlv4hi3;
  ena[97] = HAVE_ashlv2si3;
  ena[98] = HAVE_ashrsi3;
  ena[99] = HAVE_ashrdi3;
  ena[100] = HAVE_ashrv4qi3;
  ena[101] = HAVE_ashrv2hi3;
  ena[102] = HAVE_ashrv8qi3;
  ena[103] = HAVE_ashrv4hi3;
  ena[104] = HAVE_ashrv2si3;
  ena[105] = HAVE_lshrsi3;
  ena[106] = HAVE_lshrdi3;
  ena[107] = HAVE_lshrv4qi3;
  ena[108] = HAVE_lshrv2hi3;
  ena[109] = HAVE_lshrv8qi3;
  ena[110] = HAVE_lshrv4hi3;
  ena[111] = HAVE_lshrv2si3;
  ena[112] = HAVE_sminsi3;
  ena[113] = HAVE_smindi3;
  ena[114] = HAVE_sminsf3;
  ena[115] = HAVE_smindf3;
  ena[116] = HAVE_sminv4qi3;
  ena[117] = HAVE_sminv2hi3;
  ena[118] = HAVE_sminv8qi3;
  ena[119] = HAVE_sminv4hi3;
  ena[120] = HAVE_sminv2si3;
  ena[121] = HAVE_smaxsi3;
  ena[122] = HAVE_smaxdi3;
  ena[123] = HAVE_smaxsf3;
  ena[124] = HAVE_smaxdf3;
  ena[125] = HAVE_smaxv4qi3;
  ena[126] = HAVE_smaxv2hi3;
  ena[127] = HAVE_smaxv8qi3;
  ena[128] = HAVE_smaxv4hi3;
  ena[129] = HAVE_smaxv2si3;
  ena[130] = HAVE_uminv4qi3;
  ena[131] = HAVE_uminv2hi3;
  ena[132] = HAVE_uminv8qi3;
  ena[133] = HAVE_uminv4hi3;
  ena[134] = HAVE_uminv2si3;
  ena[135] = HAVE_umaxv4qi3;
  ena[136] = HAVE_umaxv2hi3;
  ena[137] = HAVE_umaxv8qi3;
  ena[138] = HAVE_umaxv4hi3;
  ena[139] = HAVE_umaxv2si3;
  ena[140] = HAVE_negsi2;
  ena[141] = HAVE_negdi2;
  ena[142] = HAVE_negsf2;
  ena[143] = HAVE_negdf2;
  ena[144] = HAVE_abssf2;
  ena[145] = HAVE_absdf2;
  ena[146] = HAVE_one_cmplsi2;
  ena[147] = HAVE_one_cmpldi2;
  ena[148] = HAVE_clzsi2;
  ena[149] = HAVE_clzv4qi2;
  ena[150] = HAVE_clzv2hi2;
  ena[151] = HAVE_clzv8qi2;
  ena[152] = HAVE_clzv4hi2;
  ena[153] = HAVE_clzv2si2;
  ena[154] = HAVE_clrsbsi2;
  ena[155] = HAVE_clrsbv4qi2;
  ena[156] = HAVE_clrsbv2hi2;
  ena[157] = HAVE_clrsbv8qi2;
  ena[158] = HAVE_clrsbv4hi2;
  ena[159] = HAVE_clrsbv2si2;
  ena[160] = HAVE_sqrtsf2;
  ena[161] = HAVE_sqrtdf2;
  ena[162] = HAVE_movqi;
  ena[163] = HAVE_movhi;
  ena[164] = HAVE_movsi;
  ena[165] = HAVE_movdi;
  ena[166] = HAVE_movsf;
  ena[167] = HAVE_movdf;
  ena[168] = HAVE_movv4qi;
  ena[169] = HAVE_movv2hi;
  ena[170] = HAVE_movv8qi;
  ena[171] = HAVE_movv4hi;
  ena[172] = HAVE_movv2si;
  ena[173] = HAVE_cbranchqi4;
  ena[174] = HAVE_cbranchsi4;
  ena[175] = HAVE_cbranchdi4;
  ena[176] = HAVE_cbranchsf4;
  ena[177] = HAVE_cbranchdf4;
  ena[178] = HAVE_movsicc;
  ena[179] = HAVE_movdicc;
  ena[180] = HAVE_cstoresi4;
  ena[181] = HAVE_cstoredi4;
  ena[182] = HAVE_cstoresf4;
  ena[183] = HAVE_cstoredf4;
  ena[184] = HAVE_smulsi3_highpart;
  ena[185] = HAVE_smulv2si3_highpart;
  ena[186] = HAVE_umulsi3_highpart;
  ena[187] = HAVE_umuldi3_highpart;
  ena[188] = HAVE_cpymemsi;
  ena[189] = HAVE_fmasf4;
  ena[190] = HAVE_fmadf4;
  ena[191] = HAVE_fmssf4;
  ena[192] = HAVE_fmsdf4;
  ena[193] = HAVE_fnmasf4;
  ena[194] = HAVE_fnmadf4;
  ena[195] = HAVE_fnmssf4;
  ena[196] = HAVE_fnmsdf4;
  ena[197] = HAVE_copysignsf3;
  ena[198] = HAVE_copysigndf3;
  ena[199] = HAVE_atomic_addsi;
  ena[200] = HAVE_atomic_adddi;
  ena[201] = HAVE_atomic_andsi;
  ena[202] = HAVE_atomic_anddi;
  ena[203] = HAVE_atomic_compare_and_swapsi;
  ena[204] = HAVE_atomic_compare_and_swapdi;
  ena[205] = HAVE_atomic_exchangesi;
  ena[206] = HAVE_atomic_exchangedi;
  ena[207] = HAVE_atomic_fetch_addsi;
  ena[208] = HAVE_atomic_fetch_adddi;
  ena[209] = HAVE_atomic_fetch_andsi;
  ena[210] = HAVE_atomic_fetch_anddi;
  ena[211] = HAVE_atomic_fetch_orsi;
  ena[212] = HAVE_atomic_fetch_ordi;
  ena[213] = HAVE_atomic_fetch_xorsi;
  ena[214] = HAVE_atomic_fetch_xordi;
  ena[215] = HAVE_atomic_orsi;
  ena[216] = HAVE_atomic_ordi;
  ena[217] = HAVE_atomic_storesi;
  ena[218] = HAVE_atomic_storedi;
  ena[219] = HAVE_atomic_xorsi;
  ena[220] = HAVE_atomic_xordi;
  ena[221] = HAVE_get_thread_pointersi;
  ena[222] = HAVE_get_thread_pointerdi;
}

static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  VEC_DUPLICATE,
  VEC_SERIES,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  vec_duplicate_optab,
  vec_series_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};


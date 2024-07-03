/* Generated automatically by the program `genattrtab'
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
#include "options.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-attr.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "emit-rtl.h"

#define operands recog_data.operand

int
insn_default_latency (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 185:  /* *movdidicc */
    case 184:  /* *movsidicc */
    case 183:  /* *movsisicc */
      if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7))))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 333:  /* *st64_rvp_base */
    case 331:  /* *st64_rvp */
    case 255:  /* nop */
    case 254:  /* call_value_internal */
    case 253:  /* call_internal */
    case 252:  /* sibcall_value_internal */
    case 251:  /* sibcall_internal */
    case 247:  /* simple_return_internal */
    case 246:  /* simple_return */
    case 244:  /* tablejumpdi */
    case 243:  /* tablejumpsi */
    case 242:  /* indirect_jumpdi */
    case 241:  /* indirect_jumpsi */
    case 240:  /* jump */
    case 182:  /* *branchdi */
    case 181:  /* *branchsi */
    case 131:  /* auipcdi */
    case 130:  /* auipcsi */
      if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) || (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 332:  /* *ld64_rvp_base */
    case 330:  /* *ld64_rvp */
    case 209:  /* *fle_quietdfdi4_snan */
    case 208:  /* *flt_quietdfdi4_snan */
    case 207:  /* *fle_quietdfsi4_snan */
    case 206:  /* *flt_quietdfsi4_snan */
    case 205:  /* *fle_quietsfdi4_snan */
    case 204:  /* *flt_quietsfdi4_snan */
    case 203:  /* *fle_quietsfsi4_snan */
    case 202:  /* *flt_quietsfsi4_snan */
    case 201:  /* *fle_quietdfdi4_default */
    case 200:  /* *flt_quietdfdi4_default */
    case 199:  /* *fle_quietdfsi4_default */
    case 198:  /* *flt_quietdfsi4_default */
    case 197:  /* *fle_quietsfdi4_default */
    case 196:  /* *flt_quietsfdi4_default */
    case 195:  /* *fle_quietsfsi4_default */
    case 194:  /* *flt_quietsfsi4_default */
    case 193:  /* *cstoredfdi4 */
    case 192:  /* *cstoredfsi4 */
    case 191:  /* *cstoresfdi4 */
    case 190:  /* *cstoresfsi4 */
    case 129:  /* got_load_tls_iedi */
    case 128:  /* got_load_tls_iesi */
    case 127:  /* got_load_tls_gddi */
    case 126:  /* got_load_tls_gdsi */
    case 123:  /* got_loaddi */
    case 122:  /* got_loadsi */
    case 121:  /* lrounddfdi2 */
    case 120:  /* lrintdfdi2 */
    case 119:  /* lrounddfsi2 */
    case 118:  /* lrintdfsi2 */
    case 117:  /* lroundsfdi2 */
    case 116:  /* lrintsfdi2 */
    case 115:  /* lroundsfsi2 */
    case 114:  /* lrintsfsi2 */
    case 113:  /* floatunsdidf2 */
    case 112:  /* floatunssidf2 */
    case 111:  /* floatunsdisf2 */
    case 110:  /* floatunssisf2 */
    case 109:  /* floatdidf2 */
    case 108:  /* floatsidf2 */
    case 107:  /* floatdisf2 */
    case 106:  /* floatsisf2 */
    case 105:  /* fixuns_truncdfdi2 */
    case 104:  /* fixuns_truncdfsi2 */
    case 103:  /* fixuns_truncsfdi2 */
    case 102:  /* fixuns_truncsfsi2 */
    case 101:  /* fix_truncdfdi2 */
    case 100:  /* fix_truncdfsi2 */
    case 99:  /* fix_truncsfdi2 */
    case 98:  /* fix_truncsfsi2 */
    case 97:  /* extendsfdf2 */
    case 83:  /* truncdfsf2 */
    case 70:  /* smaxdf3 */
    case 69:  /* smaxsf3 */
    case 68:  /* smindf3 */
    case 67:  /* sminsf3 */
    case 66:  /* negdf2 */
    case 65:  /* negsf2 */
    case 64:  /* copysigndf3 */
    case 63:  /* copysignsf3 */
    case 62:  /* absdf2 */
    case 61:  /* abssf2 */
      if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) || (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 44:  /* sqrtdf2 */
      if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))
        {
	  return 25 /* 0x19 */;
        }
      else if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7))))
        {
	  return 56 /* 0x38 */;
        }
      else
        {
	  return 0;
        }

    case 43:  /* sqrtsf2 */
      if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))
        {
	  return 25 /* 0x19 */;
        }
      else if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 0;
        }

    case 42:  /* divdf3 */
      if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7))))
        {
	  return 56 /* 0x38 */;
        }
      else
        {
	  return 0;
        }

    case 41:  /* divsf3 */
      if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 0;
        }

    case 40:  /* *umodsi3_extended */
    case 39:  /* *modsi3_extended */
    case 38:  /* *udivsi3_extended */
    case 37:  /* *divsi3_extended */
    case 36:  /* umoddi3 */
    case 35:  /* moddi3 */
    case 34:  /* udivdi3 */
    case 33:  /* divdi3 */
      if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))
        {
	  return 66 /* 0x42 */;
        }
      else if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7))))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 0;
        }

    case 32:  /* umodsi3 */
    case 31:  /* modsi3 */
    case 30:  /* udivsi3 */
    case 29:  /* divsi3 */
      if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))
        {
	  return 34 /* 0x22 */;
        }
      else if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7))))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 0;
        }

    case 28:  /* usmulsi3_highpart */
    case 27:  /* umulsi3_highpart */
    case 26:  /* mulsi3_highpart */
    case 25:  /* usmuldi3_highpart */
    case 24:  /* umuldi3_highpart */
    case 23:  /* muldi3_highpart */
    case 22:  /* *mulsi3_extended2 */
    case 21:  /* *mulsi3_extended */
    case 20:  /* muldi3 */
    case 19:  /* mulsi3 */
      if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))
        {
	  return 10 /* 0xa */;
        }
      else if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 843:  /* *local_pic_store_sfdf */
    case 842:  /* *local_pic_store_sfsf */
    case 841:  /* *local_pic_store_sfdf */
    case 840:  /* *local_pic_store_sfsf */
    case 839:  /* *local_pic_store_32ddf */
    case 838:  /* *local_pic_store_32dsf */
    case 837:  /* *local_pic_store_32ddf */
    case 836:  /* *local_pic_store_32dsf */
    case 835:  /* *local_pic_storedf */
    case 834:  /* *local_pic_storesf */
    case 833:  /* *local_pic_storedf */
    case 832:  /* *local_pic_storesf */
    case 831:  /* *local_pic_storedi */
    case 830:  /* *local_pic_storesi */
    case 829:  /* *local_pic_storehi */
    case 828:  /* *local_pic_storeqi */
    case 827:  /* *local_pic_storedi */
    case 826:  /* *local_pic_storesi */
    case 825:  /* *local_pic_storehi */
    case 824:  /* *local_pic_storeqi */
    case 823:  /* *local_pic_load_sfdf */
    case 822:  /* *local_pic_load_sfsf */
    case 821:  /* *local_pic_load_32ddf */
    case 820:  /* *local_pic_load_32dsf */
    case 819:  /* *local_pic_load_32ddf */
    case 818:  /* *local_pic_load_32dsf */
    case 817:  /* *local_pic_loaddf */
    case 816:  /* *local_pic_loadsf */
    case 815:  /* *local_pic_loaddf */
    case 814:  /* *local_pic_loadsf */
    case 813:  /* *local_pic_load_usi */
    case 812:  /* *local_pic_load_usi */
    case 811:  /* *local_pic_load_usi */
    case 810:  /* *local_pic_load_uhi */
    case 809:  /* *local_pic_load_uhi */
    case 808:  /* *local_pic_load_uhi */
    case 807:  /* *local_pic_load_uqi */
    case 806:  /* *local_pic_load_uqi */
    case 805:  /* *local_pic_load_uqi */
    case 804:  /* *local_pic_load_ssi */
    case 803:  /* *local_pic_load_ssi */
    case 802:  /* *local_pic_load_ssi */
    case 801:  /* *local_pic_load_shi */
    case 800:  /* *local_pic_load_shi */
    case 799:  /* *local_pic_load_shi */
    case 798:  /* *local_pic_load_sqi */
    case 797:  /* *local_pic_load_sqi */
    case 796:  /* *local_pic_load_sqi */
    case 795:  /* *local_pic_loaddi */
    case 794:  /* *local_pic_loadsi */
    case 793:  /* *local_pic_loadhi */
    case 792:  /* *local_pic_loadqi */
    case 791:  /* atomic_cas_value_strongdi */
    case 790:  /* atomic_cas_value_strongsi */
    case 789:  /* atomic_exchangedi */
    case 788:  /* atomic_exchangesi */
    case 787:  /* atomic_fetch_anddi */
    case 786:  /* atomic_fetch_xordi */
    case 785:  /* atomic_fetch_ordi */
    case 784:  /* atomic_fetch_adddi */
    case 783:  /* atomic_fetch_andsi */
    case 782:  /* atomic_fetch_xorsi */
    case 781:  /* atomic_fetch_orsi */
    case 780:  /* atomic_fetch_addsi */
    case 779:  /* atomic_anddi */
    case 778:  /* atomic_xordi */
    case 777:  /* atomic_ordi */
    case 776:  /* atomic_adddi */
    case 775:  /* atomic_andsi */
    case 774:  /* atomic_xorsi */
    case 773:  /* atomic_orsi */
    case 772:  /* atomic_addsi */
    case 771:  /* atomic_storedi */
    case 770:  /* atomic_storesi */
    case 769:  /* mem_thread_fence_1 */
    case 768:  /* stack_protect_test_di */
    case 767:  /* stack_protect_test_si */
    case 766:  /* stack_protect_set_di */
    case 765:  /* stack_protect_set_si */
    case 368:  /* clrovdi */
    case 367:  /* clrovsi */
    case 329:  /* *add64_rvp */
    case 307:  /* riscv_getnoise_di */
    case 306:  /* riscv_getnoise_si */
    case 305:  /* riscv_pollentropy_di */
    case 304:  /* riscv_pollentropy_si */
    case 303:  /* riscv_sm4ks_di */
    case 302:  /* riscv_sm4ks_si */
    case 301:  /* riscv_sm4ed_di */
    case 300:  /* riscv_sm4ed_si */
    case 299:  /* riscv_sm3p1_di */
    case 298:  /* riscv_sm3p1_si */
    case 297:  /* riscv_sm3p0_di */
    case 296:  /* riscv_sm3p0_si */
    case 295:  /* riscv_sha512sum1 */
    case 294:  /* riscv_sha512sum0 */
    case 293:  /* riscv_sha512sig1 */
    case 292:  /* riscv_sha512sig0 */
    case 291:  /* riscv_sha512sum1r */
    case 290:  /* riscv_sha512sum0r */
    case 289:  /* riscv_sha512sig1l */
    case 288:  /* riscv_sha512sig1h */
    case 287:  /* riscv_sha512sig0l */
    case 286:  /* riscv_sha512sig0h */
    case 285:  /* riscv_sha256sum1_di */
    case 284:  /* riscv_sha256sum1_si */
    case 283:  /* riscv_sha256sum0_di */
    case 282:  /* riscv_sha256sum0_si */
    case 281:  /* riscv_sha256sig1_di */
    case 280:  /* riscv_sha256sig1_si */
    case 279:  /* riscv_sha256sig0_di */
    case 278:  /* riscv_sha256sig0_si */
    case 277:  /* riscv_aes64ks2 */
    case 276:  /* riscv_aes64ks1i */
    case 275:  /* riscv_aes64im */
    case 274:  /* riscv_aes64esm */
    case 273:  /* riscv_aes64es */
    case 272:  /* riscv_aes64dsm */
    case 271:  /* riscv_aes64ds */
    case 270:  /* riscv_aes32esmi */
    case 269:  /* riscv_aes32esi */
    case 268:  /* riscv_aes32dsmi */
    case 267:  /* riscv_aes32dsi */
    case 266:  /* stack_tiedi */
    case 265:  /* stack_tiesi */
    case 264:  /* riscv_uret */
    case 263:  /* riscv_sret */
    case 262:  /* riscv_mret */
    case 261:  /* riscv_fsflags */
    case 260:  /* riscv_frflags */
    case 259:  /* gpr_restore_return */
    case 258:  /* gpr_restore */
    case 257:  /* gpr_save */
    case 256:  /* trap */
    case 250:  /* eh_return_internal */
    case 249:  /* eh_set_lr_di */
    case 248:  /* eh_set_lr_si */
    case 239:  /* *sleu_didi */
    case 238:  /* *sle_didi */
    case 237:  /* *sleu_disi */
    case 236:  /* *sle_disi */
    case 235:  /* *sleu_sisi */
    case 234:  /* *sle_sisi */
    case 233:  /* *sltu_didi */
    case 232:  /* *slt_didi */
    case 231:  /* *sltu_disi */
    case 230:  /* *slt_disi */
    case 229:  /* *sltu_sisi */
    case 228:  /* *slt_sisi */
    case 227:  /* *sgeu_didi */
    case 226:  /* *sge_didi */
    case 225:  /* *sgeu_disi */
    case 224:  /* *sge_disi */
    case 223:  /* *sgeu_sisi */
    case 222:  /* *sge_sisi */
    case 221:  /* *sgtu_didi */
    case 220:  /* *sgt_didi */
    case 219:  /* *sgtu_disi */
    case 218:  /* *sgt_disi */
    case 217:  /* *sgtu_sisi */
    case 216:  /* *sgt_sisi */
    case 215:  /* *sne_zero_didi */
    case 214:  /* *sne_zero_disi */
    case 213:  /* *sne_zero_sisi */
    case 212:  /* *seq_zero_didi */
    case 211:  /* *seq_zero_disi */
    case 210:  /* *seq_zero_sisi */
    case 189:  /* *branch_on_bit_rangedi */
    case 188:  /* *branch_on_bit_rangesi */
    case 187:  /* *branch_on_bitdi */
    case 186:  /* *branch_on_bitsi */
    case 180:  /* zero_extendsidi2_shifted */
    case 179:  /* *lshrsi3_zero_extend_3 */
    case 178:  /* *lshrsi3_zero_extend_2 */
    case 177:  /* *lshrsi3_zero_extend_1 */
    case 176:  /* *lshrsi3_extend_mask_1 */
    case 175:  /* *ashrsi3_extend_mask_1 */
    case 174:  /* *ashlsi3_extend_mask_1 */
    case 173:  /* *lshrsi3_extend_mask */
    case 172:  /* *ashrsi3_extend_mask */
    case 171:  /* *ashlsi3_extend_mask */
    case 170:  /* *lshrsi3_extend */
    case 169:  /* *ashrsi3_extend */
    case 168:  /* *ashlsi3_extend */
    case 167:  /* *lshrdi3_mask_1 */
    case 166:  /* *ashrdi3_mask_1 */
    case 165:  /* *ashldi3_mask_1 */
    case 164:  /* *lshrdi3_mask */
    case 163:  /* *ashrdi3_mask */
    case 162:  /* *ashldi3_mask */
    case 161:  /* lshrdi3 */
    case 160:  /* ashrdi3 */
    case 159:  /* ashldi3 */
    case 158:  /* *lshrsi3_mask_1 */
    case 157:  /* *ashrsi3_mask_1 */
    case 156:  /* *ashlsi3_mask_1 */
    case 155:  /* *lshrsi3_mask */
    case 154:  /* *ashrsi3_mask */
    case 153:  /* *ashlsi3_mask */
    case 152:  /* lshrsi3 */
    case 151:  /* ashrsi3 */
    case 150:  /* ashlsi3 */
    case 149:  /* fence_i */
    case 148:  /* fence */
    case 141:  /* *xorsihi3 */
    case 140:  /* *xorhihi3 */
    case 139:  /* *addsihi3 */
    case 138:  /* *addhihi3 */
    case 133:  /* *lowdi */
    case 132:  /* *lowsi */
    case 125:  /* tls_add_tp_ledi */
    case 124:  /* tls_add_tp_lesi */
    case 82:  /* *one_cmplsi2_internal */
    case 81:  /* one_cmpldi2 */
    case 80:  /* one_cmplsi2 */
    case 79:  /* *xorsi3_internal */
    case 78:  /* *iorsi3_internal */
    case 77:  /* *andsi3_internal */
    case 76:  /* xordi3 */
    case 75:  /* iordi3 */
    case 74:  /* anddi3 */
    case 73:  /* xorsi3 */
    case 72:  /* iorsi3 */
    case 71:  /* andsi3 */
    case 16:  /* *negsi2_extended2 */
    case 15:  /* *negsi2_extended */
    case 14:  /* negsi2 */
    case 13:  /* negdi2 */
    case 12:  /* *subsi3_extended2 */
    case 11:  /* *subsi3_extended */
    case 10:  /* subsi3 */
    case 9:  /* subdi3 */
    case 6:  /* *addsi3_extended2 */
    case 5:  /* *addsi3_extended */
    case 4:  /* *adddi_rv64 */
    case 3:  /* addsi3 */
      if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))
        {
	  return 1;
        }
      else if (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7))))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 60:  /* *fnmadf4 */
    case 58:  /* *fnmsdf4 */
    case 56:  /* *fmsdf4 */
    case 54:  /* *fmadf4 */
    case 52:  /* fnmadf4 */
    case 50:  /* fnmsdf4 */
    case 48:  /* fmsdf4 */
    case 46:  /* fmadf4 */
    case 18:  /* muldf3 */
    case 8:  /* subdf3 */
    case 2:  /* adddf3 */
      if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) || (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))))
        {
	  return 7;
        }
      else
        {
	  return 0;
        }

    case 59:  /* *fnmasf4 */
    case 57:  /* *fnmssf4 */
    case 55:  /* *fmssf4 */
    case 53:  /* *fmasf4 */
    case 51:  /* fnmasf4 */
    case 49:  /* fnmssf4 */
    case 47:  /* fmssf4 */
    case 45:  /* fmasf4 */
    case 17:  /* mulsf3 */
    case 7:  /* subsf3 */
    case 1:  /* addsf3 */
      if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) || (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    case 84:  /* zero_extendsidi2 */
    case 85:  /* zero_extendhisi2 */
    case 86:  /* zero_extendhidi2 */
    case 87:  /* zero_extendqihi2 */
    case 88:  /* zero_extendqisi2 */
    case 89:  /* zero_extendqidi2 */
    case 90:  /* extendsidi2 */
    case 91:  /* extendqihi2 */
    case 92:  /* extendqisi2 */
    case 93:  /* extendqidi2 */
    case 94:  /* extendhihi2 */
    case 95:  /* extendhisi2 */
    case 96:  /* extendhidi2 */
    case 134:  /* *movdi_32bit */
    case 135:  /* *movdi_64bit */
    case 136:  /* *movsi_internal */
    case 137:  /* *movhi_internal */
    case 142:  /* *movqi_internal */
    case 143:  /* *movsf_hardfloat */
    case 144:  /* *movsf_softfloat */
    case 145:  /* *movdf_hardfloat_rv32 */
    case 146:  /* *movdf_hardfloat_rv64 */
    case 147:  /* *movdf_softfloat */
    case 760:  /* *movv4qi_internal */
    case 761:  /* *movv2hi_internal */
    case 762:  /* *movv8qi_internal */
    case 763:  /* *movv4hi_internal */
    case 764:  /* *movv2si_64bit */
      if ((cached_type = get_attr_type (insn)) == TYPE_GHOST)
        {
	  return 0;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE)))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD)))
        {
	  return 3;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE)))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC) || (cached_type == TYPE_FCVT) || (cached_type == TYPE_FMOVE) || (cached_type == TYPE_FCMP)))
        {
	  return 3;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_IMUL))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 5;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 7;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_FDIV))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_FSQRT))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_LOAD))
        {
	  return 3;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 2;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_BRANCH))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 2;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL)))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_IMUL))
        {
	  return 3;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_IDIV))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE)))
        {
	  return 2;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_NOP) || (cached_type == TYPE_CONST) || (cached_type == TYPE_AUIPC)))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 5;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 7;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))
        {
	  return 3;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_MTC))
        {
	  return 3;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_MFC))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}


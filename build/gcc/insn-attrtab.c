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
insn_current_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;
  enum attr_dword_mode cached_dword_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 182:  /* *branchdi */
    case 181:  /* *branchsi */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (4088)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (4092)))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_BRANCH)
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (4088)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (4092)))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;
  enum attr_dword_mode cached_dword_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 182:  /* *branchdi */
    case 181:  /* *branchsi */
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      if (get_attr_type (insn) == TYPE_BRANCH)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
insn_min_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;
  enum attr_dword_mode cached_dword_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 764:  /* *movv2si_64bit */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x24ULL))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0xf7ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 147:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 146:  /* *movdf_hardfloat_rv64 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0xe2ULL)) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return 8;
        }
      else if (((1ULL << which_alternative) & 0x104ULL))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0x1e7ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 145:  /* *movdf_hardfloat_rv32 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x22ULL)) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return 8;
        }
      else if (((1ULL << which_alternative) & 0x44ULL))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0x67ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 144:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 143:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x104ULL))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0x1e7ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 142:  /* *movqi_internal */
    case 137:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 3)
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 763:  /* *movv4hi_internal */
    case 762:  /* *movv8qi_internal */
    case 761:  /* *movv2hi_internal */
    case 760:  /* *movv4qi_internal */
    case 136:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x24ULL))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0x77ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 135:  /* *movdi_64bit */
    case 134:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x51ULL)) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return 8;
        }
      else if ((which_alternative == 1) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return 
#line 301 "../../gcc/config/riscv/riscv.md"
(riscv_split_const_insns (operands[1]) * 4);
        }
      else if (((1ULL << which_alternative) & 0x24ULL))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0xf7ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 90:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return 8;
        }
      else if (which_alternative != 0)
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 89:  /* zero_extendqidi2 */
    case 88:  /* zero_extendqisi2 */
    case 87:  /* zero_extendqihi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 96:  /* extendhidi2 */
    case 95:  /* extendhisi2 */
    case 94:  /* extendhihi2 */
    case 93:  /* extendqidi2 */
    case 92:  /* extendqisi2 */
    case 91:  /* extendqihi2 */
    case 86:  /* zero_extendhidi2 */
    case 85:  /* zero_extendhisi2 */
    case 84:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }

    case 254:  /* call_value_internal */
    case 253:  /* call_internal */
    case 252:  /* sibcall_value_internal */
    case 251:  /* sibcall_internal */
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
    case 185:  /* *movdidicc */
    case 184:  /* *movsidicc */
    case 183:  /* *movsisicc */
      return 8;

    case 791:  /* atomic_cas_value_strongdi */
    case 790:  /* atomic_cas_value_strongsi */
      return 20 /* 0x14 */;

    case 768:  /* stack_protect_test_di */
    case 767:  /* stack_protect_test_si */
    case 766:  /* stack_protect_set_di */
    case 765:  /* stack_protect_set_si */
    case 201:  /* *fle_quietdfdi4_default */
    case 200:  /* *flt_quietdfdi4_default */
    case 199:  /* *fle_quietdfsi4_default */
    case 198:  /* *flt_quietdfsi4_default */
    case 197:  /* *fle_quietsfdi4_default */
    case 196:  /* *flt_quietsfdi4_default */
    case 195:  /* *fle_quietsfsi4_default */
    case 194:  /* *flt_quietsfsi4_default */
      return 12 /* 0xc */;

    case 245:  /* blockage */
    case 266:  /* stack_tiedi */
    case 265:  /* stack_tiesi */
      return 0;

    case 209:  /* *fle_quietdfdi4_snan */
    case 208:  /* *flt_quietdfdi4_snan */
    case 207:  /* *fle_quietdfsi4_snan */
    case 206:  /* *flt_quietdfsi4_snan */
    case 205:  /* *fle_quietsfdi4_snan */
    case 204:  /* *flt_quietsfdi4_snan */
    case 203:  /* *fle_quietsfsi4_snan */
    case 202:  /* *flt_quietsfsi4_snan */
      return 16 /* 0x10 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if ((cached_type = get_attr_type (insn)) == TYPE_BRANCH)
        {
	  return 4;
        }
      else if (cached_type == TYPE_CALL)
        {
	  return 8;
        }
      else if (cached_type == TYPE_GHOST)
        {
	  return 0;
        }
      else if (get_attr_got (insn) == GOT_LOAD)
        {
	  return 8;
        }
      else if (cached_type == TYPE_FCMP)
        {
	  return 8;
        }
      else if ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_SHIFT_SHIFT)
        {
	  return 8;
        }
      else if (((cached_move_type == MOVE_TYPE_MTC) || (cached_move_type == MOVE_TYPE_MFC) || (cached_move_type == MOVE_TYPE_MOVE)) && ((cached_dword_mode = get_attr_dword_mode (insn)) == DWORD_MODE_YES))
        {
	  return 8;
        }
      else if ((cached_move_type == MOVE_TYPE_CONST) && ((cached_dword_mode = get_attr_dword_mode (insn)) == DWORD_MODE_YES))
        {
	  return 
#line 301 "../../gcc/config/riscv/riscv.md"
(riscv_split_const_insns (operands[1]) * 4);
        }
      else if ((cached_move_type == MOVE_TYPE_LOAD) || (cached_move_type == MOVE_TYPE_FPLOAD))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if ((cached_move_type == MOVE_TYPE_STORE) || (cached_move_type == MOVE_TYPE_FPSTORE))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    default:
      return 4;

    }
}

int
insn_default_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;
  enum attr_dword_mode cached_dword_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 764:  /* *movv2si_64bit */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x24ULL))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0xf7ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 147:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 146:  /* *movdf_hardfloat_rv64 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0xe2ULL)) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return 8;
        }
      else if (((1ULL << which_alternative) & 0x104ULL))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0x1e7ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 145:  /* *movdf_hardfloat_rv32 */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x22ULL)) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return 8;
        }
      else if (((1ULL << which_alternative) & 0x44ULL))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0x67ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 144:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 143:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x104ULL))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0x1e7ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 142:  /* *movqi_internal */
    case 137:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (which_alternative == 3)
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 763:  /* *movv4hi_internal */
    case 762:  /* *movv8qi_internal */
    case 761:  /* *movv2hi_internal */
    case 760:  /* *movv4qi_internal */
    case 136:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x24ULL))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0x77ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 135:  /* *movdi_64bit */
    case 134:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if ((((1ULL << which_alternative) & 0x51ULL)) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return 8;
        }
      else if ((which_alternative == 1) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return 
#line 301 "../../gcc/config/riscv/riscv.md"
(riscv_split_const_insns (operands[1]) * 4);
        }
      else if (((1ULL << which_alternative) & 0x24ULL))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if (!((1ULL << which_alternative) & 0xf7ULL))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 90:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return 8;
        }
      else if (which_alternative != 0)
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 89:  /* zero_extendqidi2 */
    case 88:  /* zero_extendqisi2 */
    case 87:  /* zero_extendqihi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else
        {
	  return 4;
        }

    case 96:  /* extendhidi2 */
    case 95:  /* extendhisi2 */
    case 94:  /* extendhihi2 */
    case 93:  /* extendqidi2 */
    case 92:  /* extendqisi2 */
    case 91:  /* extendqihi2 */
    case 86:  /* zero_extendhidi2 */
    case 85:  /* zero_extendhisi2 */
    case 84:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }

    case 254:  /* call_value_internal */
    case 253:  /* call_internal */
    case 252:  /* sibcall_value_internal */
    case 251:  /* sibcall_internal */
    case 193:  /* *cstoredfdi4 */
    case 192:  /* *cstoredfsi4 */
    case 191:  /* *cstoresfdi4 */
    case 190:  /* *cstoresfsi4 */
    case 182:  /* *branchdi */
    case 181:  /* *branchsi */
    case 129:  /* got_load_tls_iedi */
    case 128:  /* got_load_tls_iesi */
    case 127:  /* got_load_tls_gddi */
    case 126:  /* got_load_tls_gdsi */
    case 123:  /* got_loaddi */
    case 122:  /* got_loadsi */
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
    case 185:  /* *movdidicc */
    case 184:  /* *movsidicc */
    case 183:  /* *movsisicc */
      return 8;

    case 791:  /* atomic_cas_value_strongdi */
    case 790:  /* atomic_cas_value_strongsi */
      return 20 /* 0x14 */;

    case 768:  /* stack_protect_test_di */
    case 767:  /* stack_protect_test_si */
    case 766:  /* stack_protect_set_di */
    case 765:  /* stack_protect_set_si */
    case 201:  /* *fle_quietdfdi4_default */
    case 200:  /* *flt_quietdfdi4_default */
    case 199:  /* *fle_quietdfsi4_default */
    case 198:  /* *flt_quietdfsi4_default */
    case 197:  /* *fle_quietsfdi4_default */
    case 196:  /* *flt_quietsfdi4_default */
    case 195:  /* *fle_quietsfsi4_default */
    case 194:  /* *flt_quietsfsi4_default */
      return 12 /* 0xc */;

    case 245:  /* blockage */
    case 266:  /* stack_tiedi */
    case 265:  /* stack_tiesi */
      return 0;

    case 209:  /* *fle_quietdfdi4_snan */
    case 208:  /* *flt_quietdfdi4_snan */
    case 207:  /* *fle_quietdfsi4_snan */
    case 206:  /* *flt_quietdfsi4_snan */
    case 205:  /* *fle_quietsfdi4_snan */
    case 204:  /* *flt_quietsfdi4_snan */
    case 203:  /* *fle_quietsfsi4_snan */
    case 202:  /* *flt_quietsfsi4_snan */
      return 16 /* 0x10 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if ((cached_type = get_attr_type (insn)) == TYPE_BRANCH)
        {
	  return 8;
        }
      else if (cached_type == TYPE_CALL)
        {
	  return 8;
        }
      else if (cached_type == TYPE_GHOST)
        {
	  return 0;
        }
      else if (get_attr_got (insn) == GOT_LOAD)
        {
	  return 8;
        }
      else if (cached_type == TYPE_FCMP)
        {
	  return 8;
        }
      else if ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_SHIFT_SHIFT)
        {
	  return 8;
        }
      else if (((cached_move_type == MOVE_TYPE_MTC) || (cached_move_type == MOVE_TYPE_MFC) || (cached_move_type == MOVE_TYPE_MOVE)) && ((cached_dword_mode = get_attr_dword_mode (insn)) == DWORD_MODE_YES))
        {
	  return 8;
        }
      else if ((cached_move_type == MOVE_TYPE_CONST) && ((cached_dword_mode = get_attr_dword_mode (insn)) == DWORD_MODE_YES))
        {
	  return 
#line 301 "../../gcc/config/riscv/riscv.md"
(riscv_split_const_insns (operands[1]) * 4);
        }
      else if ((cached_move_type == MOVE_TYPE_LOAD) || (cached_move_type == MOVE_TYPE_FPLOAD))
        {
	  return 
#line 306 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[1], insn) * 4);
        }
      else if ((cached_move_type == MOVE_TYPE_STORE) || (cached_move_type == MOVE_TYPE_FPSTORE))
        {
	  return 
#line 308 "../../gcc/config/riscv/riscv.md"
(riscv_load_store_insns (operands[0], insn) * 4);
        }
      else
        {
	  return 4;
        }

    default:
      return 4;

    }
}

int
bypass_p (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 764:  /* *movv2si_64bit */
      extract_constrain_insn_cached (insn);
      if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (((1ULL << which_alternative) & 0xd5ULL)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 145:  /* *movdf_hardfloat_rv32 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (((1ULL << which_alternative) & 0x63ULL)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 147:  /* *movdf_softfloat */
    case 144:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (((1ULL << which_alternative) & 0x3ULL)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 146:  /* *movdf_hardfloat_rv64 */
    case 143:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (((1ULL << which_alternative) & 0x1e3ULL)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 142:  /* *movqi_internal */
    case 137:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (((1ULL << which_alternative) & 0x15ULL))) || ((which_alternative == 5) && (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 763:  /* *movv4hi_internal */
    case 762:  /* *movv8qi_internal */
    case 761:  /* *movv2hi_internal */
    case 760:  /* *movv4qi_internal */
    case 136:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (((1ULL << which_alternative) & 0x55ULL)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 96:  /* extendhidi2 */
    case 95:  /* extendhisi2 */
    case 94:  /* extendhihi2 */
    case 93:  /* extendqidi2 */
    case 92:  /* extendqisi2 */
    case 91:  /* extendqihi2 */
    case 90:  /* extendsidi2 */
    case 89:  /* zero_extendqidi2 */
    case 88:  /* zero_extendqisi2 */
    case 87:  /* zero_extendqihi2 */
    case 86:  /* zero_extendhidi2 */
    case 85:  /* zero_extendhisi2 */
    case 84:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7))))) || ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (which_alternative == 0)))
        {
	  return 1;
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
    case 332:  /* *ld64_rvp_base */
    case 330:  /* *ld64_rvp */
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
    case 189:  /* *branch_on_bit_rangedi */
    case 188:  /* *branch_on_bit_rangesi */
    case 187:  /* *branch_on_bitdi */
    case 186:  /* *branch_on_bitsi */
    case 185:  /* *movdidicc */
    case 184:  /* *movsidicc */
    case 183:  /* *movsisicc */
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
    case 129:  /* got_load_tls_iedi */
    case 128:  /* got_load_tls_iesi */
    case 127:  /* got_load_tls_gddi */
    case 126:  /* got_load_tls_gdsi */
    case 125:  /* tls_add_tp_ledi */
    case 124:  /* tls_add_tp_lesi */
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
(TUNE_SIFIVE_7))))
        {
	  return 1;
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
    case 134:  /* *movdi_32bit */
    case 135:  /* *movdi_64bit */
      if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type = get_attr_type (insn)) == TYPE_SFB_ALU))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type = get_attr_type (insn)) == TYPE_IMUL))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (((cached_type = get_attr_type (insn)) == TYPE_UNKNOWN) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE)))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCVT) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type = get_attr_type (insn)) == TYPE_MTC))
        {
	  return 1;
        }
      else if ((((
#line 318 "../../gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type = get_attr_type (insn)) == TYPE_MFC))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
num_delay_slots (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return 0;

    }
}

enum attr_cannot_copy
get_attr_cannot_copy (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 130:  /* auipcsi */
    case 131:  /* auipcdi */
      return CANNOT_COPY_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return CANNOT_COPY_NO;

    }
}

enum attr_dword_mode
get_attr_dword_mode (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_mode cached_mode ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 756:  /* revdi_internal */
    case 745:  /* kma32_internal */
    case 737:  /* wext64 */
    case 723:  /* vukmsr64 */
    case 722:  /* vukmar64 */
    case 679:  /* sraiu64 */
    case 677:  /* sraiw_u */
    case 651:  /* umulx16_64 */
    case 650:  /* smulx16_64 */
    case 647:  /* umul16_64 */
    case 646:  /* smul16_64 */
    case 639:  /* vumsr64 */
    case 638:  /* vsmsr64 */
    case 629:  /* smmulv2si3_round */
    case 616:  /* mulsidi3v */
    case 615:  /* mulv2hiv2si3v */
    case 609:  /* umaqav4qi */
    case 608:  /* smaqav4qi */
    case 587:  /* vumar64_1 */
    case 586:  /* vsmar64_1 */
    case 585:  /* umsubsidi4 */
    case 584:  /* msubsidi4 */
    case 583:  /* umaddsidi4 */
    case 582:  /* maddsidi4 */
    case 581:  /* usmsubsidi4 */
    case 580:  /* usmaddsidi4 */
    case 579:  /* ssmsubsidi4 */
    case 578:  /* ssmaddsidi4 */
    case 565:  /* smal_64 */
    case 564:  /* smal */
    case 543:  /* rdovdi */
    case 537:  /* ursubdi3 */
    case 536:  /* rsubdi3 */
    case 525:  /* uradddi3 */
    case 519:  /* radddi3 */
    case 507:  /* pbsadadi */
    case 505:  /* pbsaddi */
    case 503:  /* smindi3 */
    case 501:  /* smaxdi3 */
    case 499:  /* rvp_mulsidi3 */
    case 498:  /* rvp_umulsidi3 */
    case 485:  /* kslrawu64 */
    case 483:  /* kslraw64 */
    case 463:  /* vkmsr64 */
    case 440:  /* vkmar64 */
    case 368:  /* clrovdi */
    case 366:  /* cmixdi */
    case 362:  /* avedi */
    case 352:  /* rvp_uksubdi3 */
    case 351:  /* rvp_ksubdi3 */
    case 335:  /* rvp_ukadddi3 */
    case 334:  /* rvp_kadddi3 */
    case 333:  /* *st64_rvp_base */
    case 332:  /* *ld64_rvp_base */
    case 331:  /* *st64_rvp */
    case 330:  /* *ld64_rvp */
    case 329:  /* *add64_rvp */
    case 239:  /* *sleu_didi */
    case 238:  /* *sle_didi */
    case 237:  /* *sleu_disi */
    case 236:  /* *sle_disi */
    case 233:  /* *sltu_didi */
    case 232:  /* *slt_didi */
    case 231:  /* *sltu_disi */
    case 230:  /* *slt_disi */
    case 227:  /* *sgeu_didi */
    case 226:  /* *sge_didi */
    case 225:  /* *sgeu_disi */
    case 224:  /* *sge_disi */
    case 221:  /* *sgtu_didi */
    case 220:  /* *sgt_didi */
    case 219:  /* *sgtu_disi */
    case 218:  /* *sgt_disi */
    case 215:  /* *sne_zero_didi */
    case 214:  /* *sne_zero_disi */
    case 212:  /* *seq_zero_didi */
    case 211:  /* *seq_zero_disi */
    case 209:  /* *fle_quietdfdi4_snan */
    case 208:  /* *flt_quietdfdi4_snan */
    case 207:  /* *fle_quietdfsi4_snan */
    case 206:  /* *flt_quietdfsi4_snan */
    case 201:  /* *fle_quietdfdi4_default */
    case 200:  /* *flt_quietdfdi4_default */
    case 199:  /* *fle_quietdfsi4_default */
    case 198:  /* *flt_quietdfsi4_default */
    case 193:  /* *cstoredfdi4 */
    case 192:  /* *cstoredfsi4 */
    case 185:  /* *movdidicc */
    case 180:  /* zero_extendsidi2_shifted */
    case 167:  /* *lshrdi3_mask_1 */
    case 166:  /* *ashrdi3_mask_1 */
    case 165:  /* *ashldi3_mask_1 */
    case 164:  /* *lshrdi3_mask */
    case 163:  /* *ashrdi3_mask */
    case 162:  /* *ashldi3_mask */
    case 161:  /* lshrdi3 */
    case 160:  /* ashrdi3 */
    case 159:  /* ashldi3 */
    case 147:  /* *movdf_softfloat */
    case 146:  /* *movdf_hardfloat_rv64 */
    case 145:  /* *movdf_hardfloat_rv32 */
    case 135:  /* *movdi_64bit */
    case 134:  /* *movdi_32bit */
    case 133:  /* *lowdi */
    case 129:  /* got_load_tls_iedi */
    case 127:  /* got_load_tls_gddi */
    case 125:  /* tls_add_tp_ledi */
    case 123:  /* got_loaddi */
    case 121:  /* lrounddfdi2 */
    case 120:  /* lrintdfdi2 */
    case 119:  /* lrounddfsi2 */
    case 118:  /* lrintdfsi2 */
    case 113:  /* floatunsdidf2 */
    case 112:  /* floatunssidf2 */
    case 109:  /* floatdidf2 */
    case 108:  /* floatsidf2 */
    case 105:  /* fixuns_truncdfdi2 */
    case 104:  /* fixuns_truncdfsi2 */
    case 101:  /* fix_truncdfdi2 */
    case 100:  /* fix_truncdfsi2 */
    case 97:  /* extendsfdf2 */
    case 90:  /* extendsidi2 */
    case 89:  /* zero_extendqidi2 */
    case 86:  /* zero_extendhidi2 */
    case 84:  /* zero_extendsidi2 */
    case 81:  /* one_cmpldi2 */
    case 76:  /* xordi3 */
    case 75:  /* iordi3 */
    case 74:  /* anddi3 */
    case 70:  /* smaxdf3 */
    case 68:  /* smindf3 */
    case 66:  /* negdf2 */
    case 64:  /* copysigndf3 */
    case 62:  /* absdf2 */
    case 60:  /* *fnmadf4 */
    case 58:  /* *fnmsdf4 */
    case 56:  /* *fmsdf4 */
    case 54:  /* *fmadf4 */
    case 52:  /* fnmadf4 */
    case 50:  /* fnmsdf4 */
    case 48:  /* fmsdf4 */
    case 46:  /* fmadf4 */
    case 44:  /* sqrtdf2 */
    case 42:  /* divdf3 */
    case 40:  /* *umodsi3_extended */
    case 39:  /* *modsi3_extended */
    case 38:  /* *udivsi3_extended */
    case 37:  /* *divsi3_extended */
    case 36:  /* umoddi3 */
    case 35:  /* moddi3 */
    case 34:  /* udivdi3 */
    case 33:  /* divdi3 */
    case 25:  /* usmuldi3_highpart */
    case 24:  /* umuldi3_highpart */
    case 23:  /* muldi3_highpart */
    case 20:  /* muldi3 */
    case 18:  /* muldf3 */
    case 13:  /* negdi2 */
    case 9:  /* subdi3 */
    case 8:  /* subdf3 */
    case 4:  /* *adddi_rv64 */
    case 2:  /* adddf3 */
      extract_constrain_insn_cached (insn);
      if ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0))
        {
	  return DWORD_MODE_YES;
        }
      else
        {
	  return DWORD_MODE_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      extract_constrain_insn_cached (insn);
      if ((((cached_mode = get_attr_mode (insn)) == MODE_DI) || (cached_mode == MODE_DF)) && ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0)))
        {
	  return DWORD_MODE_YES;
        }
      else if (((cached_mode == MODE_TI) || (cached_mode == MODE_TF)) && ((
#line 194 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) != (0)))
        {
	  return DWORD_MODE_YES;
        }
      else
        {
	  return DWORD_MODE_NO;
        }

    default:
      return DWORD_MODE_NO;

    }
}

enum attr_got
get_attr_got (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 122:  /* got_loadsi */
    case 123:  /* got_loaddi */
    case 126:  /* got_load_tls_gdsi */
    case 127:  /* got_load_tls_gddi */
    case 128:  /* got_load_tls_iesi */
    case 129:  /* got_load_tls_iedi */
      return GOT_LOAD;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return GOT_UNSET;

    }
}

enum attr_mode
get_attr_mode (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 313:  /* kabsv2si2 */
    case 326:  /* addv2si3 */
    case 327:  /* kaddv2si3 */
    case 328:  /* ukaddv2si3 */
    case 348:  /* subv2si3 */
    case 349:  /* ksubv2si3 */
    case 350:  /* uksubv2si3 */
    case 377:  /* clrsbv2si2 */
    case 378:  /* clzv2si2 */
    case 421:  /* kma64_internal */
    case 471:  /* ksll32 */
    case 476:  /* kslrav2si_internal */
    case 481:  /* kslrav2si_round_internal */
    case 509:  /* vec_mergev2si */
    case 518:  /* raddv2si3 */
    case 524:  /* uraddv2si3 */
    case 530:  /* rsubv2si3 */
    case 535:  /* ursubv2si3 */
    case 555:  /* sclip32v2sidi */
    case 610:  /* smaqav8qi */
    case 611:  /* umaqav8qi */
    case 613:  /* sumaqav8qi */
    case 628:  /* smulv2si3_highpart */
    case 644:  /* smul16 */
    case 645:  /* umul16 */
    case 648:  /* smulx16 */
    case 649:  /* umulx16 */
    case 652:  /* ashlv2si3 */
    case 653:  /* ashrv2si3 */
    case 654:  /* lshrv2si3 */
    case 671:  /* sra32_round */
    case 676:  /* srl32_round */
    case 713:  /* uclip32v2sidi */
    case 741:  /* vkdma_internal */
    case 764:  /* *movv2si_64bit */
      return MODE_V2SI;

    case 311:  /* kabsv8qi2 */
    case 320:  /* addv8qi3 */
    case 321:  /* kaddv8qi3 */
    case 322:  /* ukaddv8qi3 */
    case 342:  /* subv8qi3 */
    case 343:  /* ksubv8qi3 */
    case 344:  /* uksubv8qi3 */
    case 373:  /* clrsbv8qi2 */
    case 374:  /* clzv8qi2 */
    case 383:  /* cmpeqv8qi */
    case 416:  /* vec_setv8qi_internal */
    case 423:  /* khm8v8qi */
    case 425:  /* khmx8v8qi */
    case 468:  /* kslli8v8qidi */
    case 474:  /* kslrav8qi_internal */
    case 479:  /* kslrav8qi_round_internal */
    case 516:  /* raddv8qi3 */
    case 522:  /* uraddv8qi3 */
    case 528:  /* rsubv8qi3 */
    case 533:  /* ursubv8qi3 */
    case 551:  /* sclip8v8qi */
    case 558:  /* scmplev8qi */
    case 562:  /* scmpltv8qi */
    case 662:  /* *riscv_ashrv8qi3 */
    case 664:  /* *riscv_lshrv8qi3 */
    case 666:  /* *riscv_ashlv8qi3 */
    case 668:  /* sra8_roundv8qi */
    case 673:  /* srl8_roundv8qi */
    case 707:  /* bswap8_64 */
    case 709:  /* uclip8v8qi */
    case 716:  /* ucmplev8qi */
    case 762:  /* *movv8qi_internal */
      return MODE_V8QI;

    case 309:  /* kabsv4qi2 */
    case 314:  /* addv4qi3 */
    case 315:  /* kaddv4qi3 */
    case 316:  /* ukaddv4qi3 */
    case 336:  /* subv4qi3 */
    case 337:  /* ksubv4qi3 */
    case 338:  /* uksubv4qi3 */
    case 369:  /* clrsbv4qi2 */
    case 370:  /* clzv4qi2 */
    case 381:  /* cmpeqv4qi */
    case 415:  /* vec_setv4qi_internal */
    case 422:  /* khm8v4qi */
    case 424:  /* khmx8v4qi */
    case 467:  /* kslli8v4qisi */
    case 472:  /* kslrav4qi_internal */
    case 477:  /* kslrav4qi_round_internal */
    case 514:  /* raddv4qi3 */
    case 520:  /* uraddv4qi3 */
    case 526:  /* rsubv4qi3 */
    case 531:  /* ursubv4qi3 */
    case 550:  /* sclip8v4qi */
    case 556:  /* scmplev4qi */
    case 560:  /* scmpltv4qi */
    case 661:  /* *riscv_ashrv4qi3 */
    case 663:  /* *riscv_lshrv4qi3 */
    case 665:  /* *riscv_ashlv4qi3 */
    case 667:  /* sra8_roundv4qi */
    case 672:  /* srl8_roundv4qi */
    case 706:  /* bswap8 */
    case 708:  /* uclip8v4qi */
    case 714:  /* ucmplev4qi */
    case 760:  /* *movv4qi_internal */
      return MODE_V4QI;

    case 312:  /* kabsv4hi2 */
    case 323:  /* addv4hi3 */
    case 324:  /* kaddv4hi3 */
    case 325:  /* ukaddv4hi3 */
    case 345:  /* subv4hi3 */
    case 346:  /* ksubv4hi3 */
    case 347:  /* uksubv4hi3 */
    case 375:  /* clrsbv4hi2 */
    case 376:  /* clzv4hi2 */
    case 384:  /* cmpeqv4hi */
    case 387:  /* cras16_64_le */
    case 390:  /* crsa16_64_le */
    case 393:  /* kcras16_64_le */
    case 396:  /* kcrsa16_64_le */
    case 399:  /* ukcras16_64_le */
    case 402:  /* ukcrsa16_64_le */
    case 405:  /* rcras16_64_le */
    case 408:  /* rcrsa16_64_le */
    case 411:  /* urcras16_64_le */
    case 414:  /* urcrsa16_64_le */
    case 427:  /* khm16v4hi */
    case 429:  /* khmx16v4hi */
    case 470:  /* kslli16v4hi */
    case 475:  /* kslrav4hi_internal */
    case 480:  /* kslrav4hi_round_internal */
    case 488:  /* kstas16_64_le */
    case 491:  /* kstsa16_64_le */
    case 510:  /* vec_pkbb64 */
    case 511:  /* vec_pkbt64 */
    case 512:  /* vec_pktt64 */
    case 513:  /* vec_pktb64 */
    case 517:  /* raddv4hi3 */
    case 523:  /* uraddv4hi3 */
    case 529:  /* rsubv4hi3 */
    case 534:  /* ursubv4hi3 */
    case 546:  /* rstas16_64_le */
    case 549:  /* rstsa16_64_le */
    case 553:  /* sclip16v4hi */
    case 559:  /* scmplev4hi */
    case 563:  /* scmpltv4hi */
    case 640:  /* smul8 */
    case 641:  /* smulx8 */
    case 642:  /* umul8 */
    case 643:  /* umulx8 */
    case 656:  /* *riscv_lshrv4hi3 */
    case 658:  /* *riscv_ashlv4hi3 */
    case 660:  /* *riscv_ashrv4hi3 */
    case 670:  /* sra16_roundv4hi */
    case 675:  /* srl16_roundv4hi */
    case 682:  /* stas16_64_le */
    case 685:  /* stsa16_64_le */
    case 688:  /* sunpkd810_64 */
    case 689:  /* zunpkd810_64 */
    case 692:  /* sunpkd820_64 */
    case 693:  /* zunpkd820_64 */
    case 696:  /* sunpkd830_64 */
    case 697:  /* zunpkd830_64 */
    case 700:  /* sunpkd831_64 */
    case 701:  /* zunpkd831_64 */
    case 704:  /* sunpkd832_64 */
    case 705:  /* zunpkd832_64 */
    case 711:  /* uclip16v4hi */
    case 717:  /* ucmplev4hi */
    case 726:  /* ukstas16_64_le */
    case 729:  /* ukstsa16_64_le */
    case 732:  /* urstas16_64_le */
    case 735:  /* urstsa16_64_le */
    case 738:  /* kdmbb16 */
    case 739:  /* kdmbt16 */
    case 740:  /* kdmtt16 */
    case 742:  /* khmbb16 */
    case 743:  /* khmbt16 */
    case 744:  /* khmtt16 */
    case 763:  /* *movv4hi_internal */
      return MODE_V4HI;

    case 310:  /* kabsv2hi2 */
    case 317:  /* addv2hi3 */
    case 318:  /* kaddv2hi3 */
    case 319:  /* ukaddv2hi3 */
    case 339:  /* subv2hi3 */
    case 340:  /* ksubv2hi3 */
    case 341:  /* uksubv2hi3 */
    case 371:  /* clrsbv2hi2 */
    case 372:  /* clzv2hi2 */
    case 382:  /* cmpeqv2hi */
    case 426:  /* khm16v2hi */
    case 428:  /* khmx16v2hi */
    case 469:  /* kslli16v2hi */
    case 473:  /* kslrav2hi_internal */
    case 478:  /* kslrav2hi_round_internal */
    case 508:  /* vec_mergev2hi */
    case 515:  /* raddv2hi3 */
    case 521:  /* uraddv2hi3 */
    case 527:  /* rsubv2hi3 */
    case 532:  /* ursubv2hi3 */
    case 552:  /* sclip16v2hi */
    case 557:  /* scmplev2hi */
    case 561:  /* scmpltv2hi */
    case 655:  /* *riscv_lshrv2hi3 */
    case 657:  /* *riscv_ashlv2hi3 */
    case 659:  /* *riscv_ashrv2hi3 */
    case 669:  /* sra16_roundv2hi */
    case 674:  /* srl16_roundv2hi */
    case 686:  /* sunpkd810_imp */
    case 687:  /* zunpkd810_imp */
    case 690:  /* sunpkd820_imp */
    case 691:  /* zunpkd820_imp */
    case 694:  /* sunpkd830_imp */
    case 695:  /* zunpkd830_imp */
    case 698:  /* sunpkd831_imp */
    case 699:  /* zunpkd831_imp */
    case 702:  /* sunpkd832_imp */
    case 703:  /* zunpkd832_imp */
    case 710:  /* uclip16v2hi */
    case 715:  /* ucmplev2hi */
    case 761:  /* *movv2hi_internal */
      return MODE_V2HI;

    case 2:  /* adddf3 */
    case 8:  /* subdf3 */
    case 18:  /* muldf3 */
    case 42:  /* divdf3 */
    case 44:  /* sqrtdf2 */
    case 46:  /* fmadf4 */
    case 48:  /* fmsdf4 */
    case 50:  /* fnmsdf4 */
    case 52:  /* fnmadf4 */
    case 54:  /* *fmadf4 */
    case 56:  /* *fmsdf4 */
    case 58:  /* *fnmsdf4 */
    case 60:  /* *fnmadf4 */
    case 62:  /* absdf2 */
    case 64:  /* copysigndf3 */
    case 66:  /* negdf2 */
    case 68:  /* smindf3 */
    case 70:  /* smaxdf3 */
    case 97:  /* extendsfdf2 */
    case 100:  /* fix_truncdfsi2 */
    case 101:  /* fix_truncdfdi2 */
    case 104:  /* fixuns_truncdfsi2 */
    case 105:  /* fixuns_truncdfdi2 */
    case 108:  /* floatsidf2 */
    case 109:  /* floatdidf2 */
    case 112:  /* floatunssidf2 */
    case 113:  /* floatunsdidf2 */
    case 118:  /* lrintdfsi2 */
    case 119:  /* lrounddfsi2 */
    case 120:  /* lrintdfdi2 */
    case 121:  /* lrounddfdi2 */
    case 145:  /* *movdf_hardfloat_rv32 */
    case 146:  /* *movdf_hardfloat_rv64 */
    case 147:  /* *movdf_softfloat */
    case 192:  /* *cstoredfsi4 */
    case 193:  /* *cstoredfdi4 */
    case 198:  /* *flt_quietdfsi4_default */
    case 199:  /* *fle_quietdfsi4_default */
    case 200:  /* *flt_quietdfdi4_default */
    case 201:  /* *fle_quietdfdi4_default */
    case 206:  /* *flt_quietdfsi4_snan */
    case 207:  /* *fle_quietdfsi4_snan */
    case 208:  /* *flt_quietdfdi4_snan */
    case 209:  /* *fle_quietdfdi4_snan */
      return MODE_DF;

    case 1:  /* addsf3 */
    case 7:  /* subsf3 */
    case 17:  /* mulsf3 */
    case 41:  /* divsf3 */
    case 43:  /* sqrtsf2 */
    case 45:  /* fmasf4 */
    case 47:  /* fmssf4 */
    case 49:  /* fnmssf4 */
    case 51:  /* fnmasf4 */
    case 53:  /* *fmasf4 */
    case 55:  /* *fmssf4 */
    case 57:  /* *fnmssf4 */
    case 59:  /* *fnmasf4 */
    case 61:  /* abssf2 */
    case 63:  /* copysignsf3 */
    case 65:  /* negsf2 */
    case 67:  /* sminsf3 */
    case 69:  /* smaxsf3 */
    case 83:  /* truncdfsf2 */
    case 98:  /* fix_truncsfsi2 */
    case 99:  /* fix_truncsfdi2 */
    case 102:  /* fixuns_truncsfsi2 */
    case 103:  /* fixuns_truncsfdi2 */
    case 106:  /* floatsisf2 */
    case 107:  /* floatdisf2 */
    case 110:  /* floatunssisf2 */
    case 111:  /* floatunsdisf2 */
    case 114:  /* lrintsfsi2 */
    case 115:  /* lroundsfsi2 */
    case 116:  /* lrintsfdi2 */
    case 117:  /* lroundsfdi2 */
    case 143:  /* *movsf_hardfloat */
    case 144:  /* *movsf_softfloat */
    case 190:  /* *cstoresfsi4 */
    case 191:  /* *cstoresfdi4 */
    case 194:  /* *flt_quietsfsi4_default */
    case 195:  /* *fle_quietsfsi4_default */
    case 196:  /* *flt_quietsfdi4_default */
    case 197:  /* *fle_quietsfdi4_default */
    case 202:  /* *flt_quietsfsi4_snan */
    case 203:  /* *fle_quietsfsi4_snan */
    case 204:  /* *flt_quietsfdi4_snan */
    case 205:  /* *fle_quietsfdi4_snan */
      return MODE_SF;

    case 4:  /* *adddi_rv64 */
    case 9:  /* subdi3 */
    case 13:  /* negdi2 */
    case 20:  /* muldi3 */
    case 23:  /* muldi3_highpart */
    case 24:  /* umuldi3_highpart */
    case 25:  /* usmuldi3_highpart */
    case 33:  /* divdi3 */
    case 34:  /* udivdi3 */
    case 35:  /* moddi3 */
    case 36:  /* umoddi3 */
    case 37:  /* *divsi3_extended */
    case 38:  /* *udivsi3_extended */
    case 39:  /* *modsi3_extended */
    case 40:  /* *umodsi3_extended */
    case 74:  /* anddi3 */
    case 75:  /* iordi3 */
    case 76:  /* xordi3 */
    case 81:  /* one_cmpldi2 */
    case 84:  /* zero_extendsidi2 */
    case 86:  /* zero_extendhidi2 */
    case 89:  /* zero_extendqidi2 */
    case 90:  /* extendsidi2 */
    case 123:  /* got_loaddi */
    case 125:  /* tls_add_tp_ledi */
    case 127:  /* got_load_tls_gddi */
    case 129:  /* got_load_tls_iedi */
    case 133:  /* *lowdi */
    case 134:  /* *movdi_32bit */
    case 135:  /* *movdi_64bit */
    case 159:  /* ashldi3 */
    case 160:  /* ashrdi3 */
    case 161:  /* lshrdi3 */
    case 162:  /* *ashldi3_mask */
    case 163:  /* *ashrdi3_mask */
    case 164:  /* *lshrdi3_mask */
    case 165:  /* *ashldi3_mask_1 */
    case 166:  /* *ashrdi3_mask_1 */
    case 167:  /* *lshrdi3_mask_1 */
    case 180:  /* zero_extendsidi2_shifted */
    case 185:  /* *movdidicc */
    case 211:  /* *seq_zero_disi */
    case 212:  /* *seq_zero_didi */
    case 214:  /* *sne_zero_disi */
    case 215:  /* *sne_zero_didi */
    case 218:  /* *sgt_disi */
    case 219:  /* *sgtu_disi */
    case 220:  /* *sgt_didi */
    case 221:  /* *sgtu_didi */
    case 224:  /* *sge_disi */
    case 225:  /* *sgeu_disi */
    case 226:  /* *sge_didi */
    case 227:  /* *sgeu_didi */
    case 230:  /* *slt_disi */
    case 231:  /* *sltu_disi */
    case 232:  /* *slt_didi */
    case 233:  /* *sltu_didi */
    case 236:  /* *sle_disi */
    case 237:  /* *sleu_disi */
    case 238:  /* *sle_didi */
    case 239:  /* *sleu_didi */
    case 329:  /* *add64_rvp */
    case 330:  /* *ld64_rvp */
    case 331:  /* *st64_rvp */
    case 332:  /* *ld64_rvp_base */
    case 333:  /* *st64_rvp_base */
    case 334:  /* rvp_kadddi3 */
    case 335:  /* rvp_ukadddi3 */
    case 351:  /* rvp_ksubdi3 */
    case 352:  /* rvp_uksubdi3 */
    case 362:  /* avedi */
    case 366:  /* cmixdi */
    case 368:  /* clrovdi */
    case 440:  /* vkmar64 */
    case 463:  /* vkmsr64 */
    case 483:  /* kslraw64 */
    case 485:  /* kslrawu64 */
    case 498:  /* rvp_umulsidi3 */
    case 499:  /* rvp_mulsidi3 */
    case 501:  /* smaxdi3 */
    case 503:  /* smindi3 */
    case 505:  /* pbsaddi */
    case 507:  /* pbsadadi */
    case 519:  /* radddi3 */
    case 525:  /* uradddi3 */
    case 536:  /* rsubdi3 */
    case 537:  /* ursubdi3 */
    case 543:  /* rdovdi */
    case 564:  /* smal */
    case 565:  /* smal_64 */
    case 578:  /* ssmaddsidi4 */
    case 579:  /* ssmsubsidi4 */
    case 580:  /* usmaddsidi4 */
    case 581:  /* usmsubsidi4 */
    case 582:  /* maddsidi4 */
    case 583:  /* umaddsidi4 */
    case 584:  /* msubsidi4 */
    case 585:  /* umsubsidi4 */
    case 586:  /* vsmar64_1 */
    case 587:  /* vumar64_1 */
    case 608:  /* smaqav4qi */
    case 609:  /* umaqav4qi */
    case 615:  /* mulv2hiv2si3v */
    case 616:  /* mulsidi3v */
    case 629:  /* smmulv2si3_round */
    case 638:  /* vsmsr64 */
    case 639:  /* vumsr64 */
    case 646:  /* smul16_64 */
    case 647:  /* umul16_64 */
    case 650:  /* smulx16_64 */
    case 651:  /* umulx16_64 */
    case 677:  /* sraiw_u */
    case 679:  /* sraiu64 */
    case 722:  /* vukmar64 */
    case 723:  /* vukmsr64 */
    case 737:  /* wext64 */
    case 745:  /* kma32_internal */
    case 756:  /* revdi_internal */
      return MODE_DI;

    case 3:  /* addsi3 */
    case 5:  /* *addsi3_extended */
    case 6:  /* *addsi3_extended2 */
    case 10:  /* subsi3 */
    case 11:  /* *subsi3_extended */
    case 12:  /* *subsi3_extended2 */
    case 14:  /* negsi2 */
    case 15:  /* *negsi2_extended */
    case 16:  /* *negsi2_extended2 */
    case 19:  /* mulsi3 */
    case 21:  /* *mulsi3_extended */
    case 22:  /* *mulsi3_extended2 */
    case 26:  /* mulsi3_highpart */
    case 27:  /* umulsi3_highpart */
    case 28:  /* usmulsi3_highpart */
    case 29:  /* divsi3 */
    case 30:  /* udivsi3 */
    case 31:  /* modsi3 */
    case 32:  /* umodsi3 */
    case 71:  /* andsi3 */
    case 72:  /* iorsi3 */
    case 73:  /* xorsi3 */
    case 77:  /* *andsi3_internal */
    case 78:  /* *iorsi3_internal */
    case 79:  /* *xorsi3_internal */
    case 80:  /* one_cmplsi2 */
    case 82:  /* *one_cmplsi2_internal */
    case 85:  /* zero_extendhisi2 */
    case 88:  /* zero_extendqisi2 */
    case 91:  /* extendqihi2 */
    case 92:  /* extendqisi2 */
    case 93:  /* extendqidi2 */
    case 94:  /* extendhihi2 */
    case 95:  /* extendhisi2 */
    case 96:  /* extendhidi2 */
    case 122:  /* got_loadsi */
    case 124:  /* tls_add_tp_lesi */
    case 126:  /* got_load_tls_gdsi */
    case 128:  /* got_load_tls_iesi */
    case 132:  /* *lowsi */
    case 136:  /* *movsi_internal */
    case 150:  /* ashlsi3 */
    case 151:  /* ashrsi3 */
    case 152:  /* lshrsi3 */
    case 153:  /* *ashlsi3_mask */
    case 154:  /* *ashrsi3_mask */
    case 155:  /* *lshrsi3_mask */
    case 156:  /* *ashlsi3_mask_1 */
    case 157:  /* *ashrsi3_mask_1 */
    case 158:  /* *lshrsi3_mask_1 */
    case 168:  /* *ashlsi3_extend */
    case 169:  /* *ashrsi3_extend */
    case 170:  /* *lshrsi3_extend */
    case 171:  /* *ashlsi3_extend_mask */
    case 172:  /* *ashrsi3_extend_mask */
    case 173:  /* *lshrsi3_extend_mask */
    case 174:  /* *ashlsi3_extend_mask_1 */
    case 175:  /* *ashrsi3_extend_mask_1 */
    case 176:  /* *lshrsi3_extend_mask_1 */
    case 177:  /* *lshrsi3_zero_extend_1 */
    case 178:  /* *lshrsi3_zero_extend_2 */
    case 179:  /* *lshrsi3_zero_extend_3 */
    case 183:  /* *movsisicc */
    case 184:  /* *movsidicc */
    case 210:  /* *seq_zero_sisi */
    case 213:  /* *sne_zero_sisi */
    case 216:  /* *sgt_sisi */
    case 217:  /* *sgtu_sisi */
    case 222:  /* *sge_sisi */
    case 223:  /* *sgeu_sisi */
    case 228:  /* *slt_sisi */
    case 229:  /* *sltu_sisi */
    case 234:  /* *sle_sisi */
    case 235:  /* *sleu_sisi */
    case 308:  /* kabsw */
    case 357:  /* ssaddsi3 */
    case 358:  /* usaddsi3 */
    case 359:  /* sssubsi3 */
    case 360:  /* ussubsi3 */
    case 361:  /* ave */
    case 363:  /* bitrevsi */
    case 364:  /* bitrevdi */
    case 365:  /* cmixsi */
    case 367:  /* clrovsi */
    case 379:  /* clrsbsi2 */
    case 380:  /* clzsi2 */
    case 417:  /* kdm_internal */
    case 418:  /* kdma_internal */
    case 419:  /* khmsi_internal */
    case 420:  /* kma_internal */
    case 466:  /* ksll */
    case 482:  /* kslraw */
    case 484:  /* kslrawu */
    case 496:  /* maddr32 */
    case 497:  /* msubr32 */
    case 500:  /* smaxsi3 */
    case 502:  /* sminsi3 */
    case 504:  /* pbsadsi */
    case 506:  /* pbsadasi */
    case 542:  /* rdovsi */
    case 554:  /* sclip32sisi */
    case 612:  /* sumaqav4qi */
    case 614:  /* mulhisi3v */
    case 678:  /* sraiu */
    case 712:  /* uclip32sisi */
    case 718:  /* ucmpltv4qi */
    case 719:  /* ucmpltv2hi */
    case 720:  /* ucmpltv8qi */
    case 721:  /* ucmpltv4hi */
    case 736:  /* wext */
    case 755:  /* revsi_internal */
    case 757:  /* fsrw */
    case 758:  /* fsr_rvp */
    case 759:  /* fsri_rvp */
      return MODE_SI;

    case 87:  /* zero_extendqihi2 */
    case 137:  /* *movhi_internal */
    case 138:  /* *addhihi3 */
    case 139:  /* *addsihi3 */
    case 140:  /* *xorhihi3 */
    case 141:  /* *xorsihi3 */
    case 353:  /* ssaddhi3 */
    case 354:  /* usaddhi3 */
    case 355:  /* sssubhi3 */
    case 356:  /* ussubhi3 */
    case 626:  /* smulsi3_highpart */
    case 627:  /* smmul_round */
      return MODE_HI;

    case 142:  /* *movqi_internal */
      return MODE_QI;

    case 181:  /* *branchsi */
    case 182:  /* *branchdi */
    case 240:  /* jump */
    case 241:  /* indirect_jumpsi */
    case 242:  /* indirect_jumpdi */
    case 243:  /* tablejumpsi */
    case 244:  /* tablejumpdi */
    case 245:  /* blockage */
    case 246:  /* simple_return */
    case 247:  /* simple_return_internal */
    case 255:  /* nop */
      return MODE_NONE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return MODE_UNKNOWN;

    }
}

enum attr_move_type
get_attr_move_type (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 87:  /* zero_extendqihi2 */
    case 88:  /* zero_extendqisi2 */
    case 89:  /* zero_extendqidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_ANDI;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 90:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 84:  /* zero_extendsidi2 */
    case 85:  /* zero_extendhisi2 */
    case 86:  /* zero_extendhidi2 */
    case 91:  /* extendqihi2 */
    case 92:  /* extendqisi2 */
    case 93:  /* extendqidi2 */
    case 94:  /* extendhihi2 */
    case 95:  /* extendhisi2 */
    case 96:  /* extendhidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_SHIFT_SHIFT;
        }
      else
        {
	  return MOVE_TYPE_LOAD;
        }

    case 137:  /* *movhi_internal */
    case 142:  /* *movqi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_MTC;
        }
      else
        {
	  return MOVE_TYPE_MFC;
        }

    case 145:  /* *movdf_hardfloat_rv32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_FMOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_FPSTORE;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_LOAD;
        }
      else
        {
	  return MOVE_TYPE_STORE;
        }

    case 143:  /* *movsf_hardfloat */
    case 146:  /* *movdf_hardfloat_rv64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_FMOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_FPSTORE;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 8)
        {
	  return MOVE_TYPE_LOAD;
        }
      else
        {
	  return MOVE_TYPE_STORE;
        }

    case 144:  /* *movsf_softfloat */
    case 147:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_LOAD;
        }
      else
        {
	  return MOVE_TYPE_STORE;
        }

    case 136:  /* *movsi_internal */
    case 760:  /* *movv4qi_internal */
    case 761:  /* *movv2hi_internal */
    case 762:  /* *movv8qi_internal */
    case 763:  /* *movv4hi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_MFC;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case 134:  /* *movdi_32bit */
    case 135:  /* *movdi_64bit */
    case 764:  /* *movv2si_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MOVE_TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return MOVE_TYPE_CONST;
        }
      else if (which_alternative == 2)
        {
	  return MOVE_TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return MOVE_TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return MOVE_TYPE_MTC;
        }
      else if (which_alternative == 5)
        {
	  return MOVE_TYPE_FPLOAD;
        }
      else if (which_alternative == 6)
        {
	  return MOVE_TYPE_MFC;
        }
      else if (which_alternative == 7)
        {
	  return MOVE_TYPE_FMOVE;
        }
      else
        {
	  return MOVE_TYPE_FPSTORE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return MOVE_TYPE_UNKNOWN;

    }
}

enum attr_type
get_attr_type (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_move_type cached_move_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 764:  /* *movv2si_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (!((1ULL << which_alternative) & 0xffULL))
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MFC;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_FMOVE;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 147:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return TYPE_STORE;
        }
      else if ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 146:  /* *movdf_hardfloat_rv64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 8)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FPLOAD;
        }
      else if (!((1ULL << which_alternative) & 0x1efULL))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPSTORE;
        }
      else if (((1ULL << which_alternative) & 0x22ULL))
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MFC;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_FMOVE;
        }
      else if ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 145:  /* *movdf_hardfloat_rv32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FPLOAD;
        }
      else if (!((1ULL << which_alternative) & 0x6fULL))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_FMOVE;
        }
      else if ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 144:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (!((1ULL << which_alternative) & 0x3ULL))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 143:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 8)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FPLOAD;
        }
      else if (!((1ULL << which_alternative) & 0x1efULL))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPSTORE;
        }
      else if (((1ULL << which_alternative) & 0x22ULL))
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MFC;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_FMOVE;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 142:  /* *movqi_internal */
    case 137:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MTC;
        }
      else if (!((1ULL << which_alternative) & 0x1fULL))
        {
	  return TYPE_MFC;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 763:  /* *movv4hi_internal */
    case 762:  /* *movv8qi_internal */
    case 761:  /* *movv2hi_internal */
    case 760:  /* *movv4qi_internal */
    case 136:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (!((1ULL << which_alternative) & 0x7fULL))
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MTC;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MFC;
        }
      else if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_CONST;
        }

    case 90:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_LOAD;
        }
      else if ((
#line 190 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) == (0))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MOVE;
        }

    case 89:  /* zero_extendqidi2 */
    case 88:  /* zero_extendqisi2 */
    case 87:  /* zero_extendqihi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_LOGICAL;
        }

    case 96:  /* extendhidi2 */
    case 95:  /* extendhisi2 */
    case 94:  /* extendhihi2 */
    case 93:  /* extendqidi2 */
    case 92:  /* extendqisi2 */
    case 91:  /* extendqihi2 */
    case 86:  /* zero_extendhidi2 */
    case 85:  /* zero_extendhisi2 */
    case 84:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 134:  /* *movdi_32bit */
    case 135:  /* *movdi_64bit */
      if (get_attr_got (insn) == GOT_LOAD)
        {
	  return TYPE_LOAD;
        }
      else if ((cached_move_type = get_attr_move_type (insn)) == MOVE_TYPE_LOAD)
        {
	  return TYPE_LOAD;
        }
      else if (cached_move_type == MOVE_TYPE_FPLOAD)
        {
	  return TYPE_FPLOAD;
        }
      else if (cached_move_type == MOVE_TYPE_STORE)
        {
	  return TYPE_STORE;
        }
      else if (cached_move_type == MOVE_TYPE_FPSTORE)
        {
	  return TYPE_FPSTORE;
        }
      else if (cached_move_type == MOVE_TYPE_MTC)
        {
	  return TYPE_MTC;
        }
      else if (cached_move_type == MOVE_TYPE_MFC)
        {
	  return TYPE_MFC;
        }
      else if (cached_move_type == MOVE_TYPE_FMOVE)
        {
	  return TYPE_FMOVE;
        }
      else if (cached_move_type == MOVE_TYPE_ARITH)
        {
	  return TYPE_ARITH;
        }
      else if (cached_move_type == MOVE_TYPE_LOGICAL)
        {
	  return TYPE_LOGICAL;
        }
      else if (cached_move_type == MOVE_TYPE_ANDI)
        {
	  return TYPE_LOGICAL;
        }
      else if (cached_move_type == MOVE_TYPE_SHIFT_SHIFT)
        {
	  return TYPE_MULTI;
        }
      else if (((cached_move_type == MOVE_TYPE_MOVE) || (cached_move_type == MOVE_TYPE_CONST)) && (get_attr_dword_mode (insn) == DWORD_MODE_YES))
        {
	  return TYPE_MULTI;
        }
      else if (cached_move_type == MOVE_TYPE_MOVE)
        {
	  return TYPE_MOVE;
        }
      else if (cached_move_type == MOVE_TYPE_CONST)
        {
	  return TYPE_CONST;
        }
      else
        {
	  return TYPE_UNKNOWN;
        }

    case 334:  /* rvp_kadddi3 */
    case 335:  /* rvp_ukadddi3 */
    case 351:  /* rvp_ksubdi3 */
    case 352:  /* rvp_uksubdi3 */
    case 440:  /* vkmar64 */
    case 463:  /* vkmsr64 */
    case 519:  /* radddi3 */
    case 525:  /* uradddi3 */
    case 536:  /* rsubdi3 */
    case 537:  /* ursubdi3 */
    case 566:  /* smaddhidi */
    case 567:  /* smaddhidi64 */
    case 568:  /* smalda1_le */
    case 569:  /* smalda64 */
    case 570:  /* smalxda1_le */
    case 571:  /* smalxds1_le */
    case 572:  /* smalxda64 */
    case 573:  /* smalxds64 */
    case 574:  /* smalds1_le */
    case 575:  /* smalds64 */
    case 576:  /* smaldrs3_le */
    case 577:  /* smaldrs64 */
    case 578:  /* ssmaddsidi4 */
    case 579:  /* ssmsubsidi4 */
    case 580:  /* usmaddsidi4 */
    case 581:  /* usmsubsidi4 */
    case 582:  /* maddsidi4 */
    case 583:  /* umaddsidi4 */
    case 584:  /* msubsidi4 */
    case 585:  /* umsubsidi4 */
    case 586:  /* vsmar64_1 */
    case 587:  /* vumar64_1 */
    case 634:  /* smslda1 */
    case 635:  /* smslda64 */
    case 636:  /* smslxda1 */
    case 637:  /* smslxda64 */
    case 638:  /* vsmsr64 */
    case 639:  /* vumsr64 */
    case 722:  /* vukmar64 */
    case 723:  /* vukmsr64 */
      return TYPE_DSP64;

    case 308:  /* kabsw */
    case 353:  /* ssaddhi3 */
    case 354:  /* usaddhi3 */
    case 355:  /* sssubhi3 */
    case 356:  /* ussubhi3 */
    case 357:  /* ssaddsi3 */
    case 358:  /* usaddsi3 */
    case 359:  /* sssubsi3 */
    case 360:  /* ussubsi3 */
    case 361:  /* ave */
    case 362:  /* avedi */
    case 363:  /* bitrevsi */
    case 364:  /* bitrevdi */
    case 365:  /* cmixsi */
    case 366:  /* cmixdi */
    case 415:  /* vec_setv4qi_internal */
    case 416:  /* vec_setv8qi_internal */
    case 417:  /* kdm_internal */
    case 418:  /* kdma_internal */
    case 419:  /* khmsi_internal */
    case 466:  /* ksll */
    case 482:  /* kslraw */
    case 483:  /* kslraw64 */
    case 484:  /* kslrawu */
    case 485:  /* kslrawu64 */
    case 496:  /* maddr32 */
    case 497:  /* msubr32 */
    case 498:  /* rvp_umulsidi3 */
    case 499:  /* rvp_mulsidi3 */
    case 500:  /* smaxsi3 */
    case 501:  /* smaxdi3 */
    case 502:  /* sminsi3 */
    case 503:  /* smindi3 */
    case 504:  /* pbsadsi */
    case 505:  /* pbsaddi */
    case 506:  /* pbsadasi */
    case 507:  /* pbsadadi */
    case 508:  /* vec_mergev2hi */
    case 509:  /* vec_mergev2si */
    case 510:  /* vec_pkbb64 */
    case 511:  /* vec_pkbt64 */
    case 512:  /* vec_pktt64 */
    case 513:  /* vec_pktb64 */
    case 538:  /* raddsi3 */
    case 539:  /* rsubsi3 */
    case 540:  /* uraddsi3 */
    case 541:  /* ursubsi3 */
    case 542:  /* rdovsi */
    case 543:  /* rdovdi */
    case 554:  /* sclip32sisi */
    case 555:  /* sclip32v2sidi */
    case 608:  /* smaqav4qi */
    case 609:  /* umaqav4qi */
    case 610:  /* smaqav8qi */
    case 611:  /* umaqav8qi */
    case 612:  /* sumaqav4qi */
    case 613:  /* sumaqav8qi */
    case 616:  /* mulsidi3v */
    case 623:  /* smxds32 */
    case 624:  /* smds32 */
    case 625:  /* smdrs32 */
    case 677:  /* sraiw_u */
    case 686:  /* sunpkd810_imp */
    case 687:  /* zunpkd810_imp */
    case 688:  /* sunpkd810_64 */
    case 689:  /* zunpkd810_64 */
    case 690:  /* sunpkd820_imp */
    case 691:  /* zunpkd820_imp */
    case 692:  /* sunpkd820_64 */
    case 693:  /* zunpkd820_64 */
    case 694:  /* sunpkd830_imp */
    case 695:  /* zunpkd830_imp */
    case 696:  /* sunpkd830_64 */
    case 697:  /* zunpkd830_64 */
    case 698:  /* sunpkd831_imp */
    case 699:  /* zunpkd831_imp */
    case 700:  /* sunpkd831_64 */
    case 701:  /* zunpkd831_64 */
    case 702:  /* sunpkd832_imp */
    case 703:  /* zunpkd832_imp */
    case 704:  /* sunpkd832_64 */
    case 705:  /* zunpkd832_64 */
    case 706:  /* bswap8 */
    case 707:  /* bswap8_64 */
    case 736:  /* wext */
    case 737:  /* wext64 */
    case 746:  /* kmada32 */
    case 747:  /* kmaxda32 */
    case 748:  /* kmda32 */
    case 749:  /* kmxda32 */
    case 750:  /* kmads32 */
    case 751:  /* kmadrs32 */
    case 752:  /* kmaxds32 */
    case 753:  /* kmsda32 */
    case 754:  /* kmsxda32 */
    case 755:  /* revsi_internal */
    case 756:  /* revdi_internal */
    case 757:  /* fsrw */
    case 758:  /* fsr_rvp */
    case 759:  /* fsri_rvp */
      return TYPE_DSP;

    case 564:  /* smal */
    case 565:  /* smal_64 */
      return TYPE_PSIMD;

    case 245:  /* blockage */
      return TYPE_GHOST;

    case 255:  /* nop */
      return TYPE_NOP;

    case 183:  /* *movsisicc */
    case 184:  /* *movsidicc */
    case 185:  /* *movdidicc */
      return TYPE_SFB_ALU;

    case 130:  /* auipcsi */
    case 131:  /* auipcdi */
      return TYPE_AUIPC;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      return TYPE_MULTI;

    case 43:  /* sqrtsf2 */
    case 44:  /* sqrtdf2 */
      return TYPE_FSQRT;

    case 83:  /* truncdfsf2 */
    case 97:  /* extendsfdf2 */
    case 98:  /* fix_truncsfsi2 */
    case 99:  /* fix_truncsfdi2 */
    case 100:  /* fix_truncdfsi2 */
    case 101:  /* fix_truncdfdi2 */
    case 102:  /* fixuns_truncsfsi2 */
    case 103:  /* fixuns_truncsfdi2 */
    case 104:  /* fixuns_truncdfsi2 */
    case 105:  /* fixuns_truncdfdi2 */
    case 106:  /* floatsisf2 */
    case 107:  /* floatdisf2 */
    case 108:  /* floatsidf2 */
    case 109:  /* floatdidf2 */
    case 110:  /* floatunssisf2 */
    case 111:  /* floatunsdisf2 */
    case 112:  /* floatunssidf2 */
    case 113:  /* floatunsdidf2 */
    case 114:  /* lrintsfsi2 */
    case 115:  /* lroundsfsi2 */
    case 116:  /* lrintsfdi2 */
    case 117:  /* lroundsfdi2 */
    case 118:  /* lrintdfsi2 */
    case 119:  /* lrounddfsi2 */
    case 120:  /* lrintdfdi2 */
    case 121:  /* lrounddfdi2 */
      return TYPE_FCVT;

    case 190:  /* *cstoresfsi4 */
    case 191:  /* *cstoresfdi4 */
    case 192:  /* *cstoredfsi4 */
    case 193:  /* *cstoredfdi4 */
    case 194:  /* *flt_quietsfsi4_default */
    case 195:  /* *fle_quietsfsi4_default */
    case 196:  /* *flt_quietsfdi4_default */
    case 197:  /* *fle_quietsfdi4_default */
    case 198:  /* *flt_quietdfsi4_default */
    case 199:  /* *fle_quietdfsi4_default */
    case 200:  /* *flt_quietdfdi4_default */
    case 201:  /* *fle_quietdfdi4_default */
    case 202:  /* *flt_quietsfsi4_snan */
    case 203:  /* *fle_quietsfsi4_snan */
    case 204:  /* *flt_quietsfdi4_snan */
    case 205:  /* *fle_quietsfdi4_snan */
    case 206:  /* *flt_quietdfsi4_snan */
    case 207:  /* *fle_quietdfsi4_snan */
    case 208:  /* *flt_quietdfdi4_snan */
    case 209:  /* *fle_quietdfdi4_snan */
      return TYPE_FCMP;

    case 41:  /* divsf3 */
    case 42:  /* divdf3 */
      return TYPE_FDIV;

    case 45:  /* fmasf4 */
    case 46:  /* fmadf4 */
    case 47:  /* fmssf4 */
    case 48:  /* fmsdf4 */
    case 49:  /* fnmssf4 */
    case 50:  /* fnmsdf4 */
    case 51:  /* fnmasf4 */
    case 52:  /* fnmadf4 */
    case 53:  /* *fmasf4 */
    case 54:  /* *fmadf4 */
    case 55:  /* *fmssf4 */
    case 56:  /* *fmsdf4 */
    case 57:  /* *fnmssf4 */
    case 58:  /* *fnmsdf4 */
    case 59:  /* *fnmasf4 */
    case 60:  /* *fnmadf4 */
      return TYPE_FMADD;

    case 17:  /* mulsf3 */
    case 18:  /* muldf3 */
      return TYPE_FMUL;

    case 1:  /* addsf3 */
    case 2:  /* adddf3 */
    case 7:  /* subsf3 */
    case 8:  /* subdf3 */
      return TYPE_FADD;

    case 61:  /* abssf2 */
    case 62:  /* absdf2 */
    case 63:  /* copysignsf3 */
    case 64:  /* copysigndf3 */
    case 65:  /* negsf2 */
    case 66:  /* negdf2 */
    case 67:  /* sminsf3 */
    case 68:  /* smindf3 */
    case 69:  /* smaxsf3 */
    case 70:  /* smaxdf3 */
      return TYPE_FMOVE;

    case 29:  /* divsi3 */
    case 30:  /* udivsi3 */
    case 31:  /* modsi3 */
    case 32:  /* umodsi3 */
    case 33:  /* divdi3 */
    case 34:  /* udivdi3 */
    case 35:  /* moddi3 */
    case 36:  /* umoddi3 */
    case 37:  /* *divsi3_extended */
    case 38:  /* *udivsi3_extended */
    case 39:  /* *modsi3_extended */
    case 40:  /* *umodsi3_extended */
      return TYPE_IDIV;

    case 19:  /* mulsi3 */
    case 20:  /* muldi3 */
    case 21:  /* *mulsi3_extended */
    case 22:  /* *mulsi3_extended2 */
    case 23:  /* muldi3_highpart */
    case 24:  /* umuldi3_highpart */
    case 25:  /* usmuldi3_highpart */
    case 26:  /* mulsi3_highpart */
    case 27:  /* umulsi3_highpart */
    case 28:  /* usmulsi3_highpart */
      return TYPE_IMUL;

    case 210:  /* *seq_zero_sisi */
    case 211:  /* *seq_zero_disi */
    case 212:  /* *seq_zero_didi */
    case 213:  /* *sne_zero_sisi */
    case 214:  /* *sne_zero_disi */
    case 215:  /* *sne_zero_didi */
    case 216:  /* *sgt_sisi */
    case 217:  /* *sgtu_sisi */
    case 218:  /* *sgt_disi */
    case 219:  /* *sgtu_disi */
    case 220:  /* *sgt_didi */
    case 221:  /* *sgtu_didi */
    case 222:  /* *sge_sisi */
    case 223:  /* *sgeu_sisi */
    case 224:  /* *sge_disi */
    case 225:  /* *sgeu_disi */
    case 226:  /* *sge_didi */
    case 227:  /* *sgeu_didi */
    case 228:  /* *slt_sisi */
    case 229:  /* *sltu_sisi */
    case 230:  /* *slt_disi */
    case 231:  /* *sltu_disi */
    case 232:  /* *slt_didi */
    case 233:  /* *sltu_didi */
    case 234:  /* *sle_sisi */
    case 235:  /* *sleu_sisi */
    case 236:  /* *sle_disi */
    case 237:  /* *sleu_disi */
    case 238:  /* *sle_didi */
    case 239:  /* *sleu_didi */
      return TYPE_SLT;

    case 150:  /* ashlsi3 */
    case 151:  /* ashrsi3 */
    case 152:  /* lshrsi3 */
    case 153:  /* *ashlsi3_mask */
    case 154:  /* *ashrsi3_mask */
    case 155:  /* *lshrsi3_mask */
    case 156:  /* *ashlsi3_mask_1 */
    case 157:  /* *ashrsi3_mask_1 */
    case 158:  /* *lshrsi3_mask_1 */
    case 159:  /* ashldi3 */
    case 160:  /* ashrdi3 */
    case 161:  /* lshrdi3 */
    case 162:  /* *ashldi3_mask */
    case 163:  /* *ashrdi3_mask */
    case 164:  /* *lshrdi3_mask */
    case 165:  /* *ashldi3_mask_1 */
    case 166:  /* *ashrdi3_mask_1 */
    case 167:  /* *lshrdi3_mask_1 */
    case 168:  /* *ashlsi3_extend */
    case 169:  /* *ashrsi3_extend */
    case 170:  /* *lshrsi3_extend */
    case 171:  /* *ashlsi3_extend_mask */
    case 172:  /* *ashrsi3_extend_mask */
    case 173:  /* *lshrsi3_extend_mask */
    case 174:  /* *ashlsi3_extend_mask_1 */
    case 175:  /* *ashrsi3_extend_mask_1 */
    case 176:  /* *lshrsi3_extend_mask_1 */
    case 177:  /* *lshrsi3_zero_extend_1 */
    case 178:  /* *lshrsi3_zero_extend_2 */
    case 179:  /* *lshrsi3_zero_extend_3 */
    case 180:  /* zero_extendsidi2_shifted */
      return TYPE_SHIFT;

    case 71:  /* andsi3 */
    case 72:  /* iorsi3 */
    case 73:  /* xorsi3 */
    case 74:  /* anddi3 */
    case 75:  /* iordi3 */
    case 76:  /* xordi3 */
    case 77:  /* *andsi3_internal */
    case 78:  /* *iorsi3_internal */
    case 79:  /* *xorsi3_internal */
    case 80:  /* one_cmplsi2 */
    case 81:  /* one_cmpldi2 */
    case 82:  /* *one_cmplsi2_internal */
    case 140:  /* *xorhihi3 */
    case 141:  /* *xorsihi3 */
      return TYPE_LOGICAL;

    case 3:  /* addsi3 */
    case 4:  /* *adddi_rv64 */
    case 5:  /* *addsi3_extended */
    case 6:  /* *addsi3_extended2 */
    case 9:  /* subdi3 */
    case 10:  /* subsi3 */
    case 11:  /* *subsi3_extended */
    case 12:  /* *subsi3_extended2 */
    case 13:  /* negdi2 */
    case 14:  /* negsi2 */
    case 15:  /* *negsi2_extended */
    case 16:  /* *negsi2_extended2 */
    case 124:  /* tls_add_tp_lesi */
    case 125:  /* tls_add_tp_ledi */
    case 132:  /* *lowsi */
    case 133:  /* *lowdi */
    case 138:  /* *addhihi3 */
    case 139:  /* *addsihi3 */
    case 329:  /* *add64_rvp */
      return TYPE_ARITH;

    case 331:  /* *st64_rvp */
    case 333:  /* *st64_rvp_base */
      return TYPE_STORE;

    case 129:  /* got_load_tls_iedi */
    case 128:  /* got_load_tls_iesi */
    case 127:  /* got_load_tls_gddi */
    case 126:  /* got_load_tls_gdsi */
    case 123:  /* got_loaddi */
    case 122:  /* got_loadsi */
    case 330:  /* *ld64_rvp */
    case 332:  /* *ld64_rvp_base */
      return TYPE_LOAD;

    case 251:  /* sibcall_internal */
    case 252:  /* sibcall_value_internal */
    case 253:  /* call_internal */
    case 254:  /* call_value_internal */
      return TYPE_CALL;

    case 240:  /* jump */
    case 241:  /* indirect_jumpsi */
    case 242:  /* indirect_jumpdi */
    case 243:  /* tablejumpsi */
    case 244:  /* tablejumpdi */
    case 246:  /* simple_return */
    case 247:  /* simple_return_internal */
      return TYPE_JUMP;

    case 181:  /* *branchsi */
    case 182:  /* *branchdi */
      return TYPE_BRANCH;

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
    case 189:  /* *branch_on_bit_rangedi */
    case 188:  /* *branch_on_bit_rangesi */
    case 187:  /* *branch_on_bitdi */
    case 186:  /* *branch_on_bitsi */
    case 149:  /* fence_i */
    case 148:  /* fence */
      return TYPE_UNKNOWN;

    default:
      return TYPE_SIMD;

    }
}

int
eligible_for_delay (rtx_insn *delay_insn ATTRIBUTE_UNUSED, int slot, 
		   rtx_insn *candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx_insn *insn ATTRIBUTE_UNUSED;

  if (num_delay_slots (delay_insn) == 0)
    return 0;
  gcc_assert (slot < 0);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = candidate_insn;
  switch (slot)
    {
    default:
      gcc_unreachable ();
    }
}

int
eligible_for_annul_true (rtx_insn *delay_insn ATTRIBUTE_UNUSED,
    int slot ATTRIBUTE_UNUSED,
    rtx_insn *candidate_insn ATTRIBUTE_UNUSED,
    int flags ATTRIBUTE_UNUSED)
{
  return 0;
}

int
eligible_for_annul_false (rtx_insn *delay_insn ATTRIBUTE_UNUSED,
    int slot ATTRIBUTE_UNUSED,
    rtx_insn *candidate_insn ATTRIBUTE_UNUSED,
    int flags ATTRIBUTE_UNUSED)
{
  return 0;
}

int
const_num_delay_slots (rtx_insn *insn)
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}

EXPORTED_CONST int length_unit_log = 0;

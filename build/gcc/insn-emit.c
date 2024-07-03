/* Generated automatically by the program `genemit'
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
#include "dfp.h"
#include "output.h"
#include "recog.h"
#include "df.h"
#include "resource.h"
#include "reload.h"
#include "diagnostic-core.h"
#include "regs.h"
#include "tm-constrs.h"
#include "ggc.h"
#include "target.h"

/* ../../gcc/config/riscv/riscv.md:505 */
rtx
gen_addsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:505 */
rtx
gen_adddf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:514 */
rtx
gen_addsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:573 */
rtx
gen_subsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:573 */
rtx
gen_subdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:582 */
rtx
gen_subdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:591 */
rtx
gen_subsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:621 */
rtx
gen_negdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_NEG (DImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:629 */
rtx
gen_negsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_NEG (SImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:664 */
rtx
gen_mulsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:664 */
rtx
gen_muldf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:673 */
rtx
gen_mulsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:682 */
rtx
gen_muldi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:738 */
rtx
gen_muldi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)])));
}

/* ../../gcc/config/riscv/riscv.md:738 */
rtx
gen_umuldi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)])));
}

/* ../../gcc/config/riscv/riscv.md:769 */
rtx
gen_usmuldi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)])));
}

/* ../../gcc/config/riscv/riscv.md:806 */
rtx
gen_mulsi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc/config/riscv/riscv.md:806 */
rtx
gen_umulsi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc/config/riscv/riscv.md:837 */
rtx
gen_usmulsi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc/config/riscv/riscv.md:859 */
rtx
gen_divsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:859 */
rtx
gen_udivsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:859 */
rtx
gen_modsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MOD (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:859 */
rtx
gen_umodsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:868 */
rtx
gen_divdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:868 */
rtx
gen_udivdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:868 */
rtx
gen_moddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MOD (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:868 */
rtx
gen_umoddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMOD (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:887 */
rtx
gen_divsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:887 */
rtx
gen_divdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:903 */
rtx
gen_sqrtsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:903 */
rtx
gen_sqrtdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:916 */
rtx
gen_fmasf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FMA (SFmode,
	operand1,
	operand2,
	operand3));
}

/* ../../gcc/config/riscv/riscv.md:916 */
rtx
gen_fmadf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FMA (DFmode,
	operand1,
	operand2,
	operand3));
}

/* ../../gcc/config/riscv/riscv.md:927 */
rtx
gen_fmssf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FMA (SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (SFmode,
	operand3)));
}

/* ../../gcc/config/riscv/riscv.md:927 */
rtx
gen_fmsdf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FMA (DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (DFmode,
	operand3)));
}

/* ../../gcc/config/riscv/riscv.md:938 */
rtx
gen_fnmssf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FMA (SFmode,
	gen_rtx_NEG (SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (SFmode,
	operand3)));
}

/* ../../gcc/config/riscv/riscv.md:938 */
rtx
gen_fnmsdf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FMA (DFmode,
	gen_rtx_NEG (DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (DFmode,
	operand3)));
}

/* ../../gcc/config/riscv/riscv.md:950 */
rtx
gen_fnmasf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FMA (SFmode,
	gen_rtx_NEG (SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../gcc/config/riscv/riscv.md:950 */
rtx
gen_fnmadf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FMA (DFmode,
	gen_rtx_NEG (DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../gcc/config/riscv/riscv.md:1020 */
rtx
gen_abssf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ABS (SFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1020 */
rtx
gen_absdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ABS (DFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1028 */
rtx
gen_copysignsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	11));
}

/* ../../gcc/config/riscv/riscv.md:1028 */
rtx
gen_copysigndf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	11));
}

/* ../../gcc/config/riscv/riscv.md:1038 */
rtx
gen_negsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_NEG (SFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1038 */
rtx
gen_negdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_NEG (DFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1053 */
rtx
gen_sminsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (SFmode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1053 */
rtx
gen_smindf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (DFmode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1062 */
rtx
gen_smaxsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SFmode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1062 */
rtx
gen_smaxdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (DFmode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1082 */
rtx
gen_andsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1082 */
rtx
gen_iorsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1082 */
rtx
gen_xorsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1082 */
rtx
gen_anddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1082 */
rtx
gen_iordi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1082 */
rtx
gen_xordi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1100 */
rtx
gen_one_cmplsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1100 */
rtx
gen_one_cmpldi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_NOT (DImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1123 */
rtx
gen_truncdfsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1141 */
rtx
gen_zero_extendsidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1160 */
rtx
gen_zero_extendhisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1160 */
rtx
gen_zero_extendhidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1182 */
rtx
gen_zero_extendqihi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1182 */
rtx
gen_zero_extendqisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1182 */
rtx
gen_zero_extendqidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1200 */
rtx
gen_extendsidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1211 */
rtx
gen_extendqihi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1211 */
rtx
gen_extendqisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1211 */
rtx
gen_extendqidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1211 */
rtx
gen_extendhihi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1211 */
rtx
gen_extendhisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1211 */
rtx
gen_extendhidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1233 */
rtx
gen_extendsfdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1249 */
rtx
gen_fix_truncsfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1249 */
rtx
gen_fix_truncsfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1249 */
rtx
gen_fix_truncdfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1249 */
rtx
gen_fix_truncdfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1258 */
rtx
gen_fixuns_truncsfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1258 */
rtx
gen_fixuns_truncsfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (DImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1258 */
rtx
gen_fixuns_truncdfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1258 */
rtx
gen_fixuns_truncdfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (DImode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1267 */
rtx
gen_floatsisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1267 */
rtx
gen_floatdisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1267 */
rtx
gen_floatsidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1267 */
rtx
gen_floatdidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1276 */
rtx
gen_floatunssisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (SFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1276 */
rtx
gen_floatunsdisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (SFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1276 */
rtx
gen_floatunssidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (DFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1276 */
rtx
gen_floatunsdidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (DFmode,
	operand1));
}

/* ../../gcc/config/riscv/riscv.md:1285 */
rtx
gen_lrintsfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	12));
}

/* ../../gcc/config/riscv/riscv.md:1285 */
rtx
gen_lroundsfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	13));
}

/* ../../gcc/config/riscv/riscv.md:1285 */
rtx
gen_lrintsfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	12));
}

/* ../../gcc/config/riscv/riscv.md:1285 */
rtx
gen_lroundsfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	13));
}

/* ../../gcc/config/riscv/riscv.md:1285 */
rtx
gen_lrintdfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	12));
}

/* ../../gcc/config/riscv/riscv.md:1285 */
rtx
gen_lrounddfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	13));
}

/* ../../gcc/config/riscv/riscv.md:1285 */
rtx
gen_lrintdfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	12));
}

/* ../../gcc/config/riscv/riscv.md:1285 */
rtx
gen_lrounddfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	13));
}

/* ../../gcc/config/riscv/riscv.md:1306 */
rtx
gen_got_loadsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	3));
}

/* ../../gcc/config/riscv/riscv.md:1306 */
rtx
gen_got_loaddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	3));
}

/* ../../gcc/config/riscv/riscv.md:1316 */
rtx
gen_tls_add_tp_lesi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	5));
}

/* ../../gcc/config/riscv/riscv.md:1316 */
rtx
gen_tls_add_tp_ledi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	5));
}

/* ../../gcc/config/riscv/riscv.md:1328 */
rtx
gen_got_load_tls_gdsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	7));
}

/* ../../gcc/config/riscv/riscv.md:1328 */
rtx
gen_got_load_tls_gddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	7));
}

/* ../../gcc/config/riscv/riscv.md:1338 */
rtx
gen_got_load_tls_iesi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	6));
}

/* ../../gcc/config/riscv/riscv.md:1338 */
rtx
gen_got_load_tls_iedi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	6));
}

/* ../../gcc/config/riscv/riscv.md:1348 */
rtx
gen_auipcsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		pc_rtx),
	8));
}

/* ../../gcc/config/riscv/riscv.md:1348 */
rtx
gen_auipcdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		pc_rtx),
	8));
}

/* ../../gcc/config/riscv/riscv.md:1633 */
rtx
gen_fence (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	8);
}

/* ../../gcc/config/riscv/riscv.md:1638 */
rtx
gen_fence_i (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	9);
}

/* ../../gcc/config/riscv/riscv.md:1655 */
rtx
gen_ashlsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1655 */
rtx
gen_ashrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1655 */
rtx
gen_lshrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1710 */
rtx
gen_ashldi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1710 */
rtx
gen_ashrdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1710 */
rtx
gen_lshrdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:1911 */
rtx
gen_zero_extendsidi2_shifted (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (DImode,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2),
	operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* ../../gcc/config/riscv/riscv.md:2220 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* ../../gcc/config/riscv/riscv.md:2240 */
rtx
gen_indirect_jumpsi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (pc_rtx,
	operand0);
}

/* ../../gcc/config/riscv/riscv.md:2240 */
rtx
gen_indirect_jumpdi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (pc_rtx,
	operand0);
}

/* ../../gcc/config/riscv/riscv.md:2264 */
rtx
gen_tablejumpsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* ../../gcc/config/riscv/riscv.md:2264 */
rtx
gen_tablejumpdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* ../../gcc/config/riscv/riscv.md:2292 */
rtx
gen_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	7);
}

/* ../../gcc/config/riscv/riscv.md:2323 */
rtx
gen_simple_return (void)
{
  return simple_return_rtx;
}

/* ../../gcc/config/riscv/riscv.md:2334 */
rtx
gen_simple_return_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		simple_return_rtx,
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* ../../gcc/config/riscv/riscv.md:2362 */
rtx
gen_eh_set_lr_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	0),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc/config/riscv/riscv.md:2368 */
rtx
gen_eh_set_lr_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	0),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* ../../gcc/config/riscv/riscv.md:2384 */
rtx
gen_eh_return_internal (void)
{
  return gen_rtx_EH_RETURN (VOIDmode);
}

/* ../../gcc/config/riscv/riscv.md:2411 */
rtx
gen_sibcall_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1);
}

/* ../../gcc/config/riscv/riscv.md:2433 */
rtx
gen_sibcall_value_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2));
}

/* ../../gcc/config/riscv/riscv.md:2456 */
rtx
gen_call_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1),
		gen_hard_reg_clobber (SImode, 1)));
}

/* ../../gcc/config/riscv/riscv.md:2479 */
rtx
gen_call_value_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_hard_reg_clobber (SImode, 1)));
}

/* ../../gcc/config/riscv/riscv.md:2514 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* ../../gcc/config/riscv/riscv.md:2521 */
rtx
gen_trap (void)
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	const0_rtx);
}

/* ../../gcc/config/riscv/riscv.md:2530 */
rtx
gen_gpr_save (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return operand1;
}

/* ../../gcc/config/riscv/riscv.md:2537 */
rtx
gen_gpr_restore (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	1);
}

/* ../../gcc/config/riscv/riscv.md:2542 */
rtx
gen_gpr_restore_return (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		ret_rtx,
		gen_rtx_USE (VOIDmode,
	operand0),
		const0_rtx));
}

/* ../../gcc/config/riscv/riscv.md:2549 */
rtx
gen_riscv_frflags (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	2));
}

/* ../../gcc/config/riscv/riscv.md:2555 */
rtx
gen_riscv_fsflags (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	3);
}

/* ../../gcc/config/riscv/riscv.md:2560 */
rtx
gen_riscv_mret (void)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		ret_rtx,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	4)));
}

/* ../../gcc/config/riscv/riscv.md:2566 */
rtx
gen_riscv_sret (void)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		ret_rtx,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	5)));
}

/* ../../gcc/config/riscv/riscv.md:2572 */
rtx
gen_riscv_uret (void)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		ret_rtx,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	6)));
}

/* ../../gcc/config/riscv/riscv.md:2578 */
rtx
gen_stack_tiesi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)),
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (2,
		operand0,
		operand1),
	14));
}

/* ../../gcc/config/riscv/riscv.md:2578 */
rtx
gen_stack_tiedi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)),
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (2,
		operand0,
		operand1),
	14));
}

/* ../../gcc/config/riscv/crypto.md:47 */
rtx
gen_riscv_aes32dsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	67));
}

/* ../../gcc/config/riscv/crypto.md:55 */
rtx
gen_riscv_aes32dsmi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	68));
}

/* ../../gcc/config/riscv/crypto.md:63 */
rtx
gen_riscv_aes32esi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	69));
}

/* ../../gcc/config/riscv/crypto.md:71 */
rtx
gen_riscv_aes32esmi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	70));
}

/* ../../gcc/config/riscv/crypto.md:82 */
rtx
gen_riscv_aes64ds (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	67));
}

/* ../../gcc/config/riscv/crypto.md:90 */
rtx
gen_riscv_aes64dsm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	68));
}

/* ../../gcc/config/riscv/crypto.md:98 */
rtx
gen_riscv_aes64es (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	69));
}

/* ../../gcc/config/riscv/crypto.md:106 */
rtx
gen_riscv_aes64esm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	70));
}

/* ../../gcc/config/riscv/crypto.md:114 */
rtx
gen_riscv_aes64im (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	71));
}

/* ../../gcc/config/riscv/crypto.md:121 */
rtx
gen_riscv_aes64ks1i (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	71));
}

/* ../../gcc/config/riscv/crypto.md:129 */
rtx
gen_riscv_aes64ks2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	71));
}

/* ../../gcc/config/riscv/crypto.md:140 */
rtx
gen_riscv_sha256sig0_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	72));
}

/* ../../gcc/config/riscv/crypto.md:140 */
rtx
gen_riscv_sha256sig0_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	72));
}

/* ../../gcc/config/riscv/crypto.md:147 */
rtx
gen_riscv_sha256sig1_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	73));
}

/* ../../gcc/config/riscv/crypto.md:147 */
rtx
gen_riscv_sha256sig1_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	73));
}

/* ../../gcc/config/riscv/crypto.md:154 */
rtx
gen_riscv_sha256sum0_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74));
}

/* ../../gcc/config/riscv/crypto.md:154 */
rtx
gen_riscv_sha256sum0_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74));
}

/* ../../gcc/config/riscv/crypto.md:161 */
rtx
gen_riscv_sha256sum1_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75));
}

/* ../../gcc/config/riscv/crypto.md:161 */
rtx
gen_riscv_sha256sum1_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75));
}

/* ../../gcc/config/riscv/crypto.md:171 */
rtx
gen_riscv_sha512sig0h (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	76));
}

/* ../../gcc/config/riscv/crypto.md:179 */
rtx
gen_riscv_sha512sig0l (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	76));
}

/* ../../gcc/config/riscv/crypto.md:187 */
rtx
gen_riscv_sha512sig1h (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	77));
}

/* ../../gcc/config/riscv/crypto.md:195 */
rtx
gen_riscv_sha512sig1l (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	77));
}

/* ../../gcc/config/riscv/crypto.md:203 */
rtx
gen_riscv_sha512sum0r (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	78));
}

/* ../../gcc/config/riscv/crypto.md:211 */
rtx
gen_riscv_sha512sum1r (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	78));
}

/* ../../gcc/config/riscv/crypto.md:222 */
rtx
gen_riscv_sha512sig0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	76));
}

/* ../../gcc/config/riscv/crypto.md:229 */
rtx
gen_riscv_sha512sig1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	77));
}

/* ../../gcc/config/riscv/crypto.md:236 */
rtx
gen_riscv_sha512sum0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	78));
}

/* ../../gcc/config/riscv/crypto.md:243 */
rtx
gen_riscv_sha512sum1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	79));
}

/* ../../gcc/config/riscv/crypto.md:253 */
rtx
gen_riscv_sm3p0_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	80));
}

/* ../../gcc/config/riscv/crypto.md:253 */
rtx
gen_riscv_sm3p0_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	80));
}

/* ../../gcc/config/riscv/crypto.md:260 */
rtx
gen_riscv_sm3p1_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	81));
}

/* ../../gcc/config/riscv/crypto.md:260 */
rtx
gen_riscv_sm3p1_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	81));
}

/* ../../gcc/config/riscv/crypto.md:270 */
rtx
gen_riscv_sm4ed_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	82));
}

/* ../../gcc/config/riscv/crypto.md:270 */
rtx
gen_riscv_sm4ed_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	82));
}

/* ../../gcc/config/riscv/crypto.md:278 */
rtx
gen_riscv_sm4ks_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	83));
}

/* ../../gcc/config/riscv/crypto.md:278 */
rtx
gen_riscv_sm4ks_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	83));
}

/* ../../gcc/config/riscv/crypto.md:289 */
rtx
gen_riscv_pollentropy_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	84));
}

/* ../../gcc/config/riscv/crypto.md:289 */
rtx
gen_riscv_pollentropy_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	84));
}

/* ../../gcc/config/riscv/crypto.md:295 */
rtx
gen_riscv_getnoise_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	85));
}

/* ../../gcc/config/riscv/crypto.md:295 */
rtx
gen_riscv_getnoise_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	85));
}

/* ../../gcc/config/riscv/rvp.md:106 */
rtx
gen_kabsw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	15));
}

/* ../../gcc/config/riscv/rvp.md:114 */
rtx
gen_kabsv4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_ABS (V4QImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:114 */
rtx
gen_kabsv2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_ABS (V2HImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:114 */
rtx
gen_kabsv8qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_ABS (V8QImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:114 */
rtx
gen_kabsv4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_ABS (V4HImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:114 */
rtx
gen_kabsv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_ABS (V2SImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_addv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_kaddv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_ukaddv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_PLUS (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_addv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_kaddv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_ukaddv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_PLUS (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_addv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_kaddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_ukaddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_PLUS (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_addv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_kaddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_ukaddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_PLUS (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_addv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_kaddv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:123 */
rtx
gen_ukaddv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_PLUS (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:181 */
rtx
gen_rvp_kadddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:181 */
rtx
gen_rvp_ukadddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_PLUS (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_subv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_ksubv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_uksubv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_MINUS (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_subv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_ksubv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_uksubv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_MINUS (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_subv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_ksubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_uksubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_MINUS (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_subv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_ksubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_uksubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_MINUS (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_subv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_ksubv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:191 */
rtx
gen_uksubv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_MINUS (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:201 */
rtx
gen_rvp_ksubdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:201 */
rtx
gen_rvp_uksubdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_MINUS (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:214 */
rtx
gen_ssaddhi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:214 */
rtx
gen_usaddhi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_PLUS (HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:214 */
rtx
gen_sssubhi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:214 */
rtx
gen_ussubhi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_MINUS (HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:214 */
rtx
gen_ssaddsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:214 */
rtx
gen_usaddsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_PLUS (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:214 */
rtx
gen_sssubsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:214 */
rtx
gen_ussubsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_MINUS (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:224 */
rtx
gen_ave (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const1_rtx),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:239 */
rtx
gen_avedi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_ASHIFTRT (TImode,
	gen_rtx_PLUS (TImode,
	gen_rtx_PLUS (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	const1_rtx),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:255 */
rtx
gen_bitrevsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	24));
}

/* ../../gcc/config/riscv/rvp.md:267 */
rtx
gen_bitrevdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	24));
}

/* ../../gcc/config/riscv/rvp.md:280 */
rtx
gen_cmixsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_AND (SImode,
	operand1,
	operand3),
	gen_rtx_AND (SImode,
	operand2,
	gen_rtx_NOT (SImode,
	operand3))));
}

/* ../../gcc/config/riscv/rvp.md:280 */
rtx
gen_cmixdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (DImode,
	gen_rtx_AND (DImode,
	operand1,
	operand3),
	gen_rtx_AND (DImode,
	operand2,
	gen_rtx_NOT (DImode,
	operand3))));
}

/* ../../gcc/config/riscv/rvp.md:295 */
rtx
gen_clrovsi (void)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	12);
}

/* ../../gcc/config/riscv/rvp.md:295 */
rtx
gen_clrovdi (void)
{
  return gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		const0_rtx),
	12);
}

/* ../../gcc/config/riscv/rvp.md:302 */
rtx
gen_clrsbv4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLRSB (V4QImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:302 */
rtx
gen_clzv4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLZ (V4QImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:302 */
rtx
gen_clrsbv2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLRSB (V2HImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:302 */
rtx
gen_clzv2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLZ (V2HImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:302 */
rtx
gen_clrsbv8qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLRSB (V8QImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:302 */
rtx
gen_clzv8qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLZ (V8QImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:302 */
rtx
gen_clrsbv4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLRSB (V4HImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:302 */
rtx
gen_clzv4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLZ (V4HImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:302 */
rtx
gen_clrsbv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLRSB (V2SImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:302 */
rtx
gen_clzv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLZ (V2SImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:311 */
rtx
gen_clrsbsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLRSB (SImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:319 */
rtx
gen_clzsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLZ (SImode,
	operand1));
}

/* ../../gcc/config/riscv/rvp.md:328 */
rtx
gen_cmpeqv4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		gen_rtx_EQ (V4QImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:328 */
rtx
gen_cmpeqv2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		gen_rtx_EQ (V2HImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:328 */
rtx
gen_cmpeqv8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		gen_rtx_EQ (V8QImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:328 */
rtx
gen_cmpeqv4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		gen_rtx_EQ (V4HImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:350 */
rtx
gen_crasv2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:350 */
rtx
gen_crasv2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:386 */
rtx
gen_cras16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))));
}

/* ../../gcc/config/riscv/rvp.md:417 */
rtx
gen_crsav2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:417 */
rtx
gen_crsav2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:453 */
rtx
gen_crsa16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))));
}

/* ../../gcc/config/riscv/rvp.md:485 */
rtx
gen_kcrasv2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:485 */
rtx
gen_kcrasv2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_SS_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_SS_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:521 */
rtx
gen_kcras16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))));
}

/* ../../gcc/config/riscv/rvp.md:552 */
rtx
gen_kcrsav2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:552 */
rtx
gen_kcrsav2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_SS_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_SS_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:588 */
rtx
gen_kcrsa16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))));
}

/* ../../gcc/config/riscv/rvp.md:620 */
rtx
gen_ukcrasv2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_US_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_US_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:620 */
rtx
gen_ukcrasv2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_US_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_US_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:656 */
rtx
gen_ukcras16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_US_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_US_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_US_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_US_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))));
}

/* ../../gcc/config/riscv/rvp.md:687 */
rtx
gen_ukcrsav2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_US_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_US_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:687 */
rtx
gen_ukcrsav2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_US_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_US_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:723 */
rtx
gen_ukcrsa16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_US_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_US_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_US_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_US_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))));
}

/* ../../gcc/config/riscv/rvp.md:755 */
rtx
gen_rcrasv2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:755 */
rtx
gen_rcrasv2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_MINUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:801 */
rtx
gen_rcras16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	const1_rtx)))));
}

/* ../../gcc/config/riscv/rvp.md:848 */
rtx
gen_rcrsav2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:848 */
rtx
gen_rcrsav2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_MINUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:894 */
rtx
gen_rcrsa16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	const1_rtx)))));
}

/* ../../gcc/config/riscv/rvp.md:942 */
rtx
gen_urcrasv2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:942 */
rtx
gen_urcrasv2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MINUS (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:988 */
rtx
gen_urcras16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	const1_rtx)))));
}

/* ../../gcc/config/riscv/rvp.md:1035 */
rtx
gen_urcrsav2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:1035 */
rtx
gen_urcrsav2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MINUS (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:1081 */
rtx
gen_urcrsa16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	const1_rtx)))));
}

/* ../../gcc/config/riscv/rvp.md:1141 */
rtx
gen_vec_setv4qi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_VEC_DUPLICATE (V4QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:1180 */
rtx
gen_vec_setv8qi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_VEC_DUPLICATE (V8QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:1232 */
rtx
gen_kdm_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:1294 */
rtx
gen_kdma_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	gen_rtx_ASHIFT (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4))))),
	const1_rtx),
	operand5));
}

/* ../../gcc/config/riscv/rvp.md:1355 */
rtx
gen_khmsi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_SS_TRUNCATE (QImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../gcc/config/riscv/rvp.md:1422 */
rtx
gen_kma_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4))))),
	operand5));
}

/* ../../gcc/config/riscv/rvp.md:1486 */
rtx
gen_kma64_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand3,
		operand4)))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand5,
		operand6))))),
	operand7));
}

/* ../../gcc/config/riscv/rvp.md:1511 */
rtx
gen_khm8v4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	35));
}

/* ../../gcc/config/riscv/rvp.md:1511 */
rtx
gen_khm8v8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	35));
}

/* ../../gcc/config/riscv/rvp.md:1521 */
rtx
gen_khmx8v4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	36));
}

/* ../../gcc/config/riscv/rvp.md:1521 */
rtx
gen_khmx8v8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	36));
}

/* ../../gcc/config/riscv/rvp.md:1531 */
rtx
gen_khm16v2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	35));
}

/* ../../gcc/config/riscv/rvp.md:1531 */
rtx
gen_khm16v4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	35));
}

/* ../../gcc/config/riscv/rvp.md:1541 */
rtx
gen_khmx16v2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	36));
}

/* ../../gcc/config/riscv/rvp.md:1541 */
rtx
gen_khmx16v4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	36));
}

/* ../../gcc/config/riscv/rvp.md:1552 */
rtx
gen_kmada (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	operand1,
	gen_rtx_SS_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:1575 */
rtx
gen_kmada64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	operand1,
	gen_rtx_SS_PLUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))))));
}

/* ../../gcc/config/riscv/rvp.md:1598 */
rtx
gen_kmaxda (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	operand1,
	gen_rtx_SS_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:1621 */
rtx
gen_kmaxda64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	operand1,
	gen_rtx_SS_PLUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))))));
}

/* ../../gcc/config/riscv/rvp.md:1645 */
rtx
gen_kmads (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	operand1,
	gen_rtx_SS_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:1668 */
rtx
gen_kmads64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	operand1,
	gen_rtx_SS_MINUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))))));
}

/* ../../gcc/config/riscv/rvp.md:1691 */
rtx
gen_kmadrs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	operand1,
	gen_rtx_SS_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:1714 */
rtx
gen_kmadrs64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	operand1,
	gen_rtx_SS_MINUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))))));
}

/* ../../gcc/config/riscv/rvp.md:1737 */
rtx
gen_kmaxds (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	operand1,
	gen_rtx_SS_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:1760 */
rtx
gen_kmaxds64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	operand1,
	gen_rtx_SS_MINUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))))));
}

/* ../../gcc/config/riscv/rvp.md:1784 */
rtx
gen_vkmar64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:1808 */
rtx
gen_kmda (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:1829 */
rtx
gen_kmxda (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:1850 */
rtx
gen_kmxda64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../../gcc/config/riscv/rvp.md:1871 */
rtx
gen_kmda64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))));
}

/* ../../gcc/config/riscv/rvp.md:1893 */
rtx
gen_kmmac (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	operand1,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2),
	gen_rtx_SIGN_EXTEND (DImode,
	operand3)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
}

/* ../../gcc/config/riscv/rvp.md:1906 */
rtx
gen_kmmac_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	operand1,
	gen_rtx_TRUNCATE (V2SImode,
	gen_rtx_LSHIFTRT (V2DImode,
	gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand2),
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand3)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
}

/* ../../gcc/config/riscv/rvp.md:1919 */
rtx
gen_kmmac_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	operand1,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2),
	gen_rtx_SIGN_EXTEND (DImode,
	operand3))),
	37),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
}

/* ../../gcc/config/riscv/rvp.md:1933 */
rtx
gen_kmmac64_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	operand1,
	gen_rtx_TRUNCATE (V2SImode,
	gen_rtx_LSHIFTRT (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand2),
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand3))),
	37),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
}

/* ../../gcc/config/riscv/rvp.md:1948 */
rtx
gen_kmmaw_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	operand4,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3))))),
	operand5))));
}

/* ../../gcc/config/riscv/rvp.md:2021 */
rtx
gen_kmmaw_round_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	operand4,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))))),
	37),
	operand5))));
}

/* ../../gcc/config/riscv/rvp.md:2096 */
rtx
gen_kmmaw64_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	operand5,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3))))),
	operand6)),
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4))))),
	operand6)))));
}

/* ../../gcc/config/riscv/rvp.md:2189 */
rtx
gen_kmmaw64_round_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	operand5,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))))),
	37),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])),
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4)))))),
	37),
	operand6)))));
}

/* ../../gcc/config/riscv/rvp.md:2287 */
rtx
gen_kmmsb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (SImode,
	operand1,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2),
	gen_rtx_SIGN_EXTEND (DImode,
	operand3)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
}

/* ../../gcc/config/riscv/rvp.md:2300 */
rtx
gen_kmmsb_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (V2SImode,
	operand1,
	gen_rtx_TRUNCATE (V2SImode,
	gen_rtx_LSHIFTRT (V2DImode,
	gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand2),
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand3)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
}

/* ../../gcc/config/riscv/rvp.md:2313 */
rtx
gen_kmmsb_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (SImode,
	operand1,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2),
	gen_rtx_SIGN_EXTEND (DImode,
	operand3))),
	37),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
}

/* ../../gcc/config/riscv/rvp.md:2327 */
rtx
gen_kmmsb64_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (V2SImode,
	operand1,
	gen_rtx_TRUNCATE (V2SImode,
	gen_rtx_LSHIFTRT (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand2),
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand3))),
	37),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
}

/* ../../gcc/config/riscv/rvp.md:2342 */
rtx
gen_kmmw2_round_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_SS_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))))),
	38),
	const_int_rtx[MAX_SAVED_CONST_INT + (15)])));
}

/* ../../gcc/config/riscv/rvp.md:2385 */
rtx
gen_kmmw64_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))))),
	38),
	const_int_rtx[MAX_SAVED_CONST_INT + (15)])),
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4)))))),
	38),
	const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../gcc/config/riscv/rvp.md:2447 */
rtx
gen_kmsda (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (SImode,
	operand1,
	gen_rtx_SS_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:2470 */
rtx
gen_kmsda64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (V2SImode,
	operand1,
	gen_rtx_SS_MINUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))))));
}

/* ../../gcc/config/riscv/rvp.md:2493 */
rtx
gen_kmsxda (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (SImode,
	operand1,
	gen_rtx_SS_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:2516 */
rtx
gen_kmsxda64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (V2SImode,
	operand1,
	gen_rtx_SS_MINUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))))));
}

/* ../../gcc/config/riscv/rvp.md:2540 */
rtx
gen_vkmsr64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (DImode,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:2588 */
rtx
gen_kmmw64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))))),
	39),
	const_int_rtx[MAX_SAVED_CONST_INT + (15)])),
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4)))))),
	39),
	const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../gcc/config/riscv/rvp.md:2645 */
rtx
gen_kmmw2_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))))),
	39),
	const_int_rtx[MAX_SAVED_CONST_INT + (15)])));
}

/* ../../gcc/config/riscv/rvp.md:2664 */
rtx
gen_ksll (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_ASHIFT (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:2676 */
rtx
gen_kslli8v4qisi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_ASHIFT (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:2676 */
rtx
gen_kslli8v8qidi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_ASHIFT (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:2688 */
rtx
gen_kslli16v2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_ASHIFT (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:2688 */
rtx
gen_kslli16v4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_ASHIFT (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:2700 */
rtx
gen_ksll32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_ASHIFT (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:2732 */
rtx
gen_kslrav4qi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V4QImode,
	gen_rtx_LT (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx),
	const0_rtx),
	gen_rtx_ASHIFTRT (V4QImode,
	operand1,
	gen_rtx_NEG (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))),
	gen_rtx_SS_ASHIFT (V4QImode,
	operand1,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))));
}

/* ../../gcc/config/riscv/rvp.md:2732 */
rtx
gen_kslrav2hi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V2HImode,
	gen_rtx_LT (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx),
	const0_rtx),
	gen_rtx_ASHIFTRT (V2HImode,
	operand1,
	gen_rtx_NEG (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))),
	gen_rtx_SS_ASHIFT (V2HImode,
	operand1,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))));
}

/* ../../gcc/config/riscv/rvp.md:2732 */
rtx
gen_kslrav8qi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V8QImode,
	gen_rtx_LT (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx),
	const0_rtx),
	gen_rtx_ASHIFTRT (V8QImode,
	operand1,
	gen_rtx_NEG (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))),
	gen_rtx_SS_ASHIFT (V8QImode,
	operand1,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))));
}

/* ../../gcc/config/riscv/rvp.md:2732 */
rtx
gen_kslrav4hi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V4HImode,
	gen_rtx_LT (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx),
	const0_rtx),
	gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	gen_rtx_NEG (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))),
	gen_rtx_SS_ASHIFT (V4HImode,
	operand1,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))));
}

/* ../../gcc/config/riscv/rvp.md:2732 */
rtx
gen_kslrav2si_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V2SImode,
	gen_rtx_LT (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx),
	const0_rtx),
	gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	gen_rtx_NEG (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))),
	gen_rtx_SS_ASHIFT (V2SImode,
	operand1,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))));
}

/* ../../gcc/config/riscv/rvp.md:2771 */
rtx
gen_kslrav4qi_round_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V4QImode,
	gen_rtx_LT (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx),
	const0_rtx),
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		gen_rtx_ASHIFTRT (V4QImode,
	operand1,
	gen_rtx_NEG (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx)))),
	37),
	gen_rtx_SS_ASHIFT (V4QImode,
	operand1,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))));
}

/* ../../gcc/config/riscv/rvp.md:2771 */
rtx
gen_kslrav2hi_round_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V2HImode,
	gen_rtx_LT (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx),
	const0_rtx),
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		gen_rtx_ASHIFTRT (V2HImode,
	operand1,
	gen_rtx_NEG (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx)))),
	37),
	gen_rtx_SS_ASHIFT (V2HImode,
	operand1,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))));
}

/* ../../gcc/config/riscv/rvp.md:2771 */
rtx
gen_kslrav8qi_round_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V8QImode,
	gen_rtx_LT (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx),
	const0_rtx),
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		gen_rtx_ASHIFTRT (V8QImode,
	operand1,
	gen_rtx_NEG (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx)))),
	37),
	gen_rtx_SS_ASHIFT (V8QImode,
	operand1,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))));
}

/* ../../gcc/config/riscv/rvp.md:2771 */
rtx
gen_kslrav4hi_round_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V4HImode,
	gen_rtx_LT (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx),
	const0_rtx),
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	gen_rtx_NEG (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx)))),
	37),
	gen_rtx_SS_ASHIFT (V4HImode,
	operand1,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))));
}

/* ../../gcc/config/riscv/rvp.md:2771 */
rtx
gen_kslrav2si_round_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V2SImode,
	gen_rtx_LT (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx),
	const0_rtx),
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	gen_rtx_NEG (SImode,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx)))),
	37),
	gen_rtx_SS_ASHIFT (V2SImode,
	operand1,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand2,
	operand3,
	const0_rtx))));
}

/* ../../gcc/config/riscv/rvp.md:2791 */
rtx
gen_kslraw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	40));
}

/* ../../gcc/config/riscv/rvp.md:2800 */
rtx
gen_kslraw64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	40)));
}

/* ../../gcc/config/riscv/rvp.md:2810 */
rtx
gen_kslrawu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	41));
}

/* ../../gcc/config/riscv/rvp.md:2819 */
rtx
gen_kslrawu64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	41)));
}

/* ../../gcc/config/riscv/rvp.md:2841 */
rtx
gen_kstasv2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:2841 */
rtx
gen_kstasv2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_SS_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_SS_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:2878 */
rtx
gen_kstas16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../../gcc/config/riscv/rvp.md:2909 */
rtx
gen_kstsav2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:2909 */
rtx
gen_kstsav2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_SS_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_SS_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:2945 */
rtx
gen_kstsa16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../../gcc/config/riscv/rvp.md:2966 */
rtx
gen_kwmmul (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_SS_MULT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)])),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc/config/riscv/rvp.md:2978 */
rtx
gen_kwmmul_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2SImode,
	gen_rtx_LSHIFTRT (V2DImode,
	gen_rtx_SS_MULT (V2DImode,
	gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]),
	gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)])),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc/config/riscv/rvp.md:2990 */
rtx
gen_kwmmul_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_SS_MULT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	37),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc/config/riscv/rvp.md:3004 */
rtx
gen_kwmmul64_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2SImode,
	gen_rtx_LSHIFTRT (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		gen_rtx_SS_MULT (V2DImode,
	gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]),
	gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	37),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc/config/riscv/rvp.md:3019 */
rtx
gen_maddr32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:3029 */
rtx
gen_msubr32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand3,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)));
}

/* ../../gcc/config/riscv/rvp.md:3040 */
rtx
gen_rvp_umulsidi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)));
}

/* ../../gcc/config/riscv/rvp.md:3049 */
rtx
gen_rvp_mulsidi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* ../../gcc/config/riscv/rvp.md:3059 */
rtx
gen_smaxsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:3059 */
rtx
gen_smaxdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:3068 */
rtx
gen_sminsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:3068 */
rtx
gen_smindi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (DImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:3078 */
rtx
gen_pbsadsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	42));
}

/* ../../gcc/config/riscv/rvp.md:3078 */
rtx
gen_pbsaddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	42));
}

/* ../../gcc/config/riscv/rvp.md:3087 */
rtx
gen_pbsadasi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	43));
}

/* ../../gcc/config/riscv/rvp.md:3087 */
rtx
gen_pbsadadi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	43));
}

/* ../../gcc/config/riscv/rvp.md:3098 */
rtx
gen_vec_mergev2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4)))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand5)))),
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:3098 */
rtx
gen_vec_mergev2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4)))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand5)))),
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:3186 */
rtx
gen_vec_pkbb64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))));
}

/* ../../gcc/config/riscv/rvp.md:3209 */
rtx
gen_vec_pkbt64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../gcc/config/riscv/rvp.md:3232 */
rtx
gen_vec_pktt64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../gcc/config/riscv/rvp.md:3255 */
rtx
gen_vec_pktb64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))));
}

/* ../../gcc/config/riscv/rvp.md:3268 */
rtx
gen_raddv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V4QImode,
	gen_rtx_ASHIFTRT (V4HImode,
	gen_rtx_PLUS (V4HImode,
	gen_rtx_SIGN_EXTEND (V4HImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4HImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3268 */
rtx
gen_raddv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2HImode,
	gen_rtx_ASHIFTRT (V2SImode,
	gen_rtx_PLUS (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V2SImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3268 */
rtx
gen_raddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V8QImode,
	gen_rtx_ASHIFTRT (V8HImode,
	gen_rtx_PLUS (V8HImode,
	gen_rtx_SIGN_EXTEND (V8HImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V8HImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3268 */
rtx
gen_raddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_ASHIFTRT (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3268 */
rtx
gen_raddv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2SImode,
	gen_rtx_ASHIFTRT (V2DImode,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3281 */
rtx
gen_radddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_ASHIFTRT (TImode,
	gen_rtx_PLUS (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3293 */
rtx
gen_uraddv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V4QImode,
	gen_rtx_LSHIFTRT (V4HImode,
	gen_rtx_PLUS (V4HImode,
	gen_rtx_ZERO_EXTEND (V4HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4HImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3293 */
rtx
gen_uraddv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2HImode,
	gen_rtx_LSHIFTRT (V2SImode,
	gen_rtx_PLUS (V2SImode,
	gen_rtx_ZERO_EXTEND (V2SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V2SImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3293 */
rtx
gen_uraddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V8QImode,
	gen_rtx_LSHIFTRT (V8HImode,
	gen_rtx_PLUS (V8HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3293 */
rtx
gen_uraddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3293 */
rtx
gen_uraddv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2SImode,
	gen_rtx_LSHIFTRT (V2DImode,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V2DImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3306 */
rtx
gen_uradddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_PLUS (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3318 */
rtx
gen_rsubv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V4QImode,
	gen_rtx_ASHIFTRT (V4HImode,
	gen_rtx_MINUS (V4HImode,
	gen_rtx_SIGN_EXTEND (V4HImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4HImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3318 */
rtx
gen_rsubv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2HImode,
	gen_rtx_ASHIFTRT (V2SImode,
	gen_rtx_MINUS (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V2SImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3318 */
rtx
gen_rsubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V8QImode,
	gen_rtx_ASHIFTRT (V8HImode,
	gen_rtx_MINUS (V8HImode,
	gen_rtx_SIGN_EXTEND (V8HImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V8HImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3318 */
rtx
gen_rsubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_ASHIFTRT (V4SImode,
	gen_rtx_MINUS (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3318 */
rtx
gen_rsubv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2SImode,
	gen_rtx_ASHIFTRT (V2DImode,
	gen_rtx_MINUS (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3330 */
rtx
gen_ursubv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V4QImode,
	gen_rtx_ASHIFTRT (V4HImode,
	gen_rtx_MINUS (V4HImode,
	gen_rtx_ZERO_EXTEND (V4HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4HImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3330 */
rtx
gen_ursubv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2HImode,
	gen_rtx_ASHIFTRT (V2SImode,
	gen_rtx_MINUS (V2SImode,
	gen_rtx_ZERO_EXTEND (V2SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V2SImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3330 */
rtx
gen_ursubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V8QImode,
	gen_rtx_ASHIFTRT (V8HImode,
	gen_rtx_MINUS (V8HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3330 */
rtx
gen_ursubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_ASHIFTRT (V4SImode,
	gen_rtx_MINUS (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3330 */
rtx
gen_ursubv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2SImode,
	gen_rtx_ASHIFTRT (V2DImode,
	gen_rtx_MINUS (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V2DImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3343 */
rtx
gen_rsubdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_ASHIFTRT (TImode,
	gen_rtx_MINUS (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3356 */
rtx
gen_ursubdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MINUS (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3369 */
rtx
gen_raddsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3369 */
rtx
gen_rsubsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_MINUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3382 */
rtx
gen_uraddsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3382 */
rtx
gen_ursubsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MINUS (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const1_rtx)));
}

/* ../../gcc/config/riscv/rvp.md:3395 */
rtx
gen_rdovsi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	44));
}

/* ../../gcc/config/riscv/rvp.md:3395 */
rtx
gen_rdovdi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		const0_rtx),
	44));
}

/* ../../gcc/config/riscv/rvp.md:3415 */
rtx
gen_rstasv2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:3415 */
rtx
gen_rstasv2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_MINUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:3461 */
rtx
gen_rstas16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	const1_rtx)))));
}

/* ../../gcc/config/riscv/rvp.md:3508 */
rtx
gen_rstsav2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:3508 */
rtx
gen_rstsav2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_MINUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:3554 */
rtx
gen_rstsa16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	const1_rtx)))));
}

/* ../../gcc/config/riscv/rvp.md:3591 */
rtx
gen_sclip8v4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	45));
}

/* ../../gcc/config/riscv/rvp.md:3591 */
rtx
gen_sclip8v8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	45));
}

/* ../../gcc/config/riscv/rvp.md:3601 */
rtx
gen_sclip16v2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	45));
}

/* ../../gcc/config/riscv/rvp.md:3601 */
rtx
gen_sclip16v4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	45));
}

/* ../../gcc/config/riscv/rvp.md:3611 */
rtx
gen_sclip32sisi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	46));
}

/* ../../gcc/config/riscv/rvp.md:3611 */
rtx
gen_sclip32v2sidi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	46));
}

/* ../../gcc/config/riscv/rvp.md:3621 */
rtx
gen_scmplev4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		gen_rtx_LE (V4QImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:3621 */
rtx
gen_scmplev2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		gen_rtx_LE (V2HImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:3621 */
rtx
gen_scmplev8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		gen_rtx_LE (V8QImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:3621 */
rtx
gen_scmplev4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		gen_rtx_LE (V4HImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:3632 */
rtx
gen_scmpltv4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		gen_rtx_LT (V4QImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:3632 */
rtx
gen_scmpltv2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		gen_rtx_LT (V2HImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:3632 */
rtx
gen_scmpltv8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		gen_rtx_LT (V8QImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:3632 */
rtx
gen_scmpltv4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		gen_rtx_LT (V4HImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:3643 */
rtx
gen_smal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:3661 */
rtx
gen_smal_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))))));
}

/* ../../gcc/config/riscv/rvp.md:3727 */
rtx
gen_smaddhidi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand3,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand5)))))));
}

/* ../../gcc/config/riscv/rvp.md:3794 */
rtx
gen_smaddhidi64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand3,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand5))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand6)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand7))))))));
}

/* ../../gcc/config/riscv/rvp.md:3838 */
rtx
gen_smalda1_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))))));
}

/* ../../gcc/config/riscv/rvp.md:3863 */
rtx
gen_smalda64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))))))));
}

/* ../../gcc/config/riscv/rvp.md:3917 */
rtx
gen_smalxda1_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))))));
}

/* ../../gcc/config/riscv/rvp.md:3917 */
rtx
gen_smalxds1_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))))));
}

/* ../../gcc/config/riscv/rvp.md:3941 */
rtx
gen_smalxda64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))))))));
}

/* ../../gcc/config/riscv/rvp.md:3941 */
rtx
gen_smalxds64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))))))));
}

/* ../../gcc/config/riscv/rvp.md:3983 */
rtx
gen_smalds1_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))))));
}

/* ../../gcc/config/riscv/rvp.md:4007 */
rtx
gen_smalds64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))))))));
}

/* ../../gcc/config/riscv/rvp.md:4049 */
rtx
gen_smaldrs3_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))))));
}

/* ../../gcc/config/riscv/rvp.md:4073 */
rtx
gen_smaldrs64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))))))));
}

/* ../../gcc/config/riscv/rvp.md:4103 */
rtx
gen_ssmaddsidi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:4103 */
rtx
gen_ssmsubsidi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:4118 */
rtx
gen_usmaddsidi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:4118 */
rtx
gen_usmsubsidi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_MINUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:4133 */
rtx
gen_maddsidi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:4133 */
rtx
gen_umaddsidi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:4133 */
rtx
gen_msubsidi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:4133 */
rtx
gen_umsubsidi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	operand3));
}

/* ../../gcc/config/riscv/rvp.md:4148 */
rtx
gen_vsmar64_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:4148 */
rtx
gen_vumar64_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:4172 */
rtx
gen_smaxv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4172 */
rtx
gen_umaxv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMAX (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4172 */
rtx
gen_smaxv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4172 */
rtx
gen_umaxv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMAX (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4172 */
rtx
gen_smaxv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4172 */
rtx
gen_umaxv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMAX (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4172 */
rtx
gen_smaxv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4172 */
rtx
gen_umaxv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMAX (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4172 */
rtx
gen_smaxv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4172 */
rtx
gen_umaxv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMAX (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4181 */
rtx
gen_sminv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4181 */
rtx
gen_uminv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMIN (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4181 */
rtx
gen_sminv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4181 */
rtx
gen_uminv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMIN (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4181 */
rtx
gen_sminv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4181 */
rtx
gen_uminv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMIN (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4181 */
rtx
gen_sminv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4181 */
rtx
gen_uminv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMIN (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4181 */
rtx
gen_sminv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4181 */
rtx
gen_uminv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMIN (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:4216 */
rtx
gen_smaqav4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))),
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))))))));
}

/* ../../gcc/config/riscv/rvp.md:4216 */
rtx
gen_umaqav4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))),
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))))))));
}

/* ../../gcc/config/riscv/rvp.md:4274 */
rtx
gen_smaqav8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))),
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))))),
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)])))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)])))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))))))),
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))))))));
}

/* ../../gcc/config/riscv/rvp.md:4274 */
rtx
gen_umaqav8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))),
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))))),
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)])))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))))))),
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))))))));
}

/* ../../gcc/config/riscv/rvp.md:4340 */
rtx
gen_sumaqav4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))),
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))))))));
}

/* ../../gcc/config/riscv/rvp.md:4386 */
rtx
gen_sumaqav8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))),
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))))),
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)])))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))))))),
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))))))));
}

/* ../../gcc/config/riscv/rvp.md:4477 */
rtx
gen_mulhisi3v (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4))))));
}

/* ../../gcc/config/riscv/rvp.md:4533 */
rtx
gen_mulv2hiv2si3v (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand3,
		operand4)))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand5,
		operand6))))));
}

/* ../../gcc/config/riscv/rvp.md:4592 */
rtx
gen_mulsidi3v (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4))))));
}

/* ../../gcc/config/riscv/rvp.md:4612 */
rtx
gen_smds (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:4633 */
rtx
gen_smds64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))));
}

/* ../../gcc/config/riscv/rvp.md:4654 */
rtx
gen_smdrs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:4675 */
rtx
gen_smdrs64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../../gcc/config/riscv/rvp.md:4696 */
rtx
gen_smxdsv (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:4717 */
rtx
gen_smxds64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../../gcc/config/riscv/rvp.md:4739 */
rtx
gen_smxds32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:4760 */
rtx
gen_smds32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:4781 */
rtx
gen_smdrs32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:4804 */
rtx
gen_smulsi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc/config/riscv/rvp.md:4817 */
rtx
gen_smmul_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
	37),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc/config/riscv/rvp.md:4832 */
rtx
gen_smulv2si3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2SImode,
	gen_rtx_LSHIFTRT (V2DImode,
	gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc/config/riscv/rvp.md:4844 */
rtx
gen_smmulv2si3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2SImode,
	gen_rtx_LSHIFTRT (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V2DImode,
	operand2))),
	37),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc/config/riscv/rvp.md:4881 */
rtx
gen_smulhisi3_highpart_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* ../../gcc/config/riscv/rvp.md:4923 */
rtx
gen_smulhisi3_highpart_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])),
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)]))));
}

/* ../../gcc/config/riscv/rvp.md:4979 */
rtx
gen_smmw_round_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))))),
	37),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* ../../gcc/config/riscv/rvp.md:5022 */
rtx
gen_smmw64_round_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))))),
	37),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])),
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4)))))),
	37),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)]))));
}

/* ../../gcc/config/riscv/rvp.md:5061 */
rtx
gen_smslda1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:5087 */
rtx
gen_smslda64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))))));
}

/* ../../gcc/config/riscv/rvp.md:5117 */
rtx
gen_smslxda1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:5143 */
rtx
gen_smslxda64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))))))));
}

/* ../../gcc/config/riscv/rvp.md:5173 */
rtx
gen_vsmsr64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:5173 */
rtx
gen_vumsr64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))),
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:5199 */
rtx
gen_smul8 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	47));
}

/* ../../gcc/config/riscv/rvp.md:5210 */
rtx
gen_smulx8 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	48));
}

/* ../../gcc/config/riscv/rvp.md:5221 */
rtx
gen_umul8 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	49));
}

/* ../../gcc/config/riscv/rvp.md:5232 */
rtx
gen_umulx8 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	50));
}

/* ../../gcc/config/riscv/rvp.md:5243 */
rtx
gen_smul16 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V2SImode,
	operand2)));
}

/* ../../gcc/config/riscv/rvp.md:5243 */
rtx
gen_umul16 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (V2SImode,
	gen_rtx_ZERO_EXTEND (V2SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V2SImode,
	operand2)));
}

/* ../../gcc/config/riscv/rvp.md:5252 */
rtx
gen_smul16_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	51));
}

/* ../../gcc/config/riscv/rvp.md:5262 */
rtx
gen_umul16_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	53));
}

/* ../../gcc/config/riscv/rvp.md:5273 */
rtx
gen_smulx16 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:5273 */
rtx
gen_umulx16 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:5303 */
rtx
gen_smulx16_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	52));
}

/* ../../gcc/config/riscv/rvp.md:5313 */
rtx
gen_umulx16_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	54));
}

/* ../../gcc/config/riscv/rvp.md:5326 */
rtx
gen_ashlv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:5326 */
rtx
gen_ashrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:5326 */
rtx
gen_lshrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc/config/riscv/rvp.md:5430 */
rtx
gen_sra8_roundv4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		gen_rtx_ASHIFTRT (V4QImode,
	operand1,
	operand2)),
	37));
}

/* ../../gcc/config/riscv/rvp.md:5430 */
rtx
gen_sra8_roundv8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		gen_rtx_ASHIFTRT (V8QImode,
	operand1,
	operand2)),
	37));
}

/* ../../gcc/config/riscv/rvp.md:5442 */
rtx
gen_sra16_roundv2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		gen_rtx_ASHIFTRT (V2HImode,
	operand1,
	operand2)),
	37));
}

/* ../../gcc/config/riscv/rvp.md:5442 */
rtx
gen_sra16_roundv4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	operand2)),
	37));
}

/* ../../gcc/config/riscv/rvp.md:5454 */
rtx
gen_sra32_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	operand2)),
	37));
}

/* ../../gcc/config/riscv/rvp.md:5467 */
rtx
gen_srl8_roundv4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		gen_rtx_LSHIFTRT (V4QImode,
	operand1,
	operand2)),
	37));
}

/* ../../gcc/config/riscv/rvp.md:5467 */
rtx
gen_srl8_roundv8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		gen_rtx_LSHIFTRT (V8QImode,
	operand1,
	operand2)),
	37));
}

/* ../../gcc/config/riscv/rvp.md:5479 */
rtx
gen_srl16_roundv2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		gen_rtx_LSHIFTRT (V2HImode,
	operand1,
	operand2)),
	37));
}

/* ../../gcc/config/riscv/rvp.md:5479 */
rtx
gen_srl16_roundv4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		gen_rtx_LSHIFTRT (V4HImode,
	operand1,
	operand2)),
	37));
}

/* ../../gcc/config/riscv/rvp.md:5491 */
rtx
gen_srl32_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		gen_rtx_LSHIFTRT (V2SImode,
	operand1,
	operand2)),
	37));
}

/* ../../gcc/config/riscv/rvp.md:5503 */
rtx
gen_sraiw_u (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	55));
}

/* ../../gcc/config/riscv/rvp.md:5513 */
rtx
gen_sraiu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)),
	37));
}

/* ../../gcc/config/riscv/rvp.md:5525 */
rtx
gen_sraiu64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
	37));
}

/* ../../gcc/config/riscv/rvp.md:5549 */
rtx
gen_stasv2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:5549 */
rtx
gen_stasv2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:5586 */
rtx
gen_stas16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../../gcc/config/riscv/rvp.md:5618 */
rtx
gen_stsav2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:5618 */
rtx
gen_stsav2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:5654 */
rtx
gen_stsa16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../../gcc/config/riscv/rvp.md:5675 */
rtx
gen_sunpkd810_imp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:5675 */
rtx
gen_zunpkd810_imp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:5716 */
rtx
gen_sunpkd810_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_SIGN_EXTEND (V8HImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* ../../gcc/config/riscv/rvp.md:5716 */
rtx
gen_zunpkd810_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* ../../gcc/config/riscv/rvp.md:5728 */
rtx
gen_sunpkd820_imp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:5728 */
rtx
gen_zunpkd820_imp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:5770 */
rtx
gen_sunpkd820_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_SIGN_EXTEND (V8HImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))));
}

/* ../../gcc/config/riscv/rvp.md:5770 */
rtx
gen_zunpkd820_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))));
}

/* ../../gcc/config/riscv/rvp.md:5783 */
rtx
gen_sunpkd830_imp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:5783 */
rtx
gen_zunpkd830_imp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:5823 */
rtx
gen_sunpkd830_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_SIGN_EXTEND (V8HImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../gcc/config/riscv/rvp.md:5823 */
rtx
gen_zunpkd830_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../gcc/config/riscv/rvp.md:5856 */
rtx
gen_sunpkd831_imp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:5856 */
rtx
gen_zunpkd831_imp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:5876 */
rtx
gen_sunpkd831_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_SIGN_EXTEND (V8HImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../gcc/config/riscv/rvp.md:5876 */
rtx
gen_zunpkd831_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../gcc/config/riscv/rvp.md:5909 */
rtx
gen_sunpkd832_imp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:5909 */
rtx
gen_zunpkd832_imp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:5929 */
rtx
gen_sunpkd832_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_SIGN_EXTEND (V8HImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../gcc/config/riscv/rvp.md:5929 */
rtx
gen_zunpkd832_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../gcc/config/riscv/rvp.md:5941 */
rtx
gen_bswap8 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		operand1),
	56));
}

/* ../../gcc/config/riscv/rvp.md:5949 */
rtx
gen_bswap8_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		operand1),
	56));
}

/* ../../gcc/config/riscv/rvp.md:5958 */
rtx
gen_uclip8v4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../gcc/config/riscv/rvp.md:5958 */
rtx
gen_uclip8v8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../gcc/config/riscv/rvp.md:5968 */
rtx
gen_uclip16v2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../gcc/config/riscv/rvp.md:5968 */
rtx
gen_uclip16v4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../gcc/config/riscv/rvp.md:5978 */
rtx
gen_uclip32sisi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	58));
}

/* ../../gcc/config/riscv/rvp.md:5978 */
rtx
gen_uclip32v2sidi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	58));
}

/* ../../gcc/config/riscv/rvp.md:5988 */
rtx
gen_ucmplev4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		gen_rtx_LEU (V4QImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:5988 */
rtx
gen_ucmplev2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		gen_rtx_LEU (V2HImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:5988 */
rtx
gen_ucmplev8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		gen_rtx_LEU (V8QImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:5988 */
rtx
gen_ucmplev4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		gen_rtx_LEU (V4HImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:5999 */
rtx
gen_ucmpltv4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		gen_rtx_LTU (V4QImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:5999 */
rtx
gen_ucmpltv2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		gen_rtx_LTU (V2HImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:5999 */
rtx
gen_ucmpltv8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (1,
		gen_rtx_LTU (V8QImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:5999 */
rtx
gen_ucmpltv4hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		gen_rtx_LTU (V4HImode,
	operand1,
	operand2)),
	25));
}

/* ../../gcc/config/riscv/rvp.md:6010 */
rtx
gen_vukmar64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_PLUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:6034 */
rtx
gen_vukmsr64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_MINUS (DImode,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:6070 */
rtx
gen_ukstasv2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_US_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_US_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:6070 */
rtx
gen_ukstasv2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_US_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_US_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:6107 */
rtx
gen_ukstas16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_US_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_US_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_US_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_US_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../../gcc/config/riscv/rvp.md:6141 */
rtx
gen_ukstsav2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_US_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_US_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:6141 */
rtx
gen_ukstsav2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_US_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_US_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:6178 */
rtx
gen_ukstsa16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_US_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_US_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_US_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_US_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../../gcc/config/riscv/rvp.md:6210 */
rtx
gen_urstasv2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:6210 */
rtx
gen_urstasv2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MINUS (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const1_rtx));
}

/* ../../gcc/config/riscv/rvp.md:6257 */
rtx
gen_urstas16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	const1_rtx)))));
}

/* ../../gcc/config/riscv/rvp.md:6305 */
rtx
gen_urstsav2hi_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:6305 */
rtx
gen_urstsav2si_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MINUS (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_DUPLICATE (V2SImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* ../../gcc/config/riscv/rvp.md:6352 */
rtx
gen_urstsa16_64_le (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	const1_rtx))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	const1_rtx)),
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	const1_rtx)))));
}

/* ../../gcc/config/riscv/rvp.md:6389 */
rtx
gen_wext (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)));
}

/* ../../gcc/config/riscv/rvp.md:6402 */
rtx
gen_wext64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2))));
}

/* ../../gcc/config/riscv/rvp.md:6417 */
rtx
gen_kdmbb16 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	59));
}

/* ../../gcc/config/riscv/rvp.md:6426 */
rtx
gen_kdmbt16 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	60));
}

/* ../../gcc/config/riscv/rvp.md:6435 */
rtx
gen_kdmtt16 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* ../../gcc/config/riscv/rvp.md:6487 */
rtx
gen_vkdma_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2SImode,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_ASHIFT (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4))))),
	const1_rtx),
	gen_rtx_ASHIFT (SImode,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand5)))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand6))))),
	const1_rtx)),
	operand7));
}

/* ../../gcc/config/riscv/rvp.md:6524 */
rtx
gen_khmbb16 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	62));
}

/* ../../gcc/config/riscv/rvp.md:6533 */
rtx
gen_khmbt16 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	63));
}

/* ../../gcc/config/riscv/rvp.md:6542 */
rtx
gen_khmtt16 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	64));
}

/* ../../gcc/config/riscv/rvp.md:6594 */
rtx
gen_kma32_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand3)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand4))))),
	operand5));
}

/* ../../gcc/config/riscv/rvp.md:6617 */
rtx
gen_kmada32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (DImode,
	operand1,
	gen_rtx_SS_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:6640 */
rtx
gen_kmaxda32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (DImode,
	operand1,
	gen_rtx_SS_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:6664 */
rtx
gen_kmda32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:6685 */
rtx
gen_kmxda32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))))));
}

/* ../../gcc/config/riscv/rvp.md:6707 */
rtx
gen_kmads32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (DImode,
	operand1,
	gen_rtx_SS_MINUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:6730 */
rtx
gen_kmadrs32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (DImode,
	operand1,
	gen_rtx_SS_MINUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:6753 */
rtx
gen_kmaxds32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (DImode,
	operand1,
	gen_rtx_SS_MINUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:6777 */
rtx
gen_kmsda32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (DImode,
	operand1,
	gen_rtx_SS_MINUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:6800 */
rtx
gen_kmsxda32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (DImode,
	operand1,
	gen_rtx_SS_MINUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand3,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

/* ../../gcc/config/riscv/rvp.md:6833 */
rtx
gen_revsi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]),
	24));
}

/* ../../gcc/config/riscv/rvp.md:6842 */
rtx
gen_revdi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		const_int_rtx[MAX_SAVED_CONST_INT + (63)]),
	24));
}

/* ../../gcc/config/riscv/rvp.md:6852 */
rtx
gen_fsrw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	66));
}

/* ../../gcc/config/riscv/rvp.md:6890 */
rtx
gen_fsr_rvp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	65));
}

/* ../../gcc/config/riscv/rvp.md:6900 */
rtx
gen_fsri_rvp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_IOR (DImode,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2),
	gen_rtx_LSHIFTRT (DImode,
	operand3,
	gen_rtx_MINUS (SImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	operand2)))));
}

/* ../../gcc/config/riscv/riscv.md:2639 */
rtx
gen_stack_protect_set_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	10)),
		gen_rtx_SET (gen_rtx_SCRATCH (SImode),
	const0_rtx)));
}

/* ../../gcc/config/riscv/riscv.md:2639 */
rtx
gen_stack_protect_set_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	10)),
		gen_rtx_SET (gen_rtx_SCRATCH (DImode),
	const0_rtx)));
}

/* ../../gcc/config/riscv/riscv.md:2681 */
rtx
gen_stack_protect_test_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	11)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc/config/riscv/riscv.md:2681 */
rtx
gen_stack_protect_test_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	11)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* ../../gcc/config/riscv/sync.md:51 */
rtx
gen_mem_thread_fence_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		copy_rtx (operand0)),
	90)),
		operand1));
}

/* ../../gcc/config/riscv/sync.md:61 */
rtx
gen_atomic_storesi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	89));
}

/* ../../gcc/config/riscv/sync.md:61 */
rtx
gen_atomic_storedi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	89));
}

/* ../../gcc/config/riscv/sync.md:71 */
rtx
gen_atomic_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_PLUS (SImode,
	operand0,
	operand1),
		operand2),
	87));
}

/* ../../gcc/config/riscv/sync.md:71 */
rtx
gen_atomic_orsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_IOR (SImode,
	operand0,
	operand1),
		operand2),
	87));
}

/* ../../gcc/config/riscv/sync.md:71 */
rtx
gen_atomic_xorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_XOR (SImode,
	operand0,
	operand1),
		operand2),
	87));
}

/* ../../gcc/config/riscv/sync.md:71 */
rtx
gen_atomic_andsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_AND (SImode,
	operand0,
	operand1),
		operand2),
	87));
}

/* ../../gcc/config/riscv/sync.md:71 */
rtx
gen_atomic_adddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		gen_rtx_PLUS (DImode,
	operand0,
	operand1),
		operand2),
	87));
}

/* ../../gcc/config/riscv/sync.md:71 */
rtx
gen_atomic_ordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		gen_rtx_IOR (DImode,
	operand0,
	operand1),
		operand2),
	87));
}

/* ../../gcc/config/riscv/sync.md:71 */
rtx
gen_atomic_xordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		gen_rtx_XOR (DImode,
	operand0,
	operand1),
		operand2),
	87));
}

/* ../../gcc/config/riscv/sync.md:71 */
rtx
gen_atomic_anddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		gen_rtx_AND (DImode,
	operand0,
	operand1),
		operand2),
	87));
}

/* ../../gcc/config/riscv/sync.md:82 */
rtx
gen_atomic_fetch_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	operand2),
		operand3),
	87))));
}

/* ../../gcc/config/riscv/sync.md:82 */
rtx
gen_atomic_fetch_orsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_IOR (SImode,
	copy_rtx (operand1),
	operand2),
		operand3),
	87))));
}

/* ../../gcc/config/riscv/sync.md:82 */
rtx
gen_atomic_fetch_xorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_XOR (SImode,
	copy_rtx (operand1),
	operand2),
		operand3),
	87))));
}

/* ../../gcc/config/riscv/sync.md:82 */
rtx
gen_atomic_fetch_andsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_AND (SImode,
	copy_rtx (operand1),
	operand2),
		operand3),
	87))));
}

/* ../../gcc/config/riscv/sync.md:82 */
rtx
gen_atomic_fetch_adddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	operand2),
		operand3),
	87))));
}

/* ../../gcc/config/riscv/sync.md:82 */
rtx
gen_atomic_fetch_ordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		gen_rtx_IOR (DImode,
	copy_rtx (operand1),
	operand2),
		operand3),
	87))));
}

/* ../../gcc/config/riscv/sync.md:82 */
rtx
gen_atomic_fetch_xordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		gen_rtx_XOR (DImode,
	copy_rtx (operand1),
	operand2),
		operand3),
	87))));
}

/* ../../gcc/config/riscv/sync.md:82 */
rtx
gen_atomic_fetch_anddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		gen_rtx_AND (DImode,
	copy_rtx (operand1),
	operand2),
		operand3),
	87))));
}

/* ../../gcc/config/riscv/sync.md:95 */
rtx
gen_atomic_exchangesi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand3),
	88)),
		gen_rtx_SET (copy_rtx (operand1),
	operand2)));
}

/* ../../gcc/config/riscv/sync.md:95 */
rtx
gen_atomic_exchangedi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		operand1,
		operand3),
	88)),
		gen_rtx_SET (copy_rtx (operand1),
	operand2)));
}

/* ../../gcc/config/riscv/sync.md:107 */
rtx
gen_atomic_cas_value_strongsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5),
	86)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc/config/riscv/sync.md:107 */
rtx
gen_atomic_cas_value_strongdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5),
	86)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* ../../gcc/config/riscv/riscv.md:523 */
rtx
gen_adddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 528 "../../gcc/config/riscv/riscv.md"
{
    if (!TARGET_64BIT)
      operands[2] = force_reg (DImode, operands[2]);
  }
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:721 */
rtx
gen_mulditi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 726 "../../gcc/config/riscv/riscv.md"
{
  rtx low = gen_reg_rtx (DImode);
  emit_insn (gen_muldi3 (low, operands[1], operands[2]));

  rtx high = gen_reg_rtx (DImode);
  emit_insn (gen_muldi3_highpart (high, operands[1], operands[2]));

  emit_move_insn (gen_lowpart (DImode, operands[0]), low);
  emit_move_insn (gen_highpart (DImode, operands[0]), high);
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:721 */
rtx
gen_umulditi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 726 "../../gcc/config/riscv/riscv.md"
{
  rtx low = gen_reg_rtx (DImode);
  emit_insn (gen_muldi3 (low, operands[1], operands[2]));

  rtx high = gen_reg_rtx (DImode);
  emit_insn (gen_umuldi3_highpart (high, operands[1], operands[2]));

  emit_move_insn (gen_lowpart (DImode, operands[0]), low);
  emit_move_insn (gen_highpart (DImode, operands[0]), high);
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:752 */
rtx
gen_usmulditi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 757 "../../gcc/config/riscv/riscv.md"
{
  rtx low = gen_reg_rtx (DImode);
  emit_insn (gen_muldi3 (low, operands[1], operands[2]));

  rtx high = gen_reg_rtx (DImode);
  emit_insn (gen_usmuldi3_highpart (high, operands[1], operands[2]));

  emit_move_insn (gen_lowpart (DImode, operands[0]), low);
  emit_move_insn (gen_highpart (DImode, operands[0]), high);
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:783 */
rtx
gen_mulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 790 "../../gcc/config/riscv/riscv.md"
{
  if (TARGET_ZPN)
    {
      emit_insn (gen_rvp_mulsidi3 (operands[0], operands[1], operands[2]));
    }
  else
    {
      rtx temp = gen_reg_rtx (SImode);
      emit_insn (gen_mulsi3 (temp, operands[1], operands[2]));
      emit_insn (gen_mulsi3_highpart (riscv_subword (operands[0], true),
                operands[1], operands[2]));
      emit_insn (gen_movsi (riscv_subword (operands[0], false), temp));
    }
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:783 */
rtx
gen_umulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 790 "../../gcc/config/riscv/riscv.md"
{
  if (TARGET_ZPN)
    {
      emit_insn (gen_rvp_umulsidi3 (operands[0], operands[1], operands[2]));
    }
  else
    {
      rtx temp = gen_reg_rtx (SImode);
      emit_insn (gen_mulsi3 (temp, operands[1], operands[2]));
      emit_insn (gen_umulsi3_highpart (riscv_subword (operands[0], true),
                operands[1], operands[2]));
      emit_insn (gen_movsi (riscv_subword (operands[0], false), temp));
    }
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:821 */
rtx
gen_usmulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 828 "../../gcc/config/riscv/riscv.md"
{
  rtx temp = gen_reg_rtx (SImode);
  emit_insn (gen_mulsi3 (temp, operands[1], operands[2]));
  emit_insn (gen_usmulsi3_highpart (riscv_subword (operands[0], true),
				     operands[1], operands[2]));
  emit_insn (gen_movsi (riscv_subword (operands[0], false), temp));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1141 */
extern rtx_insn *gen_split_1 (rtx_insn *, rtx *);
rtx_insn *
gen_split_1 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_1 (riscv.md:1141)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1156 "../../gcc/config/riscv/riscv.md"
{ operands[1] = gen_lowpart (DImode, operands[1]); }
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1160 */
extern rtx_insn *gen_split_2 (rtx_insn *, rtx *);
rtx_insn *
gen_split_2 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_2 (riscv.md:1160)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1175 "../../gcc/config/riscv/riscv.md"
{
    operands[1] = gen_lowpart (SImode, operands[1]);
    operands[2] = GEN_INT(GET_MODE_BITSIZE(SImode) - 16);
  }
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1160 */
extern rtx_insn *gen_split_3 (rtx_insn *, rtx *);
rtx_insn *
gen_split_3 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_3 (riscv.md:1160)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1175 "../../gcc/config/riscv/riscv.md"
{
    operands[1] = gen_lowpart (DImode, operands[1]);
    operands[2] = GEN_INT(GET_MODE_BITSIZE(DImode) - 16);
  }
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1211 */
extern rtx_insn *gen_split_4 (rtx_insn *, rtx *);
rtx_insn *
gen_split_4 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_4 (riscv.md:1211)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1224 "../../gcc/config/riscv/riscv.md"
{
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (SImode)
			 - GET_MODE_BITSIZE (QImode));
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1211 */
extern rtx_insn *gen_split_5 (rtx_insn *, rtx *);
rtx_insn *
gen_split_5 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_5 (riscv.md:1211)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1224 "../../gcc/config/riscv/riscv.md"
{
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (SImode)
			 - GET_MODE_BITSIZE (QImode));
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1211 */
extern rtx_insn *gen_split_6 (rtx_insn *, rtx *);
rtx_insn *
gen_split_6 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_6 (riscv.md:1211)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1224 "../../gcc/config/riscv/riscv.md"
{
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (SImode)
			 - GET_MODE_BITSIZE (QImode));
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1211 */
extern rtx_insn *gen_split_7 (rtx_insn *, rtx *);
rtx_insn *
gen_split_7 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_7 (riscv.md:1211)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1224 "../../gcc/config/riscv/riscv.md"
{
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (SImode)
			 - GET_MODE_BITSIZE (HImode));
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1211 */
extern rtx_insn *gen_split_8 (rtx_insn *, rtx *);
rtx_insn *
gen_split_8 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_8 (riscv.md:1211)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1224 "../../gcc/config/riscv/riscv.md"
{
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (SImode)
			 - GET_MODE_BITSIZE (HImode));
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1211 */
extern rtx_insn *gen_split_9 (rtx_insn *, rtx *);
rtx_insn *
gen_split_9 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_9 (riscv.md:1211)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1224 "../../gcc/config/riscv/riscv.md"
{
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (SImode)
			 - GET_MODE_BITSIZE (HImode));
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1375 */
extern rtx_insn *gen_split_10 (rtx_insn *, rtx *);
rtx_insn *
gen_split_10 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_10 (riscv.md:1375)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1381 "../../gcc/config/riscv/riscv.md"
{
  riscv_move_integer (operands[2], operands[0], INTVAL (operands[1]),
		      SImode, TRUE);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1375 */
extern rtx_insn *gen_split_11 (rtx_insn *, rtx *);
rtx_insn *
gen_split_11 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_11 (riscv.md:1375)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1381 "../../gcc/config/riscv/riscv.md"
{
  riscv_move_integer (operands[2], operands[0], INTVAL (operands[1]),
		      DImode, TRUE);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1388 */
extern rtx_insn *gen_split_12 (rtx_insn *, rtx *);
rtx_insn *
gen_split_12 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_12 (riscv.md:1388)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1394 "../../gcc/config/riscv/riscv.md"
{
  riscv_split_symbol (operands[2], operands[1],
		      MAX_MACHINE_MODE, &operands[3], TRUE);
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1388 */
extern rtx_insn *gen_split_13 (rtx_insn *, rtx *);
rtx_insn *
gen_split_13 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_13 (riscv.md:1388)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1394 "../../gcc/config/riscv/riscv.md"
{
  riscv_split_symbol (operands[2], operands[1],
		      MAX_MACHINE_MODE, &operands[3], TRUE);
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1401 */
rtx
gen_movdi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1405 "../../gcc/config/riscv/riscv.md"
{
  if (riscv_legitimize_move (DImode, operands[0], operands[1]))
    DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1432 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1436 "../../gcc/config/riscv/riscv.md"
{
  if (riscv_legitimize_move (SImode, operands[0], operands[1]))
    DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1457 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1461 "../../gcc/config/riscv/riscv.md"
{
  if (riscv_legitimize_move (HImode, operands[0], operands[1]))
    DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1499 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1503 "../../gcc/config/riscv/riscv.md"
{
  if (riscv_legitimize_move (QImode, operands[0], operands[1]))
    DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1519 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1523 "../../gcc/config/riscv/riscv.md"
{
  if (riscv_legitimize_move (SFmode, operands[0], operands[1]))
    DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1550 */
rtx
gen_movdf (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1554 "../../gcc/config/riscv/riscv.md"
{
  if (riscv_legitimize_move (DFmode, operands[0], operands[1]))
    DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1591 */
extern rtx_insn *gen_split_14 (rtx_insn *, rtx *);
rtx_insn *
gen_split_14 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_14 (riscv.md:1591)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1597 "../../gcc/config/riscv/riscv.md"
{
  riscv_split_doubleword_move (operands[0], operands[1]);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1591 */
extern rtx_insn *gen_split_15 (rtx_insn *, rtx *);
rtx_insn *
gen_split_15 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_15 (riscv.md:1591)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1597 "../../gcc/config/riscv/riscv.md"
{
  riscv_split_doubleword_move (operands[0], operands[1]);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1602 */
rtx
gen_cpymemsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1608 "../../gcc/config/riscv/riscv.md"
{
  if (riscv_expand_block_move (operands[0], operands[1], operands[2]))
    DONE;
  else
    FAIL;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1617 */
rtx
gen_clear_cache (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1621 "../../gcc/config/riscv/riscv.md"
{
#ifdef ICACHE_FLUSH_FUNC
  emit_library_call (gen_rtx_SYMBOL_REF (Pmode, ICACHE_FLUSH_FUNC),
		     LCT_NORMAL, VOIDmode, operands[0], Pmode,
		     operands[1], Pmode, const0_rtx, Pmode);
#else
  if (TARGET_ZIFENCEI)
    emit_insn (gen_fence_i ());
#endif
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1671 */
extern rtx_insn *gen_split_16 (rtx_insn *, rtx *);
rtx_insn *
gen_split_16 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_16 (riscv.md:1671)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1686 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1671 */
extern rtx_insn *gen_split_17 (rtx_insn *, rtx *);
rtx_insn *
gen_split_17 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_17 (riscv.md:1671)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1686 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1671 */
extern rtx_insn *gen_split_18 (rtx_insn *, rtx *);
rtx_insn *
gen_split_18 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_18 (riscv.md:1671)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1686 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1690 */
extern rtx_insn *gen_split_19 (rtx_insn *, rtx *);
rtx_insn *
gen_split_19 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_19 (riscv.md:1690)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1706 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1690 */
extern rtx_insn *gen_split_20 (rtx_insn *, rtx *);
rtx_insn *
gen_split_20 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_20 (riscv.md:1690)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1706 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1690 */
extern rtx_insn *gen_split_21 (rtx_insn *, rtx *);
rtx_insn *
gen_split_21 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_21 (riscv.md:1690)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1706 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1726 */
extern rtx_insn *gen_split_22 (rtx_insn *, rtx *);
rtx_insn *
gen_split_22 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_22 (riscv.md:1726)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1742 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1726 */
extern rtx_insn *gen_split_23 (rtx_insn *, rtx *);
rtx_insn *
gen_split_23 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_23 (riscv.md:1726)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1742 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1726 */
extern rtx_insn *gen_split_24 (rtx_insn *, rtx *);
rtx_insn *
gen_split_24 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_24 (riscv.md:1726)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1742 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1746 */
extern rtx_insn *gen_split_25 (rtx_insn *, rtx *);
rtx_insn *
gen_split_25 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_25 (riscv.md:1746)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1762 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1746 */
extern rtx_insn *gen_split_26 (rtx_insn *, rtx *);
rtx_insn *
gen_split_26 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_26 (riscv.md:1746)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1762 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1746 */
extern rtx_insn *gen_split_27 (rtx_insn *, rtx *);
rtx_insn *
gen_split_27 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_27 (riscv.md:1746)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1762 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1781 */
extern rtx_insn *gen_split_28 (rtx_insn *, rtx *);
rtx_insn *
gen_split_28 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_28 (riscv.md:1781)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1799 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1781 */
extern rtx_insn *gen_split_29 (rtx_insn *, rtx *);
rtx_insn *
gen_split_29 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_29 (riscv.md:1781)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1799 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1781 */
extern rtx_insn *gen_split_30 (rtx_insn *, rtx *);
rtx_insn *
gen_split_30 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_30 (riscv.md:1781)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1799 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1803 */
extern rtx_insn *gen_split_31 (rtx_insn *, rtx *);
rtx_insn *
gen_split_31 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_31 (riscv.md:1803)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1821 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1803 */
extern rtx_insn *gen_split_32 (rtx_insn *, rtx *);
rtx_insn *
gen_split_32 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_32 (riscv.md:1803)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1821 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1803 */
extern rtx_insn *gen_split_33 (rtx_insn *, rtx *);
rtx_insn *
gen_split_33 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_33 (riscv.md:1803)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1821 "../../gcc/config/riscv/riscv.md"
operands[2] = gen_lowpart (QImode, operands[2]);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1875 */
extern rtx_insn *gen_split_34 (rtx_insn *, rtx *);
rtx_insn *
gen_split_34 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_34 (riscv.md:1875)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1885 "../../gcc/config/riscv/riscv.md"
{
  /* Op2 is a VOIDmode constant, so get the mode size from op1.  */
  operands[2] = GEN_INT (GET_MODE_BITSIZE (GET_MODE (operands[1]))
			 - exact_log2 (INTVAL (operands[2]) + 1));
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (operand3,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand3),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1875 */
extern rtx_insn *gen_split_35 (rtx_insn *, rtx *);
rtx_insn *
gen_split_35 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_35 (riscv.md:1875)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1885 "../../gcc/config/riscv/riscv.md"
{
  /* Op2 is a VOIDmode constant, so get the mode size from op1.  */
  operands[2] = GEN_INT (GET_MODE_BITSIZE (GET_MODE (operands[1]))
			 - exact_log2 (INTVAL (operands[2]) + 1));
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (operand3,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand3),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1893 */
extern rtx_insn *gen_split_36 (rtx_insn *, rtx *);
rtx_insn *
gen_split_36 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_36 (riscv.md:1893)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1903 "../../gcc/config/riscv/riscv.md"
{
  operands[2] = GEN_INT (ctz_hwi (INTVAL (operands[2])));
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (operand3,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand3),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1911 */
extern rtx_insn *gen_split_37 (rtx_insn *, rtx *);
rtx_insn *
gen_split_37 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_37 (riscv.md:1911)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1925 "../../gcc/config/riscv/riscv.md"
operands[5] = GEN_INT (32 - (INTVAL (operands [2])));
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (operand4,
	gen_rtx_ASHIFT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand4),
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1953 */
rtx
gen_movsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1959 "../../gcc/config/riscv/riscv.md"
{
  rtx cmp = operands[1];
  /* We only handle word mode integer compares for now.  */
  if (GET_MODE (XEXP (cmp, 0)) != word_mode)
    FAIL;
  riscv_expand_conditional_move (operands[0], operands[2], operands[3],
				 GET_CODE (cmp), XEXP (cmp, 0), XEXP (cmp, 1));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1953 */
rtx
gen_movdicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1959 "../../gcc/config/riscv/riscv.md"
{
  rtx cmp = operands[1];
  /* We only handle word mode integer compares for now.  */
  if (GET_MODE (XEXP (cmp, 0)) != word_mode)
    FAIL;
  riscv_expand_conditional_move (operands[0], operands[2], operands[3],
				 GET_CODE (cmp), XEXP (cmp, 0), XEXP (cmp, 1));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1986 */
rtx
gen_condjump (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx));
}

/* ../../gcc/config/riscv/riscv.md:1992 */
rtx
gen_cbranchqi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2000 "../../gcc/config/riscv/riscv.md"
{
  riscv_expand_conditional_branch (operands[3], GET_CODE (operands[0]),
				   operands[1], operands[2]);
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1992 */
rtx
gen_cbranchsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2000 "../../gcc/config/riscv/riscv.md"
{
  riscv_expand_conditional_branch (operands[3], GET_CODE (operands[0]),
				   operands[1], operands[2]);
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:1992 */
rtx
gen_cbranchdi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2000 "../../gcc/config/riscv/riscv.md"
{
  riscv_expand_conditional_branch (operands[3], GET_CODE (operands[0]),
				   operands[1], operands[2]);
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2006 */
rtx
gen_cbranchsf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2014 "../../gcc/config/riscv/riscv.md"
{
  riscv_expand_conditional_branch (operands[3], GET_CODE (operands[0]),
				   operands[1], operands[2]);
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2006 */
rtx
gen_cbranchdf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2014 "../../gcc/config/riscv/riscv.md"
{
  riscv_expand_conditional_branch (operands[3], GET_CODE (operands[0]),
				   operands[1], operands[2]);
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2020 */
extern rtx_insn *gen_split_38 (rtx_insn *, rtx *);
rtx_insn *
gen_split_38 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_38 (riscv.md:2020)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2041 "../../gcc/config/riscv/riscv.md"
{
  int shift = GET_MODE_BITSIZE (SImode) - 1 - INTVAL (operands[3]);
  operands[3] = GEN_INT (shift);

  if (GET_CODE (operands[0]) == EQ)
    operands[0] = gen_rtx_GE (SImode, operands[4], const0_rtx);
  else
    operands[0] = gen_rtx_LT (SImode, operands[4], const0_rtx);
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (operand4,
	gen_rtx_ASHIFT (SImode,
	operand2,
	operand3)));
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), GET_MODE (operand0),
		copy_rtx (operand4),
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2020 */
extern rtx_insn *gen_split_39 (rtx_insn *, rtx *);
rtx_insn *
gen_split_39 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_39 (riscv.md:2020)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2041 "../../gcc/config/riscv/riscv.md"
{
  int shift = GET_MODE_BITSIZE (DImode) - 1 - INTVAL (operands[3]);
  operands[3] = GEN_INT (shift);

  if (GET_CODE (operands[0]) == EQ)
    operands[0] = gen_rtx_GE (DImode, operands[4], const0_rtx);
  else
    operands[0] = gen_rtx_LT (DImode, operands[4], const0_rtx);
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (operand4,
	gen_rtx_ASHIFT (DImode,
	operand2,
	operand3)));
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), GET_MODE (operand0),
		copy_rtx (operand4),
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2051 */
extern rtx_insn *gen_split_40 (rtx_insn *, rtx *);
rtx_insn *
gen_split_40 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_40 (riscv.md:2051)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2072 "../../gcc/config/riscv/riscv.md"
{
  operands[3] = GEN_INT (GET_MODE_BITSIZE (SImode) - INTVAL (operands[3]));
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (operand4,
	gen_rtx_ASHIFT (SImode,
	operand2,
	operand3)));
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), GET_MODE (operand0),
		copy_rtx (operand4),
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2051 */
extern rtx_insn *gen_split_41 (rtx_insn *, rtx *);
rtx_insn *
gen_split_41 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_41 (riscv.md:2051)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2072 "../../gcc/config/riscv/riscv.md"
{
  operands[3] = GEN_INT (GET_MODE_BITSIZE (DImode) - INTVAL (operands[3]));
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (operand4,
	gen_rtx_ASHIFT (DImode,
	operand2,
	operand3)));
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), GET_MODE (operand0),
		copy_rtx (operand4),
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2085 */
rtx
gen_cstoresi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2091 "../../gcc/config/riscv/riscv.md"
{
  riscv_expand_int_scc (operands[0], GET_CODE (operands[1]), operands[2],
			operands[3]);
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand2,
		operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2085 */
rtx
gen_cstoredi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2091 "../../gcc/config/riscv/riscv.md"
{
  riscv_expand_int_scc (operands[0], GET_CODE (operands[1]), operands[2],
			operands[3]);
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand2,
		operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2097 */
rtx
gen_cstoresf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2103 "../../gcc/config/riscv/riscv.md"
{
  riscv_expand_float_scc (operands[0], GET_CODE (operands[1]), operands[2],
			  operands[3]);
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand2,
		operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2097 */
rtx
gen_cstoredf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2103 "../../gcc/config/riscv/riscv.md"
{
  riscv_expand_float_scc (operands[0], GET_CODE (operands[1]), operands[2],
			  operands[3]);
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand2,
		operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2119 */
rtx
gen_flt_quietsfsi4 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	9)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc/config/riscv/riscv.md:2119 */
rtx
gen_fle_quietsfsi4 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	10)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc/config/riscv/riscv.md:2119 */
rtx
gen_flt_quietsfdi4 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	9)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* ../../gcc/config/riscv/riscv.md:2119 */
rtx
gen_fle_quietsfdi4 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	10)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* ../../gcc/config/riscv/riscv.md:2119 */
rtx
gen_flt_quietdfsi4 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	9)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc/config/riscv/riscv.md:2119 */
rtx
gen_fle_quietdfsi4 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	10)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc/config/riscv/riscv.md:2119 */
rtx
gen_flt_quietdfdi4 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	9)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* ../../gcc/config/riscv/riscv.md:2119 */
rtx
gen_fle_quietdfdi4 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	10)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* ../../gcc/config/riscv/riscv.md:2228 */
rtx
gen_indirect_jump (rtx operand0)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2231 "../../gcc/config/riscv/riscv.md"
{
  operands[0] = force_reg (Pmode, operands[0]);
  if (Pmode == SImode)
    emit_jump_insn (gen_indirect_jumpsi (operands[0]));
  else
    emit_jump_insn (gen_indirect_jumpdi (operands[0]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
  }
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2247 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2251 "../../gcc/config/riscv/riscv.md"
{
  if (CASE_VECTOR_PC_RELATIVE)
      operands[0] = expand_simple_binop (Pmode, PLUS, operands[0],
					 gen_rtx_LABEL_REF (Pmode, operands[1]),
					 NULL_RTX, 0, OPTAB_DIRECT);

  if (CASE_VECTOR_PC_RELATIVE && Pmode == DImode)
    emit_jump_insn (gen_tablejumpdi (operands[0], operands[1]));
  else
    emit_jump_insn (gen_tablejumpsi (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2280 */
rtx
gen_prologue (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2283 "../../gcc/config/riscv/riscv.md"
{
  riscv_expand_prologue ();
  DONE;
}
#undef DONE
#undef FAIL
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2299 */
rtx
gen_epilogue (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2302 "../../gcc/config/riscv/riscv.md"
{
  riscv_expand_epilogue (NORMAL_RETURN);
  DONE;
}
#undef DONE
#undef FAIL
  }
  emit_insn (const_int_rtx[MAX_SAVED_CONST_INT + (2)]);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2307 */
rtx
gen_sibcall_epilogue (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2310 "../../gcc/config/riscv/riscv.md"
{
  riscv_expand_epilogue (SIBCALL_RETURN);
  DONE;
}
#undef DONE
#undef FAIL
  }
  emit_insn (const_int_rtx[MAX_SAVED_CONST_INT + (2)]);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2318 */
rtx
gen_return (void)
{
  return simple_return_rtx;
}

/* ../../gcc/config/riscv/riscv.md:2343 */
rtx
gen_eh_return (rtx operand0)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2346 "../../gcc/config/riscv/riscv.md"
{
  if (GET_MODE (operands[0]) != word_mode)
    operands[0] = convert_to_mode (word_mode, operands[0], 0);
  if (TARGET_64BIT)
    emit_insn (gen_eh_set_lr_di (operands[0]));
  else
    emit_insn (gen_eh_set_lr_si (operands[0]));

  emit_jump_insn (gen_eh_return_internal ());
  emit_barrier ();
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2374 */
extern rtx_insn *gen_split_42 (rtx_insn *, rtx *);
rtx_insn *
gen_split_42 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_42 (riscv.md:2374)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2379 "../../gcc/config/riscv/riscv.md"
{
  riscv_set_return_address (operands[0], operands[1]);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2384 */
extern rtx_insn *gen_split_43 (rtx_insn *, rtx *);
rtx_insn *
gen_split_43 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_43 (riscv.md:2384)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2390 "../../gcc/config/riscv/riscv.md"
riscv_expand_epilogue (EXCEPTION_RETURN); DONE;
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2399 */
rtx
gen_sibcall (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2405 "../../gcc/config/riscv/riscv.md"
{
  rtx target = riscv_legitimize_call_address (XEXP (operands[0], 0));
  emit_call_insn (gen_sibcall_internal (target, operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2421 */
rtx
gen_sibcall_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2427 "../../gcc/config/riscv/riscv.md"
{
  rtx target = riscv_legitimize_call_address (XEXP (operands[1], 0));
  emit_call_insn (gen_sibcall_value_internal (operands[0], target, operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2444 */
rtx
gen_call (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2450 "../../gcc/config/riscv/riscv.md"
{
  rtx target = riscv_legitimize_call_address (XEXP (operands[0], 0));
  emit_call_insn (gen_call_internal (target, operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2467 */
rtx
gen_call_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2473 "../../gcc/config/riscv/riscv.md"
{
  rtx target = riscv_legitimize_call_address (XEXP (operands[1], 0));
  emit_call_insn (gen_call_value_internal (operands[0], target, operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2493 */
rtx
gen_untyped_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2499 "../../gcc/config/riscv/riscv.md"
{
  int i;

  emit_call_insn (gen_call (operands[0], const0_rtx, NULL, const0_rtx));

  for (i = 0; i < XVECLEN (operands[2], 0); i++)
    {
      rtx set = XVECEXP (operands[2], 0, i);
      riscv_emit_move (SET_DEST (set), SET_SRC (set));
    }

  emit_insn (gen_blockage ());
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:339 */
rtx
gen_crasv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 344 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_crasv2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:339 */
rtx
gen_crasv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 344 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_crasv2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:375 */
rtx
gen_cras16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 380 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_cras16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:406 */
rtx
gen_crsav2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 411 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_crsav2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:406 */
rtx
gen_crsav2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 411 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_crsav2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:442 */
rtx
gen_crsa16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 447 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_crsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:474 */
rtx
gen_kcrasv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 479 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kcrasv2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:474 */
rtx
gen_kcrasv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 479 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kcrasv2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:510 */
rtx
gen_kcras16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 515 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kcras16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:541 */
rtx
gen_kcrsav2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 546 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kcrsav2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:541 */
rtx
gen_kcrsav2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 546 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kcrsav2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:577 */
rtx
gen_kcrsa16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 582 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kcrsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:609 */
rtx
gen_ukcrasv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 614 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_ukcrasv2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:609 */
rtx
gen_ukcrasv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 614 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_ukcrasv2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:645 */
rtx
gen_ukcras16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 650 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_ukcras16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:676 */
rtx
gen_ukcrsav2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 681 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_ukcrsav2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:676 */
rtx
gen_ukcrsav2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 681 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_ukcrsav2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:712 */
rtx
gen_ukcrsa16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 717 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_ukcrsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:744 */
rtx
gen_rcrasv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 749 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_rcrasv2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:744 */
rtx
gen_rcrasv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 749 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_rcrasv2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:790 */
rtx
gen_rcras16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 795 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_rcras16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:837 */
rtx
gen_rcrsav2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 842 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_rcrsav2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:837 */
rtx
gen_rcrsav2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 842 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_rcrsav2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:883 */
rtx
gen_rcrsa16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 888 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_rcrsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:931 */
rtx
gen_urcrasv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 936 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_urcrasv2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:931 */
rtx
gen_urcrasv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 936 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_urcrasv2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:977 */
rtx
gen_urcras16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 982 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_urcras16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1024 */
rtx
gen_urcrsav2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1029 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_urcrsav2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1024 */
rtx
gen_urcrsav2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1029 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_urcrsav2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1070 */
rtx
gen_urcrsa16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1075 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_urcrsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1118 */
rtx
gen_insb (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1124 "../../gcc/config/riscv/rvp.md"
{
  if (INTVAL (operands[3]) > 3 || INTVAL (operands[3]) < 0)
    gcc_unreachable ();

  rtx src = gen_reg_rtx (QImode);

  convert_move (src, operands[2], false);

  HOST_WIDE_INT selector_index;
  selector_index = INTVAL (operands[3]);
  rtx selector = gen_int_mode (1 << selector_index, SImode);
  emit_insn (gen_vec_setv4qi_internal (operands[0], src,
				       operands[1], selector));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1157 */
rtx
gen_insb64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1163 "../../gcc/config/riscv/rvp.md"
{
  if (INTVAL (operands[3]) > 7 || INTVAL (operands[3]) < 0)
    gcc_unreachable ();

  rtx src = gen_reg_rtx (QImode);

  convert_move (src, operands[2], false);

  HOST_WIDE_INT selector_index;
  selector_index = INTVAL (operands[3]);
  rtx selector = gen_int_mode (1 << selector_index, SImode);
  emit_insn (gen_vec_setv8qi_internal (operands[0], src,
				       operands[1], selector));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1196 */
rtx
gen_kdmbb (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1201 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kdm_internal (operands[0], operands[1], operands[2],
				GEN_INT (0), GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1208 */
rtx
gen_kdmbt (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1213 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kdm_internal (operands[0], operands[1], operands[2],
				GEN_INT (0), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1220 */
rtx
gen_kdmtt (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1225 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kdm_internal (operands[0], operands[1], operands[2],
				GEN_INT (1), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1255 */
rtx
gen_kdmabb (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1261 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kdma_internal (operands[0], operands[2], operands[3],
				GEN_INT (0), GEN_INT (0), operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1268 */
rtx
gen_kdmabt (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1274 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kdma_internal (operands[0], operands[2], operands[3],
				GEN_INT (0), GEN_INT (1), operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1281 */
rtx
gen_kdmatt (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1287 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kdma_internal (operands[0], operands[2], operands[3],
				GEN_INT (1), GEN_INT (1), operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1319 */
rtx
gen_khmbbsi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1324 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_khmsi_internal (operands[0], operands[1], operands[2],
				GEN_INT (0), GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1331 */
rtx
gen_khmbtsi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1336 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_khmsi_internal (operands[0], operands[1], operands[2],
				GEN_INT (0), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1343 */
rtx
gen_khmttsi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1348 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_khmsi_internal (operands[0], operands[1], operands[2],
				GEN_INT (1), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1380 */
rtx
gen_kmabb (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1386 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kma_internal (operands[0], operands[2], operands[3],
			       GEN_INT (0), GEN_INT (0),
			       operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1394 */
rtx
gen_kmabt (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1400 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kma_internal (operands[0], operands[2], operands[3],
			       GEN_INT (0), GEN_INT (1),
			       operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1408 */
rtx
gen_kmatt (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1414 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kma_internal (operands[0], operands[2], operands[3],
			       GEN_INT (1), GEN_INT (1),
			       operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1444 */
rtx
gen_kmabb64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1450 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kma64_internal (operands[0], operands[2], operands[3],
				 GEN_INT (0), GEN_INT (2), GEN_INT (0),
				 GEN_INT (2), operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1458 */
rtx
gen_kmabt64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1464 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kma64_internal (operands[0], operands[2], operands[3],
				 GEN_INT (0), GEN_INT (2), GEN_INT (1),
				 GEN_INT (3), operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1472 */
rtx
gen_kmatt64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1478 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kma64_internal (operands[0], operands[2], operands[3],
				 GEN_INT (1), GEN_INT (3), GEN_INT (1),
				 GEN_INT (3), operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1969 */
rtx
gen_kmmawb (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1975 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw_internal (operands[0], operands[2], operands[3],
				 GEN_INT (0), operands[1], GEN_INT (16)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1982 */
rtx
gen_kmmawt (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1988 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw_internal (operands[0], operands[2], operands[3],
				 GEN_INT (1), operands[1], GEN_INT (16)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:1995 */
rtx
gen_kmmawb2 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2001 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw_internal (operands[0], operands[2], operands[3],
				 GEN_INT (0), operands[1], GEN_INT (15)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2008 */
rtx
gen_kmmawt2 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2014 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw_internal (operands[0], operands[2], operands[3],
				 GEN_INT (1), operands[1], GEN_INT (15)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2044 */
rtx
gen_kmmawb_round (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2050 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw_round_internal (operands[0], operands[2], operands[3],
				       GEN_INT (0), operands[1], GEN_INT (16)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2057 */
rtx
gen_kmmawt_round (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2063 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw_round_internal (operands[0], operands[2], operands[3],
				       GEN_INT (1), operands[1], GEN_INT (16)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2070 */
rtx
gen_kmmawb2_round (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2076 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw_round_internal (operands[0], operands[2], operands[3],
				       GEN_INT (0), operands[1], GEN_INT (15)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2083 */
rtx
gen_kmmawt2_round (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2089 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw_round_internal (operands[0], operands[2], operands[3],
				       GEN_INT (1), operands[1], GEN_INT (15)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2133 */
rtx
gen_kmmawb64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2139 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw64_internal (operands[0], operands[2], operands[3],
				   GEN_INT (0), GEN_INT (2), operands[1],
				   GEN_INT (16)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2147 */
rtx
gen_kmmawt64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2153 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw64_internal (operands[0], operands[2], operands[3],
				   GEN_INT (1), GEN_INT (3), operands[1],
				   GEN_INT (16)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2161 */
rtx
gen_kmmawb2_64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2167 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw64_internal (operands[0], operands[2], operands[3],
				   GEN_INT (0), GEN_INT (2), operands[1],
				   GEN_INT (15)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2175 */
rtx
gen_kmmawt2_64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2181 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw64_internal (operands[0], operands[2], operands[3],
				   GEN_INT (1), GEN_INT (3), operands[1],
				   GEN_INT (15)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2230 */
rtx
gen_kmmawb64_round (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2236 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw64_round_internal (operands[0], operands[2], operands[3],
					 GEN_INT (0), GEN_INT (2), operands[1],
					 GEN_INT (16)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2244 */
rtx
gen_kmmawt64_round (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2250 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw64_round_internal (operands[0], operands[2], operands[3],
					 GEN_INT (1), GEN_INT (3), operands[1],
					 GEN_INT (16)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2258 */
rtx
gen_kmmawb2_64_round (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2264 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw64_round_internal (operands[0], operands[2], operands[3],
					 GEN_INT (0), GEN_INT (2), operands[1],
					 GEN_INT (15)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2272 */
rtx
gen_kmmawt2_64_round (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2278 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmaw64_round_internal (operands[0], operands[2], operands[3],
					 GEN_INT (1), GEN_INT (3), operands[1],
					 GEN_INT (15)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2361 */
rtx
gen_kmmwb2_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2366 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmw2_round_internal (operands[0], operands[1],
				       operands[2], GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2373 */
rtx
gen_kmmwt2_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2378 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmw2_round_internal (operands[0], operands[1],
				       operands[2], GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2422 */
rtx
gen_kmmwb64_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2427 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmw64_round (operands[0], operands[1], operands[2],
			       GEN_INT (0), GEN_INT (2)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2434 */
rtx
gen_kmmwt64_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2439 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmw64_round (operands[0], operands[1], operands[2],
			       GEN_INT (1), GEN_INT (3)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2564 */
rtx
gen_kmmwb64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2569 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmw64 (operands[0], operands[1], operands[2],
			  GEN_INT (0), GEN_INT (2)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2576 */
rtx
gen_kmmwt64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2581 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmw64 (operands[0], operands[1], operands[2],
			 GEN_INT (1), GEN_INT (3)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2623 */
rtx
gen_kmmwb2 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2628 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmw2_internal (operands[0], operands[1], operands[2], GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2634 */
rtx
gen_kmmwt2 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2639 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kmmw2_internal (operands[0], operands[1], operands[2], GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2712 */
rtx
gen_kslrav4qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2717 "../../gcc/config/riscv/rvp.md"
{
  unsigned int extract_bits;
  switch (8)
  {
    case 8: extract_bits = 4; break;
    case 16: extract_bits = 5; break;
    case 32: extract_bits = 6; break;
    default: gcc_unreachable();
  }
  emit_insn (gen_kslrav4qi_internal (operands[0],
    operands[1], operands[2], GEN_INT (extract_bits)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2712 */
rtx
gen_kslrav2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2717 "../../gcc/config/riscv/rvp.md"
{
  unsigned int extract_bits;
  switch (16)
  {
    case 8: extract_bits = 4; break;
    case 16: extract_bits = 5; break;
    case 32: extract_bits = 6; break;
    default: gcc_unreachable();
  }
  emit_insn (gen_kslrav2hi_internal (operands[0],
    operands[1], operands[2], GEN_INT (extract_bits)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2712 */
rtx
gen_kslrav8qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2717 "../../gcc/config/riscv/rvp.md"
{
  unsigned int extract_bits;
  switch (8)
  {
    case 8: extract_bits = 4; break;
    case 16: extract_bits = 5; break;
    case 32: extract_bits = 6; break;
    default: gcc_unreachable();
  }
  emit_insn (gen_kslrav8qi_internal (operands[0],
    operands[1], operands[2], GEN_INT (extract_bits)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2712 */
rtx
gen_kslrav4hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2717 "../../gcc/config/riscv/rvp.md"
{
  unsigned int extract_bits;
  switch (16)
  {
    case 8: extract_bits = 4; break;
    case 16: extract_bits = 5; break;
    case 32: extract_bits = 6; break;
    default: gcc_unreachable();
  }
  emit_insn (gen_kslrav4hi_internal (operands[0],
    operands[1], operands[2], GEN_INT (extract_bits)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2712 */
rtx
gen_kslrav2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2717 "../../gcc/config/riscv/rvp.md"
{
  unsigned int extract_bits;
  switch (32)
  {
    case 8: extract_bits = 4; break;
    case 16: extract_bits = 5; break;
    case 32: extract_bits = 6; break;
    default: gcc_unreachable();
  }
  emit_insn (gen_kslrav2si_internal (operands[0],
    operands[1], operands[2], GEN_INT (extract_bits)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2751 */
rtx
gen_kslrav4qi_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2756 "../../gcc/config/riscv/rvp.md"
{
  unsigned int extract_bits;
  switch (8)
  {
    case 8: extract_bits = 4; break;
    case 16: extract_bits = 5; break;
    case 32: extract_bits = 6; break;
    default: gcc_unreachable();
  }
  emit_insn (gen_kslrav4qi_round_internal (operands[0],
    operands[1], operands[2], GEN_INT (extract_bits)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2751 */
rtx
gen_kslrav2hi_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2756 "../../gcc/config/riscv/rvp.md"
{
  unsigned int extract_bits;
  switch (16)
  {
    case 8: extract_bits = 4; break;
    case 16: extract_bits = 5; break;
    case 32: extract_bits = 6; break;
    default: gcc_unreachable();
  }
  emit_insn (gen_kslrav2hi_round_internal (operands[0],
    operands[1], operands[2], GEN_INT (extract_bits)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2751 */
rtx
gen_kslrav8qi_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2756 "../../gcc/config/riscv/rvp.md"
{
  unsigned int extract_bits;
  switch (8)
  {
    case 8: extract_bits = 4; break;
    case 16: extract_bits = 5; break;
    case 32: extract_bits = 6; break;
    default: gcc_unreachable();
  }
  emit_insn (gen_kslrav8qi_round_internal (operands[0],
    operands[1], operands[2], GEN_INT (extract_bits)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2751 */
rtx
gen_kslrav4hi_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2756 "../../gcc/config/riscv/rvp.md"
{
  unsigned int extract_bits;
  switch (16)
  {
    case 8: extract_bits = 4; break;
    case 16: extract_bits = 5; break;
    case 32: extract_bits = 6; break;
    default: gcc_unreachable();
  }
  emit_insn (gen_kslrav4hi_round_internal (operands[0],
    operands[1], operands[2], GEN_INT (extract_bits)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2751 */
rtx
gen_kslrav2si_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2756 "../../gcc/config/riscv/rvp.md"
{
  unsigned int extract_bits;
  switch (32)
  {
    case 8: extract_bits = 4; break;
    case 16: extract_bits = 5; break;
    case 32: extract_bits = 6; break;
    default: gcc_unreachable();
  }
  emit_insn (gen_kslrav2si_round_internal (operands[0],
    operands[1], operands[2], GEN_INT (extract_bits)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2830 */
rtx
gen_kstasv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2835 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kstasv2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2830 */
rtx
gen_kstasv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2835 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kstasv2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2867 */
rtx
gen_kstas16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2872 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kstas16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2898 */
rtx
gen_kstsav2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2903 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kstsav2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2898 */
rtx
gen_kstsav2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2903 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kstsav2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:2934 */
rtx
gen_kstsa16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2939 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kstsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3126 */
rtx
gen_pkbbv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3131 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vec_mergev2hi (operands[0], operands[1], operands[2],
				  GEN_INT (2), GEN_INT (0), GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3126 */
rtx
gen_pkbbv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3131 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vec_mergev2si (operands[0], operands[1], operands[2],
				  GEN_INT (2), GEN_INT (0), GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3138 */
rtx
gen_pkbtv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3143 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vec_mergev2hi (operands[0], operands[1], operands[2],
				  GEN_INT (2), GEN_INT (0), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3138 */
rtx
gen_pkbtv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3143 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vec_mergev2si (operands[0], operands[1], operands[2],
				  GEN_INT (2), GEN_INT (0), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3150 */
rtx
gen_pkttv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3155 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vec_mergev2hi (operands[0], operands[1], operands[2],
				  GEN_INT (2), GEN_INT (1), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3150 */
rtx
gen_pkttv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3155 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vec_mergev2si (operands[0], operands[1], operands[2],
				  GEN_INT (2), GEN_INT (1), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3162 */
rtx
gen_pktbv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3167 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vec_mergev2hi (operands[0], operands[1], operands[2],
				  GEN_INT (2), GEN_INT (1), GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3162 */
rtx
gen_pktbv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3167 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vec_mergev2si (operands[0], operands[1], operands[2],
				  GEN_INT (2), GEN_INT (1), GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3175 */
rtx
gen_pkbb64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3180 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vec_pkbb64 (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3198 */
rtx
gen_pkbt64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3203 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vec_pkbt64 (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3221 */
rtx
gen_pktt64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3226 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vec_pktt64 (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3244 */
rtx
gen_pktb64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3249 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vec_pktb64 (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3404 */
rtx
gen_rstasv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3409 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_rstasv2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3404 */
rtx
gen_rstasv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3409 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_rstasv2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3450 */
rtx
gen_rstas16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3455 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_rstas16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3497 */
rtx
gen_rstsav2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3502 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_rstsav2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3497 */
rtx
gen_rstsav2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3502 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_rstsav2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3543 */
rtx
gen_rstsa16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3548 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_rstsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3685 */
rtx
gen_smalbb (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3691 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smaddhidi (operands[0], operands[2],
			    operands[3], operands[1],
			    GEN_INT (0), GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3699 */
rtx
gen_smalbt (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3705 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smaddhidi (operands[0], operands[2],
			    operands[3], operands[1],
			    GEN_INT (0), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3713 */
rtx
gen_smaltt (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3719 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smaddhidi (operands[0], operands[2],
			    operands[3], operands[1],
			    GEN_INT (1), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3749 */
rtx
gen_smalbb64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3755 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smaddhidi64 (operands[0], operands[2],
			      operands[3], operands[1],
			      GEN_INT (0), GEN_INT (0),
			      GEN_INT (2), GEN_INT (2)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3764 */
rtx
gen_smalbt64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3770 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smaddhidi64 (operands[0], operands[2],
			      operands[3], operands[1],
			      GEN_INT (0), GEN_INT (1),
			      GEN_INT (2), GEN_INT (3)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3779 */
rtx
gen_smaltt64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3785 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smaddhidi64 (operands[0], operands[2],
			      operands[3], operands[1],
			      GEN_INT (1), GEN_INT (1),
			      GEN_INT (3), GEN_INT (3)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3826 */
rtx
gen_smalda1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3832 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smalda1_le (operands[0], operands[1], operands[2], operands[3]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3893 */
rtx
gen_smalxda1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3899 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smalxda1_le (operands[0], operands[1], operands[2], operands[3]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3905 */
rtx
gen_smalxds1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3911 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smalxds1_le (operands[0], operands[1], operands[2], operands[3]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:3971 */
rtx
gen_smalds1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3977 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smalds1_le (operands[0], operands[1], operands[2], operands[3]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4037 */
rtx
gen_smaldrs3 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4043 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smaldrs3_le (operands[0], operands[1], operands[2], operands[3]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4190 */
rtx
gen_smaqa (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4196 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smaqav4qi (operands[0], operands[1],
			    operands[2], operands[3]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4203 */
rtx
gen_umaqa (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4209 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_umaqav4qi (operands[0], operands[1],
			    operands[2], operands[3]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4248 */
rtx
gen_smaqa64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4254 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smaqav8qi (operands[0], operands[1],
			    operands[2], operands[3]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4261 */
rtx
gen_umaqa64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4267 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_umaqav8qi (operands[0], operands[1],
			    operands[2], operands[3]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4327 */
rtx
gen_sumaqa (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4333 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_sumaqav4qi (operands[0], operands[1],
			     operands[2], operands[3]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4373 */
rtx
gen_sumaqa64 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4379 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_sumaqav8qi (operands[0], operands[1],
			     operands[2], operands[3]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4441 */
rtx
gen_smbb (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4446 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_mulhisi3v (operands[0], operands[1], operands[2],
			    GEN_INT (0), GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4453 */
rtx
gen_smbt (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4458 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_mulhisi3v (operands[0], operands[1], operands[2],
			    GEN_INT (0), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4465 */
rtx
gen_smtt (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4470 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_mulhisi3v (operands[0], operands[1], operands[2],
			    GEN_INT (1), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4497 */
rtx
gen_smbb64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4502 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_mulv2hiv2si3v (operands[0], operands[1], operands[2],
				GEN_INT (0), GEN_INT (2), GEN_INT (0), GEN_INT (2)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4509 */
rtx
gen_smbt64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4514 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_mulv2hiv2si3v (operands[0], operands[1], operands[2],
				GEN_INT (0), GEN_INT (2), GEN_INT (1), GEN_INT (3)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4521 */
rtx
gen_smtt64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4526 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_mulv2hiv2si3v (operands[0], operands[1], operands[2],
				GEN_INT (1), GEN_INT (3), GEN_INT (1), GEN_INT (3)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4556 */
rtx
gen_smbb32 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4561 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_mulsidi3v (operands[0], operands[1], operands[2],
			    GEN_INT (0), GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4568 */
rtx
gen_smbt32 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4573 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_mulsidi3v (operands[0], operands[1], operands[2],
			    GEN_INT (0), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4580 */
rtx
gen_smtt32 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4585 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_mulsidi3v (operands[0], operands[1], operands[2],
			    GEN_INT (1), GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4859 */
rtx
gen_smmwb (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4864 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smulhisi3_highpart_1 (operands[0], operands[1], operands[2], GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4870 */
rtx
gen_smmwt (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4875 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smulhisi3_highpart_1 (operands[0], operands[1], operands[2], GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4899 */
rtx
gen_smmwb64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4904 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smulhisi3_highpart_64 (operands[0], operands[1], operands[2],
					GEN_INT (0), GEN_INT (2)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4911 */
rtx
gen_smmwt64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4916 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smulhisi3_highpart_64 (operands[0], operands[1], operands[2],
					GEN_INT (1), GEN_INT (3)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4957 */
rtx
gen_smmwb_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4962 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smmw_round_internal (operands[0], operands[1], operands[2], GEN_INT (0)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4968 */
rtx
gen_smmwt_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 4973 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smmw_round_internal (operands[0], operands[1], operands[2], GEN_INT (1)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:4998 */
rtx
gen_smmwb64_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5003 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smmw64_round_internal (operands[0], operands[1], operands[2],
					GEN_INT (0), GEN_INT (2)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5010 */
rtx
gen_smmwt64_round (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5015 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_smmw64_round_internal (operands[0], operands[1], operands[2],
					GEN_INT (1), GEN_INT (3)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5337 */
rtx
gen_ashlv2hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5342 "../../gcc/config/riscv/rvp.md"
{
  if (operands[2] == const0_rtx)
    {
      emit_move_insn (operands[0], operands[1]);
      DONE;
    }
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V2HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5337 */
rtx
gen_ashrv2hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5342 "../../gcc/config/riscv/rvp.md"
{
  if (operands[2] == const0_rtx)
    {
      emit_move_insn (operands[0], operands[1]);
      DONE;
    }
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V2HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5337 */
rtx
gen_lshrv2hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5342 "../../gcc/config/riscv/rvp.md"
{
  if (operands[2] == const0_rtx)
    {
      emit_move_insn (operands[0], operands[1]);
      DONE;
    }
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V2HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5337 */
rtx
gen_ashlv4hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5342 "../../gcc/config/riscv/rvp.md"
{
  if (operands[2] == const0_rtx)
    {
      emit_move_insn (operands[0], operands[1]);
      DONE;
    }
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V4HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5337 */
rtx
gen_ashrv4hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5342 "../../gcc/config/riscv/rvp.md"
{
  if (operands[2] == const0_rtx)
    {
      emit_move_insn (operands[0], operands[1]);
      DONE;
    }
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5337 */
rtx
gen_lshrv4hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5342 "../../gcc/config/riscv/rvp.md"
{
  if (operands[2] == const0_rtx)
    {
      emit_move_insn (operands[0], operands[1]);
      DONE;
    }
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V4HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5383 */
rtx
gen_ashlv4qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5388 "../../gcc/config/riscv/rvp.md"
{
  if (operands[2] == const0_rtx)
    {
      emit_move_insn (operands[0], operands[1]);
      DONE;
    }
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V4QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5383 */
rtx
gen_ashrv4qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5388 "../../gcc/config/riscv/rvp.md"
{
  if (operands[2] == const0_rtx)
    {
      emit_move_insn (operands[0], operands[1]);
      DONE;
    }
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V4QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5383 */
rtx
gen_lshrv4qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5388 "../../gcc/config/riscv/rvp.md"
{
  if (operands[2] == const0_rtx)
    {
      emit_move_insn (operands[0], operands[1]);
      DONE;
    }
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V4QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5383 */
rtx
gen_ashlv8qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5388 "../../gcc/config/riscv/rvp.md"
{
  if (operands[2] == const0_rtx)
    {
      emit_move_insn (operands[0], operands[1]);
      DONE;
    }
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V8QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5383 */
rtx
gen_ashrv8qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5388 "../../gcc/config/riscv/rvp.md"
{
  if (operands[2] == const0_rtx)
    {
      emit_move_insn (operands[0], operands[1]);
      DONE;
    }
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V8QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5383 */
rtx
gen_lshrv8qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5388 "../../gcc/config/riscv/rvp.md"
{
  if (operands[2] == const0_rtx)
    {
      emit_move_insn (operands[0], operands[1]);
      DONE;
    }
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V8QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5538 */
rtx
gen_stasv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5543 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_stasv2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5538 */
rtx
gen_stasv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5543 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_stasv2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5575 */
rtx
gen_stas16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5580 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_stas16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5607 */
rtx
gen_stsav2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5612 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_stsav2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5607 */
rtx
gen_stsav2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5612 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_stsav2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5643 */
rtx
gen_stsa16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5648 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_stsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5695 */
rtx
gen_sunpkd810 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5699 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_sunpkd810_imp (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5705 */
rtx
gen_zunpkd810 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5709 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_zunpkd810_imp (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5748 */
rtx
gen_zunpkd820 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5752 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_zunpkd820_imp (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5759 */
rtx
gen_sunpkd820 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5763 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_sunpkd820_imp (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5802 */
rtx
gen_sunpkd830 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5806 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_sunpkd830_imp (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5812 */
rtx
gen_zunpkd830 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5816 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_zunpkd830_imp (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5836 */
rtx
gen_sunpkd831 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5840 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_sunpkd831_imp (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5846 */
rtx
gen_zunpkd831 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5850 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_zunpkd831_imp (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5889 */
rtx
gen_sunpkd832 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5893 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_sunpkd832_imp (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:5899 */
rtx
gen_zunpkd832 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5903 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_zunpkd832_imp (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6059 */
rtx
gen_ukstasv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6064 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_ukstasv2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6059 */
rtx
gen_ukstasv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6064 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_ukstasv2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6096 */
rtx
gen_ukstas16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6101 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_ukstas16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6130 */
rtx
gen_ukstsav2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6135 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_ukstsav2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6130 */
rtx
gen_ukstsav2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6135 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_ukstsav2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6167 */
rtx
gen_ukstsa16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6172 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_ukstsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6199 */
rtx
gen_urstasv2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6204 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_urstasv2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6199 */
rtx
gen_urstasv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6204 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_urstasv2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6246 */
rtx
gen_urstas16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6251 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_urstas16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6294 */
rtx
gen_urstsav2hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6299 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_urstsav2hi_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6294 */
rtx
gen_urstsav2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6299 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_urstsav2si_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6341 */
rtx
gen_urstsa16_64 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6346 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_urstsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6445 */
rtx
gen_kdmabb16 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6451 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vkdma_internal (operands[0], operands[2], operands[3],
				 GEN_INT (0), GEN_INT (0), GEN_INT (2),
				 GEN_INT (2), operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6459 */
rtx
gen_kdmabt16 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6465 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vkdma_internal (operands[0], operands[2], operands[3],
				 GEN_INT (0), GEN_INT (1), GEN_INT (2),
				 GEN_INT (3), operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6473 */
rtx
gen_kdmatt16 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6479 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_vkdma_internal (operands[0], operands[2], operands[3],
				 GEN_INT (1), GEN_INT (1), GEN_INT (3),
				 GEN_INT (3), operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6552 */
rtx
gen_kmabb32 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6558 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kma32_internal (operands[0], operands[2], operands[3],
				 GEN_INT (0), GEN_INT (0),
				 operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6566 */
rtx
gen_kmabt32 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6572 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kma32_internal (operands[0], operands[2], operands[3],
				 GEN_INT (0), GEN_INT (1),
				 operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6580 */
rtx
gen_kmatt32 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6586 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_kma32_internal (operands[0], operands[2], operands[3],
				 GEN_INT (1), GEN_INT (1),
				 operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6824 */
rtx
gen_revsi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6828 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_revsi_internal (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6824 */
rtx
gen_revdi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6828 "../../gcc/config/riscv/rvp.md"
{
  emit_insn (gen_revdi_internal (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6862 */
rtx
gen_fsr (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6868 "../../gcc/config/riscv/rvp.md"
{
    unsigned HOST_WIDE_INT shamt;
    if (CONST_INT_P (operands[2]))
      {
        shamt = INTVAL (operands[2]) & 63;
        if (shamt == 32)
		  {
            emit_move_insn (operands[0], operands[1]);
            DONE;
          }
        shamt = shamt > 32 ? shamt - 32 : shamt;
        operands[2] = GEN_INT(shamt);
        emit_insn (gen_fsri_rvp (operands[0], operands[1],
                       operands[2], operands[3]));
      }
	else
	  {
		emit_insn (gen_fsr_rvp (operands[0], operands[1], operands[2], operands[3]));
	  }
	DONE;
  }
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6916 */
rtx
gen_movv4qi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6920 "../../gcc/config/riscv/rvp.md"
{
  if (riscv_legitimize_move (V4QImode, operands[0], operands[1]))
    DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6916 */
rtx
gen_movv2hi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6920 "../../gcc/config/riscv/rvp.md"
{
  if (riscv_legitimize_move (V2HImode, operands[0], operands[1]))
    DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6916 */
rtx
gen_movv8qi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6920 "../../gcc/config/riscv/rvp.md"
{
  if (riscv_legitimize_move (V8QImode, operands[0], operands[1]))
    DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6916 */
rtx
gen_movv4hi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6920 "../../gcc/config/riscv/rvp.md"
{
  if (riscv_legitimize_move (V4HImode, operands[0], operands[1]))
    DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/rvp.md:6935 */
rtx
gen_movv2si (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 6939 "../../gcc/config/riscv/rvp.md"
{
  if (riscv_legitimize_move (V2SImode, operands[0], operands[1]))
    DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2596 */
rtx
gen_restore_stack_nonlocal (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2600 "../../gcc/config/riscv/riscv.md"
{
  emit_move_insn (operands[0], operands[1]);
  /* Prevent the following hard fp restore from being moved before the move
     insn above which uses a copy of the soft fp reg.  */
  emit_clobber (gen_rtx_MEM (BLKmode, hard_frame_pointer_rtx));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2609 */
rtx
gen_get_thread_pointersi (rtx operand0)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2613 "../../gcc/config/riscv/riscv.md"
{}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_REG (SImode,
	4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2609 */
rtx
gen_get_thread_pointerdi (rtx operand0)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2613 "../../gcc/config/riscv/riscv.md"
{}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_REG (DImode,
	4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2617 */
rtx
gen_stack_protect_set (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2621 "../../gcc/config/riscv/riscv.md"
{
  machine_mode mode = GET_MODE (operands[0]);
  if (riscv_stack_protector_guard == SSP_TLS)
  {
    rtx reg = gen_rtx_REG (Pmode, riscv_stack_protector_guard_reg);
    rtx offset = GEN_INT (riscv_stack_protector_guard_offset);
    rtx addr = gen_rtx_PLUS (Pmode, reg, offset);
    operands[1] = gen_rtx_MEM (Pmode, addr);
  }

  emit_insn ((mode == DImode
	      ? gen_stack_protect_set_di
	      : gen_stack_protect_set_si) (operands[0], operands[1]));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit (operand0, true);
  emit (operand1, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/riscv.md:2648 */
rtx
gen_stack_protect_test (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2653 "../../gcc/config/riscv/riscv.md"
{
  rtx result;
  machine_mode mode = GET_MODE (operands[0]);

  result = gen_reg_rtx(mode);
  if (riscv_stack_protector_guard == SSP_TLS)
  {
      rtx reg = gen_rtx_REG (Pmode, riscv_stack_protector_guard_reg);
      rtx offset = GEN_INT (riscv_stack_protector_guard_offset);
      rtx addr = gen_rtx_PLUS (Pmode, reg, offset);
      operands[1] = gen_rtx_MEM (Pmode, addr);
  }
  emit_insn ((mode == DImode
		  ? gen_stack_protect_test_di
		  : gen_stack_protect_test_si) (result,
					        operands[0],
					        operands[1]));

  if (mode == DImode)
    emit_jump_insn (gen_cbranchdi4 (gen_rtx_EQ (VOIDmode, result, const0_rtx),
				    result, const0_rtx, operands[2]));
  else
    emit_jump_insn (gen_cbranchsi4 (gen_rtx_EQ (VOIDmode, result, const0_rtx),
				    result, const0_rtx, operands[2]));

  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/sync.md:36 */
rtx
gen_mem_thread_fence (rtx operand0)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 39 "../../gcc/config/riscv/sync.md"
{
  if (INTVAL (operands[0]) != MEMMODEL_RELAXED)
    {
      rtx mem = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
      MEM_VOLATILE_P (mem) = 1;
      emit_insn (gen_mem_thread_fence_1 (mem, operands[0]));
    }
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
  }
  emit (operand0, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/sync.md:121 */
rtx
gen_atomic_compare_and_swapsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5,
	rtx operand6,
	rtx operand7)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[8];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
    operands[6] = operand6;
    operands[7] = operand7;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 131 "../../gcc/config/riscv/sync.md"
{
  emit_insn (gen_atomic_cas_value_strongsi (operands[1], operands[2],
						operands[3], operands[4],
						operands[6], operands[7]));

  rtx compare = operands[1];
  if (operands[3] != const0_rtx)
    {
      rtx difference = gen_rtx_MINUS (SImode, operands[1], operands[3]);
      compare = gen_reg_rtx (SImode);
      emit_insn (gen_rtx_SET (compare, difference));
    }

  if (word_mode != SImode)
    {
      rtx reg = gen_reg_rtx (word_mode);
      emit_insn (gen_rtx_SET (reg, gen_rtx_SIGN_EXTEND (word_mode, compare)));
      compare = reg;
    }

  emit_insn (gen_rtx_SET (operands[0], gen_rtx_EQ (SImode, compare, const0_rtx)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
    operand4 = operands[4];
    (void) operand4;
    operand5 = operands[5];
    (void) operand5;
    operand6 = operands[6];
    (void) operand6;
    operand7 = operands[7];
    (void) operand7;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, true);
  emit (operand4, true);
  emit (operand5, true);
  emit (operand6, true);
  emit (operand7, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/sync.md:121 */
rtx
gen_atomic_compare_and_swapdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5,
	rtx operand6,
	rtx operand7)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[8];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
    operands[6] = operand6;
    operands[7] = operand7;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 131 "../../gcc/config/riscv/sync.md"
{
  emit_insn (gen_atomic_cas_value_strongdi (operands[1], operands[2],
						operands[3], operands[4],
						operands[6], operands[7]));

  rtx compare = operands[1];
  if (operands[3] != const0_rtx)
    {
      rtx difference = gen_rtx_MINUS (DImode, operands[1], operands[3]);
      compare = gen_reg_rtx (DImode);
      emit_insn (gen_rtx_SET (compare, difference));
    }

  if (word_mode != DImode)
    {
      rtx reg = gen_reg_rtx (word_mode);
      emit_insn (gen_rtx_SET (reg, gen_rtx_SIGN_EXTEND (word_mode, compare)));
      compare = reg;
    }

  emit_insn (gen_rtx_SET (operands[0], gen_rtx_EQ (SImode, compare, const0_rtx)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
    operand4 = operands[4];
    (void) operand4;
    operand5 = operands[5];
    (void) operand5;
    operand6 = operands[6];
    (void) operand6;
    operand7 = operands[7];
    (void) operand7;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, true);
  emit (operand4, true);
  emit (operand5, true);
  emit (operand6, true);
  emit (operand7, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/sync.md:155 */
rtx
gen_atomic_test_and_set (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 160 "../../gcc/config/riscv/sync.md"
{
  /* We have no QImode atomics, so use the address LSBs to form a mask,
     then use an aligned SImode atomic. */
  rtx result = operands[0];
  rtx mem = operands[1];
  rtx model = operands[2];
  rtx addr = force_reg (Pmode, XEXP (mem, 0));

  rtx aligned_addr = gen_reg_rtx (Pmode);
  emit_move_insn (aligned_addr, gen_rtx_AND (Pmode, addr, GEN_INT (-4)));

  rtx aligned_mem = change_address (mem, SImode, aligned_addr);
  set_mem_alias_set (aligned_mem, 0);

  rtx offset = gen_reg_rtx (SImode);
  emit_move_insn (offset, gen_rtx_AND (SImode, gen_lowpart (SImode, addr),
				       GEN_INT (3)));

  rtx tmp = gen_reg_rtx (SImode);
  emit_move_insn (tmp, GEN_INT (1));

  rtx shmt = gen_reg_rtx (SImode);
  emit_move_insn (shmt, gen_rtx_ASHIFT (SImode, offset, GEN_INT (3)));

  rtx word = gen_reg_rtx (SImode);
  emit_move_insn (word, gen_rtx_ASHIFT (SImode, tmp,
					gen_lowpart (QImode, shmt)));

  tmp = gen_reg_rtx (SImode);
  emit_insn (gen_atomic_fetch_orsi (tmp, aligned_mem, word, model));

  emit_move_insn (gen_lowpart (SImode, result),
		  gen_rtx_LSHIFTRT (SImode, tmp,
				    gen_lowpart (QImode, shmt)));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc/config/riscv/peephole.md:22 */
extern rtx_insn *gen_peephole2_1 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_1 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_1 (peephole.md:22)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 38 "../../gcc/config/riscv/peephole.md"
{
  operands[5] = GEN_INT (INTVAL (operands[2]) - INTVAL (operands[5]));
}
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (operand4,
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 791:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 790:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 254:
    case 253:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 1);
      break;

    case 841:
    case 840:
    case 837:
    case 836:
    case 833:
    case 832:
    case 827:
    case 826:
    case 825:
    case 824:
    case 819:
    case 818:
    case 815:
    case 814:
    case 767:
    case 248:
    case 207:
    case 206:
    case 203:
    case 202:
    case 199:
    case 198:
    case 195:
    case 194:
    case 188:
    case 186:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 843:
    case 842:
    case 839:
    case 838:
    case 835:
    case 834:
    case 831:
    case 830:
    case 829:
    case 828:
    case 821:
    case 820:
    case 817:
    case 816:
    case 768:
    case 249:
    case 209:
    case 208:
    case 205:
    case 204:
    case 201:
    case 200:
    case 197:
    case 196:
    case 189:
    case 187:
    case 180:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    default:
      gcc_unreachable ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 791:
    case 790:
    case 841:
    case 840:
    case 837:
    case 836:
    case 833:
    case 832:
    case 827:
    case 826:
    case 825:
    case 824:
    case 819:
    case 818:
    case 815:
    case 814:
    case 767:
    case 248:
    case 207:
    case 206:
    case 203:
    case 202:
    case 199:
    case 198:
    case 195:
    case 194:
    case 188:
    case 186:
    case 843:
    case 842:
    case 839:
    case 838:
    case 835:
    case 834:
    case 831:
    case 830:
    case 829:
    case 828:
    case 821:
    case 820:
    case 817:
    case 816:
    case 768:
    case 249:
    case 209:
    case 208:
    case 205:
    case 204:
    case 201:
    case 200:
    case 197:
    case 196:
    case 189:
    case 187:
    case 180:
      return 0;

    case 254:
    case 253:
      return 1;

    default:
      gcc_unreachable ();
    }
}

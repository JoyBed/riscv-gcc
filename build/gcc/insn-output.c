/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "flags.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "memmodel.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "regs.h"
#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char *
output_3 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 519 "../../gcc/config/riscv/riscv.md"
{ return TARGET_64BIT ? "add%i2w\t%0,%1,%2" : "add%i2\t%0,%1,%2"; }
}

static const char *
output_9 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 587 "../../gcc/config/riscv/riscv.md"
{ return TARGET_64BIT ? "sub\t%0,%z1,%2" : "sub64\t%0,%z1,%2"; }
}

static const char *
output_10 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 596 "../../gcc/config/riscv/riscv.md"
{ return TARGET_64BIT ? "subw\t%0,%z1,%2" : "sub\t%0,%z1,%2"; }
}

static const char *
output_14 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 633 "../../gcc/config/riscv/riscv.md"
{ return TARGET_64BIT ? "negw\t%0,%1" : "neg\t%0,%1"; }
}

static const char *
output_19 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 678 "../../gcc/config/riscv/riscv.md"
{ return TARGET_64BIT ? "mulw\t%0,%1,%2" : "mul\t%0,%1,%2"; }
}

static const char *
output_29 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 864 "../../gcc/config/riscv/riscv.md"
{ return TARGET_64BIT ? "div%i2w\t%0,%1,%2" : "div%i2\t%0,%1,%2"; }
}

static const char *
output_30 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 864 "../../gcc/config/riscv/riscv.md"
{ return TARGET_64BIT ? "divu%i2w\t%0,%1,%2" : "divu%i2\t%0,%1,%2"; }
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 864 "../../gcc/config/riscv/riscv.md"
{ return TARGET_64BIT ? "rem%i2w\t%0,%1,%2" : "rem%i2\t%0,%1,%2"; }
}

static const char *
output_32 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 864 "../../gcc/config/riscv/riscv.md"
{ return TARGET_64BIT ? "remu%i2w\t%0,%1,%2" : "remu%i2\t%0,%1,%2"; }
}

static const char *
output_43 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 907 "../../gcc/config/riscv/riscv.md"
{
    return "fsqrt.s\t%0,%1";
}
}

static const char *
output_44 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 907 "../../gcc/config/riscv/riscv.md"
{
    return "fsqrt.d\t%0,%1";
}
}

static const char * const output_84[] = {
  "#",
  "lwu\t%0,%1",
};

static const char * const output_85[] = {
  "#",
  "lhu\t%0,%1",
};

static const char * const output_86[] = {
  "#",
  "lhu\t%0,%1",
};

static const char * const output_87[] = {
  "andi\t%0,%1,0xff",
  "lbu\t%0,%1",
};

static const char * const output_88[] = {
  "andi\t%0,%1,0xff",
  "lbu\t%0,%1",
};

static const char * const output_89[] = {
  "andi\t%0,%1,0xff",
  "lbu\t%0,%1",
};

static const char * const output_90[] = {
  "sext.w\t%0,%1",
  "lw\t%0,%1",
};

static const char * const output_91[] = {
  "#",
  "lb\t%0,%1",
};

static const char * const output_92[] = {
  "#",
  "lb\t%0,%1",
};

static const char * const output_93[] = {
  "#",
  "lb\t%0,%1",
};

static const char * const output_94[] = {
  "#",
  "lh\t%0,%1",
};

static const char * const output_95[] = {
  "#",
  "lh\t%0,%1",
};

static const char * const output_96[] = {
  "#",
  "lh\t%0,%1",
};

static const char *
output_134 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1416 "../../gcc/config/riscv/riscv.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_135 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1426 "../../gcc/config/riscv/riscv.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_136 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1446 "../../gcc/config/riscv/riscv.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_137 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1471 "../../gcc/config/riscv/riscv.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_138 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1484 "../../gcc/config/riscv/riscv.md"
{ return TARGET_64BIT ? "add%i2w\t%0,%1,%2" : "add%i2\t%0,%1,%2"; }
}

static const char *
output_139 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1484 "../../gcc/config/riscv/riscv.md"
{ return TARGET_64BIT ? "add%i2w\t%0,%1,%2" : "add%i2\t%0,%1,%2"; }
}

static const char *
output_142 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1513 "../../gcc/config/riscv/riscv.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_143 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1534 "../../gcc/config/riscv/riscv.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_144 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1544 "../../gcc/config/riscv/riscv.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_145 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1567 "../../gcc/config/riscv/riscv.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_146 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1577 "../../gcc/config/riscv/riscv.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_147 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1587 "../../gcc/config/riscv/riscv.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_150 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1661 "../../gcc/config/riscv/riscv.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (SImode) - 1));

  return TARGET_64BIT ? "sll%i2w\t%0,%1,%2" : "sll%i2\t%0,%1,%2";
}
}

static const char *
output_151 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1661 "../../gcc/config/riscv/riscv.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (SImode) - 1));

  return TARGET_64BIT ? "sra%i2w\t%0,%1,%2" : "sra%i2\t%0,%1,%2";
}
}

static const char *
output_152 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1661 "../../gcc/config/riscv/riscv.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (SImode) - 1));

  return TARGET_64BIT ? "srl%i2w\t%0,%1,%2" : "srl%i2\t%0,%1,%2";
}
}

static const char *
output_159 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1716 "../../gcc/config/riscv/riscv.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (DImode) - 1));

  return "sll%i2\t%0,%1,%2";
}
}

static const char *
output_160 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1716 "../../gcc/config/riscv/riscv.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (DImode) - 1));

  return "sra%i2\t%0,%1,%2";
}
}

static const char *
output_161 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1716 "../../gcc/config/riscv/riscv.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (DImode) - 1));

  return "srl%i2\t%0,%1,%2";
}
}

static const char *
output_168 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1772 "../../gcc/config/riscv/riscv.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sll%i2w\t%0,%1,%2";
}
}

static const char *
output_169 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1772 "../../gcc/config/riscv/riscv.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sra%i2w\t%0,%1,%2";
}
}

static const char *
output_170 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1772 "../../gcc/config/riscv/riscv.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "srl%i2w\t%0,%1,%2";
}
}

static const char *
output_177 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1833 "../../gcc/config/riscv/riscv.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "srliw\t%0,%1,%2";
}
}

static const char *
output_178 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1849 "../../gcc/config/riscv/riscv.md"
{
  return "srliw\t%0,%1,%3";
}
}

static const char *
output_179 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1862 "../../gcc/config/riscv/riscv.md"
{
  return "srliw\t%0,%1,31";
}
}

static const char * const output_183[] = {
  "b%C5 %1,%z2,1f; mv %0,%z4; 1: # movcc",
  "b%C5 %1,%z2,1f; li %0,%4; 1: # movcc",
};

static const char * const output_184[] = {
  "b%C5 %1,%z2,1f; mv %0,%z4; 1: # movcc",
  "b%C5 %1,%z2,1f; li %0,%4; 1: # movcc",
};

static const char * const output_185[] = {
  "b%C5 %1,%z2,1f; mv %0,%z4; 1: # movcc",
  "b%C5 %1,%z2,1f; li %0,%4; 1: # movcc",
};

static const char *
output_234 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2204 "../../gcc/config/riscv/riscv.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt%i2\t%0,%1,%2";
}
}

static const char *
output_235 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2204 "../../gcc/config/riscv/riscv.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt%i2u\t%0,%1,%2";
}
}

static const char *
output_236 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2204 "../../gcc/config/riscv/riscv.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt%i2\t%0,%1,%2";
}
}

static const char *
output_237 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2204 "../../gcc/config/riscv/riscv.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt%i2u\t%0,%1,%2";
}
}

static const char *
output_238 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2204 "../../gcc/config/riscv/riscv.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt%i2\t%0,%1,%2";
}
}

static const char *
output_239 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2204 "../../gcc/config/riscv/riscv.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt%i2u\t%0,%1,%2";
}
}

static const char *
output_246 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2326 "../../gcc/config/riscv/riscv.md"
{
  return riscv_output_return ();
}
}

static const char * const output_251[] = {
  "jr\t%0",
  "tail\t%0",
  "tail\t%0@plt",
};

static const char * const output_252[] = {
  "jr\t%1",
  "tail\t%1",
  "tail\t%1@plt",
};

static const char * const output_253[] = {
  "jalr\t%0",
  "call\t%0",
  "call\t%0@plt",
};

static const char * const output_254[] = {
  "jalr\t%1",
  "call\t%1",
  "call\t%1@plt",
};

static const char * const output_363[] = {
  "bitrev\t%0, %1, %2",
  "bitrevi\t%0, %1, %2",
};

static const char * const output_364[] = {
  "bitrev\t%0, %1, %2",
  "bitrevi\t%0, %1, %2",
};

static const char *
output_380 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 323 "../../gcc/config/riscv/rvp.md"
{ return TARGET_ZBPBO ? "clz\t%0, %1" : "clz32\t%0, %1"; }
}

static const char * const output_415[] = {
  "insb\t%0, %1, 0",
  "insb\t%0, %1, 1",
  "insb\t%0, %1, 2",
  "insb\t%0, %1, 3",
};

static const char *
output_416 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1188 "../../gcc/config/riscv/rvp.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "insb\t%0, %1, %3";
}
}

static const char * const output_417[] = {
  "kdmbb\t%0, %1, %2",
  "kdmbt\t%0, %1, %2",
  "kdmtt\t%0, %1, %2",
  "kdmbt\t%0, %2, %1",
};

static const char * const output_418[] = {
  "kdmabb\t%0, %1, %2",
  "kdmabt\t%0, %1, %2",
  "kdmatt\t%0, %1, %2",
  "kdmabt\t%0, %2, %1",
};

static const char * const output_419[] = {
  "khmbb\t%0, %1, %2",
  "khmbt\t%0, %1, %2",
  "khmtt\t%0, %1, %2",
  "khmbt\t%0, %2, %1",
};

static const char * const output_420[] = {
  "kmabb\t%0, %1, %2",
  "kmabt\t%0, %1, %2",
  "kmatt\t%0, %1, %2",
  "kmabt\t%0, %2, %1",
};

static const char * const output_421[] = {
  "kmabb\t%0, %1, %2",
  "kmabt\t%0, %1, %2",
  "kmatt\t%0, %1, %2",
  "kmabt\t%0, %2, %1",
};

static const char * const output_449[] = {
  "kmmawb\t%0, %1, %2",
  "kmmawt\t%0, %1, %2",
  "kmmawb2\t%0, %1, %2",
  "kmmawt2\t%0, %1, %2",
};

static const char * const output_450[] = {
  "kmmawb.u\t%0, %1, %2",
  "kmmawt.u\t%0, %1, %2",
  "kmmawb2.u\t%0, %1, %2",
  "kmmawt2.u\t%0, %1, %2",
};

static const char * const output_451[] = {
  "kmmawb\t%0, %1, %2",
  "kmmawt\t%0, %1, %2",
  "kmmawb2\t%0, %1, %2",
  "kmmawt2\t%0, %1, %2",
};

static const char * const output_452[] = {
  "kmmawb.u\t%0, %1, %2",
  "kmmawt.u\t%0, %1, %2",
  "kmmawb2.u\t%0, %1, %2",
  "kmmawt2.u\t%0, %1, %2",
};

static const char * const output_457[] = {
  "kmmwb2.u\t%0, %1, %2",
  "kmmwt2.u\t%0, %1, %2",
};

static const char * const output_458[] = {
  "kmmwb2.u\t%0, %1, %2",
  "kmmwt2.u\t%0, %1, %2",
};

static const char * const output_464[] = {
  "kmmwb2\t%0, %1, %2",
  "kmmwt2\t%0, %1, %2",
};

static const char * const output_465[] = {
  "kmmwb2\t%0, %1, %2",
  "kmmwt2\t%0, %1, %2",
};

static const char * const output_466[] = {
  "kslliw\t%0, %1, %2",
  "ksllw\t%0, %1, %2",
};

static const char * const output_467[] = {
  "kslli8\t%0, %1, %2",
  "ksll8\t%0, %1, %2",
};

static const char * const output_468[] = {
  "kslli8\t%0, %1, %2",
  "ksll8\t%0, %1, %2",
};

static const char * const output_469[] = {
  "kslli16\t%0, %1, %2",
  "ksll16\t%0, %1, %2",
};

static const char * const output_470[] = {
  "kslli16\t%0, %1, %2",
  "ksll16\t%0, %1, %2",
};

static const char * const output_471[] = {
  "kslli32\t%0, %1, %2",
  "ksll32\t%0, %1, %2",
};

static const char *
output_508 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3111 "../../gcc/config/riscv/rvp.md"
{
    const char *pats[] = {
		TARGET_ZBPBO ? "pack\t%0, %2, %1" : "pkbb16\t%0, %2, %1",
        "pktb16\t%0, %2, %1",
        TARGET_ZBPBO ? "packu\t%0, %2, %1" : "pktt16\t%0, %2, %1",
        "pkbt16\t%0, %2, %1",
        TARGET_ZBPBO ? "pack\t%0, %1, %2" : "pkbb16\t%0, %1, %2",
        "pkbt16\t%0, %1, %2",
        TARGET_ZBPBO ? "packu\t%0, %1, %2" : "pktt16\t%0, %1, %2",
        "pktb16\t%0, %1, %2" };
    return pats[which_alternative];
  }
}

static const char *
output_509 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3111 "../../gcc/config/riscv/rvp.md"
{
    const char *pats[] = {
		TARGET_ZBPBO ? "pack\t%0, %2, %1" : "pkbb32\t%0, %2, %1",
        "pktb32\t%0, %2, %1",
        TARGET_ZBPBO ? "packu\t%0, %2, %1" : "pktt32\t%0, %2, %1",
        "pkbt32\t%0, %2, %1",
        TARGET_ZBPBO ? "pack\t%0, %1, %2" : "pkbb32\t%0, %1, %2",
        "pkbt32\t%0, %1, %2",
        TARGET_ZBPBO ? "packu\t%0, %1, %2" : "pktt32\t%0, %1, %2",
        "pktb32\t%0, %1, %2" };
    return pats[which_alternative];
  }
}

static const char * const output_566[] = {
  "smalbb\t%0, %1, %2",
  "smalbt\t%0, %1, %2",
  "smaltt\t%0, %1, %2",
  "smalbt\t%0, %2, %1",
};

static const char * const output_567[] = {
  "smalbb\t%0, %1, %2",
  "smalbt\t%0, %1, %2",
  "smaltt\t%0, %1, %2",
  "smalbt\t%0, %2, %1",
};

static const char * const output_614[] = {
  "smbb16\t%0, %1, %2",
  "smbt16\t%0, %1, %2",
  "smtt16\t%0, %1, %2",
  "smbt16\t%0, %2, %1",
};

static const char * const output_615[] = {
  "smbb16\t%0, %1, %2",
  "smbt16\t%0, %1, %2",
  "smtt16\t%0, %1, %2",
};

static const char * const output_616[] = {
  "smbb32\t%0, %1, %2",
  "smbt32\t%0, %1, %2",
  "smtt32\t%0, %1, %2",
  "smbt32\t%0, %2, %1",
};

static const char * const output_630[] = {
  "smmwb\t%0, %1, %2",
  "smmwt\t%0, %1, %2",
};

static const char * const output_631[] = {
  "smmwb\t%0, %1, %2",
  "smmwt\t%0, %1, %2",
};

static const char * const output_632[] = {
  "smmwb.u\t%0, %1, %2",
  "smmwt.u\t%0, %1, %2",
};

static const char * const output_633[] = {
  "smmwb.u\t%0, %1, %2",
  "smmwt.u\t%0, %1, %2",
};

static const char * const output_652[] = {
  "slli32\t%0, %1, %2",
  "sll32\t%0, %1, %2",
};

static const char * const output_653[] = {
  "srai32\t%0, %1, %2",
  "sra32\t%0, %1, %2",
};

static const char * const output_654[] = {
  "srli32\t%0, %1, %2",
  "srl32\t%0, %1, %2",
};

static const char * const output_655[] = {
  "srli16\t%0, %1, %2",
  "srl16\t%0, %1, %2",
};

static const char * const output_656[] = {
  "srli16\t%0, %1, %2",
  "srl16\t%0, %1, %2",
};

static const char * const output_657[] = {
  "slli16\t%0, %1, %2",
  "sll16\t%0, %1, %2",
};

static const char * const output_658[] = {
  "slli16\t%0, %1, %2",
  "sll16\t%0, %1, %2",
};

static const char * const output_659[] = {
  "srai16\t%0, %1, %2",
  "sra16\t%0, %1, %2",
};

static const char * const output_660[] = {
  "srai16\t%0, %1, %2",
  "sra16\t%0, %1, %2",
};

static const char * const output_661[] = {
  "srai8\t%0, %1, %2",
  "sra8\t%0, %1, %2",
};

static const char * const output_662[] = {
  "srai8\t%0, %1, %2",
  "sra8\t%0, %1, %2",
};

static const char * const output_663[] = {
  "srli8\t%0, %1, %2",
  "srl8\t%0, %1, %2",
};

static const char * const output_664[] = {
  "srli8\t%0, %1, %2",
  "srl8\t%0, %1, %2",
};

static const char * const output_665[] = {
  "slli8\t%0, %1, %2",
  "sll8\t%0, %1, %2",
};

static const char * const output_666[] = {
  "slli8\t%0, %1, %2",
  "sll8\t%0, %1, %2",
};

static const char * const output_667[] = {
  "srai8.u\t%0, %1, %2",
  "sra8.u\t%0, %1, %2",
};

static const char * const output_668[] = {
  "srai8.u\t%0, %1, %2",
  "sra8.u\t%0, %1, %2",
};

static const char * const output_669[] = {
  "srai16.u\t%0, %1, %2",
  "sra16.u\t%0, %1, %2",
};

static const char * const output_670[] = {
  "srai16.u\t%0, %1, %2",
  "sra16.u\t%0, %1, %2",
};

static const char * const output_671[] = {
  "srai32.u\t%0, %1, %2",
  "sra32.u\t%0, %1, %2",
};

static const char * const output_672[] = {
  "srli8.u\t%0, %1, %2",
  "srl8.u\t%0, %1, %2",
};

static const char * const output_673[] = {
  "srli8.u\t%0, %1, %2",
  "srl8.u\t%0, %1, %2",
};

static const char * const output_674[] = {
  "srli16.u\t%0, %1, %2",
  "srl16.u\t%0, %1, %2",
};

static const char * const output_675[] = {
  "srli16.u\t%0, %1, %2",
  "srl16.u\t%0, %1, %2",
};

static const char * const output_676[] = {
  "srli32.u\t%0, %1, %2",
  "srl32.u\t%0, %1, %2",
};

static const char * const output_678[] = {
  "srai.u\t%0, %1, %2",
  "sra.u\t%0, %1, %2",
};

static const char * const output_679[] = {
  "srai.u\t%0, %1, %2",
  "sra.u\t%0, %1, %2",
};

static const char *
output_706 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5945 "../../gcc/config/riscv/rvp.md"
{ return TARGET_ZBPBO ? "rev8.h\t%0, %1" : "swap8\t%0, %1"; }
}

static const char *
output_707 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5953 "../../gcc/config/riscv/rvp.md"
{ return TARGET_ZBPBO ? "rev8.h\t%0, %1" : "swap8\t%0, %1"; }
}

static const char * const output_736[] = {
  "wext\t%0, %1, %2",
  "wexti\t%0, %1, %2",
};

static const char * const output_737[] = {
  "wext\t%0, %1, %2",
  "wexti\t%0, %1, %2",
};

static const char * const output_741[] = {
  "kdmabb16\t%0, %1, %2",
  "kdmabt16\t%0, %1, %2",
  "kdmatt16\t%0, %1, %2",
  "kdmabt16\t%0, %2, %1",
};

static const char * const output_745[] = {
  "kmabb32\t%0, %1, %2",
  "kmabt32\t%0, %1, %2",
  "kmatt32\t%0, %1, %2",
  "kmabt32\t%0, %2, %1",
};

static const char *
output_760 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6931 "../../gcc/config/riscv/rvp.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_761 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6931 "../../gcc/config/riscv/rvp.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_762 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6931 "../../gcc/config/riscv/rvp.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_763 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6931 "../../gcc/config/riscv/rvp.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char *
output_764 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6950 "../../gcc/config/riscv/rvp.md"
{ return riscv_output_move (operands[0], operands[1]); }
}

static const char * const output_814[] = {
  "flw\t%0,%1,%2",
  "lw\t%0,%1",
};

static const char * const output_815[] = {
  "fld\t%0,%1,%2",
  "ld\t%0,%1",
};

static const char * const output_816[] = {
  "flw\t%0,%1,%2",
  "lw\t%0,%1",
};

static const char * const output_817[] = {
  "fld\t%0,%1,%2",
  "ld\t%0,%1",
};

static const char * const output_832[] = {
  "fsw\t%1,%0,%2",
  "sw\t%1,%0,%2",
};

static const char * const output_833[] = {
  "fsd\t%1,%0,%2",
  "sd\t%1,%0,%2",
};

static const char * const output_834[] = {
  "fsw\t%1,%0,%2",
  "sw\t%1,%0,%2",
};

static const char * const output_835[] = {
  "fsd\t%1,%0,%2",
  "sd\t%1,%0,%2",
};



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "r,I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "r,I",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "r,I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "r,I",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "r,I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "r,I",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    symbolic_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    symbolic_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    symbolic_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    symbolic_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    symbolic_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    symbolic_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    symbolic_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    symbolic_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,*f,*f,*r,*f,*m",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "r,i,m,r,*J*r,*m,*f,*f,*f",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,*f,*f,*r,*f,*m",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "r,T,m,rJ,*r*J,*m,*f,*f,*f",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,*f,*f,*r,*m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "r,T,m,rJ,*r*J,*m,*f,*f",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,*f,*r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "r,T,m,rJ,*r*J,*f",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "r,I",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "r,I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,*f,*r",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "r,I,m,rJ,*r*J,*f",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,m,*f,*r,*r,*r,*m",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "f,G,m,f,G,*r,*f,*G*r,*m,*r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "Gr,m,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,m,*r,*r,*m",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "f,G,m,f,G,*r*G,*m,*r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,m,*f,*r,*r,*r,*m",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "f,G,m,f,G,*r,*f,*r*G,*m,*r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "rG,m,rG",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "rI",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "rI",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "rI",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "I",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    order_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    order_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ,rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    sfb_alu_operand,
    "rJ,IL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    order_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ,rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    sfb_alu_operand,
    "rJ,IL",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    order_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ,rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    sfb_alu_operand,
    "rJ,IL",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    order_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    equality_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    branch_on_bit_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    equality_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    branch_on_bit_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    fp_native_comparison,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    fp_native_comparison,
    "",
    E_DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    fp_native_comparison,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    fp_native_comparison,
    "",
    E_DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "rI",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "rI",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "rI",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    sle_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    sle_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    sle_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    pmode_register_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    call_insn_operand,
    "j,S,U",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "j,S,U",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "l,S,U",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    gpr_save_operation,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    csr_operand,
    "rK",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rimm5u_operand,
    "r,u05",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    rimm6u_operand,
    "r,u06",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r,r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,0",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_1_2_4_8_operand,
    "C01,C02,C04,C08",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    pwr_7_operand,
    "D07",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C00,C01,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01,C01,C00",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C00,C01,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_2_3_operand,
    "C02,C02,C03,C03",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01,C01,C00",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_2_3_operand,
    "C02,C03,C03,C02",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01,C00,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_15_16_operand,
    "C16,C16,C15,C15",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01,C00,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_2_3_operand,
    "C02,C03,C02,C03",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_15_16_operand,
    "C16,C16,C15,C15",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_2_3_operand,
    "C02,C03",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rimm5u_operand,
    "Iu05,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    rimm3u_operand,
    "u03,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    rimm3u_operand,
    "u03,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    rimm4u_operand,
    "u04,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    rimm4u_operand,
    "u04,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    rimm5u_operand,
    "u05,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm3u_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm3u_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm3u_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm3u_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm3u_operand,
    "I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r,r,r,r,r,r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r,r,r,r,r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r,r,r,r,r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_1_2_operand,
    "C01,C01,C01,C01,C02,C02,C02,C02",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C00,C01,C01,C00,C00,C01,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01,C01,C00,C00,C01,C01,C00",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r,r,r,r,r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r,r,r,r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r,r,r,r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_1_2_operand,
    "C01,C01,C01,C01,C02,C02,C02,C02",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C00,C01,C01,C00,C00,C01,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01,C01,C00,C00,C01,C01,C00",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    imm3u_operand,
    "u03",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm3u_operand,
    "u03",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    imm4u_operand,
    "u04",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm4u_operand,
    "u04",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C00,C01,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01,C01,C00",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C00,C01,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01,C01,C00",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_2_3_operand,
    "C02,C02,C03,C03",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_2_3_operand,
    "C02,C03,C03,C02",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm2u_operand,
    "C00,C00,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm2u_operand,
    "C02,C02,C03",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm2u_operand,
    "C00,C01,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm2u_operand,
    "C02,C03,C03",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C00,C01,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01,C01,C00",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    rimm3u_operand,
    "u03,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm5u_operand,
    "u05",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rimm5u_operand,
    "u05,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    rimm6u_operand,
    "u06,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    rimm5u_operand,
    "r,u05",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    rimm5u_operand,
    "r,u05",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C00,C01,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01,C01,C00",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_2_3_operand,
    "C02,C02,C03,C03",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_2_3_operand,
    "C02,C03,C03,C02",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,0",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C00,C01,C01",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_0_1_operand,
    "C00,C01,C01,C00",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    fsr_shamt_imm,
    "u05",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,*f,*f,*r,*m",
    E_V4QImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "r,T,m,rJ,*r*J,*m,*f,*f",
    E_V4QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,*f,*f,*r,*m",
    E_V2HImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "r,T,m,rJ,*r*J,*m,*f,*f",
    E_V2HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,*f,*f,*r,*m",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "r,T,m,rJ,*r*J,*m,*f,*f",
    E_V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,*f,*f,*r,*m",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "r,T,m,rJ,*r*J,*m,*f,*f",
    E_V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,*f,*f,*r,*f,*m",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "r,T,m,rJ,*r*J,*m,*f,*f,*f",
    E_V2SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    0,
    "",
    E_BLKmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=A",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=A",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+A",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+A",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+A",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+A",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+A",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+A",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+A",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=&r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+A",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,*r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,*r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,X",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,*r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,X",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,*r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,X",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "rJ",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,*r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,*r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,*r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,*r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    absolute_symbolic_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    E_TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    pmode_register_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    pmode_register_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    sfb_alu_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    sfb_alu_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    fp_branch_comparison,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    fp_branch_comparison,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    order_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    order_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    fp_scc_comparison,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    fp_scc_comparison,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    E_DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_insb64_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    rimm4u_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    rimm4u_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    rimm3u_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    rimm3u_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "r,I",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_V4QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_V2HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+A",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* <internal>:0 */
  {
    "*placeholder_for_nothing",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:505 */
  {
    "addsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fadd.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsf3 },
    &operand_data[1],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:505 */
  {
    "adddf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fadd.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adddf3 },
    &operand_data[4],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:514 */
  {
    "addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_3 },
#else
    { 0, 0, output_3 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:535 */
  {
    "*adddi_rv64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[10],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:544 */
  {
    "*addsi3_extended",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add%i2w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[13],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:554 */
  {
    "*addsi3_extended2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add%i2w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[16],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:573 */
  {
    "subsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsub.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsf3 },
    &operand_data[1],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:573 */
  {
    "subdf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsub.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdf3 },
    &operand_data[4],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:582 */
  {
    "subdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_9 },
#else
    { 0, 0, output_9 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdi3 },
    &operand_data[20],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:591 */
  {
    "subsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_10 },
#else
    { 0, 0, output_10 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3 },
    &operand_data[23],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:600 */
  {
    "*subsi3_extended",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subw\t%0,%z1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[26],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:610 */
  {
    "*subsi3_extended2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subw\t%0,%z1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[29],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:621 */
  {
    "negdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negdi2 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:629 */
  {
    "negsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_14 },
#else
    { 0, 0, output_14 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negsi2 },
    &operand_data[35],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:637 */
  {
    "*negsi2_extended",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "negw\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:646 */
  {
    "*negsi2_extended2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "negw\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[39],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:664 */
  {
    "mulsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsf3 },
    &operand_data[1],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:664 */
  {
    "muldf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_muldf3 },
    &operand_data[4],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:673 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_19 },
#else
    { 0, 0, output_19 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:682 */
  {
    "muldi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_muldi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:691 */
  {
    "*mulsi3_extended",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:701 */
  {
    "*mulsi3_extended2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[51],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:738 */
  {
    "muldi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_muldi3_highpart },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:738 */
  {
    "umuldi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umuldi3_highpart },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:769 */
  {
    "usmuldi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhsu\t%0,%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usmuldi3_highpart },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:806 */
  {
    "mulsi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulh\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3_highpart },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:806 */
  {
    "umulsi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhu\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsi3_highpart },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:837 */
  {
    "usmulsi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhsu\t%0,%2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usmulsi3_highpart },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:859 */
  {
    "divsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_29 },
#else
    { 0, 0, output_29 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:859 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_30 },
#else
    { 0, 0, output_30 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:859 */
  {
    "modsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_31 },
#else
    { 0, 0, output_31 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_modsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:859 */
  {
    "umodsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_32 },
#else
    { 0, 0, output_32 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umodsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:868 */
  {
    "divdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "div%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divdi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:868 */
  {
    "udivdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "divu%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivdi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:868 */
  {
    "moddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rem%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_moddi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:868 */
  {
    "umoddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "remu%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umoddi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:877 */
  {
    "*divsi3_extended",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "div%i2w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:877 */
  {
    "*udivsi3_extended",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "divu%i2w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:877 */
  {
    "*modsi3_extended",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rem%i2w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:877 */
  {
    "*umodsi3_extended",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "remu%i2w\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:887 */
  {
    "divsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdiv.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsf3 },
    &operand_data[1],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:887 */
  {
    "divdf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdiv.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divdf3 },
    &operand_data[4],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:903 */
  {
    "sqrtsf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_43 },
#else
    { 0, 0, output_43 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sqrtsf2 },
    &operand_data[1],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:903 */
  {
    "sqrtdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_44 },
#else
    { 0, 0, output_44 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sqrtdf2 },
    &operand_data[4],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:916 */
  {
    "fmasf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmadd.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fmasf4 },
    &operand_data[55],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:916 */
  {
    "fmadf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmadd.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fmadf4 },
    &operand_data[59],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:927 */
  {
    "fmssf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsub.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fmssf4 },
    &operand_data[55],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:927 */
  {
    "fmsdf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsub.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fmsdf4 },
    &operand_data[59],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:938 */
  {
    "fnmssf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmadd.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fnmssf4 },
    &operand_data[55],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:938 */
  {
    "fnmsdf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmadd.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fnmsdf4 },
    &operand_data[59],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:950 */
  {
    "fnmasf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsub.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fnmasf4 },
    &operand_data[55],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:950 */
  {
    "fnmadf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsub.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fnmadf4 },
    &operand_data[59],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:962 */
  {
    "*fmasf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmadd.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[55],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:962 */
  {
    "*fmadf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmadd.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[59],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:975 */
  {
    "*fmssf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsub.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[55],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:975 */
  {
    "*fmsdf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsub.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[59],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:988 */
  {
    "*fnmssf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmadd.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[55],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:988 */
  {
    "*fnmsdf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmadd.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[59],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1001 */
  {
    "*fnmasf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsub.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[55],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1001 */
  {
    "*fnmadf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsub.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[59],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1020 */
  {
    "abssf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs.s\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_abssf2 },
    &operand_data[1],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1020 */
  {
    "absdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs.d\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_absdf2 },
    &operand_data[4],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1028 */
  {
    "copysignsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsgnj.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_copysignsf3 },
    &operand_data[1],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1028 */
  {
    "copysigndf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsgnj.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_copysigndf3 },
    &operand_data[4],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1038 */
  {
    "negsf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fneg.s\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negsf2 },
    &operand_data[1],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1038 */
  {
    "negdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fneg.d\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negdf2 },
    &operand_data[4],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1053 */
  {
    "sminsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmin.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminsf3 },
    &operand_data[1],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1053 */
  {
    "smindf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmin.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smindf3 },
    &operand_data[4],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1062 */
  {
    "smaxsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmax.s\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxsf3 },
    &operand_data[1],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1062 */
  {
    "smaxdf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmax.d\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxdf3 },
    &operand_data[4],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1082 */
  {
    "andsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi3 },
    &operand_data[63],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1082 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorsi3 },
    &operand_data[63],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1082 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorsi3 },
    &operand_data[63],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1082 */
  {
    "anddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_anddi3 },
    &operand_data[66],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1082 */
  {
    "iordi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iordi3 },
    &operand_data[66],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1082 */
  {
    "xordi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xordi3 },
    &operand_data[66],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1091 */
  {
    "*andsi3_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[63],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1091 */
  {
    "*iorsi3_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[63],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1091 */
  {
    "*xorsi3_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[63],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1100 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "not\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmplsi2 },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1100 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "not\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmpldi2 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1108 */
  {
    "*one_cmplsi2_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "not\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1123 */
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.s.d\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_truncdfsf2 },
    &operand_data[69],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1141 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_84 },
#else
    { 0, output_84, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendsidi2 },
    &operand_data[71],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1160 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_85 },
#else
    { 0, output_85, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendhisi2 },
    &operand_data[73],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1160 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_86 },
#else
    { 0, output_86, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendhidi2 },
    &operand_data[75],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1182 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_87 },
#else
    { 0, output_87, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqihi2 },
    &operand_data[77],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1182 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_88 },
#else
    { 0, output_88, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqisi2 },
    &operand_data[79],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1182 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_89 },
#else
    { 0, output_89, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqidi2 },
    &operand_data[81],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1200 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_90 },
#else
    { 0, output_90, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendsidi2 },
    &operand_data[71],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1211 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_91 },
#else
    { 0, output_91, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqihi2 },
    &operand_data[77],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1211 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_92 },
#else
    { 0, output_92, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqisi2 },
    &operand_data[79],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1211 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_93 },
#else
    { 0, output_93, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqidi2 },
    &operand_data[81],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1211 */
  {
    "extendhihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_94 },
#else
    { 0, output_94, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhihi2 },
    &operand_data[83],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1211 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_95 },
#else
    { 0, output_95, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhisi2 },
    &operand_data[73],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1211 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_96 },
#else
    { 0, output_96, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhidi2 },
    &operand_data[75],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1233 */
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.d.s\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendsfdf2 },
    &operand_data[85],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1249 */
  {
    "fix_truncsfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.w.s %0,%1,rtz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsfsi2 },
    &operand_data[87],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1249 */
  {
    "fix_truncsfdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.l.s %0,%1,rtz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsfdi2 },
    &operand_data[89],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1249 */
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.w.d %0,%1,rtz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdfsi2 },
    &operand_data[91],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1249 */
  {
    "fix_truncdfdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.l.d %0,%1,rtz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdfdi2 },
    &operand_data[93],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1258 */
  {
    "fixuns_truncsfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.wu.s %0,%1,rtz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fixuns_truncsfsi2 },
    &operand_data[87],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1258 */
  {
    "fixuns_truncsfdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.lu.s %0,%1,rtz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fixuns_truncsfdi2 },
    &operand_data[89],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1258 */
  {
    "fixuns_truncdfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.wu.d %0,%1,rtz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fixuns_truncdfsi2 },
    &operand_data[91],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1258 */
  {
    "fixuns_truncdfdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.lu.d %0,%1,rtz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fixuns_truncdfdi2 },
    &operand_data[93],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1267 */
  {
    "floatsisf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.s.w\t%0,%z1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatsisf2 },
    &operand_data[95],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1267 */
  {
    "floatdisf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.s.l\t%0,%z1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatdisf2 },
    &operand_data[97],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1267 */
  {
    "floatsidf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.d.w\t%0,%z1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatsidf2 },
    &operand_data[99],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1267 */
  {
    "floatdidf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.d.l\t%0,%z1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatdidf2 },
    &operand_data[101],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1276 */
  {
    "floatunssisf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.s.wu\t%0,%z1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatunssisf2 },
    &operand_data[95],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1276 */
  {
    "floatunsdisf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.s.lu\t%0,%z1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatunsdisf2 },
    &operand_data[97],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1276 */
  {
    "floatunssidf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.d.wu\t%0,%z1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatunssidf2 },
    &operand_data[99],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1276 */
  {
    "floatunsdidf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.d.lu\t%0,%z1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatunsdidf2 },
    &operand_data[101],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1285 */
  {
    "lrintsfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.w.s %0,%1,dyn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lrintsfsi2 },
    &operand_data[87],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1285 */
  {
    "lroundsfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.w.s %0,%1,rmm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lroundsfsi2 },
    &operand_data[87],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1285 */
  {
    "lrintsfdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.l.s %0,%1,dyn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lrintsfdi2 },
    &operand_data[89],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1285 */
  {
    "lroundsfdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.l.s %0,%1,rmm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lroundsfdi2 },
    &operand_data[89],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1285 */
  {
    "lrintdfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.w.d %0,%1,dyn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lrintdfsi2 },
    &operand_data[91],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1285 */
  {
    "lrounddfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.w.d %0,%1,rmm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lrounddfsi2 },
    &operand_data[91],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1285 */
  {
    "lrintdfdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.l.d %0,%1,dyn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lrintdfdi2 },
    &operand_data[93],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1285 */
  {
    "lrounddfdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvt.l.d %0,%1,rmm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lrounddfdi2 },
    &operand_data[93],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1306 */
  {
    "got_loadsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "la\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_got_loadsi },
    &operand_data[103],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1306 */
  {
    "got_loaddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "la\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_got_loaddi },
    &operand_data[105],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1316 */
  {
    "tls_add_tp_lesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%0,%1,%2,%%tprel_add(%3)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tls_add_tp_lesi },
    &operand_data[107],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1316 */
  {
    "tls_add_tp_ledi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%0,%1,%2,%%tprel_add(%3)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tls_add_tp_ledi },
    &operand_data[111],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1328 */
  {
    "got_load_tls_gdsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "la.tls.gd\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_got_load_tls_gdsi },
    &operand_data[103],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1328 */
  {
    "got_load_tls_gddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "la.tls.gd\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_got_load_tls_gddi },
    &operand_data[105],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1338 */
  {
    "got_load_tls_iesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "la.tls.ie\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_got_load_tls_iesi },
    &operand_data[103],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1338 */
  {
    "got_load_tls_iedi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "la.tls.ie\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_got_load_tls_iedi },
    &operand_data[105],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1348 */
  {
    "auipcsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    ".LA%2: auipc\t%0,%h1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_auipcsi },
    &operand_data[115],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1348 */
  {
    "auipcdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    ".LA%2: auipc\t%0,%h1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_auipcdi },
    &operand_data[118],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1364 */
  {
    "*lowsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addi\t%0,%1,%R2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[121],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1364 */
  {
    "*lowdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addi\t%0,%1,%R2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[124],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1410 */
  {
    "*movdi_32bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_134 },
#else
    { 0, 0, output_134 },
#endif
    { 0 },
    &operand_data[127],
    2,
    2,
    0,
    9,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1420 */
  {
    "*movdi_64bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_135 },
#else
    { 0, 0, output_135 },
#endif
    { 0 },
    &operand_data[129],
    2,
    2,
    0,
    9,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1441 */
  {
    "*movsi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_136 },
#else
    { 0, 0, output_136 },
#endif
    { 0 },
    &operand_data[131],
    2,
    2,
    0,
    8,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1466 */
  {
    "*movhi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_137 },
#else
    { 0, 0, output_137 },
#endif
    { 0 },
    &operand_data[133],
    2,
    2,
    0,
    6,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1479 */
  {
    "*addhihi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_138 },
#else
    { 0, 0, output_138 },
#endif
    { 0 },
    &operand_data[135],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1479 */
  {
    "*addsihi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_139 },
#else
    { 0, 0, output_139 },
#endif
    { 0 },
    &operand_data[138],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1488 */
  {
    "*xorhihi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[135],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1488 */
  {
    "*xorsihi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[138],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1508 */
  {
    "*movqi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_142 },
#else
    { 0, 0, output_142 },
#endif
    { 0 },
    &operand_data[141],
    2,
    2,
    0,
    6,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1528 */
  {
    "*movsf_hardfloat",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_143 },
#else
    { 0, 0, output_143 },
#endif
    { 0 },
    &operand_data[143],
    2,
    2,
    0,
    10,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1538 */
  {
    "*movsf_softfloat",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_144 },
#else
    { 0, 0, output_144 },
#endif
    { 0 },
    &operand_data[145],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1561 */
  {
    "*movdf_hardfloat_rv32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_145 },
#else
    { 0, 0, output_145 },
#endif
    { 0 },
    &operand_data[147],
    2,
    2,
    0,
    8,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1571 */
  {
    "*movdf_hardfloat_rv64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_146 },
#else
    { 0, 0, output_146 },
#endif
    { 0 },
    &operand_data[149],
    2,
    2,
    0,
    10,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1581 */
  {
    "*movdf_softfloat",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_147 },
#else
    { 0, 0, output_147 },
#endif
    { 0 },
    &operand_data[151],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1633 */
  {
    "fence",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%|fence%-",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fence },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1638 */
  {
    "fence_i",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fence.i",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fence_i },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1655 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_150 },
#else
    { 0, 0, output_150 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlsi3 },
    &operand_data[153],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1655 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_151 },
#else
    { 0, 0, output_151 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrsi3 },
    &operand_data[153],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1655 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_152 },
#else
    { 0, 0, output_152 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrsi3 },
    &operand_data[153],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1671 */
  {
    "*ashlsi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[156],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1671 */
  {
    "*ashrsi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[156],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1671 */
  {
    "*lshrsi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[156],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1690 */
  {
    "*ashlsi3_mask_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[161],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1690 */
  {
    "*ashrsi3_mask_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[161],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1690 */
  {
    "*lshrsi3_mask_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[161],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1710 */
  {
    "ashldi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_159 },
#else
    { 0, 0, output_159 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashldi3 },
    &operand_data[166],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1710 */
  {
    "ashrdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_160 },
#else
    { 0, 0, output_160 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrdi3 },
    &operand_data[166],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1710 */
  {
    "lshrdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_161 },
#else
    { 0, 0, output_161 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrdi3 },
    &operand_data[166],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1726 */
  {
    "*ashldi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[169],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1726 */
  {
    "*ashrdi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[169],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1726 */
  {
    "*lshrdi3_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[169],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1746 */
  {
    "*ashldi3_mask_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[174],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1746 */
  {
    "*ashrdi3_mask_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[174],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1746 */
  {
    "*lshrdi3_mask_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[174],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1766 */
  {
    "*ashlsi3_extend",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_168 },
#else
    { 0, 0, output_168 },
#endif
    { 0 },
    &operand_data[179],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1766 */
  {
    "*ashrsi3_extend",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_169 },
#else
    { 0, 0, output_169 },
#endif
    { 0 },
    &operand_data[179],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1766 */
  {
    "*lshrsi3_extend",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_170 },
#else
    { 0, 0, output_170 },
#endif
    { 0 },
    &operand_data[179],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1781 */
  {
    "*ashlsi3_extend_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[182],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1781 */
  {
    "*ashrsi3_extend_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[182],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1781 */
  {
    "*lshrsi3_extend_mask",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[182],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1803 */
  {
    "*ashlsi3_extend_mask_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[187],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1803 */
  {
    "*ashrsi3_extend_mask_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[187],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1803 */
  {
    "*lshrsi3_extend_mask_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[187],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1827 */
  {
    "*lshrsi3_zero_extend_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_177 },
#else
    { 0, 0, output_177 },
#endif
    { 0 },
    &operand_data[192],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1842 */
  {
    "*lshrsi3_zero_extend_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_178 },
#else
    { 0, 0, output_178 },
#endif
    { 0 },
    &operand_data[195],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1857 */
  {
    "*lshrsi3_zero_extend_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_179 },
#else
    { 0, 0, output_179 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:1911 */
  {
    "zero_extendsidi2_shifted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendsidi2_shifted },
    &operand_data[199],
    4,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1938 */
  {
    "*branchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "b%C1\t%2,%z3,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[204],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1938 */
  {
    "*branchdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "b%C1\t%2,%z3,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[208],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:1969 */
  {
    "*movsisicc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_183 },
#else
    { 0, output_183, 0 },
#endif
    { 0 },
    &operand_data[212],
    6,
    6,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1969 */
  {
    "*movsidicc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_184 },
#else
    { 0, output_184, 0 },
#endif
    { 0 },
    &operand_data[218],
    6,
    6,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:1969 */
  {
    "*movdidicc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_185 },
#else
    { 0, output_185, 0 },
#endif
    { 0 },
    &operand_data[224],
    6,
    6,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:2020 */
  {
    "*branch_on_bitsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[230],
    4,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2020 */
  {
    "*branch_on_bitdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[235],
    4,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2051 */
  {
    "*branch_on_bit_rangesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[230],
    4,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2051 */
  {
    "*branch_on_bit_rangedi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[235],
    4,
    5,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2109 */
  {
    "*cstoresfsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "f%C1.s\t%0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[240],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2109 */
  {
    "*cstoresfdi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "f%C1.s\t%0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[244],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2109 */
  {
    "*cstoredfsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "f%C1.d\t%0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[248],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2109 */
  {
    "*cstoredfdi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "f%C1.d\t%0,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[252],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2128 */
  {
    "*flt_quietsfsi4_default",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tflt.s\t%0,%1,%2\n\tfsflags %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[256],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2128 */
  {
    "*fle_quietsfsi4_default",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tfle.s\t%0,%1,%2\n\tfsflags %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[256],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2128 */
  {
    "*flt_quietsfdi4_default",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tflt.s\t%0,%1,%2\n\tfsflags %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[260],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2128 */
  {
    "*fle_quietsfdi4_default",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tfle.s\t%0,%1,%2\n\tfsflags %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[260],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2128 */
  {
    "*flt_quietdfsi4_default",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tflt.d\t%0,%1,%2\n\tfsflags %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[264],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2128 */
  {
    "*fle_quietdfsi4_default",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tfle.d\t%0,%1,%2\n\tfsflags %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[264],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2128 */
  {
    "*flt_quietdfdi4_default",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tflt.d\t%0,%1,%2\n\tfsflags %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[268],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2128 */
  {
    "*fle_quietdfdi4_default",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tfle.d\t%0,%1,%2\n\tfsflags %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[268],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2141 */
  {
    "*flt_quietsfsi4_snan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tflt.s\t%0,%1,%2\n\tfsflags %3\n\tfeq.s\tzero,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[256],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2141 */
  {
    "*fle_quietsfsi4_snan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tfle.s\t%0,%1,%2\n\tfsflags %3\n\tfeq.s\tzero,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[256],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2141 */
  {
    "*flt_quietsfdi4_snan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tflt.s\t%0,%1,%2\n\tfsflags %3\n\tfeq.s\tzero,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[260],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2141 */
  {
    "*fle_quietsfdi4_snan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tfle.s\t%0,%1,%2\n\tfsflags %3\n\tfeq.s\tzero,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[260],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2141 */
  {
    "*flt_quietdfsi4_snan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tflt.d\t%0,%1,%2\n\tfsflags %3\n\tfeq.d\tzero,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[264],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2141 */
  {
    "*fle_quietdfsi4_snan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tfle.d\t%0,%1,%2\n\tfsflags %3\n\tfeq.d\tzero,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[264],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2141 */
  {
    "*flt_quietdfdi4_snan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tflt.d\t%0,%1,%2\n\tfsflags %3\n\tfeq.d\tzero,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[268],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2141 */
  {
    "*fle_quietdfdi4_snan",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%3\n\tfle.d\t%0,%1,%2\n\tfsflags %3\n\tfeq.d\tzero,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[268],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2154 */
  {
    "*seq_zero_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "seqz\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2154 */
  {
    "*seq_zero_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "seqz\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[272],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2154 */
  {
    "*seq_zero_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "seqz\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2163 */
  {
    "*sne_zero_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "snez\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2163 */
  {
    "*sne_zero_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "snez\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[272],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2163 */
  {
    "*sne_zero_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "snez\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2172 */
  {
    "*sgt_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sgt\t%0,%1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[274],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2172 */
  {
    "*sgtu_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sgtu\t%0,%1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[274],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2172 */
  {
    "*sgt_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sgt\t%0,%1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[277],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2172 */
  {
    "*sgtu_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sgtu\t%0,%1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[277],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2172 */
  {
    "*sgt_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sgt\t%0,%1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[280],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2172 */
  {
    "*sgtu_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sgtu\t%0,%1,%z2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[280],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2181 */
  {
    "*sge_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt%i2\t%0,zero,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2181 */
  {
    "*sgeu_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt%i2u\t%0,zero,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2181 */
  {
    "*sge_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt%i2\t%0,zero,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[272],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2181 */
  {
    "*sgeu_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt%i2u\t%0,zero,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[272],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2181 */
  {
    "*sge_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt%i2\t%0,zero,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2181 */
  {
    "*sgeu_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt%i2u\t%0,zero,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2190 */
  {
    "*slt_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[283],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2190 */
  {
    "*sltu_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt%i2u\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[283],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2190 */
  {
    "*slt_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[286],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2190 */
  {
    "*sltu_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt%i2u\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[286],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2190 */
  {
    "*slt_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt%i2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[289],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2190 */
  {
    "*sltu_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt%i2u\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[289],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2199 */
  {
    "*sle_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_234 },
#else
    { 0, 0, output_234 },
#endif
    { 0 },
    &operand_data[292],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:2199 */
  {
    "*sleu_sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_235 },
#else
    { 0, 0, output_235 },
#endif
    { 0 },
    &operand_data[292],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:2199 */
  {
    "*sle_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_236 },
#else
    { 0, 0, output_236 },
#endif
    { 0 },
    &operand_data[295],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:2199 */
  {
    "*sleu_disi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_237 },
#else
    { 0, 0, output_237 },
#endif
    { 0 },
    &operand_data[295],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:2199 */
  {
    "*sle_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_238 },
#else
    { 0, 0, output_238 },
#endif
    { 0 },
    &operand_data[298],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:2199 */
  {
    "*sleu_didi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_239 },
#else
    { 0, 0, output_239 },
#endif
    { 0 },
    &operand_data[298],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:2220 */
  {
    "jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "j\t%l0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_jump },
    &operand_data[204],
    1,
    1,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2240 */
  {
    "indirect_jumpsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jr\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_indirect_jumpsi },
    &operand_data[301],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2240 */
  {
    "indirect_jumpdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jr\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_indirect_jumpdi },
    &operand_data[302],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2264 */
  {
    "tablejumpsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jr\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tablejumpsi },
    &operand_data[303],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2264 */
  {
    "tablejumpdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jr\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tablejumpdi },
    &operand_data[305],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2292 */
  {
    "blockage",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_blockage },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2323 */
  {
    "simple_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_246 },
#else
    { 0, 0, output_246 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_simple_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:2334 */
  {
    "simple_return_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jr\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_simple_return_internal },
    &operand_data[307],
    1,
    1,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2362 */
  {
    "eh_set_lr_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eh_set_lr_si },
    &operand_data[308],
    1,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2368 */
  {
    "eh_set_lr_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eh_set_lr_di },
    &operand_data[310],
    1,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2384 */
  {
    "eh_return_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eh_return_internal },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2411 */
  {
    "sibcall_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_251 },
#else
    { 0, output_251, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_internal },
    &operand_data[312],
    2,
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:2433 */
  {
    "sibcall_value_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_252 },
#else
    { 0, output_252, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_value_internal },
    &operand_data[313],
    3,
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:2456 */
  {
    "call_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_253 },
#else
    { 0, output_253, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_internal },
    &operand_data[316],
    2,
    2,
    0,
    3,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:2479 */
  {
    "call_value_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_254 },
#else
    { 0, output_254, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value_internal },
    &operand_data[315],
    3,
    3,
    0,
    3,
    2
  },
  /* ../../gcc/config/riscv/riscv.md:2514 */
  {
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_nop },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2521 */
  {
    "trap",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ebreak",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_trap },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2530 */
  {
    "gpr_save",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\tt0,__riscv_save_%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gpr_save },
    &operand_data[318],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2537 */
  {
    "gpr_restore",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tail\t__riscv_restore_%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gpr_restore },
    &operand_data[159],
    1,
    1,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2542 */
  {
    "gpr_restore_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gpr_restore_return },
    &operand_data[307],
    1,
    1,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2549 */
  {
    "riscv_frflags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "frflags\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_frflags },
    &operand_data[23],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2555 */
  {
    "riscv_fsflags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsflags\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_fsflags },
    &operand_data[320],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2560 */
  {
    "riscv_mret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_mret },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2566 */
  {
    "riscv_sret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sret },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2572 */
  {
    "riscv_uret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_uret },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2578 */
  {
    "stack_tiesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_tiesi },
    &operand_data[43],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2578 */
  {
    "stack_tiedi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_tiedi },
    &operand_data[46],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:47 */
  {
    "riscv_aes32dsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "aes32dsi\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_aes32dsi },
    &operand_data[321],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:55 */
  {
    "riscv_aes32dsmi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "aes32dsmi\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_aes32dsmi },
    &operand_data[321],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:63 */
  {
    "riscv_aes32esi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "aes32esi\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_aes32esi },
    &operand_data[321],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:71 */
  {
    "riscv_aes32esmi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "aes32esmi\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_aes32esmi },
    &operand_data[321],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:82 */
  {
    "riscv_aes64ds",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "aes64ds\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_aes64ds },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:90 */
  {
    "riscv_aes64dsm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "aes64dsm\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_aes64dsm },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:98 */
  {
    "riscv_aes64es",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "aes64es\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_aes64es },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:106 */
  {
    "riscv_aes64esm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "aes64esm\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_aes64esm },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:114 */
  {
    "riscv_aes64im",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "aes64im\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_aes64im },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:121 */
  {
    "riscv_aes64ks1i",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "aes64ks1i\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_aes64ks1i },
    &operand_data[324],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:129 */
  {
    "riscv_aes64ks2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "aes64ks2\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_aes64ks2 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:140 */
  {
    "riscv_sha256sig0_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha256sig0\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha256sig0_si },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:140 */
  {
    "riscv_sha256sig0_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha256sig0\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha256sig0_di },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:147 */
  {
    "riscv_sha256sig1_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha256sig1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha256sig1_si },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:147 */
  {
    "riscv_sha256sig1_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha256sig1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha256sig1_di },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:154 */
  {
    "riscv_sha256sum0_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha256sum0\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha256sum0_si },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:154 */
  {
    "riscv_sha256sum0_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha256sum0\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha256sum0_di },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:161 */
  {
    "riscv_sha256sum1_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha256sum1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha256sum1_si },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:161 */
  {
    "riscv_sha256sum1_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha256sum1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha256sum1_di },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:171 */
  {
    "riscv_sha512sig0h",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha512sig0h\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha512sig0h },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:179 */
  {
    "riscv_sha512sig0l",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha512sig0l\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha512sig0l },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:187 */
  {
    "riscv_sha512sig1h",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha512sig1h\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha512sig1h },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:195 */
  {
    "riscv_sha512sig1l",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha512sig1l\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha512sig1l },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:203 */
  {
    "riscv_sha512sum0r",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha512sum0r\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha512sum0r },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:211 */
  {
    "riscv_sha512sum1r",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha512sum1r\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha512sum1r },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:222 */
  {
    "riscv_sha512sig0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha512sig0\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha512sig0 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:229 */
  {
    "riscv_sha512sig1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha512sig1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha512sig1 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:236 */
  {
    "riscv_sha512sum0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha512sum0\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha512sum0 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:243 */
  {
    "riscv_sha512sum1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sha512sum1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sha512sum1 },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:253 */
  {
    "riscv_sm3p0_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sm3p0\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sm3p0_si },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:253 */
  {
    "riscv_sm3p0_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sm3p0\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sm3p0_di },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:260 */
  {
    "riscv_sm3p1_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sm3p1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sm3p1_si },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:260 */
  {
    "riscv_sm3p1_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sm3p1\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sm3p1_di },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:270 */
  {
    "riscv_sm4ed_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sm4ed\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sm4ed_si },
    &operand_data[321],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:270 */
  {
    "riscv_sm4ed_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sm4ed\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sm4ed_di },
    &operand_data[327],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:278 */
  {
    "riscv_sm4ks_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sm4ks\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sm4ks_si },
    &operand_data[321],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:278 */
  {
    "riscv_sm4ks_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sm4ks\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_sm4ks_di },
    &operand_data[327],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:289 */
  {
    "riscv_pollentropy_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pollentropy\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_pollentropy_si },
    &operand_data[23],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:289 */
  {
    "riscv_pollentropy_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pollentropy\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_pollentropy_di },
    &operand_data[20],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:295 */
  {
    "riscv_getnoise_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "getnoise\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_getnoise_si },
    &operand_data[23],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/crypto.md:295 */
  {
    "riscv_getnoise_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "getnoise\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_riscv_getnoise_di },
    &operand_data[20],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:106 */
  {
    "kabsw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kabsw\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kabsw },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:114 */
  {
    "kabsv4qi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kabs8\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kabsv4qi2 },
    &operand_data[330],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:114 */
  {
    "kabsv2hi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kabs16\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kabsv2hi2 },
    &operand_data[332],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:114 */
  {
    "kabsv8qi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kabs8\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kabsv8qi2 },
    &operand_data[334],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:114 */
  {
    "kabsv4hi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kabs16\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kabsv4hi2 },
    &operand_data[336],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:114 */
  {
    "kabsv2si2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kabs32\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kabsv2si2 },
    &operand_data[338],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "addv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "kaddv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kadd8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kaddv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "ukaddv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukadd8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukaddv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "addv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "kaddv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kadd16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kaddv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "ukaddv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukadd16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukaddv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "addv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "kaddv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kadd8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kaddv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "ukaddv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukadd8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukaddv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "addv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "kaddv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kadd16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kaddv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "ukaddv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukadd16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukaddv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "addv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "kaddv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kadd32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kaddv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:123 */
  {
    "ukaddv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukadd32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukaddv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:133 */
  {
    "*add64_rvp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add64\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:143 */
  {
    "*ld64_rvp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld64\t%0,%2(%1)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[355],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:153 */
  {
    "*st64_rvp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "st64\t%2,%1(%0)",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[358],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:163 */
  {
    "*ld64_rvp_base",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld64\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:172 */
  {
    "*st64_rvp_base",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "st64\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:181 */
  {
    "rvp_kadddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kadd64 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rvp_kadddi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:181 */
  {
    "rvp_ukadddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukadd64 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rvp_ukadddi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "subv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub8 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "ksubv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ksub8 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ksubv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "uksubv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uksub8 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uksubv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "subv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub16 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "ksubv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ksub16 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ksubv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "uksubv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uksub16 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uksubv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "subv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub8 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "ksubv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ksub8 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ksubv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "uksubv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uksub8 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uksubv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "subv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub16 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "ksubv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ksub16 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ksubv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "uksubv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uksub16 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uksubv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "subv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub32 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "ksubv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ksub32 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ksubv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:191 */
  {
    "uksubv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uksub32 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uksubv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:201 */
  {
    "rvp_ksubdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ksub64 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rvp_ksubdi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:201 */
  {
    "rvp_uksubdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uksub64 %0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rvp_uksubdi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:214 */
  {
    "ssaddhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kaddh\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddhi3 },
    &operand_data[361],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:214 */
  {
    "usaddhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukaddh\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddhi3 },
    &operand_data[361],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:214 */
  {
    "sssubhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ksubh\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubhi3 },
    &operand_data[361],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:214 */
  {
    "ussubhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uksubh\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubhi3 },
    &operand_data[361],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:214 */
  {
    "ssaddsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kaddw\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:214 */
  {
    "usaddsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukaddw\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:214 */
  {
    "sssubsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ksubw\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:214 */
  {
    "ussubsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uksubw\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:224 */
  {
    "ave",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ave\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ave },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:239 */
  {
    "avedi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ave\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_avedi },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:255 */
  {
    "bitrevsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_363 },
#else
    { 0, output_363, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bitrevsi },
    &operand_data[364],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:267 */
  {
    "bitrevdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_364 },
#else
    { 0, output_364, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bitrevdi },
    &operand_data[367],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:280 */
  {
    "cmixsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmix\t%0, %3, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmixsi },
    &operand_data[370],
    4,
    4,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:280 */
  {
    "cmixdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmix\t%0, %3, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmixdi },
    &operand_data[374],
    4,
    4,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:295 */
  {
    "clrovsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "csrrci zero, vxsat, 1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clrovsi },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:295 */
  {
    "clrovdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "csrrci zero, vxsat, 1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clrovdi },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:302 */
  {
    "clrsbv4qi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clrs8\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clrsbv4qi2 },
    &operand_data[330],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:302 */
  {
    "clzv4qi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz8\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clzv4qi2 },
    &operand_data[330],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:302 */
  {
    "clrsbv2hi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clrs16\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clrsbv2hi2 },
    &operand_data[332],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:302 */
  {
    "clzv2hi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz16\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clzv2hi2 },
    &operand_data[332],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:302 */
  {
    "clrsbv8qi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clrs8\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clrsbv8qi2 },
    &operand_data[334],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:302 */
  {
    "clzv8qi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz8\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clzv8qi2 },
    &operand_data[334],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:302 */
  {
    "clrsbv4hi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clrs16\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clrsbv4hi2 },
    &operand_data[336],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:302 */
  {
    "clzv4hi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz16\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clzv4hi2 },
    &operand_data[336],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:302 */
  {
    "clrsbv2si2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clrs32\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clrsbv2si2 },
    &operand_data[338],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:302 */
  {
    "clzv2si2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz32\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clzv2si2 },
    &operand_data[338],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:311 */
  {
    "clrsbsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clrs32\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clrsbsi2 },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:319 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_380 },
#else
    { 0, 0, output_380 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clzsi2 },
    &operand_data[35],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/rvp.md:328 */
  {
    "cmpeqv4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpeq8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpeqv4qi },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:328 */
  {
    "cmpeqv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpeq16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpeqv2hi },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:328 */
  {
    "cmpeqv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpeq8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpeqv8qi },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:328 */
  {
    "cmpeqv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpeq16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpeqv4hi },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:350 */
  {
    "crasv2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cras16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crasv2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:350 */
  {
    "crasv2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cras32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crasv2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:386 */
  {
    "cras16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cras16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cras16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:417 */
  {
    "crsav2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crsav2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:417 */
  {
    "crsav2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crsa32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crsav2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:453 */
  {
    "crsa16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crsa16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:485 */
  {
    "kcrasv2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kcras16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kcrasv2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:485 */
  {
    "kcrasv2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kcras32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kcrasv2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:521 */
  {
    "kcras16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kcras16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kcras16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:552 */
  {
    "kcrsav2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kcrsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kcrsav2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:552 */
  {
    "kcrsav2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kcrsa32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kcrsav2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:588 */
  {
    "kcrsa16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kcrsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kcrsa16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:620 */
  {
    "ukcrasv2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukcras16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukcrasv2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:620 */
  {
    "ukcrasv2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukcras32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukcrasv2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:656 */
  {
    "ukcras16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukcras16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukcras16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:687 */
  {
    "ukcrsav2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukcrsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukcrsav2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:687 */
  {
    "ukcrsav2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukcrsa32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukcrsav2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:723 */
  {
    "ukcrsa16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukcrsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukcrsa16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:755 */
  {
    "rcrasv2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rcras16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rcrasv2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:755 */
  {
    "rcrasv2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rcras32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rcrasv2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:801 */
  {
    "rcras16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rcras16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rcras16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:848 */
  {
    "rcrsav2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rcrsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rcrsav2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:848 */
  {
    "rcrsav2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rcrsa32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rcrsav2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:894 */
  {
    "rcrsa16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rcrsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rcrsa16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:942 */
  {
    "urcrasv2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "urcras16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urcrasv2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:942 */
  {
    "urcrasv2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "urcras32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urcrasv2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:988 */
  {
    "urcras16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "urcras16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urcras16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1035 */
  {
    "urcrsav2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "urcrsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urcrsav2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1035 */
  {
    "urcrsav2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "urcrsa32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urcrsav2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1081 */
  {
    "urcrsa16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "urcrsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urcrsa16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1141 */
  {
    "vec_setv4qi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_415 },
#else
    { 0, output_415, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_setv4qi_internal },
    &operand_data[378],
    4,
    4,
    0,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:1180 */
  {
    "vec_setv8qi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_416 },
#else
    { 0, 0, output_416 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_setv8qi_internal },
    &operand_data[382],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/rvp.md:1232 */
  {
    "kdm_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_417 },
#else
    { 0, output_417, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdm_internal },
    &operand_data[386],
    5,
    5,
    0,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:1294 */
  {
    "kdma_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_418 },
#else
    { 0, output_418, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdma_internal },
    &operand_data[386],
    6,
    6,
    0,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:1355 */
  {
    "khmsi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_419 },
#else
    { 0, output_419, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khmsi_internal },
    &operand_data[386],
    5,
    5,
    0,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:1422 */
  {
    "kma_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_420 },
#else
    { 0, output_420, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kma_internal },
    &operand_data[386],
    6,
    6,
    0,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:1486 */
  {
    "kma64_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_421 },
#else
    { 0, output_421, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kma64_internal },
    &operand_data[392],
    8,
    8,
    0,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:1511 */
  {
    "khm8v4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "khm8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khm8v4qi },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1511 */
  {
    "khm8v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "khm8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khm8v8qi },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1521 */
  {
    "khmx8v4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "khmx8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khmx8v4qi },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1521 */
  {
    "khmx8v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "khmx8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khmx8v8qi },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1531 */
  {
    "khm16v2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "khm16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khm16v2hi },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1531 */
  {
    "khm16v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "khm16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khm16v4hi },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1541 */
  {
    "khmx16v2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "khmx16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khmx16v2hi },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1541 */
  {
    "khmx16v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "khmx16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khmx16v4hi },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1552 */
  {
    "kmada",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmada\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmada },
    &operand_data[400],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1575 */
  {
    "kmada64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmada\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmada64 },
    &operand_data[404],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1598 */
  {
    "kmaxda",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmaxda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmaxda },
    &operand_data[400],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1621 */
  {
    "kmaxda64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmaxda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmaxda64 },
    &operand_data[404],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1645 */
  {
    "kmads",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmads\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmads },
    &operand_data[400],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1668 */
  {
    "kmads64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmads\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmads64 },
    &operand_data[404],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1691 */
  {
    "kmadrs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmadrs\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmadrs },
    &operand_data[400],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1714 */
  {
    "kmadrs64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmadrs\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmadrs64 },
    &operand_data[404],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1737 */
  {
    "kmaxds",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmaxds\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmaxds },
    &operand_data[400],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1760 */
  {
    "kmaxds64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmaxds\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmaxds64 },
    &operand_data[404],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1784 */
  {
    "vkmar64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmar64\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vkmar64 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1808 */
  {
    "kmda",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmda\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmda },
    &operand_data[412],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1829 */
  {
    "kmxda",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmxda\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmxda },
    &operand_data[412],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1850 */
  {
    "kmxda64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmxda\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmxda64 },
    &operand_data[415],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1871 */
  {
    "kmda64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmda\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmda64 },
    &operand_data[415],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1893 */
  {
    "kmmac",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmmac\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmac },
    &operand_data[418],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1906 */
  {
    "kmmac_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmmac\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmac_64 },
    &operand_data[422],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1919 */
  {
    "kmmac_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmmac.u\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmac_round },
    &operand_data[418],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1933 */
  {
    "kmmac64_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmmac.u\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmac64_round },
    &operand_data[422],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:1948 */
  {
    "kmmaw_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_449 },
#else
    { 0, output_449, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmaw_internal },
    &operand_data[426],
    6,
    6,
    0,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2021 */
  {
    "kmmaw_round_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_450 },
#else
    { 0, output_450, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmaw_round_internal },
    &operand_data[426],
    6,
    6,
    0,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2096 */
  {
    "kmmaw64_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_451 },
#else
    { 0, output_451, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmaw64_internal },
    &operand_data[432],
    7,
    7,
    3,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2189 */
  {
    "kmmaw64_round_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_452 },
#else
    { 0, output_452, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmaw64_round_internal },
    &operand_data[432],
    7,
    7,
    2,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2287 */
  {
    "kmmsb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmmsb\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmsb },
    &operand_data[418],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2300 */
  {
    "kmmsb_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmmsb\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmsb_64 },
    &operand_data[422],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2313 */
  {
    "kmmsb_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmmsb.u\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmsb_round },
    &operand_data[418],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2327 */
  {
    "kmmsb64_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmmsb.u\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmsb64_round },
    &operand_data[422],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2342 */
  {
    "kmmw2_round_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_457 },
#else
    { 0, output_457, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmw2_round_internal },
    &operand_data[439],
    4,
    4,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2385 */
  {
    "kmmw64_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_458 },
#else
    { 0, output_458, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmw64_round },
    &operand_data[443],
    5,
    5,
    2,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2447 */
  {
    "kmsda",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmsda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmsda },
    &operand_data[400],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2470 */
  {
    "kmsda64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmsda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmsda64 },
    &operand_data[404],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2493 */
  {
    "kmsxda",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmsxda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmsxda },
    &operand_data[400],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2516 */
  {
    "kmsxda64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmsxda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmsxda64 },
    &operand_data[404],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2540 */
  {
    "vkmsr64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmsr64\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vkmsr64 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2588 */
  {
    "kmmw64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_464 },
#else
    { 0, output_464, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmw64 },
    &operand_data[443],
    5,
    5,
    2,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2645 */
  {
    "kmmw2_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_465 },
#else
    { 0, output_465, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmw2_internal },
    &operand_data[439],
    4,
    4,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2664 */
  {
    "ksll",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_466 },
#else
    { 0, output_466, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ksll },
    &operand_data[448],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2676 */
  {
    "kslli8v4qisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_467 },
#else
    { 0, output_467, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslli8v4qisi },
    &operand_data[451],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2676 */
  {
    "kslli8v8qidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_468 },
#else
    { 0, output_468, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslli8v8qidi },
    &operand_data[454],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2688 */
  {
    "kslli16v2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_469 },
#else
    { 0, output_469, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslli16v2hi },
    &operand_data[457],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2688 */
  {
    "kslli16v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_470 },
#else
    { 0, output_470, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslli16v4hi },
    &operand_data[460],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2700 */
  {
    "ksll32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_471 },
#else
    { 0, output_471, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ksll32 },
    &operand_data[463],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:2732 */
  {
    "kslrav4qi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslra8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav4qi_internal },
    &operand_data[466],
    4,
    4,
    5,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2732 */
  {
    "kslrav2hi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslra16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav2hi_internal },
    &operand_data[470],
    4,
    4,
    5,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2732 */
  {
    "kslrav8qi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslra8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav8qi_internal },
    &operand_data[474],
    4,
    4,
    5,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2732 */
  {
    "kslrav4hi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslra16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav4hi_internal },
    &operand_data[478],
    4,
    4,
    5,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2732 */
  {
    "kslrav2si_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslra32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav2si_internal },
    &operand_data[482],
    4,
    4,
    5,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2771 */
  {
    "kslrav4qi_round_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslra8.u\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav4qi_round_internal },
    &operand_data[466],
    4,
    4,
    5,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2771 */
  {
    "kslrav2hi_round_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslra16.u\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav2hi_round_internal },
    &operand_data[470],
    4,
    4,
    5,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2771 */
  {
    "kslrav8qi_round_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslra8.u\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav8qi_round_internal },
    &operand_data[474],
    4,
    4,
    5,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2771 */
  {
    "kslrav4hi_round_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslra16.u\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav4hi_round_internal },
    &operand_data[478],
    4,
    4,
    5,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2771 */
  {
    "kslrav2si_round_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslra32.u\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav2si_round_internal },
    &operand_data[482],
    4,
    4,
    5,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2791 */
  {
    "kslraw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslraw\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslraw },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2800 */
  {
    "kslraw64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslraw\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslraw64 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2810 */
  {
    "kslrawu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslraw.u\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrawu },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2819 */
  {
    "kslrawu64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kslraw.u\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrawu64 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2841 */
  {
    "kstasv2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kstas16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kstasv2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2841 */
  {
    "kstasv2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kstas32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kstasv2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2878 */
  {
    "kstas16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kstas16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kstas16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2909 */
  {
    "kstsav2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kstsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kstsav2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2909 */
  {
    "kstsav2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kstsa32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kstsav2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2945 */
  {
    "kstsa16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kstsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kstsa16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2966 */
  {
    "kwmmul",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kwmmul\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kwmmul },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2978 */
  {
    "kwmmul_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kwmmul\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kwmmul_64 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:2990 */
  {
    "kwmmul_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kwmmul.u\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kwmmul_round },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3004 */
  {
    "kwmmul64_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kwmmul.u\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kwmmul64_round },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3019 */
  {
    "maddr32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "maddr32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maddr32 },
    &operand_data[486],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3029 */
  {
    "msubr32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msubr32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_msubr32 },
    &operand_data[486],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3040 */
  {
    "rvp_umulsidi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulr64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rvp_umulsidi3 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3049 */
  {
    "rvp_mulsidi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsr64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rvp_mulsidi3 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3059 */
  {
    "smaxsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "max\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3059 */
  {
    "smaxdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "max\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxdi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3068 */
  {
    "sminsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "min\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3068 */
  {
    "smindi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "min\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smindi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3078 */
  {
    "pbsadsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pbsad\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pbsadsi },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3078 */
  {
    "pbsaddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pbsad\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pbsaddi },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3087 */
  {
    "pbsadasi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pbsada\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pbsadasi },
    &operand_data[418],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3087 */
  {
    "pbsadadi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pbsada\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pbsadadi },
    &operand_data[490],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3098 */
  {
    "vec_mergev2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_508 },
#else
    { 0, 0, output_508 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_mergev2hi },
    &operand_data[494],
    6,
    6,
    0,
    8,
    3
  },
  /* ../../gcc/config/riscv/rvp.md:3098 */
  {
    "vec_mergev2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_509 },
#else
    { 0, 0, output_509 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_mergev2si },
    &operand_data[500],
    6,
    6,
    0,
    8,
    3
  },
  /* ../../gcc/config/riscv/rvp.md:3186 */
  {
    "vec_pkbb64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pkbb16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_pkbb64 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3209 */
  {
    "vec_pkbt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pkbt16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_pkbt64 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3232 */
  {
    "vec_pktt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pktt16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_pktt64 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3255 */
  {
    "vec_pktb64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pktb16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vec_pktb64 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3268 */
  {
    "raddv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "radd8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_raddv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3268 */
  {
    "raddv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "radd16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_raddv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3268 */
  {
    "raddv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "radd8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_raddv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3268 */
  {
    "raddv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "radd16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_raddv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3268 */
  {
    "raddv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "radd32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_raddv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3281 */
  {
    "radddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "radd64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_radddi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3293 */
  {
    "uraddv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uradd8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uraddv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3293 */
  {
    "uraddv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uradd16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uraddv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3293 */
  {
    "uraddv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uradd8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uraddv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3293 */
  {
    "uraddv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uradd16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uraddv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3293 */
  {
    "uraddv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uradd32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uraddv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3306 */
  {
    "uradddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uradd64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uradddi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3318 */
  {
    "rsubv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsub8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rsubv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3318 */
  {
    "rsubv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsub16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rsubv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3318 */
  {
    "rsubv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsub8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rsubv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3318 */
  {
    "rsubv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsub16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rsubv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3318 */
  {
    "rsubv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsub32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rsubv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3330 */
  {
    "ursubv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ursub8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ursubv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3330 */
  {
    "ursubv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ursub16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ursubv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3330 */
  {
    "ursubv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ursub8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ursubv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3330 */
  {
    "ursubv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ursub16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ursubv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3330 */
  {
    "ursubv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ursub32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ursubv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3343 */
  {
    "rsubdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsub64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rsubdi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3356 */
  {
    "ursubdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ursub64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ursubdi3 },
    &operand_data[45],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3369 */
  {
    "raddsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "raddw\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_raddsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3369 */
  {
    "rsubsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsubw\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rsubsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3382 */
  {
    "uraddsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uraddw\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uraddsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3382 */
  {
    "ursubsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ursubw\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ursubsi3 },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3395 */
  {
    "rdovsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "csrr \t%0, vxsat, zero",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rdovsi },
    &operand_data[23],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3395 */
  {
    "rdovdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "csrr \t%0, vxsat, zero",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rdovdi },
    &operand_data[20],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3415 */
  {
    "rstasv2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rstas16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstasv2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3415 */
  {
    "rstasv2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rstas32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstasv2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3461 */
  {
    "rstas16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rstas16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstas16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3508 */
  {
    "rstsav2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rstsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstsav2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3508 */
  {
    "rstsav2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rstsa32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstsav2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3554 */
  {
    "rstsa16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rstsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstsa16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3591 */
  {
    "sclip8v4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sclip8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sclip8v4qi },
    &operand_data[506],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3591 */
  {
    "sclip8v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sclip8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sclip8v8qi },
    &operand_data[509],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3601 */
  {
    "sclip16v2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sclip16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sclip16v2hi },
    &operand_data[512],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3601 */
  {
    "sclip16v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sclip16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sclip16v4hi },
    &operand_data[515],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3611 */
  {
    "sclip32sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sclip32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sclip32sisi },
    &operand_data[518],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3611 */
  {
    "sclip32v2sidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sclip32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sclip32v2sidi },
    &operand_data[521],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3621 */
  {
    "scmplev4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "scmple8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_scmplev4qi },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3621 */
  {
    "scmplev2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "scmple16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_scmplev2hi },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3621 */
  {
    "scmplev8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "scmple8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_scmplev8qi },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3621 */
  {
    "scmplev4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "scmple16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_scmplev4hi },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3632 */
  {
    "scmpltv4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "scmplt8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_scmpltv4qi },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3632 */
  {
    "scmpltv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "scmplt16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_scmpltv2hi },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3632 */
  {
    "scmpltv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "scmplt8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_scmpltv8qi },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3632 */
  {
    "scmpltv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "scmplt16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_scmpltv4hi },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3643 */
  {
    "smal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smal\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smal },
    &operand_data[524],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3661 */
  {
    "smal_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smal\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smal_64 },
    &operand_data[527],
    3,
    3,
    3,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3727 */
  {
    "smaddhidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_566 },
#else
    { 0, output_566, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaddhidi },
    &operand_data[530],
    6,
    6,
    0,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:3794 */
  {
    "smaddhidi64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_567 },
#else
    { 0, output_567, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaddhidi64 },
    &operand_data[536],
    8,
    8,
    2,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:3838 */
  {
    "smalda1_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smalda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalda1_le },
    &operand_data[544],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3863 */
  {
    "smalda64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smalda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalda64 },
    &operand_data[548],
    4,
    4,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3917 */
  {
    "smalxda1_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smalxda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalxda1_le },
    &operand_data[544],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3917 */
  {
    "smalxds1_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smalxds\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalxds1_le },
    &operand_data[544],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3941 */
  {
    "smalxda64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smalxda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalxda64 },
    &operand_data[548],
    4,
    4,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3941 */
  {
    "smalxds64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smalxds\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalxds64 },
    &operand_data[548],
    4,
    4,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:3983 */
  {
    "smalds1_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smalds\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalds1_le },
    &operand_data[544],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4007 */
  {
    "smalds64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smalds\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalds64 },
    &operand_data[548],
    4,
    4,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4049 */
  {
    "smaldrs3_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smaldrs\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaldrs3_le },
    &operand_data[544],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4073 */
  {
    "smaldrs64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smaldrs\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaldrs64 },
    &operand_data[548],
    4,
    4,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4103 */
  {
    "ssmaddsidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmar64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssmaddsidi4 },
    &operand_data[552],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4103 */
  {
    "ssmsubsidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmsr64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssmsubsidi4 },
    &operand_data[552],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4118 */
  {
    "usmaddsidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukmar64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usmaddsidi4 },
    &operand_data[552],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4118 */
  {
    "usmsubsidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukmsr64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usmsubsidi4 },
    &operand_data[552],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4133 */
  {
    "maddsidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smar64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maddsidi4 },
    &operand_data[552],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4133 */
  {
    "umaddsidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umar64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaddsidi4 },
    &operand_data[552],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4133 */
  {
    "msubsidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smsr64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_msubsidi4 },
    &operand_data[552],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4133 */
  {
    "umsubsidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umsr64\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umsubsidi4 },
    &operand_data[552],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4148 */
  {
    "vsmar64_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smar64\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vsmar64_1 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4148 */
  {
    "vumar64_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umar64\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vumar64_1 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4172 */
  {
    "smaxv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smax8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4172 */
  {
    "umaxv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umax8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaxv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4172 */
  {
    "smaxv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smax16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4172 */
  {
    "umaxv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umax16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaxv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4172 */
  {
    "smaxv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smax8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4172 */
  {
    "umaxv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umax8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaxv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4172 */
  {
    "smaxv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smax16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4172 */
  {
    "umaxv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umax16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaxv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4172 */
  {
    "smaxv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smax32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4172 */
  {
    "umaxv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umax32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaxv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4181 */
  {
    "sminv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smin8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4181 */
  {
    "uminv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umin8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uminv4qi3 },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4181 */
  {
    "sminv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smin16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4181 */
  {
    "uminv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umin16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uminv2hi3 },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4181 */
  {
    "sminv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smin8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4181 */
  {
    "uminv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umin8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uminv8qi3 },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4181 */
  {
    "sminv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smin16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4181 */
  {
    "uminv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umin16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uminv4hi3 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4181 */
  {
    "sminv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smin32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4181 */
  {
    "uminv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umin32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uminv2si3 },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4216 */
  {
    "smaqav4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smaqa\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaqav4qi },
    &operand_data[556],
    4,
    4,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4216 */
  {
    "umaqav4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umaqa\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaqav4qi },
    &operand_data[556],
    4,
    4,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4274 */
  {
    "smaqav8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smaqa\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaqav8qi },
    &operand_data[560],
    4,
    4,
    14,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4274 */
  {
    "umaqav8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umaqa\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaqav8qi },
    &operand_data[560],
    4,
    4,
    14,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4340 */
  {
    "sumaqav4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smaqa.su\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sumaqav4qi },
    &operand_data[556],
    4,
    4,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4386 */
  {
    "sumaqav8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smaqa.su\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sumaqav8qi },
    &operand_data[560],
    4,
    4,
    14,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4477 */
  {
    "mulhisi3v",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_614 },
#else
    { 0, output_614, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulhisi3v },
    &operand_data[386],
    5,
    5,
    0,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:4533 */
  {
    "mulv2hiv2si3v",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_615 },
#else
    { 0, output_615, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulv2hiv2si3v },
    &operand_data[564],
    7,
    7,
    0,
    3,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:4592 */
  {
    "mulsidi3v",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_616 },
#else
    { 0, output_616, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3v },
    &operand_data[571],
    5,
    5,
    0,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:4612 */
  {
    "smds",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smds\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smds },
    &operand_data[412],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4633 */
  {
    "smds64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smds\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smds64 },
    &operand_data[415],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4654 */
  {
    "smdrs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smdrs\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smdrs },
    &operand_data[412],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4675 */
  {
    "smdrs64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smdrs\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smdrs64 },
    &operand_data[415],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4696 */
  {
    "smxdsv",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smxds\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smxdsv },
    &operand_data[412],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4717 */
  {
    "smxds64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smxds\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smxds64 },
    &operand_data[415],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4739 */
  {
    "smxds32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smxds32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smxds32 },
    &operand_data[576],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4760 */
  {
    "smds32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smds32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smds32 },
    &operand_data[576],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4781 */
  {
    "smdrs32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smdrs32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smdrs32 },
    &operand_data[576],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4804 */
  {
    "smulsi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smmul\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulsi3_highpart },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4817 */
  {
    "smmul_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smmul.u\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smmul_round },
    &operand_data[42],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4832 */
  {
    "smulv2si3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smmul\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulv2si3_highpart },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4844 */
  {
    "smmulv2si3_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smmul.u\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smmulv2si3_round },
    &operand_data[352],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:4881 */
  {
    "smulhisi3_highpart_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_630 },
#else
    { 0, output_630, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulhisi3_highpart_1 },
    &operand_data[439],
    4,
    4,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:4923 */
  {
    "smulhisi3_highpart_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_631 },
#else
    { 0, output_631, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulhisi3_highpart_64 },
    &operand_data[443],
    5,
    5,
    2,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:4979 */
  {
    "smmw_round_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_632 },
#else
    { 0, output_632, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smmw_round_internal },
    &operand_data[439],
    4,
    4,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5022 */
  {
    "smmw64_round_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_633 },
#else
    { 0, output_633, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smmw64_round_internal },
    &operand_data[443],
    5,
    5,
    2,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5061 */
  {
    "smslda1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smslda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smslda1 },
    &operand_data[544],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5087 */
  {
    "smslda64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smslda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smslda64 },
    &operand_data[548],
    4,
    4,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5117 */
  {
    "smslxda1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smslxda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smslxda1 },
    &operand_data[544],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5143 */
  {
    "smslxda64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smslxda\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smslxda64 },
    &operand_data[548],
    4,
    4,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5173 */
  {
    "vsmsr64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smsr64\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vsmsr64 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5173 */
  {
    "vumsr64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umsr64\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vumsr64 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5199 */
  {
    "smul8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smul8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smul8 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5210 */
  {
    "smulx8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulx8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulx8 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5221 */
  {
    "umul8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umul8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umul8 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5232 */
  {
    "umulx8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umulx8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulx8 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5243 */
  {
    "smul16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smul16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smul16 },
    &operand_data[579],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5243 */
  {
    "umul16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umul16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umul16 },
    &operand_data[579],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5252 */
  {
    "smul16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smul16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smul16_64 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5262 */
  {
    "umul16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umul16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umul16_64 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5273 */
  {
    "smulx16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulx16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulx16 },
    &operand_data[582],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5273 */
  {
    "umulx16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umulx16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulx16 },
    &operand_data[582],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5303 */
  {
    "smulx16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulx16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulx16_64 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5313 */
  {
    "umulx16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umulx16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulx16_64 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5326 */
  {
    "ashlv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_652 },
#else
    { 0, output_652, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlv2si3 },
    &operand_data[463],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5326 */
  {
    "ashrv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_653 },
#else
    { 0, output_653, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrv2si3 },
    &operand_data[463],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5326 */
  {
    "lshrv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_654 },
#else
    { 0, output_654, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrv2si3 },
    &operand_data[463],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5350 */
  {
    "*riscv_lshrv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_655 },
#else
    { 0, output_655, 0 },
#endif
    { 0 },
    &operand_data[457],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5350 */
  {
    "*riscv_lshrv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_656 },
#else
    { 0, output_656, 0 },
#endif
    { 0 },
    &operand_data[460],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5361 */
  {
    "*riscv_ashlv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_657 },
#else
    { 0, output_657, 0 },
#endif
    { 0 },
    &operand_data[457],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5361 */
  {
    "*riscv_ashlv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_658 },
#else
    { 0, output_658, 0 },
#endif
    { 0 },
    &operand_data[460],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5372 */
  {
    "*riscv_ashrv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_659 },
#else
    { 0, output_659, 0 },
#endif
    { 0 },
    &operand_data[457],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5372 */
  {
    "*riscv_ashrv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_660 },
#else
    { 0, output_660, 0 },
#endif
    { 0 },
    &operand_data[460],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5396 */
  {
    "*riscv_ashrv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_661 },
#else
    { 0, output_661, 0 },
#endif
    { 0 },
    &operand_data[451],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5396 */
  {
    "*riscv_ashrv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_662 },
#else
    { 0, output_662, 0 },
#endif
    { 0 },
    &operand_data[585],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5407 */
  {
    "*riscv_lshrv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_663 },
#else
    { 0, output_663, 0 },
#endif
    { 0 },
    &operand_data[451],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5407 */
  {
    "*riscv_lshrv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_664 },
#else
    { 0, output_664, 0 },
#endif
    { 0 },
    &operand_data[585],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5418 */
  {
    "*riscv_ashlv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_665 },
#else
    { 0, output_665, 0 },
#endif
    { 0 },
    &operand_data[451],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5418 */
  {
    "*riscv_ashlv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_666 },
#else
    { 0, output_666, 0 },
#endif
    { 0 },
    &operand_data[585],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5430 */
  {
    "sra8_roundv4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_667 },
#else
    { 0, output_667, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sra8_roundv4qi },
    &operand_data[451],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5430 */
  {
    "sra8_roundv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_668 },
#else
    { 0, output_668, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sra8_roundv8qi },
    &operand_data[585],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5442 */
  {
    "sra16_roundv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_669 },
#else
    { 0, output_669, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sra16_roundv2hi },
    &operand_data[457],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5442 */
  {
    "sra16_roundv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_670 },
#else
    { 0, output_670, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sra16_roundv4hi },
    &operand_data[460],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5454 */
  {
    "sra32_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_671 },
#else
    { 0, output_671, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sra32_round },
    &operand_data[463],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5467 */
  {
    "srl8_roundv4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_672 },
#else
    { 0, output_672, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_srl8_roundv4qi },
    &operand_data[451],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5467 */
  {
    "srl8_roundv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_673 },
#else
    { 0, output_673, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_srl8_roundv8qi },
    &operand_data[585],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5479 */
  {
    "srl16_roundv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_674 },
#else
    { 0, output_674, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_srl16_roundv2hi },
    &operand_data[457],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5479 */
  {
    "srl16_roundv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_675 },
#else
    { 0, output_675, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_srl16_roundv4hi },
    &operand_data[460],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5491 */
  {
    "srl32_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_676 },
#else
    { 0, output_676, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_srl32_round },
    &operand_data[463],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5503 */
  {
    "sraiw_u",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sraiw.u\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sraiw_u },
    &operand_data[588],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5513 */
  {
    "sraiu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_678 },
#else
    { 0, output_678, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sraiu },
    &operand_data[591],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5525 */
  {
    "sraiu64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_679 },
#else
    { 0, output_679, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sraiu64 },
    &operand_data[594],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:5549 */
  {
    "stasv2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stas16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stasv2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5549 */
  {
    "stasv2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stas32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stasv2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5586 */
  {
    "stas16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stas16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stas16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5618 */
  {
    "stsav2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stsav2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5618 */
  {
    "stsav2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stsa32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stsav2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5654 */
  {
    "stsa16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stsa16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5675 */
  {
    "sunpkd810_imp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sunpkd810\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd810_imp },
    &operand_data[597],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5675 */
  {
    "zunpkd810_imp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zunpkd810\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd810_imp },
    &operand_data[597],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5716 */
  {
    "sunpkd810_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sunpkd810\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd810_64 },
    &operand_data[599],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5716 */
  {
    "zunpkd810_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zunpkd810\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd810_64 },
    &operand_data[599],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5728 */
  {
    "sunpkd820_imp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sunpkd820\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd820_imp },
    &operand_data[597],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5728 */
  {
    "zunpkd820_imp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zunpkd820\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd820_imp },
    &operand_data[597],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5770 */
  {
    "sunpkd820_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sunpkd820\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd820_64 },
    &operand_data[599],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5770 */
  {
    "zunpkd820_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zunpkd820\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd820_64 },
    &operand_data[599],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5783 */
  {
    "sunpkd830_imp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sunpkd830\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd830_imp },
    &operand_data[597],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5783 */
  {
    "zunpkd830_imp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zunpkd830\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd830_imp },
    &operand_data[597],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5823 */
  {
    "sunpkd830_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sunpkd830\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd830_64 },
    &operand_data[599],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5823 */
  {
    "zunpkd830_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zunpkd830\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd830_64 },
    &operand_data[599],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5856 */
  {
    "sunpkd831_imp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sunpkd831\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd831_imp },
    &operand_data[597],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5856 */
  {
    "zunpkd831_imp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zunpkd831\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd831_imp },
    &operand_data[597],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5876 */
  {
    "sunpkd831_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sunpkd831\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd831_64 },
    &operand_data[599],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5876 */
  {
    "zunpkd831_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zunpkd831\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd831_64 },
    &operand_data[599],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5909 */
  {
    "sunpkd832_imp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sunpkd832\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd832_imp },
    &operand_data[597],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5909 */
  {
    "zunpkd832_imp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zunpkd832\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd832_imp },
    &operand_data[597],
    2,
    2,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5929 */
  {
    "sunpkd832_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sunpkd832\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd832_64 },
    &operand_data[599],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5929 */
  {
    "zunpkd832_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "zunpkd832\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd832_64 },
    &operand_data[599],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5941 */
  {
    "bswap8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_706 },
#else
    { 0, 0, output_706 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bswap8 },
    &operand_data[330],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/rvp.md:5949 */
  {
    "bswap8_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_707 },
#else
    { 0, 0, output_707 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bswap8_64 },
    &operand_data[334],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc/config/riscv/rvp.md:5958 */
  {
    "uclip8v4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uclip8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uclip8v4qi },
    &operand_data[506],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5958 */
  {
    "uclip8v8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uclip8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uclip8v8qi },
    &operand_data[509],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5968 */
  {
    "uclip16v2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uclip16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uclip16v2hi },
    &operand_data[512],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5968 */
  {
    "uclip16v4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uclip16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uclip16v4hi },
    &operand_data[515],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5978 */
  {
    "uclip32sisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uclip32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uclip32sisi },
    &operand_data[518],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5978 */
  {
    "uclip32v2sidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uclip32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uclip32v2sidi },
    &operand_data[521],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5988 */
  {
    "ucmplev4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ucmple8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ucmplev4qi },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5988 */
  {
    "ucmplev2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ucmple16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ucmplev2hi },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5988 */
  {
    "ucmplev8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ucmple8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ucmplev8qi },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5988 */
  {
    "ucmplev4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ucmple16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ucmplev4hi },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5999 */
  {
    "ucmpltv4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ucmplt8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ucmpltv4qi },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5999 */
  {
    "ucmpltv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ucmplt16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ucmpltv2hi },
    &operand_data[343],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5999 */
  {
    "ucmpltv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ucmplt8\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ucmpltv8qi },
    &operand_data[346],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:5999 */
  {
    "ucmpltv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ucmplt16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ucmpltv4hi },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6010 */
  {
    "vukmar64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukmar64\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vukmar64 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6034 */
  {
    "vukmsr64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukmsr64\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vukmsr64 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6070 */
  {
    "ukstasv2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukstas16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukstasv2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6070 */
  {
    "ukstasv2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukstas32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukstasv2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6107 */
  {
    "ukstas16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukstas16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukstas16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6141 */
  {
    "ukstsav2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukstsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukstsav2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6141 */
  {
    "ukstsav2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukstsa32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukstsav2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6178 */
  {
    "ukstsa16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ukstsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukstsa16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6210 */
  {
    "urstasv2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "urstas16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urstasv2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6210 */
  {
    "urstasv2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "urstas32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urstasv2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6257 */
  {
    "urstas16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "urstas16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urstas16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6305 */
  {
    "urstsav2hi_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "urstsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urstsav2hi_le },
    &operand_data[343],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6305 */
  {
    "urstsav2si_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "urstsa32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urstsav2si_le },
    &operand_data[352],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6352 */
  {
    "urstsa16_64_le",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "urstsa16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urstsa16_64_le },
    &operand_data[349],
    3,
    3,
    6,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6389 */
  {
    "wext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_736 },
#else
    { 0, output_736, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_wext },
    &operand_data[601],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:6402 */
  {
    "wext64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_737 },
#else
    { 0, output_737, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_wext64 },
    &operand_data[604],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:6417 */
  {
    "kdmbb16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kdmbb16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdmbb16 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6426 */
  {
    "kdmbt16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kdmbt16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdmbt16 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6435 */
  {
    "kdmtt16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kdmtt16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdmtt16 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6487 */
  {
    "vkdma_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_741 },
#else
    { 0, output_741, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_vkdma_internal },
    &operand_data[607],
    8,
    8,
    2,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:6524 */
  {
    "khmbb16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "khmbb16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khmbb16 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6533 */
  {
    "khmbt16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "khmbt16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khmbt16 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6542 */
  {
    "khmtt16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "khmtt16\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khmtt16 },
    &operand_data[349],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6594 */
  {
    "kma32_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_745 },
#else
    { 0, output_745, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kma32_internal },
    &operand_data[615],
    6,
    6,
    0,
    4,
    2
  },
  /* ../../gcc/config/riscv/rvp.md:6617 */
  {
    "kmada32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmada32\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmada32 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6640 */
  {
    "kmaxda32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmaxda32\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmaxda32 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6664 */
  {
    "kmda32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmda32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmda32 },
    &operand_data[576],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6685 */
  {
    "kmxda32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmxda32\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmxda32 },
    &operand_data[576],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6707 */
  {
    "kmads32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmads32\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmads32 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6730 */
  {
    "kmadrs32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmadrs32\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmadrs32 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6753 */
  {
    "kmaxds32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmaxds32\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmaxds32 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6777 */
  {
    "kmsda32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmsda32\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmsda32 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6800 */
  {
    "kmsxda32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "kmsxda32\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmsxda32 },
    &operand_data[408],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6833 */
  {
    "revsi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rev\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_revsi_internal },
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6842 */
  {
    "revdi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rev\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_revdi_internal },
    &operand_data[33],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6852 */
  {
    "fsrw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsrw\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fsrw },
    &operand_data[370],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6890 */
  {
    "fsr_rvp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsr\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fsr_rvp },
    &operand_data[621],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6900 */
  {
    "fsri_rvp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsri\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fsri_rvp },
    &operand_data[625],
    4,
    4,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/rvp.md:6925 */
  {
    "*movv4qi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_760 },
#else
    { 0, 0, output_760 },
#endif
    { 0 },
    &operand_data[629],
    2,
    2,
    0,
    8,
    3
  },
  /* ../../gcc/config/riscv/rvp.md:6925 */
  {
    "*movv2hi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_761 },
#else
    { 0, 0, output_761 },
#endif
    { 0 },
    &operand_data[631],
    2,
    2,
    0,
    8,
    3
  },
  /* ../../gcc/config/riscv/rvp.md:6925 */
  {
    "*movv8qi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_762 },
#else
    { 0, 0, output_762 },
#endif
    { 0 },
    &operand_data[633],
    2,
    2,
    0,
    8,
    3
  },
  /* ../../gcc/config/riscv/rvp.md:6925 */
  {
    "*movv4hi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_763 },
#else
    { 0, 0, output_763 },
#endif
    { 0 },
    &operand_data[635],
    2,
    2,
    0,
    8,
    3
  },
  /* ../../gcc/config/riscv/rvp.md:6944 */
  {
    "*movv2si_64bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_764 },
#else
    { 0, 0, output_764 },
#endif
    { 0 },
    &operand_data[637],
    2,
    2,
    0,
    9,
    3
  },
  /* ../../gcc/config/riscv/riscv.md:2639 */
  {
    "stack_protect_set_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%2, %1\n\tsw\t%2, %0\n\tli\t%2, 0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_protect_set_si },
    &operand_data[639],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2639 */
  {
    "stack_protect_set_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%2, %1\n\tsd\t%2, %0\n\tli\t%2, 0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_protect_set_di },
    &operand_data[642],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2681 */
  {
    "stack_protect_test_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%3, %1\n\tlw\t%0, %2\n\txor\t%0, %3, %0\n\tli\t%3, 0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_protect_test_si },
    &operand_data[645],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:2681 */
  {
    "stack_protect_test_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%3, %1\n\tld\t%0, %2\n\txor\t%0, %3, %0\n\tli\t%3, 0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_protect_test_di },
    &operand_data[649],
    3,
    4,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:51 */
  {
    "mem_thread_fence_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fence\tiorw,iorw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mem_thread_fence_1 },
    &operand_data[653],
    2,
    2,
    1,
    0,
    1
  },
  /* ../../gcc/config/riscv/sync.md:61 */
  {
    "atomic_storesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F2amoswap.w%A2 zero,%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_storesi },
    &operand_data[655],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:61 */
  {
    "atomic_storedi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F2amoswap.d%A2 zero,%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_storedi },
    &operand_data[658],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:71 */
  {
    "atomic_addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F2amoadd.w%A2 zero,%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_addsi },
    &operand_data[661],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:71 */
  {
    "atomic_orsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F2amoor.w%A2 zero,%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_orsi },
    &operand_data[661],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:71 */
  {
    "atomic_xorsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F2amoxor.w%A2 zero,%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_xorsi },
    &operand_data[661],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:71 */
  {
    "atomic_andsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F2amoand.w%A2 zero,%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_andsi },
    &operand_data[661],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:71 */
  {
    "atomic_adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F2amoadd.d%A2 zero,%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_adddi },
    &operand_data[664],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:71 */
  {
    "atomic_ordi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F2amoor.d%A2 zero,%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_ordi },
    &operand_data[664],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:71 */
  {
    "atomic_xordi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F2amoxor.d%A2 zero,%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_xordi },
    &operand_data[664],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:71 */
  {
    "atomic_anddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F2amoand.d%A2 zero,%z1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_anddi },
    &operand_data[664],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:82 */
  {
    "atomic_fetch_addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F3amoadd.w%A3 %0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_addsi },
    &operand_data[667],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:82 */
  {
    "atomic_fetch_orsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F3amoor.w%A3 %0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_orsi },
    &operand_data[667],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:82 */
  {
    "atomic_fetch_xorsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F3amoxor.w%A3 %0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_xorsi },
    &operand_data[667],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:82 */
  {
    "atomic_fetch_andsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F3amoand.w%A3 %0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_andsi },
    &operand_data[667],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:82 */
  {
    "atomic_fetch_adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F3amoadd.d%A3 %0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_adddi },
    &operand_data[671],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:82 */
  {
    "atomic_fetch_ordi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F3amoor.d%A3 %0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_ordi },
    &operand_data[671],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:82 */
  {
    "atomic_fetch_xordi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F3amoxor.d%A3 %0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_xordi },
    &operand_data[671],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:82 */
  {
    "atomic_fetch_anddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F3amoand.d%A3 %0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_anddi },
    &operand_data[671],
    4,
    4,
    2,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:95 */
  {
    "atomic_exchangesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F3amoswap.w%A3 %0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangesi },
    &operand_data[675],
    4,
    4,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:95 */
  {
    "atomic_exchangedi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F3amoswap.d%A3 %0,%z2,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangedi },
    &operand_data[679],
    4,
    4,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:107 */
  {
    "atomic_cas_value_strongsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F5 1: lr.w%A5 %0,%1; bne %0,%z2,1f; sc.w%A4 %6,%z3,%1; bnez %6,1b; 1:",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_cas_value_strongsi },
    &operand_data[683],
    6,
    7,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/sync.md:107 */
  {
    "atomic_cas_value_strongdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%F5 1: lr.d%A5 %0,%1; bne %0,%z2,1f; sc.d%A4 %6,%z3,%1; bnez %6,1b; 1:",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_cas_value_strongdi },
    &operand_data[690],
    6,
    7,
    1,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:25 */
  {
    "*local_pic_loadqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[697],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:25 */
  {
    "*local_pic_loadhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[699],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:25 */
  {
    "*local_pic_loadsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[701],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:25 */
  {
    "*local_pic_loaddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[703],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:32 */
  {
    "*local_pic_load_sqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lb\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[699],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:32 */
  {
    "*local_pic_load_sqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lb\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[701],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:32 */
  {
    "*local_pic_load_sqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lb\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[703],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:32 */
  {
    "*local_pic_load_shi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lh\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[699],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:32 */
  {
    "*local_pic_load_shi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lh\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[701],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:32 */
  {
    "*local_pic_load_shi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lh\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[703],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:32 */
  {
    "*local_pic_load_ssi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[699],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:32 */
  {
    "*local_pic_load_ssi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[701],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:32 */
  {
    "*local_pic_load_ssi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[703],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:39 */
  {
    "*local_pic_load_uqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[699],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:39 */
  {
    "*local_pic_load_uqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[701],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:39 */
  {
    "*local_pic_load_uqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[703],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:39 */
  {
    "*local_pic_load_uhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[699],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:39 */
  {
    "*local_pic_load_uhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[701],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:39 */
  {
    "*local_pic_load_uhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[703],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:39 */
  {
    "*local_pic_load_usi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[699],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:39 */
  {
    "*local_pic_load_usi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[701],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:39 */
  {
    "*local_pic_load_usi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwu\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[703],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:49 */
  {
    "*local_pic_loadsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_814 },
#else
    { 0, output_814, 0 },
#endif
    { 0 },
    &operand_data[705],
    2,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/pic.md:49 */
  {
    "*local_pic_loaddf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_815 },
#else
    { 0, output_815, 0 },
#endif
    { 0 },
    &operand_data[708],
    2,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/pic.md:49 */
  {
    "*local_pic_loadsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_816 },
#else
    { 0, output_816, 0 },
#endif
    { 0 },
    &operand_data[711],
    2,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/pic.md:49 */
  {
    "*local_pic_loaddf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_817 },
#else
    { 0, output_817, 0 },
#endif
    { 0 },
    &operand_data[714],
    2,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/pic.md:64 */
  {
    "*local_pic_load_32dsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "flw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[717],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:64 */
  {
    "*local_pic_load_32ddf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fld\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[720],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:64 */
  {
    "*local_pic_load_32dsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "flw\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[723],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:64 */
  {
    "*local_pic_load_32ddf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fld\t%0,%1,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[726],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:73 */
  {
    "*local_pic_load_sfsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[729],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:73 */
  {
    "*local_pic_load_sfdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%0,%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[731],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:83 */
  {
    "*local_pic_storeqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sb\t%z1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[732],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:83 */
  {
    "*local_pic_storehi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sh\t%z1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[735],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:83 */
  {
    "*local_pic_storesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sw\t%z1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[738],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:83 */
  {
    "*local_pic_storedi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sd\t%z1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[741],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:83 */
  {
    "*local_pic_storeqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sb\t%z1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[744],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:83 */
  {
    "*local_pic_storehi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sh\t%z1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[747],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:83 */
  {
    "*local_pic_storesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sw\t%z1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[750],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:83 */
  {
    "*local_pic_storedi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sd\t%z1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[753],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:91 */
  {
    "*local_pic_storesf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_832 },
#else
    { 0, output_832, 0 },
#endif
    { 0 },
    &operand_data[756],
    2,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/pic.md:91 */
  {
    "*local_pic_storedf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_833 },
#else
    { 0, output_833, 0 },
#endif
    { 0 },
    &operand_data[759],
    2,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/pic.md:91 */
  {
    "*local_pic_storesf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_834 },
#else
    { 0, output_834, 0 },
#endif
    { 0 },
    &operand_data[762],
    2,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/pic.md:91 */
  {
    "*local_pic_storedf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_835 },
#else
    { 0, output_835, 0 },
#endif
    { 0 },
    &operand_data[765],
    2,
    3,
    0,
    2,
    2
  },
  /* ../../gcc/config/riscv/pic.md:106 */
  {
    "*local_pic_store_32dsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsw\t%1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[717],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:106 */
  {
    "*local_pic_store_32ddf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsd\t%1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[720],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:106 */
  {
    "*local_pic_store_32dsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsw\t%1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[723],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:106 */
  {
    "*local_pic_store_32ddf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsd\t%1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[726],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:115 */
  {
    "*local_pic_store_sfsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sw\t%1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[768],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:115 */
  {
    "*local_pic_store_sfdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sd\t%1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[771],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:115 */
  {
    "*local_pic_store_sfsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sw\t%1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[774],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/pic.md:115 */
  {
    "*local_pic_store_sfdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sd\t%1,%0,%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[777],
    2,
    3,
    0,
    1,
    1
  },
  /* ../../gcc/config/riscv/riscv.md:523 */
  {
    "adddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adddi3 },
    &operand_data[10],
    3,
    3,
    0,
    2,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:721 */
  {
    "mulditi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulditi3 },
    &operand_data[780],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:721 */
  {
    "umulditi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulditi3 },
    &operand_data[780],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:752 */
  {
    "usmulditi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usmulditi3 },
    &operand_data[780],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:783 */
  {
    "mulsidi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:783 */
  {
    "umulsidi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsidi3 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:821 */
  {
    "usmulsidi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usmulsidi3 },
    &operand_data[48],
    3,
    3,
    0,
    1,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1401 */
  {
    "movdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdi },
    &operand_data[783],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1432 */
  {
    "movsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsi },
    &operand_data[785],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1457 */
  {
    "movhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movhi },
    &operand_data[787],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1499 */
  {
    "movqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movqi },
    &operand_data[789],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1519 */
  {
    "movsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsf },
    &operand_data[791],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1550 */
  {
    "movdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdf },
    &operand_data[793],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1602 */
  {
    "cpymemsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cpymemsi },
    &operand_data[795],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1617 */
  {
    "clear_cache",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clear_cache },
    &operand_data[799],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1953 */
  {
    "movsicc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsicc },
    &operand_data[801],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1953 */
  {
    "movdicc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdicc },
    &operand_data[805],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1986 */
  {
    "condjump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_condjump },
    &operand_data[809],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1992 */
  {
    "cbranchqi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchqi4 },
    &operand_data[811],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1992 */
  {
    "cbranchsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsi4 },
    &operand_data[815],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:1992 */
  {
    "cbranchdi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchdi4 },
    &operand_data[819],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2006 */
  {
    "cbranchsf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsf4 },
    &operand_data[823],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2006 */
  {
    "cbranchdf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchdf4 },
    &operand_data[827],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2085 */
  {
    "cstoresi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoresi4 },
    &operand_data[831],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2085 */
  {
    "cstoredi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoredi4 },
    &operand_data[835],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2097 */
  {
    "cstoresf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoresf4 },
    &operand_data[839],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2097 */
  {
    "cstoredf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoredf4 },
    &operand_data[843],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2119 */
  {
    "flt_quietsfsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_flt_quietsfsi4 },
    &operand_data[847],
    3,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2119 */
  {
    "fle_quietsfsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fle_quietsfsi4 },
    &operand_data[847],
    3,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2119 */
  {
    "flt_quietsfdi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_flt_quietsfdi4 },
    &operand_data[851],
    3,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2119 */
  {
    "fle_quietsfdi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fle_quietsfdi4 },
    &operand_data[851],
    3,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2119 */
  {
    "flt_quietdfsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_flt_quietdfsi4 },
    &operand_data[855],
    3,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2119 */
  {
    "fle_quietdfsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fle_quietdfsi4 },
    &operand_data[855],
    3,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2119 */
  {
    "flt_quietdfdi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_flt_quietdfdi4 },
    &operand_data[859],
    3,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2119 */
  {
    "fle_quietdfdi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fle_quietdfdi4 },
    &operand_data[859],
    3,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2228 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_indirect_jump },
    &operand_data[863],
    1,
    1,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2247 */
  {
    "tablejump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tablejump },
    &operand_data[863],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2280 */
  {
    "prologue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_prologue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2299 */
  {
    "epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_epilogue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2307 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_epilogue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2318 */
  {
    "return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2343 */
  {
    "eh_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eh_return },
    &operand_data[865],
    1,
    1,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2399 */
  {
    "sibcall",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall },
    &operand_data[866],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2421 */
  {
    "sibcall_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_value },
    &operand_data[866],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2444 */
  {
    "call",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call },
    &operand_data[866],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2467 */
  {
    "call_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value },
    &operand_data[866],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2493 */
  {
    "untyped_call",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_untyped_call },
    &operand_data[866],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:339 */
  {
    "crasv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crasv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:339 */
  {
    "crasv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crasv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:375 */
  {
    "cras16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cras16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:406 */
  {
    "crsav2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crsav2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:406 */
  {
    "crsav2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crsav2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:442 */
  {
    "crsa16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crsa16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:474 */
  {
    "kcrasv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kcrasv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:474 */
  {
    "kcrasv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kcrasv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:510 */
  {
    "kcras16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kcras16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:541 */
  {
    "kcrsav2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kcrsav2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:541 */
  {
    "kcrsav2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kcrsav2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:577 */
  {
    "kcrsa16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kcrsa16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:609 */
  {
    "ukcrasv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukcrasv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:609 */
  {
    "ukcrasv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukcrasv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:645 */
  {
    "ukcras16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukcras16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:676 */
  {
    "ukcrsav2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukcrsav2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:676 */
  {
    "ukcrsav2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukcrsav2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:712 */
  {
    "ukcrsa16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukcrsa16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:744 */
  {
    "rcrasv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rcrasv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:744 */
  {
    "rcrasv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rcrasv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:790 */
  {
    "rcras16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rcras16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:837 */
  {
    "rcrsav2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rcrsav2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:837 */
  {
    "rcrsav2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rcrsav2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:883 */
  {
    "rcrsa16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rcrsa16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:931 */
  {
    "urcrasv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urcrasv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:931 */
  {
    "urcrasv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urcrasv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:977 */
  {
    "urcras16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urcras16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1024 */
  {
    "urcrsav2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urcrsav2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1024 */
  {
    "urcrsav2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urcrsav2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1070 */
  {
    "urcrsa16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urcrsa16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1118 */
  {
    "insb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insb },
    &operand_data[879],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1157 */
  {
    "insb64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insb64 },
    &operand_data[883],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1196 */
  {
    "kdmbb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdmbb },
    &operand_data[887],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1208 */
  {
    "kdmbt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdmbt },
    &operand_data[887],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1220 */
  {
    "kdmtt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdmtt },
    &operand_data[887],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1255 */
  {
    "kdmabb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdmabb },
    &operand_data[890],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1268 */
  {
    "kdmabt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdmabt },
    &operand_data[890],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1281 */
  {
    "kdmatt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdmatt },
    &operand_data[890],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1319 */
  {
    "khmbbsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khmbbsi },
    &operand_data[887],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1331 */
  {
    "khmbtsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khmbtsi },
    &operand_data[887],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1343 */
  {
    "khmttsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_khmttsi },
    &operand_data[887],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1380 */
  {
    "kmabb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmabb },
    &operand_data[890],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1394 */
  {
    "kmabt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmabt },
    &operand_data[890],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1408 */
  {
    "kmatt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmatt },
    &operand_data[890],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1444 */
  {
    "kmabb64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmabb64 },
    &operand_data[874],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1458 */
  {
    "kmabt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmabt64 },
    &operand_data[874],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1472 */
  {
    "kmatt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmatt64 },
    &operand_data[874],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1969 */
  {
    "kmmawb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawb },
    &operand_data[894],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1982 */
  {
    "kmmawt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawt },
    &operand_data[894],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:1995 */
  {
    "kmmawb2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawb2 },
    &operand_data[894],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2008 */
  {
    "kmmawt2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawt2 },
    &operand_data[894],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2044 */
  {
    "kmmawb_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawb_round },
    &operand_data[894],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2057 */
  {
    "kmmawt_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawt_round },
    &operand_data[894],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2070 */
  {
    "kmmawb2_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawb2_round },
    &operand_data[894],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2083 */
  {
    "kmmawt2_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawt2_round },
    &operand_data[894],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2133 */
  {
    "kmmawb64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawb64 },
    &operand_data[873],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2147 */
  {
    "kmmawt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawt64 },
    &operand_data[873],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2161 */
  {
    "kmmawb2_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawb2_64 },
    &operand_data[873],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2175 */
  {
    "kmmawt2_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawt2_64 },
    &operand_data[873],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2230 */
  {
    "kmmawb64_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawb64_round },
    &operand_data[873],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2244 */
  {
    "kmmawt64_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawt64_round },
    &operand_data[873],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2258 */
  {
    "kmmawb2_64_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawb2_64_round },
    &operand_data[873],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2272 */
  {
    "kmmawt2_64_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmawt2_64_round },
    &operand_data[873],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2361 */
  {
    "kmmwb2_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmwb2_round },
    &operand_data[890],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2373 */
  {
    "kmmwt2_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmwt2_round },
    &operand_data[890],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2422 */
  {
    "kmmwb64_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmwb64_round },
    &operand_data[874],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2434 */
  {
    "kmmwt64_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmwt64_round },
    &operand_data[874],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2564 */
  {
    "kmmwb64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmwb64 },
    &operand_data[874],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2576 */
  {
    "kmmwt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmwt64 },
    &operand_data[874],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2623 */
  {
    "kmmwb2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmwb2 },
    &operand_data[890],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2634 */
  {
    "kmmwt2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmmwt2 },
    &operand_data[890],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2712 */
  {
    "kslrav4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav4qi },
    &operand_data[879],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2712 */
  {
    "kslrav2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav2hi },
    &operand_data[888],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2712 */
  {
    "kslrav8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav8qi },
    &operand_data[883],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2712 */
  {
    "kslrav4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav4hi },
    &operand_data[898],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2712 */
  {
    "kslrav2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav2si },
    &operand_data[901],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2751 */
  {
    "kslrav4qi_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav4qi_round },
    &operand_data[879],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2751 */
  {
    "kslrav2hi_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav2hi_round },
    &operand_data[888],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2751 */
  {
    "kslrav8qi_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav8qi_round },
    &operand_data[883],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2751 */
  {
    "kslrav4hi_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav4hi_round },
    &operand_data[898],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2751 */
  {
    "kslrav2si_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kslrav2si_round },
    &operand_data[901],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2830 */
  {
    "kstasv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kstasv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2830 */
  {
    "kstasv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kstasv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2867 */
  {
    "kstas16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kstas16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2898 */
  {
    "kstsav2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kstsav2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2898 */
  {
    "kstsav2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kstsav2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:2934 */
  {
    "kstsa16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kstsa16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3126 */
  {
    "pkbbv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pkbbv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3126 */
  {
    "pkbbv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pkbbv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3138 */
  {
    "pkbtv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pkbtv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3138 */
  {
    "pkbtv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pkbtv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3150 */
  {
    "pkttv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pkttv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3150 */
  {
    "pkttv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pkttv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3162 */
  {
    "pktbv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pktbv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3162 */
  {
    "pktbv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pktbv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3175 */
  {
    "pkbb64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pkbb64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3198 */
  {
    "pkbt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pkbt64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3221 */
  {
    "pktt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pktt64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3244 */
  {
    "pktb64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pktb64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3404 */
  {
    "rstasv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstasv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3404 */
  {
    "rstasv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstasv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3450 */
  {
    "rstas16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstas16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3497 */
  {
    "rstsav2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstsav2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3497 */
  {
    "rstsav2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstsav2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3543 */
  {
    "rstsa16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstsa16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3685 */
  {
    "smalbb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalbb },
    &operand_data[904],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3699 */
  {
    "smalbt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalbt },
    &operand_data[904],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3713 */
  {
    "smaltt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaltt },
    &operand_data[904],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3749 */
  {
    "smalbb64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalbb64 },
    &operand_data[908],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3764 */
  {
    "smalbt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalbt64 },
    &operand_data[908],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3779 */
  {
    "smaltt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaltt64 },
    &operand_data[908],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3826 */
  {
    "smalda1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalda1 },
    &operand_data[912],
    4,
    4,
    0,
    1,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3893 */
  {
    "smalxda1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalxda1 },
    &operand_data[912],
    4,
    4,
    0,
    1,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3905 */
  {
    "smalxds1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalxds1 },
    &operand_data[912],
    4,
    4,
    0,
    1,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:3971 */
  {
    "smalds1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smalds1 },
    &operand_data[912],
    4,
    4,
    0,
    1,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4037 */
  {
    "smaldrs3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaldrs3 },
    &operand_data[912],
    4,
    4,
    0,
    1,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4190 */
  {
    "smaqa",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaqa },
    &operand_data[916],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4203 */
  {
    "umaqa",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaqa },
    &operand_data[916],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4248 */
  {
    "smaqa64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaqa64 },
    &operand_data[920],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4261 */
  {
    "umaqa64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaqa64 },
    &operand_data[920],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4327 */
  {
    "sumaqa",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sumaqa },
    &operand_data[916],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4373 */
  {
    "sumaqa64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sumaqa64 },
    &operand_data[920],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4441 */
  {
    "smbb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smbb },
    &operand_data[887],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4453 */
  {
    "smbt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smbt },
    &operand_data[887],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4465 */
  {
    "smtt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smtt },
    &operand_data[887],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4497 */
  {
    "smbb64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smbb64 },
    &operand_data[875],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4509 */
  {
    "smbt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smbt64 },
    &operand_data[875],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4521 */
  {
    "smtt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smtt64 },
    &operand_data[875],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4556 */
  {
    "smbb32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smbb32 },
    &operand_data[924],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4568 */
  {
    "smbt32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smbt32 },
    &operand_data[924],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4580 */
  {
    "smtt32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smtt32 },
    &operand_data[924],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4859 */
  {
    "smmwb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smmwb },
    &operand_data[890],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4870 */
  {
    "smmwt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smmwt },
    &operand_data[890],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4899 */
  {
    "smmwb64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smmwb64 },
    &operand_data[874],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4911 */
  {
    "smmwt64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smmwt64 },
    &operand_data[874],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4957 */
  {
    "smmwb_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smmwb_round },
    &operand_data[890],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4968 */
  {
    "smmwt_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smmwt_round },
    &operand_data[890],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:4998 */
  {
    "smmwb64_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smmwb64_round },
    &operand_data[874],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5010 */
  {
    "smmwt64_round",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smmwt64_round },
    &operand_data[874],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5337 */
  {
    "ashlv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlv2hi3 },
    &operand_data[927],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5337 */
  {
    "ashrv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrv2hi3 },
    &operand_data[927],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5337 */
  {
    "lshrv2hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrv2hi3 },
    &operand_data[927],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5337 */
  {
    "ashlv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlv4hi3 },
    &operand_data[930],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5337 */
  {
    "ashrv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrv4hi3 },
    &operand_data[930],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5337 */
  {
    "lshrv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrv4hi3 },
    &operand_data[930],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5383 */
  {
    "ashlv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlv4qi3 },
    &operand_data[933],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5383 */
  {
    "ashrv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrv4qi3 },
    &operand_data[933],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5383 */
  {
    "lshrv4qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrv4qi3 },
    &operand_data[933],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5383 */
  {
    "ashlv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlv8qi3 },
    &operand_data[936],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5383 */
  {
    "ashrv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrv8qi3 },
    &operand_data[936],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5383 */
  {
    "lshrv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrv8qi3 },
    &operand_data[936],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5538 */
  {
    "stasv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stasv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5538 */
  {
    "stasv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stasv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5575 */
  {
    "stas16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stas16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5607 */
  {
    "stsav2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stsav2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5607 */
  {
    "stsav2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stsav2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5643 */
  {
    "stsa16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stsa16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5695 */
  {
    "sunpkd810",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd810 },
    &operand_data[939],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5705 */
  {
    "zunpkd810",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd810 },
    &operand_data[939],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5748 */
  {
    "zunpkd820",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd820 },
    &operand_data[939],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5759 */
  {
    "sunpkd820",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd820 },
    &operand_data[939],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5802 */
  {
    "sunpkd830",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd830 },
    &operand_data[939],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5812 */
  {
    "zunpkd830",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd830 },
    &operand_data[939],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5836 */
  {
    "sunpkd831",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd831 },
    &operand_data[939],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5846 */
  {
    "zunpkd831",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd831 },
    &operand_data[939],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5889 */
  {
    "sunpkd832",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sunpkd832 },
    &operand_data[939],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:5899 */
  {
    "zunpkd832",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zunpkd832 },
    &operand_data[939],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6059 */
  {
    "ukstasv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukstasv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6059 */
  {
    "ukstasv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukstasv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6096 */
  {
    "ukstas16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukstas16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6130 */
  {
    "ukstsav2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukstsav2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6130 */
  {
    "ukstsav2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukstsav2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6167 */
  {
    "ukstsa16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ukstsa16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6199 */
  {
    "urstasv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urstasv2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6199 */
  {
    "urstasv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urstasv2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6246 */
  {
    "urstas16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urstas16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6294 */
  {
    "urstsav2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urstsav2hi },
    &operand_data[870],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6294 */
  {
    "urstsav2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urstsav2si },
    &operand_data[873],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6341 */
  {
    "urstsa16_64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_urstsa16_64 },
    &operand_data[876],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6445 */
  {
    "kdmabb16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdmabb16 },
    &operand_data[874],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6459 */
  {
    "kdmabt16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdmabt16 },
    &operand_data[874],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6473 */
  {
    "kdmatt16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kdmatt16 },
    &operand_data[874],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6552 */
  {
    "kmabb32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmabb32 },
    &operand_data[941],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6566 */
  {
    "kmabt32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmabt32 },
    &operand_data[941],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6580 */
  {
    "kmatt32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_kmatt32 },
    &operand_data[941],
    4,
    4,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6824 */
  {
    "revsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_revsi },
    &operand_data[622],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6824 */
  {
    "revdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_revdi },
    &operand_data[781],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6862 */
  {
    "fsr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fsr },
    &operand_data[945],
    4,
    4,
    0,
    2,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6916 */
  {
    "movv4qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv4qi },
    &operand_data[949],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6916 */
  {
    "movv2hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2hi },
    &operand_data[951],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6916 */
  {
    "movv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv8qi },
    &operand_data[953],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6916 */
  {
    "movv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv4hi },
    &operand_data[955],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/rvp.md:6935 */
  {
    "movv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2si },
    &operand_data[957],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2596 */
  {
    "restore_stack_nonlocal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_restore_stack_nonlocal },
    &operand_data[959],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2609 */
  {
    "get_thread_pointersi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_get_thread_pointersi },
    &operand_data[23],
    1,
    1,
    0,
    1,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2609 */
  {
    "get_thread_pointerdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_get_thread_pointerdi },
    &operand_data[20],
    1,
    1,
    0,
    1,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2617 */
  {
    "stack_protect_set",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_protect_set },
    &operand_data[960],
    2,
    2,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/riscv.md:2648 */
  {
    "stack_protect_test",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_protect_test },
    &operand_data[960],
    3,
    3,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/sync.md:36 */
  {
    "mem_thread_fence",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mem_thread_fence },
    &operand_data[117],
    1,
    1,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/sync.md:121 */
  {
    "atomic_compare_and_swapsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_compare_and_swapsi },
    &operand_data[963],
    8,
    8,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/sync.md:121 */
  {
    "atomic_compare_and_swapdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_compare_and_swapdi },
    &operand_data[971],
    8,
    8,
    0,
    0,
    0
  },
  /* ../../gcc/config/riscv/sync.md:155 */
  {
    "atomic_test_and_set",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_test_and_set },
    &operand_data[979],
    3,
    3,
    0,
    1,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}

/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#define IN_TARGET_CODE 1
#include "bconfig.h"
#define INCLUDE_STRING
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef CHECKING_P
#define CHECKING_P 0
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT
#define USE_ENUM_MODES

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "memmodel.h"
#include "tm_p.h"
#include "hard-reg-set.h"
#include "function.h"
#include "emit-rtl.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "predict.h"
#include "basic-block.h"
#include "bitmap.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx_insn *insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

  { "(TARGET_HARD_FLOAT && ! HONOR_SNANS (SFmode)) && ((((!TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (!TARGET_64BIT))",
    __builtin_constant_p (
#line 2135 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && ! HONOR_SNANS (SFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    ? (int) (
#line 2135 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && ! HONOR_SNANS (SFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    : -1 },
  { "(TARGET_HARD_FLOAT && ! HONOR_SNANS (SFmode)) && ((((TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 2135 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && ! HONOR_SNANS (SFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    ? (int) (
#line 2135 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && ! HONOR_SNANS (SFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    : -1 },
#line 1237 "../../gcc/config/riscv/riscv.md"
  { "TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 1237 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 1237 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)
    : -1 },
#line 6409 "../../gcc/config/riscv/rvp.md"
  { "TARGET_ZPSF && !TARGET_ZBPBO && TARGET_64BIT",
    __builtin_constant_p 
#line 6409 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPSF && !TARGET_ZBPBO && TARGET_64BIT)
    ? (int) 
#line 6409 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPSF && !TARGET_ZBPBO && TARGET_64BIT)
    : -1 },
  { "(TARGET_HARD_FLOAT && !HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1008 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && !HONOR_SIGNED_ZEROS (SFmode)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1008 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && !HONOR_SIGNED_ZEROS (SFmode)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])\n\
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_HARD_FLOAT) && (Pmode == DImode))",
    __builtin_constant_p (
#line 95 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    ? (int) (
#line 95 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    : -1 },
  { "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])\n\
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_DOUBLE_FLOAT) && (Pmode == SImode))",
    __builtin_constant_p (
#line 95 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    ? (int) (
#line 95 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    : -1 },
#line 882 "../../gcc/config/riscv/riscv.md"
  { "TARGET_DIV && TARGET_64BIT",
    __builtin_constant_p 
#line 882 "../../gcc/config/riscv/riscv.md"
(TARGET_DIV && TARGET_64BIT)
    ? (int) 
#line 882 "../../gcc/config/riscv/riscv.md"
(TARGET_DIV && TARGET_64BIT)
    : -1 },
#line 1423 "../../gcc/config/riscv/riscv.md"
  { "TARGET_64BIT\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 1423 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 1423 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
  { "(USE_LOAD_ADDRESS_MACRO (operands[0])) && ((TARGET_64BIT) && (Pmode == SImode))",
    __builtin_constant_p (
#line 87 "../../gcc/config/riscv/pic.md"
(USE_LOAD_ADDRESS_MACRO (operands[0])) && (
#line 358 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    ? (int) (
#line 87 "../../gcc/config/riscv/pic.md"
(USE_LOAD_ADDRESS_MACRO (operands[0])) && (
#line 358 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    : -1 },
  { "(TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_HARD_FLOAT))",
    __builtin_constant_p (
#line 1290 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)))
    ? (int) (
#line 1290 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)))
    : -1 },
#line 330 "../../gcc/config/riscv/riscv.md"
  { "Pmode == DImode",
    __builtin_constant_p 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)
    ? (int) 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)
    : -1 },
  { "(TARGET_HARD_FLOAT) && (((!TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT))",
    __builtin_constant_p (
#line 2114 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && ((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)))
    ? (int) (
#line 2114 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && ((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)))
    : -1 },
  { "(TARGET_HARD_FLOAT && !HONOR_SIGNED_ZEROS (DFmode)) && (TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1008 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && !HONOR_SIGNED_ZEROS (DFmode)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1008 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && !HONOR_SIGNED_ZEROS (DFmode)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT))
    : -1 },
#line 6395 "../../gcc/config/riscv/rvp.md"
  { "TARGET_ZPSF && !TARGET_ZBPBO && !TARGET_64BIT",
    __builtin_constant_p 
#line 6395 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPSF && !TARGET_ZBPBO && !TARGET_64BIT)
    ? (int) 
#line 6395 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPSF && !TARGET_ZBPBO && !TARGET_64BIT)
    : -1 },
#line 1469 "../../gcc/config/riscv/riscv.md"
  { "(register_operand (operands[0], HImode)\n\
    || reg_or_0_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 1469 "../../gcc/config/riscv/riscv.md"
((register_operand (operands[0], HImode)
    || reg_or_0_operand (operands[1], HImode)))
    ? (int) 
#line 1469 "../../gcc/config/riscv/riscv.md"
((register_operand (operands[0], HImode)
    || reg_or_0_operand (operands[1], HImode)))
    : -1 },
  { "(USE_LOAD_ADDRESS_MACRO (operands[0])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 87 "../../gcc/config/riscv/pic.md"
(USE_LOAD_ADDRESS_MACRO (operands[0])) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode))
    ? (int) (
#line 87 "../../gcc/config/riscv/pic.md"
(USE_LOAD_ADDRESS_MACRO (operands[0])) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])\n\
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && ((TARGET_DOUBLE_FLOAT) && (Pmode == DImode))",
    __builtin_constant_p (
#line 110 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    ? (int) (
#line 110 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    : -1 },
#line 175 "../../gcc/config/riscv/rvp.md"
  { "!TARGET_64BIT && TARGET_ZPSF",
    __builtin_constant_p 
#line 175 "../../gcc/config/riscv/rvp.md"
(!TARGET_64BIT && TARGET_ZPSF)
    ? (int) 
#line 175 "../../gcc/config/riscv/rvp.md"
(!TARGET_64BIT && TARGET_ZPSF)
    : -1 },
#line 1584 "../../gcc/config/riscv/riscv.md"
  { "!TARGET_DOUBLE_FLOAT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 1584 "../../gcc/config/riscv/riscv.md"
(!TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 1584 "../../gcc/config/riscv/riscv.md"
(!TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
  { "(TARGET_ZKSH) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 264 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKSH) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    ? (int) (
#line 264 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKSH) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])\n\
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && ((TARGET_DOUBLE_FLOAT) && (Pmode == SImode))",
    __builtin_constant_p (
#line 110 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    ? (int) (
#line 110 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    : -1 },
  { "(TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT))",
    __builtin_constant_p (
#line 1290 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)))
    ? (int) (
#line 1290 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)))
    : -1 },
#line 1564 "../../gcc/config/riscv/riscv.md"
  { "!TARGET_64BIT && TARGET_DOUBLE_FLOAT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 1564 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 1564 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
#line 6585 "../../gcc/config/riscv/rvp.md"
  { "TARGET_ZPN && TARGET_64BIT",
    __builtin_constant_p 
#line 6585 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN && TARGET_64BIT)
    ? (int) 
#line 6585 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN && TARGET_64BIT)
    : -1 },
  { "(TARGET_ZKR) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 298 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKR) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    ? (int) (
#line 298 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKR) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    : -1 },
#line 1219 "../../gcc/config/riscv/riscv.md"
  { " reload_completed\n\
   && REG_P (operands[1])\n\
   && !paradoxical_subreg_p (operands[0])",
    __builtin_constant_p 
#line 1219 "../../gcc/config/riscv/riscv.md"
( reload_completed
   && REG_P (operands[1])
   && !paradoxical_subreg_p (operands[0]))
    ? (int) 
#line 1219 "../../gcc/config/riscv/riscv.md"
( reload_completed
   && REG_P (operands[1])
   && !paradoxical_subreg_p (operands[0]))
    : -1 },
#line 3784 "../../gcc/config/riscv/rvp.md"
  { "TARGET_ZPSF && TARGET_64BIT",
    __builtin_constant_p 
#line 3784 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPSF && TARGET_64BIT)
    ? (int) 
#line 3784 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPSF && TARGET_64BIT)
    : -1 },
#line 863 "../../gcc/config/riscv/riscv.md"
  { "TARGET_DIV",
    __builtin_constant_p 
#line 863 "../../gcc/config/riscv/riscv.md"
(TARGET_DIV)
    ? (int) 
#line 863 "../../gcc/config/riscv/riscv.md"
(TARGET_DIV)
    : -1 },
  { "(TARGET_64BIT\n\
   && ((INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff)) && ( reload_completed)",
    __builtin_constant_p (
#line 1917 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && ((INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff)) && 
#line 1920 "../../gcc/config/riscv/riscv.md"
( reload_completed))
    ? (int) (
#line 1917 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && ((INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff)) && 
#line 1920 "../../gcc/config/riscv/riscv.md"
( reload_completed))
    : -1 },
  { "(USE_LOAD_ADDRESS_MACRO (operands[1])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 42 "../../gcc/config/riscv/pic.md"
(USE_LOAD_ADDRESS_MACRO (operands[1])) && 
#line 352 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    ? (int) (
#line 42 "../../gcc/config/riscv/pic.md"
(USE_LOAD_ADDRESS_MACRO (operands[1])) && 
#line 352 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    : -1 },
#line 1541 "../../gcc/config/riscv/riscv.md"
  { "!TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 1541 "../../gcc/config/riscv/riscv.md"
(!TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    ? (int) 
#line 1541 "../../gcc/config/riscv/riscv.md"
(!TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    : -1 },
#line 677 "../../gcc/config/riscv/riscv.md"
  { "TARGET_MUL",
    __builtin_constant_p 
#line 677 "../../gcc/config/riscv/riscv.md"
(TARGET_MUL)
    ? (int) 
#line 677 "../../gcc/config/riscv/riscv.md"
(TARGET_MUL)
    : -1 },
#line 2365 "../../gcc/config/riscv/riscv.md"
  { "! TARGET_64BIT",
    __builtin_constant_p 
#line 2365 "../../gcc/config/riscv/riscv.md"
(! TARGET_64BIT)
    ? (int) 
#line 2365 "../../gcc/config/riscv/riscv.md"
(! TARGET_64BIT)
    : -1 },
#line 42 "../../gcc/config/riscv/pic.md"
  { "USE_LOAD_ADDRESS_MACRO (operands[1])",
    __builtin_constant_p 
#line 42 "../../gcc/config/riscv/pic.md"
(USE_LOAD_ADDRESS_MACRO (operands[1]))
    ? (int) 
#line 42 "../../gcc/config/riscv/pic.md"
(USE_LOAD_ADDRESS_MACRO (operands[1]))
    : -1 },
#line 527 "../../gcc/config/riscv/riscv.md"
  { "TARGET_64BIT || TARGET_ZPSF",
    __builtin_constant_p 
#line 527 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT || TARGET_ZPSF)
    ? (int) 
#line 527 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT || TARGET_ZPSF)
    : -1 },
  { "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 76 "../../gcc/config/riscv/pic.md"
(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])) && 
#line 365 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    ? (int) (
#line 76 "../../gcc/config/riscv/pic.md"
(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])) && 
#line 365 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])\n\
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_DOUBLE_FLOAT) && (Pmode == SImode))",
    __builtin_constant_p (
#line 53 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    ? (int) (
#line 53 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    : -1 },
  { "(TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 2126 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    ? (int) (
#line 2126 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    : -1 },
#line 756 "../../gcc/config/riscv/riscv.md"
  { "TARGET_MUL && TARGET_64BIT",
    __builtin_constant_p 
#line 756 "../../gcc/config/riscv/riscv.md"
(TARGET_MUL && TARGET_64BIT)
    ? (int) 
#line 756 "../../gcc/config/riscv/riscv.md"
(TARGET_MUL && TARGET_64BIT)
    : -1 },
  { "((register_operand (operands[0], V8QImode)\n\
    || reg_or_0_operand (operands[1], V8QImode))\n\
   && TARGET_ZPN) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6928 "../../gcc/config/riscv/rvp.md"
((register_operand (operands[0], V8QImode)
    || reg_or_0_operand (operands[1], V8QImode))
   && TARGET_ZPN) && 
#line 26 "../../gcc/config/riscv/rvp.md"
(TARGET_64BIT))
    ? (int) (
#line 6928 "../../gcc/config/riscv/rvp.md"
((register_operand (operands[0], V8QImode)
    || reg_or_0_operand (operands[1], V8QImode))
   && TARGET_ZPN) && 
#line 26 "../../gcc/config/riscv/rvp.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_ZKSED) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 283 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKSED) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    ? (int) (
#line 283 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKSED) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (((!TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT))",
    __builtin_constant_p (
#line 2114 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && ((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)))
    ? (int) (
#line 2114 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && ((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)))
    : -1 },
#line 1832 "../../gcc/config/riscv/riscv.md"
  { "TARGET_64BIT && (INTVAL (operands[2]) & 0x1f) > 0",
    __builtin_constant_p 
#line 1832 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT && (INTVAL (operands[2]) & 0x1f) > 0)
    ? (int) 
#line 1832 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT && (INTVAL (operands[2]) & 0x1f) > 0)
    : -1 },
#line 333 "../../gcc/config/riscv/riscv.md"
  { "!TARGET_64BIT",
    __builtin_constant_p 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)
    ? (int) 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)
    : -1 },
#line 6867 "../../gcc/config/riscv/rvp.md"
  { "TARGET_ZBPBO && !TARGET_64BIT",
    __builtin_constant_p 
#line 6867 "../../gcc/config/riscv/rvp.md"
(TARGET_ZBPBO && !TARGET_64BIT)
    ? (int) 
#line 6867 "../../gcc/config/riscv/rvp.md"
(TARGET_ZBPBO && !TARGET_64BIT)
    : -1 },
  { "(TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 1280 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    ? (int) (
#line 1280 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    : -1 },
#line 1958 "../../gcc/config/riscv/riscv.md"
  { "TARGET_SFB_ALU",
    __builtin_constant_p 
#line 1958 "../../gcc/config/riscv/riscv.md"
(TARGET_SFB_ALU)
    ? (int) 
#line 1958 "../../gcc/config/riscv/riscv.md"
(TARGET_SFB_ALU)
    : -1 },
  { "(TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (!TARGET_64BIT))",
    __builtin_constant_p (
#line 2126 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    ? (int) (
#line 2126 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    : -1 },
#line 6938 "../../gcc/config/riscv/rvp.md"
  { "TARGET_64BIT && TARGET_ZPN ",
    __builtin_constant_p 
#line 6938 "../../gcc/config/riscv/rvp.md"
(TARGET_64BIT && TARGET_ZPN )
    ? (int) 
#line 6938 "../../gcc/config/riscv/rvp.md"
(TARGET_64BIT && TARGET_ZPN )
    : -1 },
#line 159 "../../gcc/config/riscv/sync.md"
  { "TARGET_ATOMIC",
    __builtin_constant_p 
#line 159 "../../gcc/config/riscv/sync.md"
(TARGET_ATOMIC)
    ? (int) 
#line 159 "../../gcc/config/riscv/sync.md"
(TARGET_ATOMIC)
    : -1 },
#line 134 "../../gcc/config/riscv/crypto.md"
  { "TARGET_ZKNE && TARGET_64BIT",
    __builtin_constant_p 
#line 134 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKNE && TARGET_64BIT)
    ? (int) 
#line 134 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKNE && TARGET_64BIT)
    : -1 },
#line 272 "../../gcc/config/riscv/rvp.md"
  { "TARGET_ZPN && TARGET_64BIT && !TARGET_ZBPBO",
    __builtin_constant_p 
#line 272 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN && TARGET_64BIT && !TARGET_ZBPBO)
    ? (int) 
#line 272 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN && TARGET_64BIT && !TARGET_ZBPBO)
    : -1 },
  { "(TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2102 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2102 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT))
    : -1 },
#line 1917 "../../gcc/config/riscv/riscv.md"
  { "TARGET_64BIT\n\
   && ((INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff)",
    __builtin_constant_p 
#line 1917 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && ((INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff))
    ? (int) 
#line 1917 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && ((INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff))
    : -1 },
#line 1812 "../../gcc/config/riscv/riscv.md"
  { "TARGET_64BIT\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
       == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 1812 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
       == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 1812 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
       == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
  { "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])\n\
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && ((TARGET_HARD_FLOAT) && (Pmode == SImode))",
    __builtin_constant_p (
#line 110 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    ? (int) (
#line 110 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    : -1 },
  { "(TARGET_ZBPBO) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6827 "../../gcc/config/riscv/rvp.md"
(TARGET_ZBPBO) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    ? (int) (
#line 6827 "../../gcc/config/riscv/rvp.md"
(TARGET_ZBPBO) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    : -1 },
#line 5902 "../../gcc/config/riscv/rvp.md"
  { "TARGET_ZPN && !TARGET_64BIT",
    __builtin_constant_p 
#line 5902 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN && !TARGET_64BIT)
    ? (int) 
#line 5902 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN && !TARGET_64BIT)
    : -1 },
  { "(USE_LOAD_ADDRESS_MACRO (operands[0])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 87 "../../gcc/config/riscv/pic.md"
(USE_LOAD_ADDRESS_MACRO (operands[0])) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode))
    ? (int) (
#line 87 "../../gcc/config/riscv/pic.md"
(USE_LOAD_ADDRESS_MACRO (operands[0])) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_SFB_ALU) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 1977 "../../gcc/config/riscv/riscv.md"
(TARGET_SFB_ALU) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    ? (int) (
#line 1977 "../../gcc/config/riscv/riscv.md"
(TARGET_SFB_ALU) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    : -1 },
  { "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && ((TARGET_64BIT) && (Pmode == DImode))",
    __builtin_constant_p (
#line 119 "../../gcc/config/riscv/pic.md"
(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && (
#line 365 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    ? (int) (
#line 119 "../../gcc/config/riscv/pic.md"
(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && (
#line 365 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    : -1 },
  { "(TARGET_HARD_FLOAT && ! HONOR_SNANS (DFmode)) && ((((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 2135 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && ! HONOR_SNANS (DFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    ? (int) (
#line 2135 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && ! HONOR_SNANS (DFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    : -1 },
#line 76 "../../gcc/config/riscv/crypto.md"
  { "TARGET_ZKNE && !TARGET_64BIT",
    __builtin_constant_p 
#line 76 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKNE && !TARGET_64BIT)
    ? (int) 
#line 76 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKNE && !TARGET_64BIT)
    : -1 },
#line 2388 "../../gcc/config/riscv/riscv.md"
  { "epilogue_completed",
    __builtin_constant_p 
#line 2388 "../../gcc/config/riscv/riscv.md"
(epilogue_completed)
    ? (int) 
#line 2388 "../../gcc/config/riscv/riscv.md"
(epilogue_completed)
    : -1 },
  { "(TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 2126 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    ? (int) (
#line 2126 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    : -1 },
  { "(riscv_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL, TRUE)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 1392 "../../gcc/config/riscv/riscv.md"
(riscv_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL, TRUE)) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode))
    ? (int) (
#line 1392 "../../gcc/config/riscv/riscv.md"
(riscv_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL, TRUE)) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_ZPN) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6919 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN) && 
#line 26 "../../gcc/config/riscv/rvp.md"
(TARGET_64BIT))
    ? (int) (
#line 6919 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN) && 
#line 26 "../../gcc/config/riscv/rvp.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT))",
    __builtin_constant_p (
#line 2114 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && ((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)))
    ? (int) (
#line 2114 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && ((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)))
    : -1 },
  { "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])\n\
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_HARD_FLOAT) && (Pmode == SImode))",
    __builtin_constant_p (
#line 95 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    ? (int) (
#line 95 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    : -1 },
  { "(TARGET_ZPN) && ((TARGET_64BIT) && (!TARGET_64BIT))",
    __builtin_constant_p (
#line 5982 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN) && (
#line 32 "../../gcc/config/riscv/rvp.md"
(TARGET_64BIT) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    ? (int) (
#line 5982 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN) && (
#line 32 "../../gcc/config/riscv/rvp.md"
(TARGET_64BIT) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    : -1 },
#line 30 "../../gcc/config/riscv/peephole.md"
  { "TARGET_64BIT\n\
   && INTVAL (operands[5]) < INTVAL (operands[2])\n\
   && (REGNO (operands[3]) == REGNO (operands[4])\n\
       || peep2_reg_dead_p (3, operands[3]))",
    __builtin_constant_p 
#line 30 "../../gcc/config/riscv/peephole.md"
(TARGET_64BIT
   && INTVAL (operands[5]) < INTVAL (operands[2])
   && (REGNO (operands[3]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[3])))
    ? (int) 
#line 30 "../../gcc/config/riscv/peephole.md"
(TARGET_64BIT
   && INTVAL (operands[5]) < INTVAL (operands[2])
   && (REGNO (operands[3]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[3])))
    : -1 },
  { "(TARGET_ZPN) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 6298 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN) && 
#line 29 "../../gcc/config/riscv/rvp.md"
(!TARGET_64BIT))
    ? (int) (
#line 6298 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN) && 
#line 29 "../../gcc/config/riscv/rvp.md"
(!TARGET_64BIT))
    : -1 },
  { "(TARGET_ZKNH) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 165 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKNH) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    ? (int) (
#line 165 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKNH) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    : -1 },
  { "(TARGET_ZKSED) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 283 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKSED) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    ? (int) (
#line 283 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKSED) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    : -1 },
#line 6928 "../../gcc/config/riscv/rvp.md"
  { "(register_operand (operands[0], V2HImode)\n\
    || reg_or_0_operand (operands[1], V2HImode))\n\
   && TARGET_ZPN",
    __builtin_constant_p 
#line 6928 "../../gcc/config/riscv/rvp.md"
((register_operand (operands[0], V2HImode)
    || reg_or_0_operand (operands[1], V2HImode))
   && TARGET_ZPN)
    ? (int) 
#line 6928 "../../gcc/config/riscv/rvp.md"
((register_operand (operands[0], V2HImode)
    || reg_or_0_operand (operands[1], V2HImode))
   && TARGET_ZPN)
    : -1 },
  { "(TARGET_ZBPBO) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 6827 "../../gcc/config/riscv/rvp.md"
(TARGET_ZBPBO) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    ? (int) (
#line 6827 "../../gcc/config/riscv/rvp.md"
(TARGET_ZBPBO) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    : -1 },
#line 6947 "../../gcc/config/riscv/rvp.md"
  { "TARGET_64BIT && TARGET_ZPN\n\
   && (register_operand (operands[0], V2SImode)\n\
       || reg_or_0_operand (operands[1], V2SImode))",
    __builtin_constant_p 
#line 6947 "../../gcc/config/riscv/rvp.md"
(TARGET_64BIT && TARGET_ZPN
   && (register_operand (operands[0], V2SImode)
       || reg_or_0_operand (operands[1], V2SImode)))
    ? (int) 
#line 6947 "../../gcc/config/riscv/rvp.md"
(TARGET_64BIT && TARGET_ZPN
   && (register_operand (operands[0], V2SImode)
       || reg_or_0_operand (operands[1], V2SImode)))
    : -1 },
  { "(TARGET_ZKSH) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 264 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKSH) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    ? (int) (
#line 264 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKSH) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    : -1 },
  { "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])\n\
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_DOUBLE_FLOAT) && (Pmode == DImode))",
    __builtin_constant_p (
#line 95 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    ? (int) (
#line 95 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    : -1 },
  { "(TARGET_SFB_ALU) && (((((TARGET_64BIT) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 1977 "../../gcc/config/riscv/riscv.md"
(TARGET_SFB_ALU) && ((((
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)) && 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) && 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    ? (int) (
#line 1977 "../../gcc/config/riscv/riscv.md"
(TARGET_SFB_ALU) && ((((
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)) && 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)) && 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    : -1 },
#line 216 "../../gcc/config/riscv/crypto.md"
  { "TARGET_ZKNH && !TARGET_64BIT",
    __builtin_constant_p 
#line 216 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKNH && !TARGET_64BIT)
    ? (int) 
#line 216 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKNH && !TARGET_64BIT)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FDIV) && (TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 906 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && TARGET_FDIV) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 906 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && TARGET_FDIV) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])\n\
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_HARD_FLOAT) && (Pmode == DImode))",
    __builtin_constant_p (
#line 53 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    ? (int) (
#line 53 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    : -1 },
  { "(reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2064 "../../gcc/config/riscv/riscv.md"
(reload_completed) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    ? (int) (
#line 2064 "../../gcc/config/riscv/riscv.md"
(reload_completed) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    : -1 },
#line 6919 "../../gcc/config/riscv/rvp.md"
  { "TARGET_ZPN",
    __builtin_constant_p 
#line 6919 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN)
    ? (int) 
#line 6919 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN)
    : -1 },
  { "((register_operand (operands[0], V4HImode)\n\
    || reg_or_0_operand (operands[1], V4HImode))\n\
   && TARGET_ZPN) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6928 "../../gcc/config/riscv/rvp.md"
((register_operand (operands[0], V4HImode)
    || reg_or_0_operand (operands[1], V4HImode))
   && TARGET_ZPN) && 
#line 26 "../../gcc/config/riscv/rvp.md"
(TARGET_64BIT))
    ? (int) (
#line 6928 "../../gcc/config/riscv/rvp.md"
((register_operand (operands[0], V4HImode)
    || reg_or_0_operand (operands[1], V4HImode))
   && TARGET_ZPN) && 
#line 26 "../../gcc/config/riscv/rvp.md"
(TARGET_64BIT))
    : -1 },
#line 2102 "../../gcc/config/riscv/riscv.md"
  { "TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 2102 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)
    ? (int) 
#line 2102 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)
    : -1 },
  { "(riscv_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL, TRUE)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 1392 "../../gcc/config/riscv/riscv.md"
(riscv_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL, TRUE)) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode))
    ? (int) (
#line 1392 "../../gcc/config/riscv/riscv.md"
(riscv_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL, TRUE)) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_ZPN) && ((!TARGET_64BIT) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 5982 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN) && (
#line 32 "../../gcc/config/riscv/rvp.md"
(!TARGET_64BIT) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    ? (int) (
#line 5982 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN) && (
#line 32 "../../gcc/config/riscv/rvp.md"
(!TARGET_64BIT) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    : -1 },
  { "(TARGET_64BIT\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
       == GET_MODE_BITSIZE (SImode)-1) && ( 1)",
    __builtin_constant_p (
#line 1812 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
       == GET_MODE_BITSIZE (SImode)-1) && 
#line 1816 "../../gcc/config/riscv/riscv.md"
( 1))
    ? (int) (
#line 1812 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
       == GET_MODE_BITSIZE (SImode)-1) && 
#line 1816 "../../gcc/config/riscv/riscv.md"
( 1))
    : -1 },
  { "(TARGET_ZKR) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 298 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKR) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    ? (int) (
#line 298 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKR) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    : -1 },
#line 1754 "../../gcc/config/riscv/riscv.md"
  { "TARGET_64BIT\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
       == GET_MODE_BITSIZE (DImode)-1",
    __builtin_constant_p 
#line 1754 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
       == GET_MODE_BITSIZE (DImode)-1)
    ? (int) 
#line 1754 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
       == GET_MODE_BITSIZE (DImode)-1)
    : -1 },
#line 60 "../../gcc/config/riscv/crypto.md"
  { "TARGET_ZKND && !TARGET_64BIT",
    __builtin_constant_p 
#line 60 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKND && !TARGET_64BIT)
    ? (int) 
#line 60 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKND && !TARGET_64BIT)
    : -1 },
#line 118 "../../gcc/config/riscv/crypto.md"
  { "TARGET_ZKND && TARGET_64BIT",
    __builtin_constant_p 
#line 118 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKND && TARGET_64BIT)
    ? (int) 
#line 118 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKND && TARGET_64BIT)
    : -1 },
#line 1847 "../../gcc/config/riscv/riscv.md"
  { "(TARGET_64BIT && (INTVAL (operands[3]) > 0)\n\
    && (INTVAL (operands[2]) + INTVAL (operands[3]) == 32))",
    __builtin_constant_p 
#line 1847 "../../gcc/config/riscv/riscv.md"
((TARGET_64BIT && (INTVAL (operands[3]) > 0)
    && (INTVAL (operands[2]) + INTVAL (operands[3]) == 32)))
    ? (int) 
#line 1847 "../../gcc/config/riscv/riscv.md"
((TARGET_64BIT && (INTVAL (operands[3]) > 0)
    && (INTVAL (operands[2]) + INTVAL (operands[3]) == 32)))
    : -1 },
#line 2437 "../../gcc/config/riscv/riscv.md"
  { "SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 2437 "../../gcc/config/riscv/riscv.md"
(SIBLING_CALL_P (insn))
    ? (int) 
#line 2437 "../../gcc/config/riscv/riscv.md"
(SIBLING_CALL_P (insn))
    : -1 },
  { "(TARGET_HARD_FLOAT && HONOR_SNANS (DFmode)) && ((((!TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (!TARGET_64BIT))",
    __builtin_constant_p (
#line 2148 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && HONOR_SNANS (DFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    ? (int) (
#line 2148 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && HONOR_SNANS (DFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    : -1 },
#line 1574 "../../gcc/config/riscv/riscv.md"
  { "TARGET_64BIT && TARGET_DOUBLE_FLOAT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 1574 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 1574 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
#line 1640 "../../gcc/config/riscv/riscv.md"
  { "TARGET_ZIFENCEI",
    __builtin_constant_p 
#line 1640 "../../gcc/config/riscv/riscv.md"
(TARGET_ZIFENCEI)
    ? (int) 
#line 1640 "../../gcc/config/riscv/riscv.md"
(TARGET_ZIFENCEI)
    : -1 },
  { "(TARGET_ATOMIC) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 130 "../../gcc/config/riscv/sync.md"
(TARGET_ATOMIC) && 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    ? (int) (
#line 130 "../../gcc/config/riscv/sync.md"
(TARGET_ATOMIC) && 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_HARD_FLOAT && ! HONOR_SNANS (DFmode)) && ((((!TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (!TARGET_64BIT))",
    __builtin_constant_p (
#line 2135 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && ! HONOR_SNANS (DFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    ? (int) (
#line 2135 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && ! HONOR_SNANS (DFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    : -1 },
#line 6928 "../../gcc/config/riscv/rvp.md"
  { "(register_operand (operands[0], V4QImode)\n\
    || reg_or_0_operand (operands[1], V4QImode))\n\
   && TARGET_ZPN",
    __builtin_constant_p 
#line 6928 "../../gcc/config/riscv/rvp.md"
((register_operand (operands[0], V4QImode)
    || reg_or_0_operand (operands[1], V4QImode))
   && TARGET_ZPN)
    ? (int) 
#line 6928 "../../gcc/config/riscv/rvp.md"
((register_operand (operands[0], V4QImode)
    || reg_or_0_operand (operands[1], V4QImode))
   && TARGET_ZPN)
    : -1 },
  { "(TARGET_64BIT) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    ? (int) (
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    : -1 },
#line 1594 "../../gcc/config/riscv/riscv.md"
  { "reload_completed\n\
   && riscv_split_64bit_move_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 1594 "../../gcc/config/riscv/riscv.md"
(reload_completed
   && riscv_split_64bit_move_p (operands[0], operands[1]))
    ? (int) 
#line 1594 "../../gcc/config/riscv/riscv.md"
(reload_completed
   && riscv_split_64bit_move_p (operands[0], operands[1]))
    : -1 },
  { "(USE_LOAD_ADDRESS_MACRO (operands[0])) && ((TARGET_64BIT) && (Pmode == DImode))",
    __builtin_constant_p (
#line 87 "../../gcc/config/riscv/pic.md"
(USE_LOAD_ADDRESS_MACRO (operands[0])) && (
#line 358 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    ? (int) (
#line 87 "../../gcc/config/riscv/pic.md"
(USE_LOAD_ADDRESS_MACRO (operands[0])) && (
#line 358 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    : -1 },
#line 1531 "../../gcc/config/riscv/riscv.md"
  { "TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 1531 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    ? (int) 
#line 1531 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    : -1 },
#line 827 "../../gcc/config/riscv/riscv.md"
  { "TARGET_MUL && !TARGET_64BIT",
    __builtin_constant_p 
#line 827 "../../gcc/config/riscv/riscv.md"
(TARGET_MUL && !TARGET_64BIT)
    ? (int) 
#line 827 "../../gcc/config/riscv/riscv.md"
(TARGET_MUL && !TARGET_64BIT)
    : -1 },
  { "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])\n\
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_HARD_FLOAT) && (Pmode == SImode))",
    __builtin_constant_p (
#line 53 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    ? (int) (
#line 53 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    : -1 },
  { "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 119 "../../gcc/config/riscv/pic.md"
(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode))
    ? (int) (
#line 119 "../../gcc/config/riscv/pic.md"
(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode))
    : -1 },
#line 1444 "../../gcc/config/riscv/riscv.md"
  { "(register_operand (operands[0], SImode)\n\
    || reg_or_0_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 1444 "../../gcc/config/riscv/riscv.md"
((register_operand (operands[0], SImode)
    || reg_or_0_operand (operands[1], SImode)))
    ? (int) 
#line 1444 "../../gcc/config/riscv/riscv.md"
((register_operand (operands[0], SImode)
    || reg_or_0_operand (operands[1], SImode)))
    : -1 },
  { "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])\n\
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && ((TARGET_HARD_FLOAT) && (Pmode == DImode))",
    __builtin_constant_p (
#line 110 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    ? (int) (
#line 110 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && (
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    : -1 },
#line 247 "../../gcc/config/riscv/crypto.md"
  { "TARGET_ZKNH && TARGET_64BIT",
    __builtin_constant_p 
#line 247 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKNH && TARGET_64BIT)
    ? (int) 
#line 247 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKNH && TARGET_64BIT)
    : -1 },
  { "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])\n\
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_DOUBLE_FLOAT) && (Pmode == DImode))",
    __builtin_constant_p (
#line 53 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    ? (int) (
#line 53 "../../gcc/config/riscv/pic.md"
(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == DImode)))
    : -1 },
#line 5237 "../../gcc/config/riscv/rvp.md"
  { "TARGET_ZPSF",
    __builtin_constant_p 
#line 5237 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPSF)
    ? (int) 
#line 5237 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPSF)
    : -1 },
#line 1511 "../../gcc/config/riscv/riscv.md"
  { "(register_operand (operands[0], QImode)\n\
    || reg_or_0_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 1511 "../../gcc/config/riscv/riscv.md"
((register_operand (operands[0], QImode)
    || reg_or_0_operand (operands[1], QImode)))
    ? (int) 
#line 1511 "../../gcc/config/riscv/riscv.md"
((register_operand (operands[0], QImode)
    || reg_or_0_operand (operands[1], QImode)))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (((TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT))",
    __builtin_constant_p (
#line 2114 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && ((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)))
    ? (int) (
#line 2114 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && ((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)))
    : -1 },
#line 330 "../../gcc/config/riscv/riscv.md"
  { "Pmode == SImode",
    __builtin_constant_p 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)
    ? (int) 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)
    : -1 },
#line 1413 "../../gcc/config/riscv/riscv.md"
  { "!TARGET_64BIT\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 1413 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 1413 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_HARD_FLOAT && HONOR_SNANS (SFmode)) && ((((TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 2148 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && HONOR_SNANS (SFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    ? (int) (
#line 2148 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && HONOR_SNANS (SFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FDIV) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 906 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && TARGET_FDIV) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 906 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && TARGET_FDIV) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 6857 "../../gcc/config/riscv/rvp.md"
  { "TARGET_ZBPBO && TARGET_64BIT",
    __builtin_constant_p 
#line 6857 "../../gcc/config/riscv/rvp.md"
(TARGET_ZBPBO && TARGET_64BIT)
    ? (int) 
#line 6857 "../../gcc/config/riscv/rvp.md"
(TARGET_ZBPBO && TARGET_64BIT)
    : -1 },
  { "(TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (!TARGET_64BIT))",
    __builtin_constant_p (
#line 2126 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    ? (int) (
#line 2126 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    : -1 },
  { "(TARGET_HARD_FLOAT && HONOR_SNANS (DFmode)) && ((((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 2148 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && HONOR_SNANS (DFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    ? (int) (
#line 2148 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && HONOR_SNANS (DFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    : -1 },
#line 1679 "../../gcc/config/riscv/riscv.md"
  { "(INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
   == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 1679 "../../gcc/config/riscv/riscv.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
   == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 1679 "../../gcc/config/riscv/riscv.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
   == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
  { "((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
   == GET_MODE_BITSIZE (SImode)-1) && ( 1)",
    __builtin_constant_p (
#line 1679 "../../gcc/config/riscv/riscv.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
   == GET_MODE_BITSIZE (SImode)-1) && 
#line 1682 "../../gcc/config/riscv/riscv.md"
( 1))
    ? (int) (
#line 1679 "../../gcc/config/riscv/riscv.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
   == GET_MODE_BITSIZE (SImode)-1) && 
#line 1682 "../../gcc/config/riscv/riscv.md"
( 1))
    : -1 },
#line 2320 "../../gcc/config/riscv/riscv.md"
  { "riscv_can_use_return_insn ()",
    __builtin_constant_p 
#line 2320 "../../gcc/config/riscv/riscv.md"
(riscv_can_use_return_insn ())
    ? (int) 
#line 2320 "../../gcc/config/riscv/riscv.md"
(riscv_can_use_return_insn ())
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed\n\
   && REG_P (operands[1])\n\
   && !paradoxical_subreg_p (operands[0]))",
    __builtin_constant_p (
#line 352 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 1219 "../../gcc/config/riscv/riscv.md"
( reload_completed
   && REG_P (operands[1])
   && !paradoxical_subreg_p (operands[0])))
    ? (int) (
#line 352 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 1219 "../../gcc/config/riscv/riscv.md"
( reload_completed
   && REG_P (operands[1])
   && !paradoxical_subreg_p (operands[0])))
    : -1 },
#line 260 "../../gcc/config/riscv/rvp.md"
  { "TARGET_ZPN && !TARGET_64BIT && !TARGET_ZBPBO",
    __builtin_constant_p 
#line 260 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN && !TARGET_64BIT && !TARGET_ZBPBO)
    ? (int) 
#line 260 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPN && !TARGET_64BIT && !TARGET_ZBPBO)
    : -1 },
  { "(TARGET_ZKNH) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 165 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKNH) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    ? (int) (
#line 165 "../../gcc/config/riscv/crypto.md"
(TARGET_ZKNH) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SFB_ALU) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1958 "../../gcc/config/riscv/riscv.md"
(TARGET_SFB_ALU) && 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    ? (int) (
#line 1958 "../../gcc/config/riscv/riscv.md"
(TARGET_SFB_ALU) && 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT))
    : -1 },
#line 4042 "../../gcc/config/riscv/rvp.md"
  { "TARGET_ZPSF && !TARGET_64BIT",
    __builtin_constant_p 
#line 4042 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPSF && !TARGET_64BIT)
    ? (int) 
#line 4042 "../../gcc/config/riscv/rvp.md"
(TARGET_ZPSF && !TARGET_64BIT)
    : -1 },
  { "(TARGET_64BIT\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
       == GET_MODE_BITSIZE (DImode)-1) && ( 1)",
    __builtin_constant_p (
#line 1754 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
       == GET_MODE_BITSIZE (DImode)-1) && 
#line 1758 "../../gcc/config/riscv/riscv.md"
( 1))
    ? (int) (
#line 1754 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
       == GET_MODE_BITSIZE (DImode)-1) && 
#line 1758 "../../gcc/config/riscv/riscv.md"
( 1))
    : -1 },
  { "(TARGET_HARD_FLOAT && HONOR_SNANS (SFmode)) && ((((!TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (!TARGET_64BIT))",
    __builtin_constant_p (
#line 2148 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && HONOR_SNANS (SFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    ? (int) (
#line 2148 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT && HONOR_SNANS (SFmode)) && (((
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 361 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)))
    : -1 },
#line 2377 "../../gcc/config/riscv/riscv.md"
  { "reload_completed",
    __builtin_constant_p 
#line 2377 "../../gcc/config/riscv/riscv.md"
(reload_completed)
    ? (int) 
#line 2377 "../../gcc/config/riscv/riscv.md"
(reload_completed)
    : -1 },
#line 326 "../../gcc/config/riscv/riscv.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)
    ? (int) 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)
    : -1 },
  { "(TARGET_HARD_FLOAT) && ((TARGET_DOUBLE_FLOAT) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 1280 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    ? (int) (
#line 1280 "../../gcc/config/riscv/riscv.md"
(TARGET_HARD_FLOAT) && (
#line 362 "../../gcc/config/riscv/riscv.md"
(TARGET_DOUBLE_FLOAT) && 
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT)))
    : -1 },
  { "((TARGET_64BIT) && (!TARGET_64BIT)) && (!TARGET_64BIT)",
    __builtin_constant_p ((
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    ? (int) ((
#line 326 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT)) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    : -1 },
  { "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 119 "../../gcc/config/riscv/pic.md"
(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode))
    ? (int) (
#line 119 "../../gcc/config/riscv/pic.md"
(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode))
    : -1 },
#line 76 "../../gcc/config/riscv/pic.md"
  { "!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])",
    __builtin_constant_p 
#line 76 "../../gcc/config/riscv/pic.md"
(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1]))
    ? (int) 
#line 76 "../../gcc/config/riscv/pic.md"
(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1]))
    : -1 },
  { "(reload_completed) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 2064 "../../gcc/config/riscv/riscv.md"
(reload_completed) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    ? (int) (
#line 2064 "../../gcc/config/riscv/riscv.md"
(reload_completed) && 
#line 333 "../../gcc/config/riscv/riscv.md"
(!TARGET_64BIT))
    : -1 },
  { "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && ((TARGET_64BIT) && (Pmode == SImode))",
    __builtin_constant_p (
#line 119 "../../gcc/config/riscv/pic.md"
(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && (
#line 365 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    ? (int) (
#line 119 "../../gcc/config/riscv/pic.md"
(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && (
#line 365 "../../gcc/config/riscv/riscv.md"
(TARGET_64BIT) && 
#line 330 "../../gcc/config/riscv/riscv.md"
(Pmode == SImode)))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}

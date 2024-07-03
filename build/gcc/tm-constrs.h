/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc/config/riscv/riscv.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_m (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 26 "../../gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_o (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 32 "../../gcc/common.md"
(offsettable_nonstrict_memref_p (op)));
}
static inline bool
satisfies_constraint_V (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 41 "../../gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op)))) && (!(
#line 43 "../../gcc/common.md"
(offsettable_nonstrict_memref_p (op)))));
}
static inline bool
satisfies_constraint__l (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 50 "../../gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_DEC)) || (
#line 51 "../../gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_DEC)));
}
static inline bool
satisfies_constraint__g (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 57 "../../gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_INC)) || (
#line 58 "../../gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_INC)));
}
static inline bool
satisfies_constraint_p (rtx ARG_UNUSED (op))
{
  return 
#line 62 "../../gcc/common.md"
(address_operand (op, VOIDmode));
}
static inline bool
satisfies_constraint_i (rtx op)
{
  return (
#line 66 "../../gcc/common.md"
(CONSTANT_P (op))) && (
#line 67 "../../gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_s (rtx op)
{
  return (
#line 71 "../../gcc/common.md"
(CONSTANT_P (op))) && ((
#line 72 "../../gcc/common.md"
(!CONST_SCALAR_INT_P (op))) && (
#line 73 "../../gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op))));
}
static inline bool
satisfies_constraint_n (rtx op)
{
  return (
#line 77 "../../gcc/common.md"
(CONST_SCALAR_INT_P (op))) && (
#line 78 "../../gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_E (rtx op)
{
  return (
#line 82 "../../gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 83 "../../gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_F (rtx op)
{
  return (
#line 89 "../../gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 90 "../../gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_X (rtx ARG_UNUSED (op))
{
  return 
#line 95 "../../gcc/common.md"
(true);
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 40 "../../gcc/config/riscv/constraints.md"
(SMALL_OPERAND (ival)));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 45 "../../gcc/config/riscv/constraints.md"
(ival == 0));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 50 "../../gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 0, 31)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 55 "../../gcc/config/riscv/constraints.md"
(LUI_OPERAND (ival)));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 62 "../../gcc/config/riscv/constraints.md"
(op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_A (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 67 "../../gcc/config/riscv/constraints.md"
(GET_CODE(XEXP(op,0)) == REG));
}
static inline bool
satisfies_constraint_S (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return absolute_symbolic_operand (op, mode);
}
static inline bool
satisfies_constraint_U (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return plt_symbolic_operand (op, mode);
}
static inline bool
satisfies_constraint_T (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (move_operand (op, mode)) && (
#line 83 "../../gcc/config/riscv/constraints.md"
(CONSTANT_P (op)));
}
static inline bool
satisfies_constraint_u02 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 88 "../../gcc/config/riscv/constraints.md"
(ival < (1 << 2) && ival >= 0));
}
static inline bool
satisfies_constraint_u03 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 93 "../../gcc/config/riscv/constraints.md"
(ival < (1 << 3) && ival >= 0));
}
static inline bool
satisfies_constraint_u04 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 98 "../../gcc/config/riscv/constraints.md"
(ival < (1 << 4) && ival >= 0));
}
static inline bool
satisfies_constraint_u05 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 103 "../../gcc/config/riscv/constraints.md"
(ival < (1 << 5) && ival >= 0));
}
static inline bool
satisfies_constraint_u06 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 108 "../../gcc/config/riscv/constraints.md"
(ival < (1 << 6) && ival >= 0));
}
static inline bool
satisfies_constraint_C00 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 113 "../../gcc/config/riscv/constraints.md"
(ival == 0));
}
static inline bool
satisfies_constraint_C01 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 118 "../../gcc/config/riscv/constraints.md"
(ival == 1));
}
static inline bool
satisfies_constraint_C02 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 123 "../../gcc/config/riscv/constraints.md"
(ival == 2));
}
static inline bool
satisfies_constraint_C03 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 128 "../../gcc/config/riscv/constraints.md"
(ival == 3));
}
static inline bool
satisfies_constraint_C04 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 133 "../../gcc/config/riscv/constraints.md"
(ival == 4));
}
static inline bool
satisfies_constraint_C08 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 138 "../../gcc/config/riscv/constraints.md"
(ival == 8));
}
static inline bool
satisfies_constraint_D07 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 143 "../../gcc/config/riscv/constraints.md"
((unsigned) exact_log2 (ival) <= 7));
}
static inline bool
satisfies_constraint_C15 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 148 "../../gcc/config/riscv/constraints.md"
(ival == 15));
}
static inline bool
satisfies_constraint_C16 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 153 "../../gcc/config/riscv/constraints.md"
(ival == 16));
}
#endif /* tm-constrs.h */

/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc/config/riscv/riscv.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern int general_operand (rtx, machine_mode);
extern int address_operand (rtx, machine_mode);
extern int register_operand (rtx, machine_mode);
extern int pmode_register_operand (rtx, machine_mode);
extern int scratch_operand (rtx, machine_mode);
extern int immediate_operand (rtx, machine_mode);
extern int const_int_operand (rtx, machine_mode);
extern int const_double_operand (rtx, machine_mode);
extern int nonimmediate_operand (rtx, machine_mode);
extern int nonmemory_operand (rtx, machine_mode);
extern int push_operand (rtx, machine_mode);
extern int pop_operand (rtx, machine_mode);
extern int memory_operand (rtx, machine_mode);
extern int indirect_operand (rtx, machine_mode);
extern int ordered_comparison_operator (rtx, machine_mode);
extern int comparison_operator (rtx, machine_mode);
extern int const_arith_operand (rtx, machine_mode);
extern int arith_operand (rtx, machine_mode);
extern int lui_operand (rtx, machine_mode);
extern int sfb_alu_operand (rtx, machine_mode);
extern int const_csr_operand (rtx, machine_mode);
extern int csr_operand (rtx, machine_mode);
extern int sle_operand (rtx, machine_mode);
extern int sleu_operand (rtx, machine_mode);
extern int const_0_operand (rtx, machine_mode);
extern int reg_or_0_operand (rtx, machine_mode);
extern int branch_on_bit_operand (rtx, machine_mode);
extern int splittable_const_int_operand (rtx, machine_mode);
extern int p2m1_shift_operand (rtx, machine_mode);
extern int high_mask_shift_operand (rtx, machine_mode);
extern int move_operand (rtx, machine_mode);
extern int symbolic_operand (rtx, machine_mode);
extern int absolute_symbolic_operand (rtx, machine_mode);
extern int plt_symbolic_operand (rtx, machine_mode);
extern int call_insn_operand (rtx, machine_mode);
extern int modular_operator (rtx, machine_mode);
extern int equality_operator (rtx, machine_mode);
extern int order_operator (rtx, machine_mode);
extern int signed_order_operator (rtx, machine_mode);
extern int subreg_lowpart_operator (rtx, machine_mode);
extern int fp_native_comparison (rtx, machine_mode);
extern int fp_scc_comparison (rtx, machine_mode);
extern int fp_branch_comparison (rtx, machine_mode);
extern int gpr_save_operation (rtx, machine_mode);
extern int imm2u_operand (rtx, machine_mode);
extern int imm3u_operand (rtx, machine_mode);
extern int imm4u_operand (rtx, machine_mode);
extern int imm5u_operand (rtx, machine_mode);
extern int imm6u_operand (rtx, machine_mode);
extern int rimm3u_operand (rtx, machine_mode);
extern int rimm4u_operand (rtx, machine_mode);
extern int rimm5u_operand (rtx, machine_mode);
extern int rimm6u_operand (rtx, machine_mode);
extern int const_insb64_operand (rtx, machine_mode);
extern int imm_1_2_4_8_operand (rtx, machine_mode);
extern int pwr_7_operand (rtx, machine_mode);
extern int imm_0_1_operand (rtx, machine_mode);
extern int imm_1_2_operand (rtx, machine_mode);
extern int imm_2_3_operand (rtx, machine_mode);
extern int imm_15_16_operand (rtx, machine_mode);
extern int rev_rimm_operand (rtx, machine_mode);
extern int fsr_shamt_imm (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_f,
  CONSTRAINT_j,
  CONSTRAINT_l,
  CONSTRAINT_I,
  CONSTRAINT_J,
  CONSTRAINT_K,
  CONSTRAINT_L,
  CONSTRAINT_m,
  CONSTRAINT_o,
  CONSTRAINT_A,
  CONSTRAINT_p,
  CONSTRAINT_G,
  CONSTRAINT_S,
  CONSTRAINT_U,
  CONSTRAINT_u02,
  CONSTRAINT_u03,
  CONSTRAINT_u04,
  CONSTRAINT_u05,
  CONSTRAINT_u06,
  CONSTRAINT_C00,
  CONSTRAINT_C01,
  CONSTRAINT_C02,
  CONSTRAINT_C03,
  CONSTRAINT_C04,
  CONSTRAINT_C08,
  CONSTRAINT_D07,
  CONSTRAINT_C15,
  CONSTRAINT_C16,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_i,
  CONSTRAINT_s,
  CONSTRAINT_n,
  CONSTRAINT_E,
  CONSTRAINT_F,
  CONSTRAINT_X,
  CONSTRAINT_T,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint_1 (const char *);
extern const unsigned char lookup_constraint_array[];

/* Return the constraint at the beginning of P, or CONSTRAINT__UNKNOWN if it
   isn't recognized.  */

static inline enum constraint_num
lookup_constraint (const char *p)
{
  unsigned int index = lookup_constraint_array[(unsigned char) *p];
  return (index == UCHAR_MAX
          ? lookup_constraint_1 (p)
          : (enum constraint_num) index);
}

extern bool (*constraint_satisfied_p_array[]) (rtx);

/* Return true if X satisfies constraint C.  */

static inline bool
constraint_satisfied_p (rtx x, enum constraint_num c)
{
  int i = (int) c - (int) CONSTRAINT_I;
  return i >= 0 && constraint_satisfied_p_array[i] (x);
}

static inline bool
insn_extra_register_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_r && c <= CONSTRAINT_l;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_m && c <= CONSTRAINT_A;
}

static inline bool
insn_extra_special_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_relaxed_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_address_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_p && c <= CONSTRAINT_p;
}

static inline void
insn_extra_constraint_allows_reg_mem (enum constraint_num c,
				      bool *allows_reg, bool *allows_mem)
{
  if (c >= CONSTRAINT_G && c <= CONSTRAINT_C16)
    return;
  if (c >= CONSTRAINT_V && c <= CONSTRAINT__g)
    {
      *allows_mem = true;
      return;
    }
  (void) c;
  *allows_reg = true;
  *allows_mem = true;
}

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'C': return 3;
    case 'D': return 3;
    case 'u': return 3;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class reg_class_for_constraint_1 (enum constraint_num);

static inline enum reg_class
reg_class_for_constraint (enum constraint_num c)
{
  if (insn_extra_register_constraint (c))
    return reg_class_for_constraint_1 (c);
  return NO_REGS;
}

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

enum constraint_type
{
  CT_REGISTER,
  CT_CONST_INT,
  CT_MEMORY,
  CT_SPECIAL_MEMORY,
  CT_RELAXED_MEMORY,
  CT_ADDRESS,
  CT_FIXED_FORM
};

static inline enum constraint_type
get_constraint_type (enum constraint_num c)
{
  if (c >= CONSTRAINT_p)
    {
      if (c >= CONSTRAINT_G)
        return CT_FIXED_FORM;
      return CT_ADDRESS;
    }
  if (c >= CONSTRAINT_m)
    return CT_MEMORY;
  if (c >= CONSTRAINT_I)
    return CT_CONST_INT;
  return CT_REGISTER;
}
#endif /* tm-preds.h */

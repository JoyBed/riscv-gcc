/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_addsf3 (TARGET_HARD_FLOAT)
#define HAVE_adddf3 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_addsi3 1
#define HAVE_subsf3 (TARGET_HARD_FLOAT)
#define HAVE_subdf3 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_subdi3 (TARGET_64BIT || TARGET_ZPSF)
#define HAVE_subsi3 1
#define HAVE_negdi2 (TARGET_64BIT)
#define HAVE_negsi2 1
#define HAVE_mulsf3 (TARGET_HARD_FLOAT)
#define HAVE_muldf3 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_mulsi3 (TARGET_MUL)
#define HAVE_muldi3 (TARGET_MUL && TARGET_64BIT)
#define HAVE_muldi3_highpart (TARGET_MUL && TARGET_64BIT)
#define HAVE_umuldi3_highpart (TARGET_MUL && TARGET_64BIT)
#define HAVE_usmuldi3_highpart (TARGET_MUL && TARGET_64BIT)
#define HAVE_mulsi3_highpart (TARGET_MUL && !TARGET_64BIT)
#define HAVE_umulsi3_highpart (TARGET_MUL && !TARGET_64BIT)
#define HAVE_usmulsi3_highpart (TARGET_MUL && !TARGET_64BIT)
#define HAVE_divsi3 (TARGET_DIV)
#define HAVE_udivsi3 (TARGET_DIV)
#define HAVE_modsi3 (TARGET_DIV)
#define HAVE_umodsi3 (TARGET_DIV)
#define HAVE_divdi3 (TARGET_DIV && TARGET_64BIT)
#define HAVE_udivdi3 (TARGET_DIV && TARGET_64BIT)
#define HAVE_moddi3 (TARGET_DIV && TARGET_64BIT)
#define HAVE_umoddi3 (TARGET_DIV && TARGET_64BIT)
#define HAVE_divsf3 ((TARGET_HARD_FLOAT && TARGET_FDIV) && (TARGET_HARD_FLOAT))
#define HAVE_divdf3 ((TARGET_HARD_FLOAT && TARGET_FDIV) && (TARGET_DOUBLE_FLOAT))
#define HAVE_sqrtsf2 ((TARGET_HARD_FLOAT && TARGET_FDIV) && (TARGET_HARD_FLOAT))
#define HAVE_sqrtdf2 ((TARGET_HARD_FLOAT && TARGET_FDIV) && (TARGET_DOUBLE_FLOAT))
#define HAVE_fmasf4 (TARGET_HARD_FLOAT)
#define HAVE_fmadf4 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_fmssf4 (TARGET_HARD_FLOAT)
#define HAVE_fmsdf4 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_fnmssf4 (TARGET_HARD_FLOAT)
#define HAVE_fnmsdf4 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_fnmasf4 (TARGET_HARD_FLOAT)
#define HAVE_fnmadf4 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_abssf2 (TARGET_HARD_FLOAT)
#define HAVE_absdf2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_copysignsf3 (TARGET_HARD_FLOAT)
#define HAVE_copysigndf3 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_negsf2 (TARGET_HARD_FLOAT)
#define HAVE_negdf2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_sminsf3 (TARGET_HARD_FLOAT)
#define HAVE_smindf3 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_smaxsf3 (TARGET_HARD_FLOAT)
#define HAVE_smaxdf3 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_andsi3 (!TARGET_64BIT)
#define HAVE_iorsi3 (!TARGET_64BIT)
#define HAVE_xorsi3 (!TARGET_64BIT)
#define HAVE_anddi3 (TARGET_64BIT)
#define HAVE_iordi3 (TARGET_64BIT)
#define HAVE_xordi3 (TARGET_64BIT)
#define HAVE_one_cmplsi2 (!TARGET_64BIT)
#define HAVE_one_cmpldi2 (TARGET_64BIT)
#define HAVE_truncdfsf2 (TARGET_DOUBLE_FLOAT)
#define HAVE_zero_extendsidi2 (TARGET_64BIT)
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendhidi2 (TARGET_64BIT)
#define HAVE_zero_extendqihi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendqidi2 (TARGET_64BIT)
#define HAVE_extendsidi2 (TARGET_64BIT)
#define HAVE_extendqihi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendqidi2 (TARGET_64BIT)
#define HAVE_extendhihi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendhidi2 (TARGET_64BIT)
#define HAVE_extendsfdf2 (TARGET_DOUBLE_FLOAT)
#define HAVE_fix_truncsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fix_truncsfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_HARD_FLOAT)))
#define HAVE_fix_truncdfsi2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_fix_truncdfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)))
#define HAVE_fixuns_truncsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fixuns_truncsfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_HARD_FLOAT)))
#define HAVE_fixuns_truncdfsi2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_fixuns_truncdfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)))
#define HAVE_floatsisf2 (TARGET_HARD_FLOAT)
#define HAVE_floatdisf2 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT) && (TARGET_64BIT)))
#define HAVE_floatsidf2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_floatdidf2 ((TARGET_HARD_FLOAT) && ((TARGET_DOUBLE_FLOAT) && (TARGET_64BIT)))
#define HAVE_floatunssisf2 (TARGET_HARD_FLOAT)
#define HAVE_floatunsdisf2 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT) && (TARGET_64BIT)))
#define HAVE_floatunssidf2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_floatunsdidf2 ((TARGET_HARD_FLOAT) && ((TARGET_DOUBLE_FLOAT) && (TARGET_64BIT)))
#define HAVE_lrintsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_lroundsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_lrintsfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_HARD_FLOAT)))
#define HAVE_lroundsfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_HARD_FLOAT)))
#define HAVE_lrintdfsi2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_lrounddfsi2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_lrintdfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)))
#define HAVE_lrounddfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)))
#define HAVE_got_loadsi (Pmode == SImode)
#define HAVE_got_loaddi (Pmode == DImode)
#define HAVE_tls_add_tp_lesi (Pmode == SImode)
#define HAVE_tls_add_tp_ledi (Pmode == DImode)
#define HAVE_got_load_tls_gdsi (Pmode == SImode)
#define HAVE_got_load_tls_gddi (Pmode == DImode)
#define HAVE_got_load_tls_iesi (Pmode == SImode)
#define HAVE_got_load_tls_iedi (Pmode == DImode)
#define HAVE_auipcsi (Pmode == SImode)
#define HAVE_auipcdi (Pmode == DImode)
#define HAVE_fence 1
#define HAVE_fence_i (TARGET_ZIFENCEI)
#define HAVE_ashlsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashldi3 (TARGET_64BIT)
#define HAVE_ashrdi3 (TARGET_64BIT)
#define HAVE_lshrdi3 (TARGET_64BIT)
#define HAVE_zero_extendsidi2_shifted (TARGET_64BIT \
   && ((INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff))
#define HAVE_jump 1
#define HAVE_indirect_jumpsi (Pmode == SImode)
#define HAVE_indirect_jumpdi (Pmode == DImode)
#define HAVE_tablejumpsi 1
#define HAVE_tablejumpdi (TARGET_64BIT)
#define HAVE_blockage 1
#define HAVE_simple_return 1
#define HAVE_simple_return_internal 1
#define HAVE_eh_set_lr_si (! TARGET_64BIT)
#define HAVE_eh_set_lr_di (TARGET_64BIT)
#define HAVE_eh_return_internal 1
#define HAVE_sibcall_internal (SIBLING_CALL_P (insn))
#define HAVE_sibcall_value_internal (SIBLING_CALL_P (insn))
#define HAVE_call_internal 1
#define HAVE_call_value_internal 1
#define HAVE_nop 1
#define HAVE_trap 1
#define HAVE_gpr_save 1
#define HAVE_gpr_restore 1
#define HAVE_gpr_restore_return 1
#define HAVE_riscv_frflags (TARGET_HARD_FLOAT)
#define HAVE_riscv_fsflags (TARGET_HARD_FLOAT)
#define HAVE_riscv_mret 1
#define HAVE_riscv_sret 1
#define HAVE_riscv_uret 1
#define HAVE_stack_tiesi (!TARGET_64BIT)
#define HAVE_stack_tiedi (TARGET_64BIT)
#define HAVE_riscv_aes32dsi (TARGET_ZKND && !TARGET_64BIT)
#define HAVE_riscv_aes32dsmi (TARGET_ZKND && !TARGET_64BIT)
#define HAVE_riscv_aes32esi (TARGET_ZKNE && !TARGET_64BIT)
#define HAVE_riscv_aes32esmi (TARGET_ZKNE && !TARGET_64BIT)
#define HAVE_riscv_aes64ds (TARGET_ZKND && TARGET_64BIT)
#define HAVE_riscv_aes64dsm (TARGET_ZKND && TARGET_64BIT)
#define HAVE_riscv_aes64es (TARGET_ZKNE && TARGET_64BIT)
#define HAVE_riscv_aes64esm (TARGET_ZKNE && TARGET_64BIT)
#define HAVE_riscv_aes64im (TARGET_ZKND && TARGET_64BIT)
#define HAVE_riscv_aes64ks1i (TARGET_ZKNE && TARGET_64BIT)
#define HAVE_riscv_aes64ks2 (TARGET_ZKNE && TARGET_64BIT)
#define HAVE_riscv_sha256sig0_si ((TARGET_ZKNH) && (!TARGET_64BIT))
#define HAVE_riscv_sha256sig0_di ((TARGET_ZKNH) && (TARGET_64BIT))
#define HAVE_riscv_sha256sig1_si ((TARGET_ZKNH) && (!TARGET_64BIT))
#define HAVE_riscv_sha256sig1_di ((TARGET_ZKNH) && (TARGET_64BIT))
#define HAVE_riscv_sha256sum0_si ((TARGET_ZKNH) && (!TARGET_64BIT))
#define HAVE_riscv_sha256sum0_di ((TARGET_ZKNH) && (TARGET_64BIT))
#define HAVE_riscv_sha256sum1_si ((TARGET_ZKNH) && (!TARGET_64BIT))
#define HAVE_riscv_sha256sum1_di ((TARGET_ZKNH) && (TARGET_64BIT))
#define HAVE_riscv_sha512sig0h (TARGET_ZKNH && !TARGET_64BIT)
#define HAVE_riscv_sha512sig0l (TARGET_ZKNH && !TARGET_64BIT)
#define HAVE_riscv_sha512sig1h (TARGET_ZKNH && !TARGET_64BIT)
#define HAVE_riscv_sha512sig1l (TARGET_ZKNH && !TARGET_64BIT)
#define HAVE_riscv_sha512sum0r (TARGET_ZKNH && !TARGET_64BIT)
#define HAVE_riscv_sha512sum1r (TARGET_ZKNH && !TARGET_64BIT)
#define HAVE_riscv_sha512sig0 (TARGET_ZKNH && TARGET_64BIT)
#define HAVE_riscv_sha512sig1 (TARGET_ZKNH && TARGET_64BIT)
#define HAVE_riscv_sha512sum0 (TARGET_ZKNH && TARGET_64BIT)
#define HAVE_riscv_sha512sum1 (TARGET_ZKNH && TARGET_64BIT)
#define HAVE_riscv_sm3p0_si ((TARGET_ZKSH) && (!TARGET_64BIT))
#define HAVE_riscv_sm3p0_di ((TARGET_ZKSH) && (TARGET_64BIT))
#define HAVE_riscv_sm3p1_si ((TARGET_ZKSH) && (!TARGET_64BIT))
#define HAVE_riscv_sm3p1_di ((TARGET_ZKSH) && (TARGET_64BIT))
#define HAVE_riscv_sm4ed_si ((TARGET_ZKSED) && (!TARGET_64BIT))
#define HAVE_riscv_sm4ed_di ((TARGET_ZKSED) && (TARGET_64BIT))
#define HAVE_riscv_sm4ks_si ((TARGET_ZKSED) && (!TARGET_64BIT))
#define HAVE_riscv_sm4ks_di ((TARGET_ZKSED) && (TARGET_64BIT))
#define HAVE_riscv_pollentropy_si ((TARGET_ZKR) && (!TARGET_64BIT))
#define HAVE_riscv_pollentropy_di ((TARGET_ZKR) && (TARGET_64BIT))
#define HAVE_riscv_getnoise_si ((TARGET_ZKR) && (!TARGET_64BIT))
#define HAVE_riscv_getnoise_di ((TARGET_ZKR) && (TARGET_64BIT))
#define HAVE_kabsw (TARGET_ZPN)
#define HAVE_kabsv4qi2 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kabsv2hi2 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kabsv8qi2 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kabsv4hi2 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kabsv2si2 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_addv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kaddv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ukaddv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_addv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kaddv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ukaddv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_addv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kaddv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ukaddv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_addv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kaddv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ukaddv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_addv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kaddv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ukaddv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rvp_kadddi3 (TARGET_ZPSF)
#define HAVE_rvp_ukadddi3 (TARGET_ZPSF)
#define HAVE_subv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ksubv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_uksubv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_subv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ksubv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_uksubv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_subv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ksubv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_uksubv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_subv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ksubv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_uksubv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_subv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ksubv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_uksubv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rvp_ksubdi3 (TARGET_ZPSF)
#define HAVE_rvp_uksubdi3 (TARGET_ZPSF)
#define HAVE_ssaddhi3 (TARGET_ZPN)
#define HAVE_usaddhi3 (TARGET_ZPN)
#define HAVE_sssubhi3 (TARGET_ZPN)
#define HAVE_ussubhi3 (TARGET_ZPN)
#define HAVE_ssaddsi3 (TARGET_ZPN)
#define HAVE_usaddsi3 (TARGET_ZPN)
#define HAVE_sssubsi3 (TARGET_ZPN)
#define HAVE_ussubsi3 (TARGET_ZPN)
#define HAVE_ave (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_avedi (TARGET_ZPN && TARGET_64BIT)
#define HAVE_bitrevsi (TARGET_ZPN && !TARGET_64BIT && !TARGET_ZBPBO)
#define HAVE_bitrevdi (TARGET_ZPN && TARGET_64BIT && !TARGET_ZBPBO)
#define HAVE_cmixsi ((TARGET_ZBPBO) && (!TARGET_64BIT))
#define HAVE_cmixdi ((TARGET_ZBPBO) && (TARGET_64BIT))
#define HAVE_clrovsi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_clrovdi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_clrsbv4qi2 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_clzv4qi2 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_clrsbv2hi2 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_clzv2hi2 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_clrsbv8qi2 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_clzv8qi2 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_clrsbv4hi2 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_clzv4hi2 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_clrsbv2si2 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_clzv2si2 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_clrsbsi2 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_clzsi2 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_cmpeqv4qi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_cmpeqv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_cmpeqv8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_cmpeqv4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_crasv2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_crasv2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_cras16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_crsav2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_crsav2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_crsa16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kcrasv2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kcrasv2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kcras16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kcrsav2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kcrsav2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kcrsa16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_ukcrasv2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ukcrasv2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ukcras16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_ukcrsav2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ukcrsav2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ukcrsa16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_rcrasv2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_rcrasv2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rcras16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_rcrsav2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_rcrsav2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rcrsa16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_urcrasv2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_urcrasv2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_urcras16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_urcrsav2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_urcrsav2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_urcrsa16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_vec_setv4qi_internal (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_vec_setv8qi_internal (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kdm_internal (TARGET_ZPN)
#define HAVE_kdma_internal (TARGET_ZPN)
#define HAVE_khmsi_internal (TARGET_ZPN)
#define HAVE_kma_internal (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kma64_internal (TARGET_ZPN && TARGET_64BIT)
#define HAVE_khm8v4qi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_khm8v8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_khmx8v4qi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_khmx8v8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_khm16v2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_khm16v4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_khmx16v2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_khmx16v4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kmada (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmada64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmaxda (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmaxda64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmads (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmads64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmadrs (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmadrs64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmaxds (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmaxds64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_vkmar64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_kmda (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmxda (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmxda64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmda64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmac (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmac_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmac_round (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmac64_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmaw_internal (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmaw_round_internal (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmaw64_internal (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmaw64_round_internal (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmsb (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmsb_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmsb_round (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmsb64_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmw2_round_internal (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmw64_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmsda (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmsda64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmsxda (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmsxda64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_vkmsr64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmw64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmw2_internal (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_ksll (TARGET_ZPN)
#define HAVE_kslli8v4qisi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kslli8v8qidi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kslli16v2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kslli16v4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ksll32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kslrav4qi_internal ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kslrav2hi_internal ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kslrav8qi_internal ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kslrav4hi_internal ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kslrav2si_internal ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kslrav4qi_round_internal ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kslrav2hi_round_internal ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kslrav8qi_round_internal ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kslrav4hi_round_internal ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kslrav2si_round_internal ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kslraw (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kslraw64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kslrawu (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kslrawu64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kstasv2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kstasv2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kstas16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kstsav2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kstsav2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kstsa16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kwmmul (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kwmmul_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kwmmul_round (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kwmmul64_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_maddr32 (TARGET_ZPN)
#define HAVE_msubr32 (TARGET_ZPN)
#define HAVE_rvp_umulsidi3 (TARGET_ZPSF)
#define HAVE_rvp_mulsidi3 (TARGET_ZPSF)
#define HAVE_smaxsi3 ((TARGET_ZBPBO) && (!TARGET_64BIT))
#define HAVE_smaxdi3 ((TARGET_ZBPBO) && (TARGET_64BIT))
#define HAVE_sminsi3 ((TARGET_ZBPBO) && (!TARGET_64BIT))
#define HAVE_smindi3 ((TARGET_ZBPBO) && (TARGET_64BIT))
#define HAVE_pbsadsi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_pbsaddi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_pbsadasi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_pbsadadi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_vec_mergev2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_vec_mergev2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_vec_pkbb64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_vec_pkbt64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_vec_pktt64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_vec_pktb64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_raddv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_raddv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_raddv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_raddv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_raddv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_radddi3 (TARGET_ZPSF)
#define HAVE_uraddv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_uraddv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_uraddv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_uraddv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_uraddv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_uradddi3 (TARGET_ZPSF)
#define HAVE_rsubv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_rsubv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_rsubv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rsubv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rsubv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ursubv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ursubv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ursubv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ursubv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ursubv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rsubdi3 (TARGET_ZPSF)
#define HAVE_ursubdi3 (TARGET_ZPSF)
#define HAVE_raddsi3 (TARGET_ZPN)
#define HAVE_rsubsi3 (TARGET_ZPN)
#define HAVE_uraddsi3 (TARGET_ZPN)
#define HAVE_ursubsi3 (TARGET_ZPN)
#define HAVE_rdovsi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_rdovdi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rstasv2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_rstasv2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rstas16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_rstsav2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_rstsav2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rstsa16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_sclip8v4qi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_sclip8v8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_sclip16v2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_sclip16v4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_sclip32sisi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_sclip32v2sidi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_scmplev4qi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_scmplev2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_scmplev8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_scmplev4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_scmpltv4qi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_scmpltv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_scmpltv8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_scmpltv4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_smal (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smal_64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_smaddhidi (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smaddhidi64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_smalda1_le (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smalda64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_smalxda1_le (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smalxds1_le (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smalxda64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_smalxds64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_smalds1_le (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smalds64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_smaldrs3_le (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smaldrs64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_ssmaddsidi4 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_ssmsubsidi4 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_usmaddsidi4 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_usmsubsidi4 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_maddsidi4 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_umaddsidi4 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_msubsidi4 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_umsubsidi4 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_vsmar64_1 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_vumar64_1 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_smaxv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_umaxv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_smaxv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_umaxv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_smaxv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_umaxv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_smaxv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_umaxv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_smaxv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_umaxv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_sminv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_uminv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_sminv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_uminv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_sminv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_uminv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_sminv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_uminv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_sminv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_uminv2si3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_smaqav4qi (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_umaqav4qi (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smaqav8qi (TARGET_ZPN && TARGET_64BIT)
#define HAVE_umaqav8qi (TARGET_ZPN && TARGET_64BIT)
#define HAVE_sumaqav4qi (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_sumaqav8qi (TARGET_ZPN && TARGET_64BIT)
#define HAVE_mulhisi3v (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_mulv2hiv2si3v (TARGET_ZPN && TARGET_64BIT)
#define HAVE_mulsidi3v (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smds (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smds64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smdrs (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smdrs64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smxdsv (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smxds64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smxds32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smds32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smdrs32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smulsi3_highpart (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smmul_round (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smulv2si3_highpart (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smmulv2si3_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smulhisi3_highpart_1 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smulhisi3_highpart_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smmw_round_internal (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smmw64_round_internal (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smslda1 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smslda64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smslxda1 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smslxda64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_vsmsr64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_vumsr64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_smul8 (TARGET_ZPSF)
#define HAVE_smulx8 (TARGET_ZPSF)
#define HAVE_umul8 (TARGET_ZPSF)
#define HAVE_umulx8 (TARGET_ZPSF)
#define HAVE_smul16 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_umul16 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smul16_64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_umul16_64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_smulx16 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_umulx16 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smulx16_64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_umulx16_64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_ashlv2si3 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_ashrv2si3 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_lshrv2si3 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_sra8_roundv4qi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_sra8_roundv8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_sra16_roundv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_sra16_roundv4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_sra32_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_srl8_roundv4qi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_srl8_roundv8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_srl16_roundv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_srl16_roundv4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_srl32_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_sraiw_u (TARGET_ZPN && TARGET_64BIT)
#define HAVE_sraiu (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_sraiu64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_stasv2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_stasv2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_stas16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_stsav2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_stsav2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_stsa16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_sunpkd810_imp (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_zunpkd810_imp (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_sunpkd810_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_zunpkd810_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_sunpkd820_imp (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_zunpkd820_imp (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_sunpkd820_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_zunpkd820_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_sunpkd830_imp (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_zunpkd830_imp (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_sunpkd830_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_zunpkd830_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_sunpkd831_imp (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_zunpkd831_imp (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_sunpkd831_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_zunpkd831_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_sunpkd832_imp (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_zunpkd832_imp (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_sunpkd832_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_zunpkd832_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_bswap8 (TARGET_ZPN)
#define HAVE_bswap8_64 (TARGET_ZPN)
#define HAVE_uclip8v4qi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_uclip8v8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_uclip16v2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_uclip16v4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_uclip32sisi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_uclip32v2sidi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ucmplev4qi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ucmplev2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ucmplev8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ucmplev4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ucmpltv4qi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ucmpltv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ucmpltv8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ucmpltv4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_vukmar64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_vukmsr64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_ukstasv2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ukstasv2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ukstas16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_ukstsav2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ukstsav2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ukstsa16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_urstasv2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_urstasv2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_urstas16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_urstsav2hi_le ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_urstsav2si_le ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_urstsa16_64_le (TARGET_ZPN && TARGET_64BIT)
#define HAVE_wext (TARGET_ZPSF && !TARGET_ZBPBO && !TARGET_64BIT)
#define HAVE_wext64 (TARGET_ZPSF && !TARGET_ZBPBO && TARGET_64BIT)
#define HAVE_kdmbb16 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kdmbt16 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kdmtt16 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_vkdma_internal (TARGET_ZPN && TARGET_64BIT)
#define HAVE_khmbb16 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_khmbt16 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_khmtt16 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kma32_internal (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmada32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmaxda32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmda32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmxda32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmads32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmadrs32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmaxds32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmsda32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmsxda32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_revsi_internal (TARGET_ZBPBO && !TARGET_64BIT)
#define HAVE_revdi_internal (TARGET_ZBPBO && TARGET_64BIT)
#define HAVE_fsrw (TARGET_ZBPBO && TARGET_64BIT)
#define HAVE_fsr_rvp (TARGET_ZBPBO && !TARGET_64BIT)
#define HAVE_fsri_rvp (TARGET_ZBPBO && !TARGET_64BIT)
#define HAVE_stack_protect_set_si 1
#define HAVE_stack_protect_set_di (TARGET_64BIT)
#define HAVE_stack_protect_test_si 1
#define HAVE_stack_protect_test_di (TARGET_64BIT)
#define HAVE_mem_thread_fence_1 1
#define HAVE_atomic_storesi (TARGET_ATOMIC)
#define HAVE_atomic_storedi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_addsi (TARGET_ATOMIC)
#define HAVE_atomic_orsi (TARGET_ATOMIC)
#define HAVE_atomic_xorsi (TARGET_ATOMIC)
#define HAVE_atomic_andsi (TARGET_ATOMIC)
#define HAVE_atomic_adddi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_ordi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_xordi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_anddi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_fetch_addsi (TARGET_ATOMIC)
#define HAVE_atomic_fetch_orsi (TARGET_ATOMIC)
#define HAVE_atomic_fetch_xorsi (TARGET_ATOMIC)
#define HAVE_atomic_fetch_andsi (TARGET_ATOMIC)
#define HAVE_atomic_fetch_adddi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_fetch_ordi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_fetch_xordi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_fetch_anddi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_exchangesi (TARGET_ATOMIC)
#define HAVE_atomic_exchangedi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_cas_value_strongsi (TARGET_ATOMIC)
#define HAVE_atomic_cas_value_strongdi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_adddi3 (TARGET_64BIT || TARGET_ZPSF)
#define HAVE_mulditi3 (TARGET_MUL && TARGET_64BIT)
#define HAVE_umulditi3 (TARGET_MUL && TARGET_64BIT)
#define HAVE_usmulditi3 (TARGET_MUL && TARGET_64BIT)
#define HAVE_mulsidi3 (TARGET_MUL && !TARGET_64BIT)
#define HAVE_umulsidi3 (TARGET_MUL && !TARGET_64BIT)
#define HAVE_usmulsidi3 (TARGET_MUL && !TARGET_64BIT)
#define HAVE_movdi 1
#define HAVE_movsi 1
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_cpymemsi 1
#define HAVE_clear_cache 1
#define HAVE_movsicc (TARGET_SFB_ALU)
#define HAVE_movdicc ((TARGET_SFB_ALU) && (TARGET_64BIT))
#define HAVE_condjump 1
#define HAVE_cbranchqi4 (TARGET_64BIT)
#define HAVE_cbranchsi4 1
#define HAVE_cbranchdi4 (TARGET_64BIT)
#define HAVE_cbranchsf4 (TARGET_HARD_FLOAT)
#define HAVE_cbranchdf4 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_cstoresi4 1
#define HAVE_cstoredi4 (TARGET_64BIT)
#define HAVE_cstoresf4 (TARGET_HARD_FLOAT)
#define HAVE_cstoredf4 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_flt_quietsfsi4 ((TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (!TARGET_64BIT)))
#define HAVE_fle_quietsfsi4 ((TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (!TARGET_64BIT)))
#define HAVE_flt_quietsfdi4 ((TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT)))
#define HAVE_fle_quietsfdi4 ((TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT)))
#define HAVE_flt_quietdfsi4 ((TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (!TARGET_64BIT)))
#define HAVE_fle_quietdfsi4 ((TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (!TARGET_64BIT)))
#define HAVE_flt_quietdfdi4 ((TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (TARGET_64BIT)))
#define HAVE_fle_quietdfdi4 ((TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (TARGET_64BIT)))
#define HAVE_indirect_jump 1
#define HAVE_tablejump 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_return (riscv_can_use_return_insn ())
#define HAVE_eh_return 1
#define HAVE_sibcall 1
#define HAVE_sibcall_value 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_untyped_call 1
#define HAVE_crasv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_crasv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_cras16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_crsav2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_crsav2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_crsa16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kcrasv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kcrasv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kcras16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kcrsav2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kcrsav2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kcrsa16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_ukcrasv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ukcrasv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ukcras16_64 (TARGET_ZPN)
#define HAVE_ukcrsav2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ukcrsav2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ukcrsa16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_rcrasv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_rcrasv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rcras16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_rcrsav2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_rcrsav2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rcrsa16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_urcrasv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_urcrasv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_urcras16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_urcrsav2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_urcrsav2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_urcrsa16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_insb (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_insb64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kdmbb (TARGET_ZPN)
#define HAVE_kdmbt (TARGET_ZPN)
#define HAVE_kdmtt (TARGET_ZPN)
#define HAVE_kdmabb (TARGET_ZPN)
#define HAVE_kdmabt (TARGET_ZPN)
#define HAVE_kdmatt (TARGET_ZPN)
#define HAVE_khmbbsi (TARGET_ZPN)
#define HAVE_khmbtsi (TARGET_ZPN)
#define HAVE_khmttsi (TARGET_ZPN)
#define HAVE_kmabb (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmabt (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmatt (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmabb64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmabt64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmatt64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmawb (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmawt (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmawb2 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmawt2 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmawb_round (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmawt_round (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmawb2_round (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmawt2_round (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmawb64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmawt64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmawb2_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmawt2_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmawb64_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmawt64_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmawb2_64_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmawt2_64_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmwb2_round (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmwt2_round (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmwb64_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmwt64_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmwb64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmwt64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmmwb2 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kmmwt2 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_kslrav4qi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kslrav2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kslrav8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kslrav4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kslrav2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kslrav4qi_round ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kslrav2hi_round ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kslrav8qi_round ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kslrav4hi_round ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kslrav2si_round ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kstasv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kstasv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kstas16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kstsav2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_kstsav2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_kstsa16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_pkbbv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_pkbbv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_pkbtv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_pkbtv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_pkttv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_pkttv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_pktbv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_pktbv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_pkbb64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_pkbt64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_pktt64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_pktb64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_rstasv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_rstasv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rstas16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_rstsav2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_rstsav2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_rstsa16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smalbb (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smalbt (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smaltt (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smalbb64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_smalbt64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_smaltt64 (TARGET_ZPSF && TARGET_64BIT)
#define HAVE_smalda1 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smalxda1 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smalxds1 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smalds1 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smaldrs3 (TARGET_ZPSF && !TARGET_64BIT)
#define HAVE_smaqa (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_umaqa (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smaqa64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_umaqa64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_sumaqa (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_sumaqa64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smbb (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smbt (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smtt (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smbb64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smbt64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smtt64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smbb32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smbt32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smtt32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smmwb (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smmwt (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smmwb64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smmwt64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smmwb_round (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smmwt_round (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_smmwb64_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_smmwt64_round (TARGET_ZPN && TARGET_64BIT)
#define HAVE_ashlv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ashrv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_lshrv2hi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ashlv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ashrv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_lshrv4hi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ashlv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ashrv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_lshrv4qi3 ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ashlv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ashrv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_lshrv8qi3 ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_stasv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_stasv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_stas16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_stsav2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_stsav2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_stsa16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_sunpkd810 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_zunpkd810 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_zunpkd820 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_sunpkd820 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_sunpkd830 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_zunpkd830 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_sunpkd831 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_zunpkd831 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_sunpkd832 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_zunpkd832 (TARGET_ZPN && !TARGET_64BIT)
#define HAVE_ukstasv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ukstasv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ukstas16_64 (TARGET_ZPN)
#define HAVE_ukstsav2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_ukstsav2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_ukstsa16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_urstasv2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_urstasv2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_urstas16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_urstsav2hi ((TARGET_ZPN) && (!TARGET_64BIT))
#define HAVE_urstsav2si ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_urstsa16_64 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kdmabb16 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kdmabt16 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kdmatt16 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmabb32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmabt32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_kmatt32 (TARGET_ZPN && TARGET_64BIT)
#define HAVE_revsi ((TARGET_ZBPBO) && (!TARGET_64BIT))
#define HAVE_revdi ((TARGET_ZBPBO) && (TARGET_64BIT))
#define HAVE_fsr (TARGET_ZBPBO && !TARGET_64BIT)
#define HAVE_movv4qi (TARGET_ZPN)
#define HAVE_movv2hi (TARGET_ZPN)
#define HAVE_movv8qi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_movv4hi ((TARGET_ZPN) && (TARGET_64BIT))
#define HAVE_movv2si (TARGET_64BIT && TARGET_ZPN )
#define HAVE_restore_stack_nonlocal 1
#define HAVE_get_thread_pointersi (Pmode == SImode)
#define HAVE_get_thread_pointerdi (Pmode == DImode)
#define HAVE_stack_protect_set 1
#define HAVE_stack_protect_test 1
#define HAVE_mem_thread_fence 1
#define HAVE_atomic_compare_and_swapsi (TARGET_ATOMIC)
#define HAVE_atomic_compare_and_swapdi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_test_and_set (TARGET_ATOMIC)
extern rtx        gen_addsf3                    (rtx, rtx, rtx);
extern rtx        gen_adddf3                    (rtx, rtx, rtx);
extern rtx        gen_addsi3                    (rtx, rtx, rtx);
extern rtx        gen_subsf3                    (rtx, rtx, rtx);
extern rtx        gen_subdf3                    (rtx, rtx, rtx);
extern rtx        gen_subdi3                    (rtx, rtx, rtx);
extern rtx        gen_subsi3                    (rtx, rtx, rtx);
extern rtx        gen_negdi2                    (rtx, rtx);
extern rtx        gen_negsi2                    (rtx, rtx);
extern rtx        gen_mulsf3                    (rtx, rtx, rtx);
extern rtx        gen_muldf3                    (rtx, rtx, rtx);
extern rtx        gen_mulsi3                    (rtx, rtx, rtx);
extern rtx        gen_muldi3                    (rtx, rtx, rtx);
extern rtx        gen_muldi3_highpart           (rtx, rtx, rtx);
extern rtx        gen_umuldi3_highpart          (rtx, rtx, rtx);
extern rtx        gen_usmuldi3_highpart         (rtx, rtx, rtx);
extern rtx        gen_mulsi3_highpart           (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart          (rtx, rtx, rtx);
extern rtx        gen_usmulsi3_highpart         (rtx, rtx, rtx);
extern rtx        gen_divsi3                    (rtx, rtx, rtx);
extern rtx        gen_udivsi3                   (rtx, rtx, rtx);
extern rtx        gen_modsi3                    (rtx, rtx, rtx);
extern rtx        gen_umodsi3                   (rtx, rtx, rtx);
extern rtx        gen_divdi3                    (rtx, rtx, rtx);
extern rtx        gen_udivdi3                   (rtx, rtx, rtx);
extern rtx        gen_moddi3                    (rtx, rtx, rtx);
extern rtx        gen_umoddi3                   (rtx, rtx, rtx);
extern rtx        gen_divsf3                    (rtx, rtx, rtx);
extern rtx        gen_divdf3                    (rtx, rtx, rtx);
extern rtx        gen_sqrtsf2                   (rtx, rtx);
extern rtx        gen_sqrtdf2                   (rtx, rtx);
extern rtx        gen_fmasf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmadf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmssf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsdf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmssf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmsdf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmasf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmadf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_abssf2                    (rtx, rtx);
extern rtx        gen_absdf2                    (rtx, rtx);
extern rtx        gen_copysignsf3               (rtx, rtx, rtx);
extern rtx        gen_copysigndf3               (rtx, rtx, rtx);
extern rtx        gen_negsf2                    (rtx, rtx);
extern rtx        gen_negdf2                    (rtx, rtx);
extern rtx        gen_sminsf3                   (rtx, rtx, rtx);
extern rtx        gen_smindf3                   (rtx, rtx, rtx);
extern rtx        gen_smaxsf3                   (rtx, rtx, rtx);
extern rtx        gen_smaxdf3                   (rtx, rtx, rtx);
extern rtx        gen_andsi3                    (rtx, rtx, rtx);
extern rtx        gen_iorsi3                    (rtx, rtx, rtx);
extern rtx        gen_xorsi3                    (rtx, rtx, rtx);
extern rtx        gen_anddi3                    (rtx, rtx, rtx);
extern rtx        gen_iordi3                    (rtx, rtx, rtx);
extern rtx        gen_xordi3                    (rtx, rtx, rtx);
extern rtx        gen_one_cmplsi2               (rtx, rtx);
extern rtx        gen_one_cmpldi2               (rtx, rtx);
extern rtx        gen_truncdfsf2                (rtx, rtx);
extern rtx        gen_zero_extendsidi2          (rtx, rtx);
extern rtx        gen_zero_extendhisi2          (rtx, rtx);
extern rtx        gen_zero_extendhidi2          (rtx, rtx);
extern rtx        gen_zero_extendqihi2          (rtx, rtx);
extern rtx        gen_zero_extendqisi2          (rtx, rtx);
extern rtx        gen_zero_extendqidi2          (rtx, rtx);
extern rtx        gen_extendsidi2               (rtx, rtx);
extern rtx        gen_extendqihi2               (rtx, rtx);
extern rtx        gen_extendqisi2               (rtx, rtx);
extern rtx        gen_extendqidi2               (rtx, rtx);
extern rtx        gen_extendhihi2               (rtx, rtx);
extern rtx        gen_extendhisi2               (rtx, rtx);
extern rtx        gen_extendhidi2               (rtx, rtx);
extern rtx        gen_extendsfdf2               (rtx, rtx);
extern rtx        gen_fix_truncsfsi2            (rtx, rtx);
extern rtx        gen_fix_truncsfdi2            (rtx, rtx);
extern rtx        gen_fix_truncdfsi2            (rtx, rtx);
extern rtx        gen_fix_truncdfdi2            (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2         (rtx, rtx);
extern rtx        gen_fixuns_truncsfdi2         (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2         (rtx, rtx);
extern rtx        gen_fixuns_truncdfdi2         (rtx, rtx);
extern rtx        gen_floatsisf2                (rtx, rtx);
extern rtx        gen_floatdisf2                (rtx, rtx);
extern rtx        gen_floatsidf2                (rtx, rtx);
extern rtx        gen_floatdidf2                (rtx, rtx);
extern rtx        gen_floatunssisf2             (rtx, rtx);
extern rtx        gen_floatunsdisf2             (rtx, rtx);
extern rtx        gen_floatunssidf2             (rtx, rtx);
extern rtx        gen_floatunsdidf2             (rtx, rtx);
extern rtx        gen_lrintsfsi2                (rtx, rtx);
extern rtx        gen_lroundsfsi2               (rtx, rtx);
extern rtx        gen_lrintsfdi2                (rtx, rtx);
extern rtx        gen_lroundsfdi2               (rtx, rtx);
extern rtx        gen_lrintdfsi2                (rtx, rtx);
extern rtx        gen_lrounddfsi2               (rtx, rtx);
extern rtx        gen_lrintdfdi2                (rtx, rtx);
extern rtx        gen_lrounddfdi2               (rtx, rtx);
extern rtx        gen_got_loadsi                (rtx, rtx);
extern rtx        gen_got_loaddi                (rtx, rtx);
extern rtx        gen_tls_add_tp_lesi           (rtx, rtx, rtx, rtx);
extern rtx        gen_tls_add_tp_ledi           (rtx, rtx, rtx, rtx);
extern rtx        gen_got_load_tls_gdsi         (rtx, rtx);
extern rtx        gen_got_load_tls_gddi         (rtx, rtx);
extern rtx        gen_got_load_tls_iesi         (rtx, rtx);
extern rtx        gen_got_load_tls_iedi         (rtx, rtx);
extern rtx        gen_auipcsi                   (rtx, rtx, rtx);
extern rtx        gen_auipcdi                   (rtx, rtx, rtx);
extern rtx        gen_fence                     (void);
extern rtx        gen_fence_i                   (void);
extern rtx        gen_ashlsi3                   (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                   (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                   (rtx, rtx, rtx);
extern rtx        gen_ashldi3                   (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                   (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                   (rtx, rtx, rtx);
extern rtx        gen_zero_extendsidi2_shifted  (rtx, rtx, rtx, rtx);
extern rtx        gen_jump                      (rtx);
extern rtx        gen_indirect_jumpsi           (rtx);
extern rtx        gen_indirect_jumpdi           (rtx);
extern rtx        gen_tablejumpsi               (rtx, rtx);
extern rtx        gen_tablejumpdi               (rtx, rtx);
extern rtx        gen_blockage                  (void);
extern rtx        gen_simple_return             (void);
extern rtx        gen_simple_return_internal    (rtx);
extern rtx        gen_eh_set_lr_si              (rtx);
extern rtx        gen_eh_set_lr_di              (rtx);
extern rtx        gen_eh_return_internal        (void);
extern rtx        gen_sibcall_internal          (rtx, rtx);
extern rtx        gen_sibcall_value_internal    (rtx, rtx, rtx);
extern rtx        gen_call_internal             (rtx, rtx);
extern rtx        gen_call_value_internal       (rtx, rtx, rtx);
extern rtx        gen_nop                       (void);
extern rtx        gen_trap                      (void);
extern rtx        gen_gpr_save                  (rtx, rtx);
extern rtx        gen_gpr_restore               (rtx);
extern rtx        gen_gpr_restore_return        (rtx);
extern rtx        gen_riscv_frflags             (rtx);
extern rtx        gen_riscv_fsflags             (rtx);
extern rtx        gen_riscv_mret                (void);
extern rtx        gen_riscv_sret                (void);
extern rtx        gen_riscv_uret                (void);
extern rtx        gen_stack_tiesi               (rtx, rtx);
extern rtx        gen_stack_tiedi               (rtx, rtx);
extern rtx        gen_riscv_aes32dsi            (rtx, rtx, rtx);
extern rtx        gen_riscv_aes32dsmi           (rtx, rtx, rtx);
extern rtx        gen_riscv_aes32esi            (rtx, rtx, rtx);
extern rtx        gen_riscv_aes32esmi           (rtx, rtx, rtx);
extern rtx        gen_riscv_aes64ds             (rtx, rtx, rtx);
extern rtx        gen_riscv_aes64dsm            (rtx, rtx, rtx);
extern rtx        gen_riscv_aes64es             (rtx, rtx, rtx);
extern rtx        gen_riscv_aes64esm            (rtx, rtx, rtx);
extern rtx        gen_riscv_aes64im             (rtx, rtx);
extern rtx        gen_riscv_aes64ks1i           (rtx, rtx, rtx);
extern rtx        gen_riscv_aes64ks2            (rtx, rtx, rtx);
extern rtx        gen_riscv_sha256sig0_si       (rtx, rtx);
extern rtx        gen_riscv_sha256sig0_di       (rtx, rtx);
extern rtx        gen_riscv_sha256sig1_si       (rtx, rtx);
extern rtx        gen_riscv_sha256sig1_di       (rtx, rtx);
extern rtx        gen_riscv_sha256sum0_si       (rtx, rtx);
extern rtx        gen_riscv_sha256sum0_di       (rtx, rtx);
extern rtx        gen_riscv_sha256sum1_si       (rtx, rtx);
extern rtx        gen_riscv_sha256sum1_di       (rtx, rtx);
extern rtx        gen_riscv_sha512sig0h         (rtx, rtx, rtx);
extern rtx        gen_riscv_sha512sig0l         (rtx, rtx, rtx);
extern rtx        gen_riscv_sha512sig1h         (rtx, rtx, rtx);
extern rtx        gen_riscv_sha512sig1l         (rtx, rtx, rtx);
extern rtx        gen_riscv_sha512sum0r         (rtx, rtx, rtx);
extern rtx        gen_riscv_sha512sum1r         (rtx, rtx, rtx);
extern rtx        gen_riscv_sha512sig0          (rtx, rtx);
extern rtx        gen_riscv_sha512sig1          (rtx, rtx);
extern rtx        gen_riscv_sha512sum0          (rtx, rtx);
extern rtx        gen_riscv_sha512sum1          (rtx, rtx);
extern rtx        gen_riscv_sm3p0_si            (rtx, rtx);
extern rtx        gen_riscv_sm3p0_di            (rtx, rtx);
extern rtx        gen_riscv_sm3p1_si            (rtx, rtx);
extern rtx        gen_riscv_sm3p1_di            (rtx, rtx);
extern rtx        gen_riscv_sm4ed_si            (rtx, rtx, rtx);
extern rtx        gen_riscv_sm4ed_di            (rtx, rtx, rtx);
extern rtx        gen_riscv_sm4ks_si            (rtx, rtx, rtx);
extern rtx        gen_riscv_sm4ks_di            (rtx, rtx, rtx);
extern rtx        gen_riscv_pollentropy_si      (rtx);
extern rtx        gen_riscv_pollentropy_di      (rtx);
extern rtx        gen_riscv_getnoise_si         (rtx);
extern rtx        gen_riscv_getnoise_di         (rtx);
extern rtx        gen_kabsw                     (rtx, rtx);
extern rtx        gen_kabsv4qi2                 (rtx, rtx);
extern rtx        gen_kabsv2hi2                 (rtx, rtx);
extern rtx        gen_kabsv8qi2                 (rtx, rtx);
extern rtx        gen_kabsv4hi2                 (rtx, rtx);
extern rtx        gen_kabsv2si2                 (rtx, rtx);
extern rtx        gen_addv4qi3                  (rtx, rtx, rtx);
extern rtx        gen_kaddv4qi3                 (rtx, rtx, rtx);
extern rtx        gen_ukaddv4qi3                (rtx, rtx, rtx);
extern rtx        gen_addv2hi3                  (rtx, rtx, rtx);
extern rtx        gen_kaddv2hi3                 (rtx, rtx, rtx);
extern rtx        gen_ukaddv2hi3                (rtx, rtx, rtx);
extern rtx        gen_addv8qi3                  (rtx, rtx, rtx);
extern rtx        gen_kaddv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_ukaddv8qi3                (rtx, rtx, rtx);
extern rtx        gen_addv4hi3                  (rtx, rtx, rtx);
extern rtx        gen_kaddv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_ukaddv4hi3                (rtx, rtx, rtx);
extern rtx        gen_addv2si3                  (rtx, rtx, rtx);
extern rtx        gen_kaddv2si3                 (rtx, rtx, rtx);
extern rtx        gen_ukaddv2si3                (rtx, rtx, rtx);
extern rtx        gen_rvp_kadddi3               (rtx, rtx, rtx);
extern rtx        gen_rvp_ukadddi3              (rtx, rtx, rtx);
extern rtx        gen_subv4qi3                  (rtx, rtx, rtx);
extern rtx        gen_ksubv4qi3                 (rtx, rtx, rtx);
extern rtx        gen_uksubv4qi3                (rtx, rtx, rtx);
extern rtx        gen_subv2hi3                  (rtx, rtx, rtx);
extern rtx        gen_ksubv2hi3                 (rtx, rtx, rtx);
extern rtx        gen_uksubv2hi3                (rtx, rtx, rtx);
extern rtx        gen_subv8qi3                  (rtx, rtx, rtx);
extern rtx        gen_ksubv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_uksubv8qi3                (rtx, rtx, rtx);
extern rtx        gen_subv4hi3                  (rtx, rtx, rtx);
extern rtx        gen_ksubv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_uksubv4hi3                (rtx, rtx, rtx);
extern rtx        gen_subv2si3                  (rtx, rtx, rtx);
extern rtx        gen_ksubv2si3                 (rtx, rtx, rtx);
extern rtx        gen_uksubv2si3                (rtx, rtx, rtx);
extern rtx        gen_rvp_ksubdi3               (rtx, rtx, rtx);
extern rtx        gen_rvp_uksubdi3              (rtx, rtx, rtx);
extern rtx        gen_ssaddhi3                  (rtx, rtx, rtx);
extern rtx        gen_usaddhi3                  (rtx, rtx, rtx);
extern rtx        gen_sssubhi3                  (rtx, rtx, rtx);
extern rtx        gen_ussubhi3                  (rtx, rtx, rtx);
extern rtx        gen_ssaddsi3                  (rtx, rtx, rtx);
extern rtx        gen_usaddsi3                  (rtx, rtx, rtx);
extern rtx        gen_sssubsi3                  (rtx, rtx, rtx);
extern rtx        gen_ussubsi3                  (rtx, rtx, rtx);
extern rtx        gen_ave                       (rtx, rtx, rtx);
extern rtx        gen_avedi                     (rtx, rtx, rtx);
extern rtx        gen_bitrevsi                  (rtx, rtx, rtx);
extern rtx        gen_bitrevdi                  (rtx, rtx, rtx);
extern rtx        gen_cmixsi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_cmixdi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_clrovsi                   (void);
extern rtx        gen_clrovdi                   (void);
extern rtx        gen_clrsbv4qi2                (rtx, rtx);
extern rtx        gen_clzv4qi2                  (rtx, rtx);
extern rtx        gen_clrsbv2hi2                (rtx, rtx);
extern rtx        gen_clzv2hi2                  (rtx, rtx);
extern rtx        gen_clrsbv8qi2                (rtx, rtx);
extern rtx        gen_clzv8qi2                  (rtx, rtx);
extern rtx        gen_clrsbv4hi2                (rtx, rtx);
extern rtx        gen_clzv4hi2                  (rtx, rtx);
extern rtx        gen_clrsbv2si2                (rtx, rtx);
extern rtx        gen_clzv2si2                  (rtx, rtx);
extern rtx        gen_clrsbsi2                  (rtx, rtx);
extern rtx        gen_clzsi2                    (rtx, rtx);
extern rtx        gen_cmpeqv4qi                 (rtx, rtx, rtx);
extern rtx        gen_cmpeqv2hi                 (rtx, rtx, rtx);
extern rtx        gen_cmpeqv8qi                 (rtx, rtx, rtx);
extern rtx        gen_cmpeqv4hi                 (rtx, rtx, rtx);
extern rtx        gen_crasv2hi_le               (rtx, rtx, rtx);
extern rtx        gen_crasv2si_le               (rtx, rtx, rtx);
extern rtx        gen_cras16_64_le              (rtx, rtx, rtx);
extern rtx        gen_crsav2hi_le               (rtx, rtx, rtx);
extern rtx        gen_crsav2si_le               (rtx, rtx, rtx);
extern rtx        gen_crsa16_64_le              (rtx, rtx, rtx);
extern rtx        gen_kcrasv2hi_le              (rtx, rtx, rtx);
extern rtx        gen_kcrasv2si_le              (rtx, rtx, rtx);
extern rtx        gen_kcras16_64_le             (rtx, rtx, rtx);
extern rtx        gen_kcrsav2hi_le              (rtx, rtx, rtx);
extern rtx        gen_kcrsav2si_le              (rtx, rtx, rtx);
extern rtx        gen_kcrsa16_64_le             (rtx, rtx, rtx);
extern rtx        gen_ukcrasv2hi_le             (rtx, rtx, rtx);
extern rtx        gen_ukcrasv2si_le             (rtx, rtx, rtx);
extern rtx        gen_ukcras16_64_le            (rtx, rtx, rtx);
extern rtx        gen_ukcrsav2hi_le             (rtx, rtx, rtx);
extern rtx        gen_ukcrsav2si_le             (rtx, rtx, rtx);
extern rtx        gen_ukcrsa16_64_le            (rtx, rtx, rtx);
extern rtx        gen_rcrasv2hi_le              (rtx, rtx, rtx);
extern rtx        gen_rcrasv2si_le              (rtx, rtx, rtx);
extern rtx        gen_rcras16_64_le             (rtx, rtx, rtx);
extern rtx        gen_rcrsav2hi_le              (rtx, rtx, rtx);
extern rtx        gen_rcrsav2si_le              (rtx, rtx, rtx);
extern rtx        gen_rcrsa16_64_le             (rtx, rtx, rtx);
extern rtx        gen_urcrasv2hi_le             (rtx, rtx, rtx);
extern rtx        gen_urcrasv2si_le             (rtx, rtx, rtx);
extern rtx        gen_urcras16_64_le            (rtx, rtx, rtx);
extern rtx        gen_urcrsav2hi_le             (rtx, rtx, rtx);
extern rtx        gen_urcrsav2si_le             (rtx, rtx, rtx);
extern rtx        gen_urcrsa16_64_le            (rtx, rtx, rtx);
extern rtx        gen_vec_setv4qi_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv8qi_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_kdm_internal              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kdma_internal             (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_khmsi_internal            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kma_internal              (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kma64_internal            (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_khm8v4qi                  (rtx, rtx, rtx);
extern rtx        gen_khm8v8qi                  (rtx, rtx, rtx);
extern rtx        gen_khmx8v4qi                 (rtx, rtx, rtx);
extern rtx        gen_khmx8v8qi                 (rtx, rtx, rtx);
extern rtx        gen_khm16v2hi                 (rtx, rtx, rtx);
extern rtx        gen_khm16v4hi                 (rtx, rtx, rtx);
extern rtx        gen_khmx16v2hi                (rtx, rtx, rtx);
extern rtx        gen_khmx16v4hi                (rtx, rtx, rtx);
extern rtx        gen_kmada                     (rtx, rtx, rtx, rtx);
extern rtx        gen_kmada64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmaxda                    (rtx, rtx, rtx, rtx);
extern rtx        gen_kmaxda64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kmads                     (rtx, rtx, rtx, rtx);
extern rtx        gen_kmads64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmadrs                    (rtx, rtx, rtx, rtx);
extern rtx        gen_kmadrs64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kmaxds                    (rtx, rtx, rtx, rtx);
extern rtx        gen_kmaxds64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vkmar64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmda                      (rtx, rtx, rtx);
extern rtx        gen_kmxda                     (rtx, rtx, rtx);
extern rtx        gen_kmxda64                   (rtx, rtx, rtx);
extern rtx        gen_kmda64                    (rtx, rtx, rtx);
extern rtx        gen_kmmac                     (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmac_64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmac_round               (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmac64_round             (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmaw_internal            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kmmaw_round_internal      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kmmaw64_internal          (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kmmaw64_round_internal    (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kmmsb                     (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmsb_64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmsb_round               (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmsb64_round             (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmw2_round_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmw64_round              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kmsda                     (rtx, rtx, rtx, rtx);
extern rtx        gen_kmsda64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmsxda                    (rtx, rtx, rtx, rtx);
extern rtx        gen_kmsxda64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vkmsr64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmw64                    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kmmw2_internal            (rtx, rtx, rtx, rtx);
extern rtx        gen_ksll                      (rtx, rtx, rtx);
extern rtx        gen_kslli8v4qisi              (rtx, rtx, rtx);
static inline rtx gen_kslli8v4qidi              (rtx, rtx, rtx);
static inline rtx
gen_kslli8v4qidi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_kslli8v8qisi              (rtx, rtx, rtx);
static inline rtx
gen_kslli8v8qisi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_kslli8v8qidi              (rtx, rtx, rtx);
extern rtx        gen_kslli16v2hi               (rtx, rtx, rtx);
extern rtx        gen_kslli16v4hi               (rtx, rtx, rtx);
extern rtx        gen_ksll32                    (rtx, rtx, rtx);
extern rtx        gen_kslrav4qi_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_kslrav2hi_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_kslrav8qi_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_kslrav4hi_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_kslrav2si_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_kslrav4qi_round_internal  (rtx, rtx, rtx, rtx);
extern rtx        gen_kslrav2hi_round_internal  (rtx, rtx, rtx, rtx);
extern rtx        gen_kslrav8qi_round_internal  (rtx, rtx, rtx, rtx);
extern rtx        gen_kslrav4hi_round_internal  (rtx, rtx, rtx, rtx);
extern rtx        gen_kslrav2si_round_internal  (rtx, rtx, rtx, rtx);
extern rtx        gen_kslraw                    (rtx, rtx, rtx);
extern rtx        gen_kslraw64                  (rtx, rtx, rtx);
extern rtx        gen_kslrawu                   (rtx, rtx, rtx);
extern rtx        gen_kslrawu64                 (rtx, rtx, rtx);
extern rtx        gen_kstasv2hi_le              (rtx, rtx, rtx);
extern rtx        gen_kstasv2si_le              (rtx, rtx, rtx);
extern rtx        gen_kstas16_64_le             (rtx, rtx, rtx);
extern rtx        gen_kstsav2hi_le              (rtx, rtx, rtx);
extern rtx        gen_kstsav2si_le              (rtx, rtx, rtx);
extern rtx        gen_kstsa16_64_le             (rtx, rtx, rtx);
extern rtx        gen_kwmmul                    (rtx, rtx, rtx);
extern rtx        gen_kwmmul_64                 (rtx, rtx, rtx);
extern rtx        gen_kwmmul_round              (rtx, rtx, rtx);
extern rtx        gen_kwmmul64_round            (rtx, rtx, rtx);
extern rtx        gen_maddr32                   (rtx, rtx, rtx, rtx);
extern rtx        gen_msubr32                   (rtx, rtx, rtx, rtx);
extern rtx        gen_rvp_umulsidi3             (rtx, rtx, rtx);
extern rtx        gen_rvp_mulsidi3              (rtx, rtx, rtx);
extern rtx        gen_smaxsi3                   (rtx, rtx, rtx);
extern rtx        gen_smaxdi3                   (rtx, rtx, rtx);
extern rtx        gen_sminsi3                   (rtx, rtx, rtx);
extern rtx        gen_smindi3                   (rtx, rtx, rtx);
extern rtx        gen_pbsadsi                   (rtx, rtx, rtx);
extern rtx        gen_pbsaddi                   (rtx, rtx, rtx);
extern rtx        gen_pbsadasi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_pbsadadi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_mergev2hi             (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_mergev2si             (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_pkbb64                (rtx, rtx, rtx);
extern rtx        gen_vec_pkbt64                (rtx, rtx, rtx);
extern rtx        gen_vec_pktt64                (rtx, rtx, rtx);
extern rtx        gen_vec_pktb64                (rtx, rtx, rtx);
extern rtx        gen_raddv4qi3                 (rtx, rtx, rtx);
extern rtx        gen_raddv2hi3                 (rtx, rtx, rtx);
extern rtx        gen_raddv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_raddv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_raddv2si3                 (rtx, rtx, rtx);
extern rtx        gen_radddi3                   (rtx, rtx, rtx);
extern rtx        gen_uraddv4qi3                (rtx, rtx, rtx);
extern rtx        gen_uraddv2hi3                (rtx, rtx, rtx);
extern rtx        gen_uraddv8qi3                (rtx, rtx, rtx);
extern rtx        gen_uraddv4hi3                (rtx, rtx, rtx);
extern rtx        gen_uraddv2si3                (rtx, rtx, rtx);
extern rtx        gen_uradddi3                  (rtx, rtx, rtx);
extern rtx        gen_rsubv4qi3                 (rtx, rtx, rtx);
extern rtx        gen_rsubv2hi3                 (rtx, rtx, rtx);
extern rtx        gen_rsubv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_rsubv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_rsubv2si3                 (rtx, rtx, rtx);
extern rtx        gen_ursubv4qi3                (rtx, rtx, rtx);
extern rtx        gen_ursubv2hi3                (rtx, rtx, rtx);
extern rtx        gen_ursubv8qi3                (rtx, rtx, rtx);
extern rtx        gen_ursubv4hi3                (rtx, rtx, rtx);
extern rtx        gen_ursubv2si3                (rtx, rtx, rtx);
extern rtx        gen_rsubdi3                   (rtx, rtx, rtx);
extern rtx        gen_ursubdi3                  (rtx, rtx, rtx);
extern rtx        gen_raddsi3                   (rtx, rtx, rtx);
extern rtx        gen_rsubsi3                   (rtx, rtx, rtx);
extern rtx        gen_uraddsi3                  (rtx, rtx, rtx);
extern rtx        gen_ursubsi3                  (rtx, rtx, rtx);
extern rtx        gen_rdovsi                    (rtx);
extern rtx        gen_rdovdi                    (rtx);
extern rtx        gen_rstasv2hi_le              (rtx, rtx, rtx);
extern rtx        gen_rstasv2si_le              (rtx, rtx, rtx);
extern rtx        gen_rstas16_64_le             (rtx, rtx, rtx);
extern rtx        gen_rstsav2hi_le              (rtx, rtx, rtx);
extern rtx        gen_rstsav2si_le              (rtx, rtx, rtx);
extern rtx        gen_rstsa16_64_le             (rtx, rtx, rtx);
extern rtx        gen_sclip8v4qi                (rtx, rtx, rtx);
extern rtx        gen_sclip8v8qi                (rtx, rtx, rtx);
extern rtx        gen_sclip16v2hi               (rtx, rtx, rtx);
extern rtx        gen_sclip16v4hi               (rtx, rtx, rtx);
extern rtx        gen_sclip32sisi               (rtx, rtx, rtx);
static inline rtx gen_sclip32v2sisi             (rtx, rtx, rtx);
static inline rtx
gen_sclip32v2sisi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sclip32sidi               (rtx, rtx, rtx);
static inline rtx
gen_sclip32sidi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sclip32v2sidi             (rtx, rtx, rtx);
extern rtx        gen_scmplev4qi                (rtx, rtx, rtx);
extern rtx        gen_scmplev2hi                (rtx, rtx, rtx);
extern rtx        gen_scmplev8qi                (rtx, rtx, rtx);
extern rtx        gen_scmplev4hi                (rtx, rtx, rtx);
extern rtx        gen_scmpltv4qi                (rtx, rtx, rtx);
extern rtx        gen_scmpltv2hi                (rtx, rtx, rtx);
extern rtx        gen_scmpltv8qi                (rtx, rtx, rtx);
extern rtx        gen_scmpltv4hi                (rtx, rtx, rtx);
extern rtx        gen_smal                      (rtx, rtx, rtx);
extern rtx        gen_smal_64                   (rtx, rtx, rtx);
extern rtx        gen_smaddhidi                 (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_smaddhidi64               (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_smalda1_le                (rtx, rtx, rtx, rtx);
extern rtx        gen_smalda64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_smalxda1_le               (rtx, rtx, rtx, rtx);
extern rtx        gen_smalxds1_le               (rtx, rtx, rtx, rtx);
extern rtx        gen_smalxda64                 (rtx, rtx, rtx, rtx);
extern rtx        gen_smalxds64                 (rtx, rtx, rtx, rtx);
extern rtx        gen_smalds1_le                (rtx, rtx, rtx, rtx);
extern rtx        gen_smalds64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_smaldrs3_le               (rtx, rtx, rtx, rtx);
extern rtx        gen_smaldrs64                 (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmaddsidi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmsubsidi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_usmaddsidi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_usmsubsidi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_maddsidi4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_umaddsidi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_msubsidi4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_umsubsidi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_vsmar64_1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vumar64_1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_smaxv4qi3                 (rtx, rtx, rtx);
extern rtx        gen_umaxv4qi3                 (rtx, rtx, rtx);
extern rtx        gen_smaxv2hi3                 (rtx, rtx, rtx);
extern rtx        gen_umaxv2hi3                 (rtx, rtx, rtx);
extern rtx        gen_smaxv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_umaxv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_smaxv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_umaxv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_smaxv2si3                 (rtx, rtx, rtx);
extern rtx        gen_umaxv2si3                 (rtx, rtx, rtx);
extern rtx        gen_sminv4qi3                 (rtx, rtx, rtx);
extern rtx        gen_uminv4qi3                 (rtx, rtx, rtx);
extern rtx        gen_sminv2hi3                 (rtx, rtx, rtx);
extern rtx        gen_uminv2hi3                 (rtx, rtx, rtx);
extern rtx        gen_sminv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_uminv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_sminv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_uminv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_sminv2si3                 (rtx, rtx, rtx);
extern rtx        gen_uminv2si3                 (rtx, rtx, rtx);
extern rtx        gen_smaqav4qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_umaqav4qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_smaqav8qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_umaqav8qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_sumaqav4qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_sumaqav8qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_mulhisi3v                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mulv2hiv2si3v             (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mulsidi3v                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_smds                      (rtx, rtx, rtx);
extern rtx        gen_smds64                    (rtx, rtx, rtx);
extern rtx        gen_smdrs                     (rtx, rtx, rtx);
extern rtx        gen_smdrs64                   (rtx, rtx, rtx);
extern rtx        gen_smxdsv                    (rtx, rtx, rtx);
extern rtx        gen_smxds64                   (rtx, rtx, rtx);
extern rtx        gen_smxds32                   (rtx, rtx, rtx);
extern rtx        gen_smds32                    (rtx, rtx, rtx);
extern rtx        gen_smdrs32                   (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart          (rtx, rtx, rtx);
extern rtx        gen_smmul_round               (rtx, rtx, rtx);
extern rtx        gen_smulv2si3_highpart        (rtx, rtx, rtx);
extern rtx        gen_smmulv2si3_round          (rtx, rtx, rtx);
extern rtx        gen_smulhisi3_highpart_1      (rtx, rtx, rtx, rtx);
extern rtx        gen_smulhisi3_highpart_64     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_smmw_round_internal       (rtx, rtx, rtx, rtx);
extern rtx        gen_smmw64_round_internal     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_smslda1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_smslda64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_smslxda1                  (rtx, rtx, rtx, rtx);
extern rtx        gen_smslxda64                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsmsr64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vumsr64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_smul8                     (rtx, rtx, rtx);
extern rtx        gen_smulx8                    (rtx, rtx, rtx);
extern rtx        gen_umul8                     (rtx, rtx, rtx);
extern rtx        gen_umulx8                    (rtx, rtx, rtx);
extern rtx        gen_smul16                    (rtx, rtx, rtx);
extern rtx        gen_umul16                    (rtx, rtx, rtx);
extern rtx        gen_smul16_64                 (rtx, rtx, rtx);
extern rtx        gen_umul16_64                 (rtx, rtx, rtx);
extern rtx        gen_smulx16                   (rtx, rtx, rtx);
extern rtx        gen_umulx16                   (rtx, rtx, rtx);
extern rtx        gen_smulx16_64                (rtx, rtx, rtx);
extern rtx        gen_umulx16_64                (rtx, rtx, rtx);
extern rtx        gen_ashlv2si3                 (rtx, rtx, rtx);
extern rtx        gen_ashrv2si3                 (rtx, rtx, rtx);
extern rtx        gen_lshrv2si3                 (rtx, rtx, rtx);
extern rtx        gen_sra8_roundv4qi            (rtx, rtx, rtx);
extern rtx        gen_sra8_roundv8qi            (rtx, rtx, rtx);
extern rtx        gen_sra16_roundv2hi           (rtx, rtx, rtx);
extern rtx        gen_sra16_roundv4hi           (rtx, rtx, rtx);
extern rtx        gen_sra32_round               (rtx, rtx, rtx);
extern rtx        gen_srl8_roundv4qi            (rtx, rtx, rtx);
extern rtx        gen_srl8_roundv8qi            (rtx, rtx, rtx);
extern rtx        gen_srl16_roundv2hi           (rtx, rtx, rtx);
extern rtx        gen_srl16_roundv4hi           (rtx, rtx, rtx);
extern rtx        gen_srl32_round               (rtx, rtx, rtx);
extern rtx        gen_sraiw_u                   (rtx, rtx, rtx);
extern rtx        gen_sraiu                     (rtx, rtx, rtx);
extern rtx        gen_sraiu64                   (rtx, rtx, rtx);
extern rtx        gen_stasv2hi_le               (rtx, rtx, rtx);
extern rtx        gen_stasv2si_le               (rtx, rtx, rtx);
extern rtx        gen_stas16_64_le              (rtx, rtx, rtx);
extern rtx        gen_stsav2hi_le               (rtx, rtx, rtx);
extern rtx        gen_stsav2si_le               (rtx, rtx, rtx);
extern rtx        gen_stsa16_64_le              (rtx, rtx, rtx);
extern rtx        gen_sunpkd810_imp             (rtx, rtx);
extern rtx        gen_zunpkd810_imp             (rtx, rtx);
extern rtx        gen_sunpkd810_64              (rtx, rtx);
extern rtx        gen_zunpkd810_64              (rtx, rtx);
extern rtx        gen_sunpkd820_imp             (rtx, rtx);
extern rtx        gen_zunpkd820_imp             (rtx, rtx);
extern rtx        gen_sunpkd820_64              (rtx, rtx);
extern rtx        gen_zunpkd820_64              (rtx, rtx);
extern rtx        gen_sunpkd830_imp             (rtx, rtx);
extern rtx        gen_zunpkd830_imp             (rtx, rtx);
extern rtx        gen_sunpkd830_64              (rtx, rtx);
extern rtx        gen_zunpkd830_64              (rtx, rtx);
extern rtx        gen_sunpkd831_imp             (rtx, rtx);
extern rtx        gen_zunpkd831_imp             (rtx, rtx);
extern rtx        gen_sunpkd831_64              (rtx, rtx);
extern rtx        gen_zunpkd831_64              (rtx, rtx);
extern rtx        gen_sunpkd832_imp             (rtx, rtx);
extern rtx        gen_zunpkd832_imp             (rtx, rtx);
extern rtx        gen_sunpkd832_64              (rtx, rtx);
extern rtx        gen_zunpkd832_64              (rtx, rtx);
extern rtx        gen_bswap8                    (rtx, rtx);
extern rtx        gen_bswap8_64                 (rtx, rtx);
extern rtx        gen_uclip8v4qi                (rtx, rtx, rtx);
extern rtx        gen_uclip8v8qi                (rtx, rtx, rtx);
extern rtx        gen_uclip16v2hi               (rtx, rtx, rtx);
extern rtx        gen_uclip16v4hi               (rtx, rtx, rtx);
extern rtx        gen_uclip32sisi               (rtx, rtx, rtx);
static inline rtx gen_uclip32v2sisi             (rtx, rtx, rtx);
static inline rtx
gen_uclip32v2sisi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_uclip32sidi               (rtx, rtx, rtx);
static inline rtx
gen_uclip32sidi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_uclip32v2sidi             (rtx, rtx, rtx);
extern rtx        gen_ucmplev4qi                (rtx, rtx, rtx);
extern rtx        gen_ucmplev2hi                (rtx, rtx, rtx);
extern rtx        gen_ucmplev8qi                (rtx, rtx, rtx);
extern rtx        gen_ucmplev4hi                (rtx, rtx, rtx);
extern rtx        gen_ucmpltv4qi                (rtx, rtx, rtx);
extern rtx        gen_ucmpltv2hi                (rtx, rtx, rtx);
extern rtx        gen_ucmpltv8qi                (rtx, rtx, rtx);
extern rtx        gen_ucmpltv4hi                (rtx, rtx, rtx);
extern rtx        gen_vukmar64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vukmsr64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_ukstasv2hi_le             (rtx, rtx, rtx);
extern rtx        gen_ukstasv2si_le             (rtx, rtx, rtx);
extern rtx        gen_ukstas16_64_le            (rtx, rtx, rtx);
extern rtx        gen_ukstsav2hi_le             (rtx, rtx, rtx);
extern rtx        gen_ukstsav2si_le             (rtx, rtx, rtx);
extern rtx        gen_ukstsa16_64_le            (rtx, rtx, rtx);
extern rtx        gen_urstasv2hi_le             (rtx, rtx, rtx);
extern rtx        gen_urstasv2si_le             (rtx, rtx, rtx);
extern rtx        gen_urstas16_64_le            (rtx, rtx, rtx);
extern rtx        gen_urstsav2hi_le             (rtx, rtx, rtx);
extern rtx        gen_urstsav2si_le             (rtx, rtx, rtx);
extern rtx        gen_urstsa16_64_le            (rtx, rtx, rtx);
extern rtx        gen_wext                      (rtx, rtx, rtx);
extern rtx        gen_wext64                    (rtx, rtx, rtx);
extern rtx        gen_kdmbb16                   (rtx, rtx, rtx);
extern rtx        gen_kdmbt16                   (rtx, rtx, rtx);
extern rtx        gen_kdmtt16                   (rtx, rtx, rtx);
extern rtx        gen_vkdma_internal            (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_khmbb16                   (rtx, rtx, rtx);
extern rtx        gen_khmbt16                   (rtx, rtx, rtx);
extern rtx        gen_khmtt16                   (rtx, rtx, rtx);
extern rtx        gen_kma32_internal            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kmada32                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmaxda32                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kmda32                    (rtx, rtx, rtx);
extern rtx        gen_kmxda32                   (rtx, rtx, rtx);
extern rtx        gen_kmads32                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmadrs32                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kmaxds32                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kmsda32                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmsxda32                  (rtx, rtx, rtx, rtx);
extern rtx        gen_revsi_internal            (rtx, rtx);
extern rtx        gen_revdi_internal            (rtx, rtx);
extern rtx        gen_fsrw                      (rtx, rtx, rtx, rtx);
extern rtx        gen_fsr_rvp                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fsri_rvp                  (rtx, rtx, rtx, rtx);
extern rtx        gen_stack_protect_set_si      (rtx, rtx);
extern rtx        gen_stack_protect_set_di      (rtx, rtx);
extern rtx        gen_stack_protect_test_si     (rtx, rtx, rtx);
extern rtx        gen_stack_protect_test_di     (rtx, rtx, rtx);
extern rtx        gen_mem_thread_fence_1        (rtx, rtx);
extern rtx        gen_atomic_storesi            (rtx, rtx, rtx);
extern rtx        gen_atomic_storedi            (rtx, rtx, rtx);
extern rtx        gen_atomic_addsi              (rtx, rtx, rtx);
extern rtx        gen_atomic_orsi               (rtx, rtx, rtx);
extern rtx        gen_atomic_xorsi              (rtx, rtx, rtx);
extern rtx        gen_atomic_andsi              (rtx, rtx, rtx);
extern rtx        gen_atomic_adddi              (rtx, rtx, rtx);
extern rtx        gen_atomic_ordi               (rtx, rtx, rtx);
extern rtx        gen_atomic_xordi              (rtx, rtx, rtx);
extern rtx        gen_atomic_anddi              (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addsi        (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orsi         (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorsi        (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andsi        (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_adddi        (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_ordi         (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xordi        (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_anddi        (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangesi         (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangedi         (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_cas_value_strongsi (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_cas_value_strongdi (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_adddi3                    (rtx, rtx, rtx);
extern rtx        gen_mulditi3                  (rtx, rtx, rtx);
extern rtx        gen_umulditi3                 (rtx, rtx, rtx);
extern rtx        gen_usmulditi3                (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                  (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                 (rtx, rtx, rtx);
extern rtx        gen_usmulsidi3                (rtx, rtx, rtx);
extern rtx        gen_movdi                     (rtx, rtx);
extern rtx        gen_movsi                     (rtx, rtx);
extern rtx        gen_movhi                     (rtx, rtx);
extern rtx        gen_movqi                     (rtx, rtx);
extern rtx        gen_movsf                     (rtx, rtx);
extern rtx        gen_movdf                     (rtx, rtx);
extern rtx        gen_cpymemsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_clear_cache               (rtx, rtx);
extern rtx        gen_movsicc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movdicc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_condjump                  (rtx, rtx);
extern rtx        gen_cbranchqi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredi4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresf4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredf4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_flt_quietsfsi4            (rtx, rtx, rtx);
extern rtx        gen_fle_quietsfsi4            (rtx, rtx, rtx);
extern rtx        gen_flt_quietsfdi4            (rtx, rtx, rtx);
extern rtx        gen_fle_quietsfdi4            (rtx, rtx, rtx);
extern rtx        gen_flt_quietdfsi4            (rtx, rtx, rtx);
extern rtx        gen_fle_quietdfsi4            (rtx, rtx, rtx);
extern rtx        gen_flt_quietdfdi4            (rtx, rtx, rtx);
extern rtx        gen_fle_quietdfdi4            (rtx, rtx, rtx);
extern rtx        gen_indirect_jump             (rtx);
extern rtx        gen_tablejump                 (rtx, rtx);
extern rtx        gen_prologue                  (void);
extern rtx        gen_epilogue                  (void);
extern rtx        gen_sibcall_epilogue          (void);
extern rtx        gen_return                    (void);
extern rtx        gen_eh_return                 (rtx);
extern rtx        gen_sibcall                   (rtx, rtx, rtx, rtx);
extern rtx        gen_sibcall_value             (rtx, rtx, rtx, rtx);
extern rtx        gen_call                      (rtx, rtx, rtx, rtx);
extern rtx        gen_call_value                (rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call              (rtx, rtx, rtx);
extern rtx        gen_crasv2hi                  (rtx, rtx, rtx);
extern rtx        gen_crasv2si                  (rtx, rtx, rtx);
extern rtx        gen_cras16_64                 (rtx, rtx, rtx);
extern rtx        gen_crsav2hi                  (rtx, rtx, rtx);
extern rtx        gen_crsav2si                  (rtx, rtx, rtx);
extern rtx        gen_crsa16_64                 (rtx, rtx, rtx);
extern rtx        gen_kcrasv2hi                 (rtx, rtx, rtx);
extern rtx        gen_kcrasv2si                 (rtx, rtx, rtx);
extern rtx        gen_kcras16_64                (rtx, rtx, rtx);
extern rtx        gen_kcrsav2hi                 (rtx, rtx, rtx);
extern rtx        gen_kcrsav2si                 (rtx, rtx, rtx);
extern rtx        gen_kcrsa16_64                (rtx, rtx, rtx);
extern rtx        gen_ukcrasv2hi                (rtx, rtx, rtx);
extern rtx        gen_ukcrasv2si                (rtx, rtx, rtx);
extern rtx        gen_ukcras16_64               (rtx, rtx, rtx);
extern rtx        gen_ukcrsav2hi                (rtx, rtx, rtx);
extern rtx        gen_ukcrsav2si                (rtx, rtx, rtx);
extern rtx        gen_ukcrsa16_64               (rtx, rtx, rtx);
extern rtx        gen_rcrasv2hi                 (rtx, rtx, rtx);
extern rtx        gen_rcrasv2si                 (rtx, rtx, rtx);
extern rtx        gen_rcras16_64                (rtx, rtx, rtx);
extern rtx        gen_rcrsav2hi                 (rtx, rtx, rtx);
extern rtx        gen_rcrsav2si                 (rtx, rtx, rtx);
extern rtx        gen_rcrsa16_64                (rtx, rtx, rtx);
extern rtx        gen_urcrasv2hi                (rtx, rtx, rtx);
extern rtx        gen_urcrasv2si                (rtx, rtx, rtx);
extern rtx        gen_urcras16_64               (rtx, rtx, rtx);
extern rtx        gen_urcrsav2hi                (rtx, rtx, rtx);
extern rtx        gen_urcrsav2si                (rtx, rtx, rtx);
extern rtx        gen_urcrsa16_64               (rtx, rtx, rtx);
extern rtx        gen_insb                      (rtx, rtx, rtx, rtx);
extern rtx        gen_insb64                    (rtx, rtx, rtx, rtx);
extern rtx        gen_kdmbb                     (rtx, rtx, rtx);
extern rtx        gen_kdmbt                     (rtx, rtx, rtx);
extern rtx        gen_kdmtt                     (rtx, rtx, rtx);
extern rtx        gen_kdmabb                    (rtx, rtx, rtx, rtx);
extern rtx        gen_kdmabt                    (rtx, rtx, rtx, rtx);
extern rtx        gen_kdmatt                    (rtx, rtx, rtx, rtx);
extern rtx        gen_khmbbsi                   (rtx, rtx, rtx);
extern rtx        gen_khmbtsi                   (rtx, rtx, rtx);
extern rtx        gen_khmttsi                   (rtx, rtx, rtx);
extern rtx        gen_kmabb                     (rtx, rtx, rtx, rtx);
extern rtx        gen_kmabt                     (rtx, rtx, rtx, rtx);
extern rtx        gen_kmatt                     (rtx, rtx, rtx, rtx);
extern rtx        gen_kmabb64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmabt64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmatt64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawb                    (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawt                    (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawb2                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawt2                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawb_round              (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawt_round              (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawb2_round             (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawt2_round             (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawb64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawt64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawb2_64                (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawt2_64                (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawb64_round            (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawt64_round            (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawb2_64_round          (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawt2_64_round          (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmwb2_round              (rtx, rtx, rtx);
extern rtx        gen_kmmwt2_round              (rtx, rtx, rtx);
extern rtx        gen_kmmwb64_round             (rtx, rtx, rtx);
extern rtx        gen_kmmwt64_round             (rtx, rtx, rtx);
extern rtx        gen_kmmwb64                   (rtx, rtx, rtx);
extern rtx        gen_kmmwt64                   (rtx, rtx, rtx);
extern rtx        gen_kmmwb2                    (rtx, rtx, rtx);
extern rtx        gen_kmmwt2                    (rtx, rtx, rtx);
extern rtx        gen_kslrav4qi                 (rtx, rtx, rtx);
extern rtx        gen_kslrav2hi                 (rtx, rtx, rtx);
extern rtx        gen_kslrav8qi                 (rtx, rtx, rtx);
extern rtx        gen_kslrav4hi                 (rtx, rtx, rtx);
extern rtx        gen_kslrav2si                 (rtx, rtx, rtx);
extern rtx        gen_kslrav4qi_round           (rtx, rtx, rtx);
extern rtx        gen_kslrav2hi_round           (rtx, rtx, rtx);
extern rtx        gen_kslrav8qi_round           (rtx, rtx, rtx);
extern rtx        gen_kslrav4hi_round           (rtx, rtx, rtx);
extern rtx        gen_kslrav2si_round           (rtx, rtx, rtx);
extern rtx        gen_kstasv2hi                 (rtx, rtx, rtx);
extern rtx        gen_kstasv2si                 (rtx, rtx, rtx);
extern rtx        gen_kstas16_64                (rtx, rtx, rtx);
extern rtx        gen_kstsav2hi                 (rtx, rtx, rtx);
extern rtx        gen_kstsav2si                 (rtx, rtx, rtx);
extern rtx        gen_kstsa16_64                (rtx, rtx, rtx);
extern rtx        gen_pkbbv2hi                  (rtx, rtx, rtx);
extern rtx        gen_pkbbv2si                  (rtx, rtx, rtx);
extern rtx        gen_pkbtv2hi                  (rtx, rtx, rtx);
extern rtx        gen_pkbtv2si                  (rtx, rtx, rtx);
extern rtx        gen_pkttv2hi                  (rtx, rtx, rtx);
extern rtx        gen_pkttv2si                  (rtx, rtx, rtx);
extern rtx        gen_pktbv2hi                  (rtx, rtx, rtx);
extern rtx        gen_pktbv2si                  (rtx, rtx, rtx);
extern rtx        gen_pkbb64                    (rtx, rtx, rtx);
extern rtx        gen_pkbt64                    (rtx, rtx, rtx);
extern rtx        gen_pktt64                    (rtx, rtx, rtx);
extern rtx        gen_pktb64                    (rtx, rtx, rtx);
extern rtx        gen_rstasv2hi                 (rtx, rtx, rtx);
extern rtx        gen_rstasv2si                 (rtx, rtx, rtx);
extern rtx        gen_rstas16_64                (rtx, rtx, rtx);
extern rtx        gen_rstsav2hi                 (rtx, rtx, rtx);
extern rtx        gen_rstsav2si                 (rtx, rtx, rtx);
extern rtx        gen_rstsa16_64                (rtx, rtx, rtx);
extern rtx        gen_smalbb                    (rtx, rtx, rtx, rtx);
extern rtx        gen_smalbt                    (rtx, rtx, rtx, rtx);
extern rtx        gen_smaltt                    (rtx, rtx, rtx, rtx);
extern rtx        gen_smalbb64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_smalbt64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_smaltt64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_smalda1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_smalxda1                  (rtx, rtx, rtx, rtx);
extern rtx        gen_smalxds1                  (rtx, rtx, rtx, rtx);
extern rtx        gen_smalds1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_smaldrs3                  (rtx, rtx, rtx, rtx);
extern rtx        gen_smaqa                     (rtx, rtx, rtx, rtx);
extern rtx        gen_umaqa                     (rtx, rtx, rtx, rtx);
extern rtx        gen_smaqa64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_umaqa64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_sumaqa                    (rtx, rtx, rtx, rtx);
extern rtx        gen_sumaqa64                  (rtx, rtx, rtx, rtx);
extern rtx        gen_smbb                      (rtx, rtx, rtx);
extern rtx        gen_smbt                      (rtx, rtx, rtx);
extern rtx        gen_smtt                      (rtx, rtx, rtx);
extern rtx        gen_smbb64                    (rtx, rtx, rtx);
extern rtx        gen_smbt64                    (rtx, rtx, rtx);
extern rtx        gen_smtt64                    (rtx, rtx, rtx);
extern rtx        gen_smbb32                    (rtx, rtx, rtx);
extern rtx        gen_smbt32                    (rtx, rtx, rtx);
extern rtx        gen_smtt32                    (rtx, rtx, rtx);
extern rtx        gen_smmwb                     (rtx, rtx, rtx);
extern rtx        gen_smmwt                     (rtx, rtx, rtx);
extern rtx        gen_smmwb64                   (rtx, rtx, rtx);
extern rtx        gen_smmwt64                   (rtx, rtx, rtx);
extern rtx        gen_smmwb_round               (rtx, rtx, rtx);
extern rtx        gen_smmwt_round               (rtx, rtx, rtx);
extern rtx        gen_smmwb64_round             (rtx, rtx, rtx);
extern rtx        gen_smmwt64_round             (rtx, rtx, rtx);
extern rtx        gen_ashlv2hi3                 (rtx, rtx, rtx);
extern rtx        gen_ashrv2hi3                 (rtx, rtx, rtx);
extern rtx        gen_lshrv2hi3                 (rtx, rtx, rtx);
extern rtx        gen_ashlv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_ashrv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_lshrv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_ashlv4qi3                 (rtx, rtx, rtx);
extern rtx        gen_ashrv4qi3                 (rtx, rtx, rtx);
extern rtx        gen_lshrv4qi3                 (rtx, rtx, rtx);
extern rtx        gen_ashlv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_ashrv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_lshrv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_stasv2hi                  (rtx, rtx, rtx);
extern rtx        gen_stasv2si                  (rtx, rtx, rtx);
extern rtx        gen_stas16_64                 (rtx, rtx, rtx);
extern rtx        gen_stsav2hi                  (rtx, rtx, rtx);
extern rtx        gen_stsav2si                  (rtx, rtx, rtx);
extern rtx        gen_stsa16_64                 (rtx, rtx, rtx);
extern rtx        gen_sunpkd810                 (rtx, rtx);
extern rtx        gen_zunpkd810                 (rtx, rtx);
extern rtx        gen_zunpkd820                 (rtx, rtx);
extern rtx        gen_sunpkd820                 (rtx, rtx);
extern rtx        gen_sunpkd830                 (rtx, rtx);
extern rtx        gen_zunpkd830                 (rtx, rtx);
extern rtx        gen_sunpkd831                 (rtx, rtx);
extern rtx        gen_zunpkd831                 (rtx, rtx);
extern rtx        gen_sunpkd832                 (rtx, rtx);
extern rtx        gen_zunpkd832                 (rtx, rtx);
extern rtx        gen_ukstasv2hi                (rtx, rtx, rtx);
extern rtx        gen_ukstasv2si                (rtx, rtx, rtx);
extern rtx        gen_ukstas16_64               (rtx, rtx, rtx);
extern rtx        gen_ukstsav2hi                (rtx, rtx, rtx);
extern rtx        gen_ukstsav2si                (rtx, rtx, rtx);
extern rtx        gen_ukstsa16_64               (rtx, rtx, rtx);
extern rtx        gen_urstasv2hi                (rtx, rtx, rtx);
extern rtx        gen_urstasv2si                (rtx, rtx, rtx);
extern rtx        gen_urstas16_64               (rtx, rtx, rtx);
extern rtx        gen_urstsav2hi                (rtx, rtx, rtx);
extern rtx        gen_urstsav2si                (rtx, rtx, rtx);
extern rtx        gen_urstsa16_64               (rtx, rtx, rtx);
extern rtx        gen_kdmabb16                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kdmabt16                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kdmatt16                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kmabb32                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmabt32                   (rtx, rtx, rtx, rtx);
extern rtx        gen_kmatt32                   (rtx, rtx, rtx, rtx);
extern rtx        gen_revsi                     (rtx, rtx);
extern rtx        gen_revdi                     (rtx, rtx);
extern rtx        gen_fsr                       (rtx, rtx, rtx, rtx);
extern rtx        gen_movv4qi                   (rtx, rtx);
extern rtx        gen_movv2hi                   (rtx, rtx);
extern rtx        gen_movv8qi                   (rtx, rtx);
extern rtx        gen_movv4hi                   (rtx, rtx);
extern rtx        gen_movv2si                   (rtx, rtx);
extern rtx        gen_restore_stack_nonlocal    (rtx, rtx);
extern rtx        gen_get_thread_pointersi      (rtx);
extern rtx        gen_get_thread_pointerdi      (rtx);
extern rtx        gen_stack_protect_set         (rtx, rtx);
extern rtx        gen_stack_protect_test        (rtx, rtx, rtx);
extern rtx        gen_mem_thread_fence          (rtx);
extern rtx        gen_atomic_compare_and_swapsi (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapdi (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_test_and_set       (rtx, rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */

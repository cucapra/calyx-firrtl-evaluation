circuit main:
    module main:
        input go: UInt<1>
        input clk: Clock
        input reset: UInt<1>
        output done: UInt<1>
        output A_int_addr0: UInt<4>
        output A_int_addr1: UInt<4>
        output A_int_write_en: UInt<1>
        output A_int_write_data: UInt<32>
        output A_int_read_en: UInt<1>
        input A_int_read_data: UInt<32>
        input A_int_write_done: UInt<1>
        input A_int_read_done: UInt<1>
        output p_int_addr0: UInt<4>
        output p_int_write_en: UInt<1>
        output p_int_write_data: UInt<32>
        output p_int_read_en: UInt<1>
        input p_int_read_data: UInt<32>
        input p_int_write_done: UInt<1>
        input p_int_read_done: UInt<1>
        output q_int_addr0: UInt<4>
        output q_int_write_en: UInt<1>
        output q_int_write_data: UInt<32>
        output q_int_read_en: UInt<1>
        input q_int_read_data: UInt<32>
        input q_int_write_done: UInt<1>
        input q_int_read_done: UInt<1>
        output r_int_addr0: UInt<4>
        output r_int_write_en: UInt<1>
        output r_int_write_data: UInt<32>
        output r_int_read_en: UInt<1>
        input r_int_read_data: UInt<32>
        input r_int_write_done: UInt<1>
        input r_int_read_done: UInt<1>
        output s_int_addr0: UInt<4>
        output s_int_write_en: UInt<1>
        output s_int_write_data: UInt<32>
        output s_int_read_en: UInt<1>
        input s_int_read_data: UInt<32>
        input s_int_write_done: UInt<1>
        input s_int_read_done: UInt<1>
        done is invalid ; invalidate all output ports.
        done <= UInt(0)
        A_int_addr0 is invalid ; invalidate all output ports.
        A_int_addr0 <= UInt(0)
        A_int_addr1 is invalid ; invalidate all output ports.
        A_int_addr1 <= UInt(0)
        A_int_write_en is invalid ; invalidate all output ports.
        A_int_write_en <= UInt(0)
        A_int_write_data is invalid ; invalidate all output ports.
        A_int_write_data <= UInt(0)
        A_int_read_en is invalid ; invalidate all output ports.
        A_int_read_en <= UInt(0)
        p_int_addr0 is invalid ; invalidate all output ports.
        p_int_addr0 <= UInt(0)
        p_int_write_en is invalid ; invalidate all output ports.
        p_int_write_en <= UInt(0)
        p_int_write_data is invalid ; invalidate all output ports.
        p_int_write_data <= UInt(0)
        p_int_read_en is invalid ; invalidate all output ports.
        p_int_read_en <= UInt(0)
        q_int_addr0 is invalid ; invalidate all output ports.
        q_int_addr0 <= UInt(0)
        q_int_write_en is invalid ; invalidate all output ports.
        q_int_write_en <= UInt(0)
        q_int_write_data is invalid ; invalidate all output ports.
        q_int_write_data <= UInt(0)
        q_int_read_en is invalid ; invalidate all output ports.
        q_int_read_en <= UInt(0)
        r_int_addr0 is invalid ; invalidate all output ports.
        r_int_addr0 <= UInt(0)
        r_int_write_en is invalid ; invalidate all output ports.
        r_int_write_en <= UInt(0)
        r_int_write_data is invalid ; invalidate all output ports.
        r_int_write_data <= UInt(0)
        r_int_read_en is invalid ; invalidate all output ports.
        r_int_read_en <= UInt(0)
        s_int_addr0 is invalid ; invalidate all output ports.
        s_int_addr0 <= UInt(0)
        s_int_write_en is invalid ; invalidate all output ports.
        s_int_write_en <= UInt(0)
        s_int_write_data is invalid ; invalidate all output ports.
        s_int_write_data <= UInt(0)
        s_int_read_en is invalid ; invalidate all output ports.
        s_int_read_en <= UInt(0)
        ; COMPONENT START: main
        inst A_i_j_0 of std_reg_32
        inst add0 of std_add_4
        inst add1 of std_add_32
        inst bin_read0_0 of std_reg_32
        inst const0 of std_const_4_0
        inst const1 of std_const_4_7
        inst const10 of std_const_4_1
        inst const2 of std_const_32_0
        inst i1 of std_reg_4
        inst j0 of std_reg_4
        inst le0 of std_le_4
        inst mult_pipe0 of std_mult_pipe_32
        inst p_int_read0_0 of std_reg_32
        inst q0_0 of std_reg_32
        inst s0_0 of std_reg_32
        inst comb_reg0 of std_reg_1
        inst comb_reg1 of std_reg_1
        inst fsm of std_reg_5
        inst fsm0 of std_reg_2
        inst ud of undef_1
        inst adder of std_add_5
        inst ud0 of undef_1
        inst adder0 of std_add_5
        inst ud1 of undef_1
        inst adder1 of std_add_5
        inst ud2 of undef_1
        inst adder2 of std_add_2
        inst ud3 of undef_1
        inst adder3 of std_add_5
        inst ud4 of undef_1
        inst adder4 of std_add_5
        inst ud5 of undef_1
        inst adder5 of std_add_5
        inst signal_reg of std_reg_1
        inst fsm1 of std_reg_2
        inst pd of std_reg_1
        inst fsm2 of std_reg_2
        inst pd0 of std_reg_1
        inst fsm3 of std_reg_2
        inst pd1 of std_reg_1
        inst pd2 of std_reg_1
        inst fsm4 of std_reg_2
        inst pd3 of std_reg_1
        inst fsm5 of std_reg_4
        inst beg_spl_let3_go of std_wire_1
        inst beg_spl_let3_done of std_wire_1
        inst beg_spl_let4_go of std_wire_1
        inst beg_spl_let4_done of std_wire_1
        inst beg_spl_let5_go of std_wire_1
        inst beg_spl_let5_done of std_wire_1
        inst beg_spl_let6_go of std_wire_1
        inst beg_spl_let6_done of std_wire_1
        inst beg_spl_let8_go of std_wire_1
        inst beg_spl_let8_done of std_wire_1
        inst invoke4_go of std_wire_1
        inst invoke4_done of std_wire_1
        inst invoke5_go of std_wire_1
        inst invoke5_done of std_wire_1
        inst invoke6_go of std_wire_1
        inst invoke6_done of std_wire_1
        inst invoke7_go of std_wire_1
        inst invoke7_done of std_wire_1
        inst invoke10_go of std_wire_1
        inst invoke10_done of std_wire_1
        inst invoke14_go of std_wire_1
        inst invoke14_done of std_wire_1
        inst early_reset_cond10_go of std_wire_1
        inst early_reset_cond10_done of std_wire_1
        inst early_reset_cond20_go of std_wire_1
        inst early_reset_cond20_done of std_wire_1
        inst early_reset_static_seq_go of std_wire_1
        inst early_reset_static_seq_done of std_wire_1
        inst early_reset_static_seq0_go of std_wire_1
        inst early_reset_static_seq0_done of std_wire_1
        inst early_reset_static_par_go of std_wire_1
        inst early_reset_static_par_done of std_wire_1
        inst early_reset_static_seq1_go of std_wire_1
        inst early_reset_static_seq1_done of std_wire_1
        inst early_reset_static_par0_go of std_wire_1
        inst early_reset_static_par0_done of std_wire_1
        inst wrapper_early_reset_static_seq_go of std_wire_1
        inst wrapper_early_reset_static_seq_done of std_wire_1
        inst wrapper_early_reset_cond10_go of std_wire_1
        inst wrapper_early_reset_cond10_done of std_wire_1
        inst wrapper_early_reset_static_par_go of std_wire_1
        inst wrapper_early_reset_static_par_done of std_wire_1
        inst wrapper_early_reset_cond20_go of std_wire_1
        inst wrapper_early_reset_cond20_done of std_wire_1
        inst wrapper_early_reset_static_seq1_go of std_wire_1
        inst wrapper_early_reset_static_seq1_done of std_wire_1
        inst wrapper_early_reset_static_par0_go of std_wire_1
        inst wrapper_early_reset_static_par0_done of std_wire_1
        inst par0_go of std_wire_1
        inst par0_done of std_wire_1
        inst tdcc_go of std_wire_1
        inst tdcc_done of std_wire_1
        inst tdcc0_go of std_wire_1
        inst tdcc0_done of std_wire_1
        inst tdcc1_go of std_wire_1
        inst tdcc1_done of std_wire_1
        inst par1_go of std_wire_1
        inst par1_done of std_wire_1
        inst tdcc2_go of std_wire_1
        inst tdcc2_done of std_wire_1
        inst tdcc3_go of std_wire_1
        inst tdcc3_done of std_wire_1
        adder1.left is invalid ; default initialization
        adder1.left <= UInt(0)
        when early_reset_static_seq_go.out:
            adder1.left <= fsm.out
        adder1.right is invalid ; default initialization
        adder1.right <= UInt(0)
        when early_reset_static_seq_go.out:
            adder1.right <= UInt(1)
        invoke7_done.in <= bin_read0_0.done
        early_reset_cond10_go.in is invalid ; default initialization
        early_reset_cond10_go.in <= UInt(0)
        when wrapper_early_reset_cond10_go.out:
            early_reset_cond10_go.in <= UInt(1)
        tdcc2_done.in is invalid ; default initialization
        tdcc2_done.in <= UInt(0)
        when eq(fsm4.out, UInt(2)):
            tdcc2_done.in <= UInt(1)
        add1.left is invalid ; default initialization
        add1.left <= UInt(0)
        when and(eq(fsm.out, UInt(4)), early_reset_static_seq1_go.out):
            add1.left <= s0_0.out
        when and(eq(fsm.out, UInt(4)), early_reset_static_par0_go.out):
            add1.left <= q0_0.out
        add1.right is invalid ; default initialization
        add1.right <= UInt(0)
        when and(eq(fsm.out, UInt(4)), early_reset_static_seq1_go.out):
            add1.right <= bin_read0_0.out
        when and(eq(fsm.out, UInt(4)), early_reset_static_par0_go.out):
            add1.right <= A_i_j_0.out
        when tdcc3_done.out:
            done <= UInt(1)
        when beg_spl_let6_go.out:
            r_int_read_en <= UInt(1)
        when beg_spl_let3_go.out:
            s_int_read_en <= UInt(1)
        when beg_spl_let8_go.out:
            p_int_read_en <= UInt(1)
        when or(or(beg_spl_let4_go.out, early_reset_static_par_go.out), and(eq(fsm.out, UInt(4)), early_reset_static_par0_go.out)):
            q_int_addr0 <= i1.out
        when beg_spl_let4_go.out:
            q_int_read_en <= UInt(1)
        when and(eq(fsm0.out, UInt(0)), early_reset_static_seq0_go.out):
            s_int_addr0 <= i1.out
        when or(beg_spl_let3_go.out, and(eq(fsm.out, UInt(4)), early_reset_static_seq1_go.out)):
            s_int_addr0 <= j0.out
        when beg_spl_let5_go.out:
            A_int_addr0 <= i1.out
        when beg_spl_let5_go.out:
            A_int_addr1 <= j0.out
        when and(eq(fsm.out, UInt(4)), early_reset_static_seq1_go.out):
            s_int_write_data <= add1.out
        when and(eq(fsm0.out, UInt(0)), early_reset_static_seq0_go.out):
            s_int_write_data <= const2.out
        when beg_spl_let8_go.out:
            p_int_addr0 <= j0.out
        when or(early_reset_static_par_go.out, and(eq(fsm.out, UInt(4)), early_reset_static_par0_go.out)):
            q_int_write_en <= UInt(1)
        when beg_spl_let6_go.out:
            r_int_addr0 <= i1.out
        when or(and(eq(fsm0.out, UInt(0)), early_reset_static_seq0_go.out), and(eq(fsm.out, UInt(4)), early_reset_static_seq1_go.out)):
            s_int_write_en <= UInt(1)
        when and(eq(fsm.out, UInt(4)), early_reset_static_par0_go.out):
            q_int_write_data <= add1.out
        when early_reset_static_par_go.out:
            q_int_write_data <= const2.out
        when beg_spl_let5_go.out:
            A_int_read_en <= UInt(1)
        fsm.write_en is invalid ; default initialization
        fsm.write_en <= UInt(0)
        when or(or(or(or(or(early_reset_cond10_go.out, early_reset_cond20_go.out), early_reset_static_seq_go.out), early_reset_static_par_go.out), early_reset_static_seq1_go.out), early_reset_static_par0_go.out):
            fsm.write_en <= UInt(1)
        fsm.clk <= clk
        fsm.reset <= reset
        fsm.in is invalid ; default initialization
        fsm.in <= UInt(0)
        when and(neq(fsm.out, UInt(26)), early_reset_static_seq_go.out):
            fsm.in <= adder1.out
        when and(neq(fsm.out, UInt(0)), early_reset_cond10_go.out):
            fsm.in <= adder.out
        when and(neq(fsm.out, UInt(4)), early_reset_static_seq1_go.out):
            fsm.in <= adder4.out
        when or(or(or(or(or(and(eq(fsm.out, UInt(0)), early_reset_cond10_go.out), and(eq(fsm.out, UInt(0)), early_reset_cond20_go.out)), and(eq(fsm.out, UInt(26)), early_reset_static_seq_go.out)), and(eq(fsm.out, UInt(0)), early_reset_static_par_go.out)), and(eq(fsm.out, UInt(4)), early_reset_static_seq1_go.out)), and(eq(fsm.out, UInt(4)), early_reset_static_par0_go.out)):
            fsm.in <= UInt(0)
        when and(neq(fsm.out, UInt(0)), early_reset_static_par_go.out):
            fsm.in <= adder3.out
        when and(neq(fsm.out, UInt(4)), early_reset_static_par0_go.out):
            fsm.in <= adder5.out
        when and(neq(fsm.out, UInt(0)), early_reset_cond20_go.out):
            fsm.in <= adder0.out
        adder.left is invalid ; default initialization
        adder.left <= UInt(0)
        when early_reset_cond10_go.out:
            adder.left <= fsm.out
        adder.right is invalid ; default initialization
        adder.right <= UInt(0)
        when early_reset_cond10_go.out:
            adder.right <= UInt(1)
        beg_spl_let4_go.in is invalid ; default initialization
        beg_spl_let4_go.in <= UInt(0)
        when and(and(not(beg_spl_let4_done.out), eq(fsm2.out, UInt(0))), tdcc0_go.out):
            beg_spl_let4_go.in <= UInt(1)
        invoke4_go.in is invalid ; default initialization
        invoke4_go.in <= UInt(0)
        when and(and(not(invoke4_done.out), eq(fsm1.out, UInt(1))), tdcc_go.out):
            invoke4_go.in <= UInt(1)
        invoke14_done.in <= i1.done
        early_reset_static_par0_go.in is invalid ; default initialization
        early_reset_static_par0_go.in <= UInt(0)
        when wrapper_early_reset_static_par0_go.out:
            early_reset_static_par0_go.in <= UInt(1)
        tdcc2_go.in is invalid ; default initialization
        tdcc2_go.in <= UInt(0)
        when and(not(or(pd3.out, tdcc2_done.out)), par1_go.out):
            tdcc2_go.in <= UInt(1)
        add0.left is invalid ; default initialization
        add0.left <= UInt(0)
        when or(invoke14_go.out, and(eq(fsm0.out, UInt(1)), early_reset_static_seq0_go.out)):
            add0.left <= i1.out
        when and(eq(fsm.out, UInt(0)), early_reset_static_par0_go.out):
            add0.left <= j0.out
        add0.right is invalid ; default initialization
        add0.right <= UInt(0)
        when or(or(invoke14_go.out, and(eq(fsm0.out, UInt(1)), early_reset_static_seq0_go.out)), and(eq(fsm.out, UInt(0)), early_reset_static_par0_go.out)):
            add0.right <= const10.out
        adder4.left is invalid ; default initialization
        adder4.left <= UInt(0)
        when early_reset_static_seq1_go.out:
            adder4.left <= fsm.out
        adder4.right is invalid ; default initialization
        adder4.right <= UInt(0)
        when early_reset_static_seq1_go.out:
            adder4.right <= UInt(1)
        fsm3.write_en is invalid ; default initialization
        fsm3.write_en <= UInt(0)
        when or(or(eq(fsm3.out, UInt(2)), and(and(eq(fsm3.out, UInt(0)), beg_spl_let5_done.out), tdcc1_go.out)), and(and(eq(fsm3.out, UInt(1)), invoke6_done.out), tdcc1_go.out)):
            fsm3.write_en <= UInt(1)
        fsm3.clk <= clk
        fsm3.reset <= reset
        fsm3.in is invalid ; default initialization
        fsm3.in <= UInt(0)
        when and(and(eq(fsm3.out, UInt(0)), beg_spl_let5_done.out), tdcc1_go.out):
            fsm3.in <= UInt(1)
        when eq(fsm3.out, UInt(2)):
            fsm3.in <= UInt(0)
        when and(and(eq(fsm3.out, UInt(1)), invoke6_done.out), tdcc1_go.out):
            fsm3.in <= UInt(2)
        fsm5.write_en is invalid ; default initialization
        fsm5.write_en <= UInt(0)
        when or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(eq(fsm5.out, UInt(12)), and(and(eq(fsm5.out, UInt(0)), wrapper_early_reset_static_seq_done.out), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(1)), and(wrapper_early_reset_cond10_done.out, comb_reg0.out)), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(11)), and(wrapper_early_reset_cond10_done.out, comb_reg0.out)), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(2)), wrapper_early_reset_static_par_done.out), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(3)), and(wrapper_early_reset_cond20_done.out, comb_reg1.out)), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(9)), and(wrapper_early_reset_cond20_done.out, comb_reg1.out)), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(4)), par0_done.out), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(5)), beg_spl_let6_done.out), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(6)), invoke7_done.out), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(7)), par1_done.out), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(8)), wrapper_early_reset_static_par0_done.out), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(3)), and(wrapper_early_reset_cond20_done.out, not(comb_reg1.out))), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(9)), and(wrapper_early_reset_cond20_done.out, not(comb_reg1.out))), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(10)), invoke14_done.out), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(1)), and(wrapper_early_reset_cond10_done.out, not(comb_reg0.out))), tdcc3_go.out)), and(and(eq(fsm5.out, UInt(11)), and(wrapper_early_reset_cond10_done.out, not(comb_reg0.out))), tdcc3_go.out)):
            fsm5.write_en <= UInt(1)
        fsm5.clk <= clk
        fsm5.reset <= reset
        fsm5.in is invalid ; default initialization
        fsm5.in <= UInt(0)
        when and(and(eq(fsm5.out, UInt(2)), wrapper_early_reset_static_par_done.out), tdcc3_go.out):
            fsm5.in <= UInt(3)
        when and(and(eq(fsm5.out, UInt(4)), par0_done.out), tdcc3_go.out):
            fsm5.in <= UInt(5)
        when or(and(and(eq(fsm5.out, UInt(3)), and(wrapper_early_reset_cond20_done.out, comb_reg1.out)), tdcc3_go.out), and(and(eq(fsm5.out, UInt(9)), and(wrapper_early_reset_cond20_done.out, comb_reg1.out)), tdcc3_go.out)):
            fsm5.in <= UInt(4)
        when and(and(eq(fsm5.out, UInt(8)), wrapper_early_reset_static_par0_done.out), tdcc3_go.out):
            fsm5.in <= UInt(9)
        when or(and(and(eq(fsm5.out, UInt(3)), and(wrapper_early_reset_cond20_done.out, not(comb_reg1.out))), tdcc3_go.out), and(and(eq(fsm5.out, UInt(9)), and(wrapper_early_reset_cond20_done.out, not(comb_reg1.out))), tdcc3_go.out)):
            fsm5.in <= UInt(10)
        when eq(fsm5.out, UInt(12)):
            fsm5.in <= UInt(0)
        when and(and(eq(fsm5.out, UInt(6)), invoke7_done.out), tdcc3_go.out):
            fsm5.in <= UInt(7)
        when or(and(and(eq(fsm5.out, UInt(1)), and(wrapper_early_reset_cond10_done.out, comb_reg0.out)), tdcc3_go.out), and(and(eq(fsm5.out, UInt(11)), and(wrapper_early_reset_cond10_done.out, comb_reg0.out)), tdcc3_go.out)):
            fsm5.in <= UInt(2)
        when or(and(and(eq(fsm5.out, UInt(1)), and(wrapper_early_reset_cond10_done.out, not(comb_reg0.out))), tdcc3_go.out), and(and(eq(fsm5.out, UInt(11)), and(wrapper_early_reset_cond10_done.out, not(comb_reg0.out))), tdcc3_go.out)):
            fsm5.in <= UInt(12)
        when and(and(eq(fsm5.out, UInt(5)), beg_spl_let6_done.out), tdcc3_go.out):
            fsm5.in <= UInt(6)
        when and(and(eq(fsm5.out, UInt(7)), par1_done.out), tdcc3_go.out):
            fsm5.in <= UInt(8)
        when and(and(eq(fsm5.out, UInt(0)), wrapper_early_reset_static_seq_done.out), tdcc3_go.out):
            fsm5.in <= UInt(1)
        when and(and(eq(fsm5.out, UInt(10)), invoke14_done.out), tdcc3_go.out):
            fsm5.in <= UInt(11)
        beg_spl_let6_done.in <= r_int_read_done
        beg_spl_let8_done.in <= p_int_read_done
        tdcc0_done.in is invalid ; default initialization
        tdcc0_done.in <= UInt(0)
        when eq(fsm2.out, UInt(2)):
            tdcc0_done.in <= UInt(1)
        beg_spl_let3_done.in <= s_int_read_done
        beg_spl_let4_done.in <= q_int_read_done
        early_reset_cond10_done.in <= ud.out
        early_reset_static_seq0_go.in is invalid ; default initialization
        early_reset_static_seq0_go.in <= UInt(0)
        when and(and(geq(fsm.out, UInt(2)), lt(fsm.out, UInt(26))), early_reset_static_seq_go.out):
            early_reset_static_seq0_go.in <= UInt(1)
        wrapper_early_reset_static_seq1_done.in is invalid ; default initialization
        wrapper_early_reset_static_seq1_done.in <= UInt(0)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            wrapper_early_reset_static_seq1_done.in <= UInt(1)
        comb_reg1.write_en is invalid ; default initialization
        comb_reg1.write_en <= UInt(0)
        when early_reset_cond20_go.out:
            comb_reg1.write_en <= UInt(1)
        comb_reg1.clk <= clk
        comb_reg1.reset <= reset
        comb_reg1.in is invalid ; default initialization
        comb_reg1.in <= UInt(0)
        when early_reset_cond20_go.out:
            comb_reg1.in <= le0.out
        fsm1.write_en is invalid ; default initialization
        fsm1.write_en <= UInt(0)
        when or(or(eq(fsm1.out, UInt(2)), and(and(eq(fsm1.out, UInt(0)), beg_spl_let3_done.out), tdcc_go.out)), and(and(eq(fsm1.out, UInt(1)), invoke4_done.out), tdcc_go.out)):
            fsm1.write_en <= UInt(1)
        fsm1.clk <= clk
        fsm1.reset <= reset
        fsm1.in is invalid ; default initialization
        fsm1.in <= UInt(0)
        when and(and(eq(fsm1.out, UInt(0)), beg_spl_let3_done.out), tdcc_go.out):
            fsm1.in <= UInt(1)
        when eq(fsm1.out, UInt(2)):
            fsm1.in <= UInt(0)
        when and(and(eq(fsm1.out, UInt(1)), invoke4_done.out), tdcc_go.out):
            fsm1.in <= UInt(2)
        fsm4.write_en is invalid ; default initialization
        fsm4.write_en <= UInt(0)
        when or(or(eq(fsm4.out, UInt(2)), and(and(eq(fsm4.out, UInt(0)), beg_spl_let8_done.out), tdcc2_go.out)), and(and(eq(fsm4.out, UInt(1)), invoke10_done.out), tdcc2_go.out)):
            fsm4.write_en <= UInt(1)
        fsm4.clk <= clk
        fsm4.reset <= reset
        fsm4.in is invalid ; default initialization
        fsm4.in <= UInt(0)
        when and(and(eq(fsm4.out, UInt(0)), beg_spl_let8_done.out), tdcc2_go.out):
            fsm4.in <= UInt(1)
        when eq(fsm4.out, UInt(2)):
            fsm4.in <= UInt(0)
        when and(and(eq(fsm4.out, UInt(1)), invoke10_done.out), tdcc2_go.out):
            fsm4.in <= UInt(2)
        beg_spl_let6_go.in is invalid ; default initialization
        beg_spl_let6_go.in <= UInt(0)
        when and(and(not(beg_spl_let6_done.out), eq(fsm5.out, UInt(5))), tdcc3_go.out):
            beg_spl_let6_go.in <= UInt(1)
        invoke5_go.in is invalid ; default initialization
        invoke5_go.in <= UInt(0)
        when and(and(not(invoke5_done.out), eq(fsm2.out, UInt(1))), tdcc0_go.out):
            invoke5_go.in <= UInt(1)
        invoke5_done.in <= q0_0.done
        early_reset_cond20_go.in is invalid ; default initialization
        early_reset_cond20_go.in <= UInt(0)
        when wrapper_early_reset_cond20_go.out:
            early_reset_cond20_go.in <= UInt(1)
        early_reset_static_seq1_done.in <= ud4.out
        wrapper_early_reset_cond10_go.in is invalid ; default initialization
        wrapper_early_reset_cond10_go.in <= UInt(0)
        when or(and(and(not(wrapper_early_reset_cond10_done.out), eq(fsm5.out, UInt(1))), tdcc3_go.out), and(and(not(wrapper_early_reset_cond10_done.out), eq(fsm5.out, UInt(11))), tdcc3_go.out)):
            wrapper_early_reset_cond10_go.in <= UInt(1)
        wrapper_early_reset_static_par_go.in is invalid ; default initialization
        wrapper_early_reset_static_par_go.in <= UInt(0)
        when and(and(not(wrapper_early_reset_static_par_done.out), eq(fsm5.out, UInt(2))), tdcc3_go.out):
            wrapper_early_reset_static_par_go.in <= UInt(1)
        par1_go.in is invalid ; default initialization
        par1_go.in <= UInt(0)
        when and(and(not(par1_done.out), eq(fsm5.out, UInt(7))), tdcc3_go.out):
            par1_go.in <= UInt(1)
        comb_reg0.write_en is invalid ; default initialization
        comb_reg0.write_en <= UInt(0)
        when early_reset_cond10_go.out:
            comb_reg0.write_en <= UInt(1)
        comb_reg0.clk <= clk
        comb_reg0.reset <= reset
        comb_reg0.in is invalid ; default initialization
        comb_reg0.in <= UInt(0)
        when early_reset_cond10_go.out:
            comb_reg0.in <= le0.out
        pd1.write_en is invalid ; default initialization
        pd1.write_en <= UInt(0)
        when or(and(and(pd.out, pd0.out), pd1.out), and(tdcc1_done.out, par0_go.out)):
            pd1.write_en <= UInt(1)
        pd1.clk <= clk
        pd1.reset <= reset
        pd1.in is invalid ; default initialization
        pd1.in <= UInt(0)
        when and(tdcc1_done.out, par0_go.out):
            pd1.in <= UInt(1)
        when and(and(pd.out, pd0.out), pd1.out):
            pd1.in <= UInt(0)
        early_reset_static_seq1_go.in is invalid ; default initialization
        early_reset_static_seq1_go.in <= UInt(0)
        when wrapper_early_reset_static_seq1_go.out:
            early_reset_static_seq1_go.in <= UInt(1)
        early_reset_static_par0_done.in <= ud5.out
        wrapper_early_reset_static_par_done.in is invalid ; default initialization
        wrapper_early_reset_static_par_done.in <= UInt(0)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            wrapper_early_reset_static_par_done.in <= UInt(1)
        wrapper_early_reset_cond20_done.in is invalid ; default initialization
        wrapper_early_reset_cond20_done.in <= UInt(0)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            wrapper_early_reset_cond20_done.in <= UInt(1)
        tdcc_go.in is invalid ; default initialization
        tdcc_go.in <= UInt(0)
        when and(not(or(pd.out, tdcc_done.out)), par0_go.out):
            tdcc_go.in <= UInt(1)
        tdcc3_go.in <= go
        tdcc3_done.in is invalid ; default initialization
        tdcc3_done.in <= UInt(0)
        when eq(fsm5.out, UInt(12)):
            tdcc3_done.in <= UInt(1)
        fsm0.write_en is invalid ; default initialization
        fsm0.write_en <= UInt(0)
        when early_reset_static_seq0_go.out:
            fsm0.write_en <= UInt(1)
        fsm0.clk <= clk
        fsm0.reset <= reset
        fsm0.in is invalid ; default initialization
        fsm0.in <= UInt(0)
        when and(eq(fsm0.out, UInt(2)), early_reset_static_seq0_go.out):
            fsm0.in <= UInt(0)
        when and(neq(fsm0.out, UInt(2)), early_reset_static_seq0_go.out):
            fsm0.in <= adder2.out
        adder2.left is invalid ; default initialization
        adder2.left <= UInt(0)
        when early_reset_static_seq0_go.out:
            adder2.left <= fsm0.out
        adder2.right is invalid ; default initialization
        adder2.right <= UInt(0)
        when early_reset_static_seq0_go.out:
            adder2.right <= UInt(1)
        fsm2.write_en is invalid ; default initialization
        fsm2.write_en <= UInt(0)
        when or(or(eq(fsm2.out, UInt(2)), and(and(eq(fsm2.out, UInt(0)), beg_spl_let4_done.out), tdcc0_go.out)), and(and(eq(fsm2.out, UInt(1)), invoke5_done.out), tdcc0_go.out)):
            fsm2.write_en <= UInt(1)
        fsm2.clk <= clk
        fsm2.reset <= reset
        fsm2.in is invalid ; default initialization
        fsm2.in <= UInt(0)
        when and(and(eq(fsm2.out, UInt(0)), beg_spl_let4_done.out), tdcc0_go.out):
            fsm2.in <= UInt(1)
        when eq(fsm2.out, UInt(2)):
            fsm2.in <= UInt(0)
        when and(and(eq(fsm2.out, UInt(1)), invoke5_done.out), tdcc0_go.out):
            fsm2.in <= UInt(2)
        invoke10_done.in <= p_int_read0_0.done
        tdcc0_go.in is invalid ; default initialization
        tdcc0_go.in <= UInt(0)
        when and(not(or(pd0.out, tdcc0_done.out)), par0_go.out):
            tdcc0_go.in <= UInt(1)
        adder3.left is invalid ; default initialization
        adder3.left <= UInt(0)
        when early_reset_static_par_go.out:
            adder3.left <= fsm.out
        adder3.right is invalid ; default initialization
        adder3.right <= UInt(0)
        when early_reset_static_par_go.out:
            adder3.right <= UInt(1)
        adder5.left is invalid ; default initialization
        adder5.left <= UInt(0)
        when early_reset_static_par0_go.out:
            adder5.left <= fsm.out
        adder5.right is invalid ; default initialization
        adder5.right <= UInt(0)
        when early_reset_static_par0_go.out:
            adder5.right <= UInt(1)
        beg_spl_let3_go.in is invalid ; default initialization
        beg_spl_let3_go.in <= UInt(0)
        when and(and(not(beg_spl_let3_done.out), eq(fsm1.out, UInt(0))), tdcc_go.out):
            beg_spl_let3_go.in <= UInt(1)
        wrapper_early_reset_static_seq_done.in is invalid ; default initialization
        wrapper_early_reset_static_seq_done.in <= UInt(0)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            wrapper_early_reset_static_seq_done.in <= UInt(1)
        par0_done.in is invalid ; default initialization
        par0_done.in <= UInt(0)
        when and(and(pd.out, pd0.out), pd1.out):
            par0_done.in <= UInt(1)
        mult_pipe0.clk <= clk
        mult_pipe0.left is invalid ; default initialization
        mult_pipe0.left <= UInt(0)
        when and(lt(fsm.out, UInt(3)), early_reset_static_seq1_go.out):
            mult_pipe0.left <= bin_read0_0.out
        when and(lt(fsm.out, UInt(3)), early_reset_static_par0_go.out):
            mult_pipe0.left <= A_i_j_0.out
        mult_pipe0.go is invalid ; default initialization
        mult_pipe0.go <= UInt(0)
        when or(and(lt(fsm.out, UInt(3)), early_reset_static_seq1_go.out), and(lt(fsm.out, UInt(3)), early_reset_static_par0_go.out)):
            mult_pipe0.go <= UInt(1)
        mult_pipe0.reset <= reset
        mult_pipe0.right is invalid ; default initialization
        mult_pipe0.right <= UInt(0)
        when and(lt(fsm.out, UInt(3)), early_reset_static_seq1_go.out):
            mult_pipe0.right <= A_i_j_0.out
        when and(lt(fsm.out, UInt(3)), early_reset_static_par0_go.out):
            mult_pipe0.right <= p_int_read0_0.out
        s0_0.write_en is invalid ; default initialization
        s0_0.write_en <= UInt(0)
        when invoke4_go.out:
            s0_0.write_en <= UInt(1)
        s0_0.clk <= clk
        s0_0.reset <= reset
        s0_0.in is invalid ; default initialization
        s0_0.in <= UInt(0)
        when invoke4_go.out:
            s0_0.in <= s_int_read_data
        adder0.left is invalid ; default initialization
        adder0.left <= UInt(0)
        when early_reset_cond20_go.out:
            adder0.left <= fsm.out
        adder0.right is invalid ; default initialization
        adder0.right <= UInt(0)
        when early_reset_cond20_go.out:
            adder0.right <= UInt(1)
        pd2.write_en is invalid ; default initialization
        pd2.write_en <= UInt(0)
        when or(and(pd2.out, pd3.out), and(wrapper_early_reset_static_seq1_done.out, par1_go.out)):
            pd2.write_en <= UInt(1)
        pd2.clk <= clk
        pd2.reset <= reset
        pd2.in is invalid ; default initialization
        pd2.in <= UInt(0)
        when and(wrapper_early_reset_static_seq1_done.out, par1_go.out):
            pd2.in <= UInt(1)
        when and(pd2.out, pd3.out):
            pd2.in <= UInt(0)
        invoke6_done.in <= A_i_j_0.done
        early_reset_static_seq_go.in is invalid ; default initialization
        early_reset_static_seq_go.in <= UInt(0)
        when wrapper_early_reset_static_seq_go.out:
            early_reset_static_seq_go.in <= UInt(1)
        early_reset_static_par_done.in <= ud3.out
        wrapper_early_reset_cond10_done.in is invalid ; default initialization
        wrapper_early_reset_cond10_done.in <= UInt(0)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            wrapper_early_reset_cond10_done.in <= UInt(1)
        i1.write_en is invalid ; default initialization
        i1.write_en <= UInt(0)
        when or(or(invoke14_go.out, and(or(eq(fsm.out, UInt(0)), eq(fsm.out, UInt(26))), early_reset_static_seq_go.out)), and(eq(fsm0.out, UInt(1)), early_reset_static_seq0_go.out)):
            i1.write_en <= UInt(1)
        i1.clk <= clk
        i1.reset <= reset
        i1.in is invalid ; default initialization
        i1.in <= UInt(0)
        when or(invoke14_go.out, and(eq(fsm0.out, UInt(1)), early_reset_static_seq0_go.out)):
            i1.in <= add0.out
        when and(or(eq(fsm.out, UInt(0)), eq(fsm.out, UInt(26))), early_reset_static_seq_go.out):
            i1.in <= const0.out
        le0.left is invalid ; default initialization
        le0.left <= UInt(0)
        when or(or(early_reset_cond10_go.out, and(eq(fsm.out, UInt(1)), early_reset_static_seq_go.out)), and(eq(fsm0.out, UInt(2)), early_reset_static_seq0_go.out)):
            le0.left <= i1.out
        when early_reset_cond20_go.out:
            le0.left <= j0.out
        le0.right is invalid ; default initialization
        le0.right <= UInt(0)
        when or(or(or(early_reset_cond10_go.out, early_reset_cond20_go.out), and(eq(fsm.out, UInt(1)), early_reset_static_seq_go.out)), and(eq(fsm0.out, UInt(2)), early_reset_static_seq0_go.out)):
            le0.right <= const1.out
        signal_reg.write_en is invalid ; default initialization
        signal_reg.write_en <= UInt(0)
        when or(or(or(or(or(or(and(eq(fsm.out, UInt(0)), signal_reg.out), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_static_seq_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_cond10_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_static_par_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_cond20_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_static_seq1_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_static_par0_go.out)):
            signal_reg.write_en <= UInt(1)
        signal_reg.clk <= clk
        signal_reg.reset <= reset
        signal_reg.in is invalid ; default initialization
        signal_reg.in <= UInt(0)
        when or(or(or(or(or(and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_static_seq_go.out), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_cond10_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_static_par_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_cond20_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_static_seq1_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_static_par0_go.out)):
            signal_reg.in <= UInt(1)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            signal_reg.in <= UInt(0)
        beg_spl_let5_go.in is invalid ; default initialization
        beg_spl_let5_go.in <= UInt(0)
        when and(and(not(beg_spl_let5_done.out), eq(fsm3.out, UInt(0))), tdcc1_go.out):
            beg_spl_let5_go.in <= UInt(1)
        beg_spl_let8_go.in is invalid ; default initialization
        beg_spl_let8_go.in <= UInt(0)
        when and(and(not(beg_spl_let8_done.out), eq(fsm4.out, UInt(0))), tdcc2_go.out):
            beg_spl_let8_go.in <= UInt(1)
        tdcc1_done.in is invalid ; default initialization
        tdcc1_done.in <= UInt(0)
        when eq(fsm3.out, UInt(2)):
            tdcc1_done.in <= UInt(1)
        par1_done.in is invalid ; default initialization
        par1_done.in <= UInt(0)
        when and(pd2.out, pd3.out):
            par1_done.in <= UInt(1)
        pd.write_en is invalid ; default initialization
        pd.write_en <= UInt(0)
        when or(and(and(pd.out, pd0.out), pd1.out), and(tdcc_done.out, par0_go.out)):
            pd.write_en <= UInt(1)
        pd.clk <= clk
        pd.reset <= reset
        pd.in is invalid ; default initialization
        pd.in <= UInt(0)
        when and(tdcc_done.out, par0_go.out):
            pd.in <= UInt(1)
        when and(and(pd.out, pd0.out), pd1.out):
            pd.in <= UInt(0)
        pd0.write_en is invalid ; default initialization
        pd0.write_en <= UInt(0)
        when or(and(and(pd.out, pd0.out), pd1.out), and(tdcc0_done.out, par0_go.out)):
            pd0.write_en <= UInt(1)
        pd0.clk <= clk
        pd0.reset <= reset
        pd0.in is invalid ; default initialization
        pd0.in <= UInt(0)
        when and(tdcc0_done.out, par0_go.out):
            pd0.in <= UInt(1)
        when and(and(pd.out, pd0.out), pd1.out):
            pd0.in <= UInt(0)
        wrapper_early_reset_cond20_go.in is invalid ; default initialization
        wrapper_early_reset_cond20_go.in <= UInt(0)
        when or(and(and(not(wrapper_early_reset_cond20_done.out), eq(fsm5.out, UInt(3))), tdcc3_go.out), and(and(not(wrapper_early_reset_cond20_done.out), eq(fsm5.out, UInt(9))), tdcc3_go.out)):
            wrapper_early_reset_cond20_go.in <= UInt(1)
        bin_read0_0.write_en is invalid ; default initialization
        bin_read0_0.write_en <= UInt(0)
        when or(invoke7_go.out, and(eq(fsm.out, UInt(3)), early_reset_static_seq1_go.out)):
            bin_read0_0.write_en <= UInt(1)
        bin_read0_0.clk <= clk
        bin_read0_0.reset <= reset
        bin_read0_0.in is invalid ; default initialization
        bin_read0_0.in <= UInt(0)
        when invoke7_go.out:
            bin_read0_0.in <= r_int_read_data
        when and(eq(fsm.out, UInt(3)), early_reset_static_seq1_go.out):
            bin_read0_0.in <= mult_pipe0.out
        j0.write_en is invalid ; default initialization
        j0.write_en <= UInt(0)
        when or(early_reset_static_par_go.out, and(eq(fsm.out, UInt(0)), early_reset_static_par0_go.out)):
            j0.write_en <= UInt(1)
        j0.clk <= clk
        j0.reset <= reset
        j0.in is invalid ; default initialization
        j0.in <= UInt(0)
        when and(eq(fsm.out, UInt(0)), early_reset_static_par0_go.out):
            j0.in <= add0.out
        when early_reset_static_par_go.out:
            j0.in <= const0.out
        beg_spl_let5_done.in <= A_int_read_done
        early_reset_cond20_done.in <= ud0.out
        early_reset_static_seq_done.in <= ud1.out
        wrapper_early_reset_static_seq1_go.in is invalid ; default initialization
        wrapper_early_reset_static_seq1_go.in <= UInt(0)
        when and(not(or(pd2.out, wrapper_early_reset_static_seq1_done.out)), par1_go.out):
            wrapper_early_reset_static_seq1_go.in <= UInt(1)
        wrapper_early_reset_static_par0_go.in is invalid ; default initialization
        wrapper_early_reset_static_par0_go.in <= UInt(0)
        when and(and(not(wrapper_early_reset_static_par0_done.out), eq(fsm5.out, UInt(8))), tdcc3_go.out):
            wrapper_early_reset_static_par0_go.in <= UInt(1)
        wrapper_early_reset_static_par0_done.in is invalid ; default initialization
        wrapper_early_reset_static_par0_done.in <= UInt(0)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            wrapper_early_reset_static_par0_done.in <= UInt(1)
        tdcc_done.in is invalid ; default initialization
        tdcc_done.in <= UInt(0)
        when eq(fsm1.out, UInt(2)):
            tdcc_done.in <= UInt(1)
        A_i_j_0.write_en is invalid ; default initialization
        A_i_j_0.write_en <= UInt(0)
        when or(invoke6_go.out, and(eq(fsm.out, UInt(3)), early_reset_static_par0_go.out)):
            A_i_j_0.write_en <= UInt(1)
        A_i_j_0.clk <= clk
        A_i_j_0.reset <= reset
        A_i_j_0.in is invalid ; default initialization
        A_i_j_0.in <= UInt(0)
        when invoke6_go.out:
            A_i_j_0.in <= A_int_read_data
        when and(eq(fsm.out, UInt(3)), early_reset_static_par0_go.out):
            A_i_j_0.in <= mult_pipe0.out
        p_int_read0_0.write_en is invalid ; default initialization
        p_int_read0_0.write_en <= UInt(0)
        when invoke10_go.out:
            p_int_read0_0.write_en <= UInt(1)
        p_int_read0_0.clk <= clk
        p_int_read0_0.reset <= reset
        p_int_read0_0.in is invalid ; default initialization
        p_int_read0_0.in <= UInt(0)
        when invoke10_go.out:
            p_int_read0_0.in <= p_int_read_data
        pd3.write_en is invalid ; default initialization
        pd3.write_en <= UInt(0)
        when or(and(pd2.out, pd3.out), and(tdcc2_done.out, par1_go.out)):
            pd3.write_en <= UInt(1)
        pd3.clk <= clk
        pd3.reset <= reset
        pd3.in is invalid ; default initialization
        pd3.in <= UInt(0)
        when and(tdcc2_done.out, par1_go.out):
            pd3.in <= UInt(1)
        when and(pd2.out, pd3.out):
            pd3.in <= UInt(0)
        invoke4_done.in <= s0_0.done
        early_reset_static_par_go.in is invalid ; default initialization
        early_reset_static_par_go.in <= UInt(0)
        when wrapper_early_reset_static_par_go.out:
            early_reset_static_par_go.in <= UInt(1)
        invoke6_go.in is invalid ; default initialization
        invoke6_go.in <= UInt(0)
        when and(and(not(invoke6_done.out), eq(fsm3.out, UInt(1))), tdcc1_go.out):
            invoke6_go.in <= UInt(1)
        early_reset_static_seq0_done.in <= ud2.out
        wrapper_early_reset_static_seq_go.in is invalid ; default initialization
        wrapper_early_reset_static_seq_go.in <= UInt(0)
        when and(and(not(wrapper_early_reset_static_seq_done.out), eq(fsm5.out, UInt(0))), tdcc3_go.out):
            wrapper_early_reset_static_seq_go.in <= UInt(1)
        tdcc1_go.in is invalid ; default initialization
        tdcc1_go.in <= UInt(0)
        when and(not(or(pd1.out, tdcc1_done.out)), par0_go.out):
            tdcc1_go.in <= UInt(1)
        q0_0.write_en is invalid ; default initialization
        q0_0.write_en <= UInt(0)
        when invoke5_go.out:
            q0_0.write_en <= UInt(1)
        q0_0.clk <= clk
        q0_0.reset <= reset
        q0_0.in is invalid ; default initialization
        q0_0.in <= UInt(0)
        when invoke5_go.out:
            q0_0.in <= q_int_read_data
        invoke7_go.in is invalid ; default initialization
        invoke7_go.in <= UInt(0)
        when and(and(not(invoke7_done.out), eq(fsm5.out, UInt(6))), tdcc3_go.out):
            invoke7_go.in <= UInt(1)
        invoke10_go.in is invalid ; default initialization
        invoke10_go.in <= UInt(0)
        when and(and(not(invoke10_done.out), eq(fsm4.out, UInt(1))), tdcc2_go.out):
            invoke10_go.in <= UInt(1)
        invoke14_go.in is invalid ; default initialization
        invoke14_go.in <= UInt(0)
        when and(and(not(invoke14_done.out), eq(fsm5.out, UInt(10))), tdcc3_go.out):
            invoke14_go.in <= UInt(1)
        par0_go.in is invalid ; default initialization
        par0_go.in <= UInt(0)
        when and(and(not(par0_done.out), eq(fsm5.out, UInt(4))), tdcc3_go.out):
            par0_go.in <= UInt(1)
        ; COMPONENT END: main


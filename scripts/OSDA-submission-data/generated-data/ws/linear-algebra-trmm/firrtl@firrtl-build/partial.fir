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
        output B_int_addr0: UInt<4>
        output B_int_addr1: UInt<4>
        output B_int_write_en: UInt<1>
        output B_int_write_data: UInt<32>
        output B_int_read_en: UInt<1>
        input B_int_read_data: UInt<32>
        input B_int_write_done: UInt<1>
        input B_int_read_done: UInt<1>
        output alpha_int_addr0: UInt<1>
        output alpha_int_write_en: UInt<1>
        output alpha_int_write_data: UInt<32>
        output alpha_int_read_en: UInt<1>
        input alpha_int_read_data: UInt<32>
        input alpha_int_write_done: UInt<1>
        input alpha_int_read_done: UInt<1>
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
        B_int_addr0 is invalid ; invalidate all output ports.
        B_int_addr0 <= UInt(0)
        B_int_addr1 is invalid ; invalidate all output ports.
        B_int_addr1 <= UInt(0)
        B_int_write_en is invalid ; invalidate all output ports.
        B_int_write_en <= UInt(0)
        B_int_write_data is invalid ; invalidate all output ports.
        B_int_write_data <= UInt(0)
        B_int_read_en is invalid ; invalidate all output ports.
        B_int_read_en <= UInt(0)
        alpha_int_addr0 is invalid ; invalidate all output ports.
        alpha_int_addr0 <= UInt(0)
        alpha_int_write_en is invalid ; invalidate all output ports.
        alpha_int_write_en <= UInt(0)
        alpha_int_write_data is invalid ; invalidate all output ports.
        alpha_int_write_data <= UInt(0)
        alpha_int_read_en is invalid ; invalidate all output ports.
        alpha_int_read_en <= UInt(0)
        ; COMPONENT START: main
        inst A_int_read0_0 of std_reg_32
        inst B_i_j_0 of std_reg_32
        inst B_k_j_0 of std_reg_32
        inst add0 of std_add_4
        inst add1 of std_add_32
        inst const0 of std_const_4_0
        inst const1 of std_const_4_7
        inst const3 of std_const_4_11
        inst const4 of std_const_4_1
        inst const5 of std_const_4_8
        inst const7 of std_const_1_0
        inst i0 of std_reg_4
        inst j0 of std_reg_4
        inst k_0 of std_reg_4
        inst le0 of std_le_4
        inst lt0 of std_lt_4
        inst mult_pipe0 of std_mult_pipe_32
        inst comb_reg of std_reg_1
        inst comb_reg0 of std_reg_1
        inst comb_reg1 of std_reg_1
        inst fsm of std_reg_3
        inst ud of undef_1
        inst adder of std_add_3
        inst ud0 of undef_1
        inst adder0 of std_add_3
        inst ud1 of undef_1
        inst adder1 of std_add_3
        inst ud2 of undef_1
        inst adder2 of std_add_3
        inst ud3 of undef_1
        inst adder3 of std_add_3
        inst signal_reg of std_reg_1
        inst fsm0 of std_reg_5
        inst beg_spl_let3_go of std_wire_1
        inst beg_spl_let3_done of std_wire_1
        inst beg_spl_let4_go of std_wire_1
        inst beg_spl_let4_done of std_wire_1
        inst beg_spl_let5_go of std_wire_1
        inst beg_spl_let5_done of std_wire_1
        inst beg_spl_let7_go of std_wire_1
        inst beg_spl_let7_done of std_wire_1
        inst beg_spl_let8_go of std_wire_1
        inst beg_spl_let8_done of std_wire_1
        inst invoke0_go of std_wire_1
        inst invoke0_done of std_wire_1
        inst invoke1_go of std_wire_1
        inst invoke1_done of std_wire_1
        inst invoke2_go of std_wire_1
        inst invoke2_done of std_wire_1
        inst invoke3_go of std_wire_1
        inst invoke3_done of std_wire_1
        inst invoke4_go of std_wire_1
        inst invoke4_done of std_wire_1
        inst invoke5_go of std_wire_1
        inst invoke5_done of std_wire_1
        inst invoke9_go of std_wire_1
        inst invoke9_done of std_wire_1
        inst invoke10_go of std_wire_1
        inst invoke10_done of std_wire_1
        inst invoke14_go of std_wire_1
        inst invoke14_done of std_wire_1
        inst early_reset_cond00_go of std_wire_1
        inst early_reset_cond00_done of std_wire_1
        inst early_reset_cond10_go of std_wire_1
        inst early_reset_cond10_done of std_wire_1
        inst early_reset_cond20_go of std_wire_1
        inst early_reset_cond20_done of std_wire_1
        inst early_reset_static_par_go of std_wire_1
        inst early_reset_static_par_done of std_wire_1
        inst early_reset_static_seq0_go of std_wire_1
        inst early_reset_static_seq0_done of std_wire_1
        inst wrapper_early_reset_cond00_go of std_wire_1
        inst wrapper_early_reset_cond00_done of std_wire_1
        inst wrapper_early_reset_cond10_go of std_wire_1
        inst wrapper_early_reset_cond10_done of std_wire_1
        inst wrapper_early_reset_cond20_go of std_wire_1
        inst wrapper_early_reset_cond20_done of std_wire_1
        inst wrapper_early_reset_static_par_go of std_wire_1
        inst wrapper_early_reset_static_par_done of std_wire_1
        inst wrapper_early_reset_static_seq0_go of std_wire_1
        inst wrapper_early_reset_static_seq0_done of std_wire_1
        inst tdcc_go of std_wire_1
        inst tdcc_done of std_wire_1
        i0.write_en is invalid ; default initialization
        i0.write_en <= UInt(0)
        when or(invoke0_go.out, invoke14_go.out):
            i0.write_en <= UInt(1)
        i0.clk <= clk
        i0.reset <= reset
        i0.in is invalid ; default initialization
        i0.in <= UInt(0)
        when invoke14_go.out:
            i0.in <= add0.out
        when invoke0_go.out:
            i0.in <= const0.out
        adder1.left is invalid ; default initialization
        adder1.left <= UInt(0)
        when early_reset_cond20_go.out:
            adder1.left <= fsm.out
        adder1.right is invalid ; default initialization
        adder1.right <= UInt(0)
        when early_reset_cond20_go.out:
            adder1.right <= UInt(1)
        invoke9_go.in is invalid ; default initialization
        invoke9_go.in <= UInt(0)
        when and(and(not(invoke9_done.out), eq(fsm0.out, UInt(15))), tdcc_go.out):
            invoke9_go.in <= UInt(1)
        invoke9_done.in <= A_int_read0_0.done
        early_reset_cond00_go.in is invalid ; default initialization
        early_reset_cond00_go.in <= UInt(0)
        when wrapper_early_reset_cond00_go.out:
            early_reset_cond00_go.in <= UInt(1)
        early_reset_cond10_go.in is invalid ; default initialization
        early_reset_cond10_go.in <= UInt(0)
        when wrapper_early_reset_cond10_go.out:
            early_reset_cond10_go.in <= UInt(1)
        add1.left is invalid ; default initialization
        add1.left <= UInt(0)
        when and(eq(fsm.out, UInt(4)), early_reset_static_par_go.out):
            add1.left <= A_int_read0_0.out
        add1.right is invalid ; default initialization
        add1.right <= UInt(0)
        when and(eq(fsm.out, UInt(4)), early_reset_static_par_go.out):
            add1.right <= B_i_j_0.out
        when tdcc_done.out:
            done <= UInt(1)
        when or(or(or(or(beg_spl_let3_go.out, beg_spl_let4_go.out), beg_spl_let7_go.out), and(eq(fsm.out, UInt(4)), early_reset_static_par_go.out)), and(eq(fsm.out, UInt(4)), early_reset_static_seq0_go.out)):
            B_int_addr1 <= j0.out
        when or(and(eq(fsm.out, UInt(4)), early_reset_static_par_go.out), and(eq(fsm.out, UInt(4)), early_reset_static_seq0_go.out)):
            B_int_write_en <= UInt(1)
        when beg_spl_let8_go.out:
            alpha_int_read_en <= UInt(1)
        when beg_spl_let5_go.out:
            A_int_addr0 <= k_0.out
        when beg_spl_let5_go.out:
            A_int_addr1 <= i0.out
        when beg_spl_let8_go.out:
            alpha_int_addr0 <= const7.out
        when or(or(beg_spl_let3_go.out, beg_spl_let4_go.out), beg_spl_let7_go.out):
            B_int_read_en <= UInt(1)
        when or(or(or(beg_spl_let3_go.out, beg_spl_let7_go.out), and(eq(fsm.out, UInt(4)), early_reset_static_par_go.out)), and(eq(fsm.out, UInt(4)), early_reset_static_seq0_go.out)):
            B_int_addr0 <= i0.out
        when beg_spl_let4_go.out:
            B_int_addr0 <= k_0.out
        when beg_spl_let5_go.out:
            A_int_read_en <= UInt(1)
        when and(eq(fsm.out, UInt(4)), early_reset_static_par_go.out):
            B_int_write_data <= add1.out
        when and(eq(fsm.out, UInt(4)), early_reset_static_seq0_go.out):
            B_int_write_data <= A_int_read0_0.out
        fsm.write_en is invalid ; default initialization
        fsm.write_en <= UInt(0)
        when or(or(or(or(early_reset_cond00_go.out, early_reset_cond10_go.out), early_reset_cond20_go.out), early_reset_static_par_go.out), early_reset_static_seq0_go.out):
            fsm.write_en <= UInt(1)
        fsm.clk <= clk
        fsm.reset <= reset
        fsm.in is invalid ; default initialization
        fsm.in <= UInt(0)
        when and(neq(fsm.out, UInt(0)), early_reset_cond20_go.out):
            fsm.in <= adder1.out
        when and(neq(fsm.out, UInt(0)), early_reset_cond00_go.out):
            fsm.in <= adder.out
        when and(neq(fsm.out, UInt(4)), early_reset_static_par_go.out):
            fsm.in <= adder2.out
        when and(neq(fsm.out, UInt(5)), early_reset_static_seq0_go.out):
            fsm.in <= adder3.out
        when and(neq(fsm.out, UInt(0)), early_reset_cond10_go.out):
            fsm.in <= adder0.out
        when or(or(or(or(and(eq(fsm.out, UInt(0)), early_reset_cond00_go.out), and(eq(fsm.out, UInt(0)), early_reset_cond10_go.out)), and(eq(fsm.out, UInt(0)), early_reset_cond20_go.out)), and(eq(fsm.out, UInt(4)), early_reset_static_par_go.out)), and(eq(fsm.out, UInt(5)), early_reset_static_seq0_go.out)):
            fsm.in <= UInt(0)
        adder.left is invalid ; default initialization
        adder.left <= UInt(0)
        when early_reset_cond00_go.out:
            adder.left <= fsm.out
        adder.right is invalid ; default initialization
        adder.right <= UInt(0)
        when early_reset_cond00_go.out:
            adder.right <= UInt(1)
        beg_spl_let4_go.in is invalid ; default initialization
        beg_spl_let4_go.in <= UInt(0)
        when and(and(not(beg_spl_let4_done.out), eq(fsm0.out, UInt(8))), tdcc_go.out):
            beg_spl_let4_go.in <= UInt(1)
        invoke4_go.in is invalid ; default initialization
        invoke4_go.in <= UInt(0)
        when and(and(not(invoke4_done.out), eq(fsm0.out, UInt(9))), tdcc_go.out):
            invoke4_go.in <= UInt(1)
        invoke14_done.in <= i0.done
        add0.left is invalid ; default initialization
        add0.left <= UInt(0)
        when or(invoke2_go.out, invoke14_go.out):
            add0.left <= i0.out
        when and(eq(fsm.out, UInt(0)), early_reset_static_par_go.out):
            add0.left <= k_0.out
        when and(eq(fsm.out, UInt(5)), early_reset_static_seq0_go.out):
            add0.left <= j0.out
        add0.right is invalid ; default initialization
        add0.right <= UInt(0)
        when or(or(or(invoke2_go.out, invoke14_go.out), and(eq(fsm.out, UInt(0)), early_reset_static_par_go.out)), and(eq(fsm.out, UInt(5)), early_reset_static_seq0_go.out)):
            add0.right <= const4.out
        beg_spl_let8_done.in <= alpha_int_read_done
        invoke2_go.in is invalid ; default initialization
        invoke2_go.in <= UInt(0)
        when and(and(not(invoke2_done.out), eq(fsm0.out, UInt(4))), tdcc_go.out):
            invoke2_go.in <= UInt(1)
        A_int_read0_0.write_en is invalid ; default initialization
        A_int_read0_0.write_en <= UInt(0)
        when or(or(or(invoke5_go.out, invoke9_go.out), and(eq(fsm.out, UInt(3)), early_reset_static_par_go.out)), and(eq(fsm.out, UInt(3)), early_reset_static_seq0_go.out)):
            A_int_read0_0.write_en <= UInt(1)
        A_int_read0_0.clk <= clk
        A_int_read0_0.reset <= reset
        A_int_read0_0.in is invalid ; default initialization
        A_int_read0_0.in <= UInt(0)
        when invoke5_go.out:
            A_int_read0_0.in <= A_int_read_data
        when invoke9_go.out:
            A_int_read0_0.in <= B_int_read_data
        when or(and(eq(fsm.out, UInt(3)), early_reset_static_par_go.out), and(eq(fsm.out, UInt(3)), early_reset_static_seq0_go.out)):
            A_int_read0_0.in <= mult_pipe0.out
        comb_reg.write_en is invalid ; default initialization
        comb_reg.write_en <= UInt(0)
        when early_reset_cond00_go.out:
            comb_reg.write_en <= UInt(1)
        comb_reg.clk <= clk
        comb_reg.reset <= reset
        comb_reg.in is invalid ; default initialization
        comb_reg.in <= UInt(0)
        when early_reset_cond00_go.out:
            comb_reg.in <= le0.out
        beg_spl_let3_done.in <= B_int_read_done
        beg_spl_let4_done.in <= B_int_read_done
        early_reset_cond00_done.in <= ud.out
        early_reset_cond10_done.in <= ud0.out
        early_reset_static_seq0_go.in is invalid ; default initialization
        early_reset_static_seq0_go.in <= UInt(0)
        when wrapper_early_reset_static_seq0_go.out:
            early_reset_static_seq0_go.in <= UInt(1)
        comb_reg1.write_en is invalid ; default initialization
        comb_reg1.write_en <= UInt(0)
        when early_reset_cond20_go.out:
            comb_reg1.write_en <= UInt(1)
        comb_reg1.clk <= clk
        comb_reg1.reset <= reset
        comb_reg1.in is invalid ; default initialization
        comb_reg1.in <= UInt(0)
        when early_reset_cond20_go.out:
            comb_reg1.in <= lt0.out
        invoke5_go.in is invalid ; default initialization
        invoke5_go.in <= UInt(0)
        when and(and(not(invoke5_done.out), eq(fsm0.out, UInt(11))), tdcc_go.out):
            invoke5_go.in <= UInt(1)
        invoke5_done.in <= A_int_read0_0.done
        early_reset_cond20_go.in is invalid ; default initialization
        early_reset_cond20_go.in <= UInt(0)
        when wrapper_early_reset_cond20_go.out:
            early_reset_cond20_go.in <= UInt(1)
        wrapper_early_reset_cond10_go.in is invalid ; default initialization
        wrapper_early_reset_cond10_go.in <= UInt(0)
        when or(and(and(not(wrapper_early_reset_cond10_done.out), eq(fsm0.out, UInt(3))), tdcc_go.out), and(and(not(wrapper_early_reset_cond10_done.out), eq(fsm0.out, UInt(19))), tdcc_go.out)):
            wrapper_early_reset_cond10_go.in <= UInt(1)
        wrapper_early_reset_static_par_go.in is invalid ; default initialization
        wrapper_early_reset_static_par_go.in <= UInt(0)
        when and(and(not(wrapper_early_reset_static_par_done.out), eq(fsm0.out, UInt(12))), tdcc_go.out):
            wrapper_early_reset_static_par_go.in <= UInt(1)
        wrapper_early_reset_static_seq0_go.in is invalid ; default initialization
        wrapper_early_reset_static_seq0_go.in <= UInt(0)
        when and(and(not(wrapper_early_reset_static_seq0_done.out), eq(fsm0.out, UInt(18))), tdcc_go.out):
            wrapper_early_reset_static_seq0_go.in <= UInt(1)
        k_0.write_en is invalid ; default initialization
        k_0.write_en <= UInt(0)
        when or(invoke2_go.out, and(eq(fsm.out, UInt(0)), early_reset_static_par_go.out)):
            k_0.write_en <= UInt(1)
        k_0.clk <= clk
        k_0.reset <= reset
        k_0.in is invalid ; default initialization
        k_0.in <= UInt(0)
        when or(invoke2_go.out, and(eq(fsm.out, UInt(0)), early_reset_static_par_go.out)):
            k_0.in <= add0.out
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
        invoke0_go.in is invalid ; default initialization
        invoke0_go.in <= UInt(0)
        when and(and(not(invoke0_done.out), eq(fsm0.out, UInt(0))), tdcc_go.out):
            invoke0_go.in <= UInt(1)
        wrapper_early_reset_cond20_done.in is invalid ; default initialization
        wrapper_early_reset_cond20_done.in <= UInt(0)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            wrapper_early_reset_cond20_done.in <= UInt(1)
        wrapper_early_reset_static_par_done.in is invalid ; default initialization
        wrapper_early_reset_static_par_done.in <= UInt(0)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            wrapper_early_reset_static_par_done.in <= UInt(1)
        tdcc_go.in <= go
        adder2.left is invalid ; default initialization
        adder2.left <= UInt(0)
        when early_reset_static_par_go.out:
            adder2.left <= fsm.out
        adder2.right is invalid ; default initialization
        adder2.right <= UInt(0)
        when early_reset_static_par_go.out:
            adder2.right <= UInt(1)
        fsm0.write_en is invalid ; default initialization
        fsm0.write_en <= UInt(0)
        when or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(or(eq(fsm0.out, UInt(22)), and(and(eq(fsm0.out, UInt(0)), invoke0_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(1)), and(wrapper_early_reset_cond00_done.out, comb_reg.out)), tdcc_go.out)), and(and(eq(fsm0.out, UInt(21)), and(wrapper_early_reset_cond00_done.out, comb_reg.out)), tdcc_go.out)), and(and(eq(fsm0.out, UInt(2)), invoke1_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(3)), and(wrapper_early_reset_cond10_done.out, comb_reg0.out)), tdcc_go.out)), and(and(eq(fsm0.out, UInt(19)), and(wrapper_early_reset_cond10_done.out, comb_reg0.out)), tdcc_go.out)), and(and(eq(fsm0.out, UInt(4)), invoke2_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(5)), and(wrapper_early_reset_cond20_done.out, comb_reg1.out)), tdcc_go.out)), and(and(eq(fsm0.out, UInt(13)), and(wrapper_early_reset_cond20_done.out, comb_reg1.out)), tdcc_go.out)), and(and(eq(fsm0.out, UInt(6)), beg_spl_let3_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(7)), invoke3_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(8)), beg_spl_let4_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(9)), invoke4_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(10)), beg_spl_let5_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(11)), invoke5_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(12)), wrapper_early_reset_static_par_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(5)), and(wrapper_early_reset_cond20_done.out, not(comb_reg1.out))), tdcc_go.out)), and(and(eq(fsm0.out, UInt(13)), and(wrapper_early_reset_cond20_done.out, not(comb_reg1.out))), tdcc_go.out)), and(and(eq(fsm0.out, UInt(14)), beg_spl_let7_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(15)), invoke9_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(16)), beg_spl_let8_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(17)), invoke10_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(18)), wrapper_early_reset_static_seq0_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(3)), and(wrapper_early_reset_cond10_done.out, not(comb_reg0.out))), tdcc_go.out)), and(and(eq(fsm0.out, UInt(19)), and(wrapper_early_reset_cond10_done.out, not(comb_reg0.out))), tdcc_go.out)), and(and(eq(fsm0.out, UInt(20)), invoke14_done.out), tdcc_go.out)), and(and(eq(fsm0.out, UInt(1)), and(wrapper_early_reset_cond00_done.out, not(comb_reg.out))), tdcc_go.out)), and(and(eq(fsm0.out, UInt(21)), and(wrapper_early_reset_cond00_done.out, not(comb_reg.out))), tdcc_go.out)):
            fsm0.write_en <= UInt(1)
        fsm0.clk <= clk
        fsm0.reset <= reset
        fsm0.in is invalid ; default initialization
        fsm0.in <= UInt(0)
        when and(and(eq(fsm0.out, UInt(0)), invoke0_done.out), tdcc_go.out):
            fsm0.in <= UInt(1)
        when and(and(eq(fsm0.out, UInt(14)), beg_spl_let7_done.out), tdcc_go.out):
            fsm0.in <= UInt(15)
        when and(and(eq(fsm0.out, UInt(17)), invoke10_done.out), tdcc_go.out):
            fsm0.in <= UInt(18)
        when and(and(eq(fsm0.out, UInt(15)), invoke9_done.out), tdcc_go.out):
            fsm0.in <= UInt(16)
        when eq(fsm0.out, UInt(22)):
            fsm0.in <= UInt(0)
        when and(and(eq(fsm0.out, UInt(2)), invoke1_done.out), tdcc_go.out):
            fsm0.in <= UInt(3)
        when and(and(eq(fsm0.out, UInt(12)), wrapper_early_reset_static_par_done.out), tdcc_go.out):
            fsm0.in <= UInt(13)
        when or(and(and(eq(fsm0.out, UInt(5)), and(wrapper_early_reset_cond20_done.out, not(comb_reg1.out))), tdcc_go.out), and(and(eq(fsm0.out, UInt(13)), and(wrapper_early_reset_cond20_done.out, not(comb_reg1.out))), tdcc_go.out)):
            fsm0.in <= UInt(14)
        when and(and(eq(fsm0.out, UInt(4)), invoke2_done.out), tdcc_go.out):
            fsm0.in <= UInt(5)
        when and(and(eq(fsm0.out, UInt(11)), invoke5_done.out), tdcc_go.out):
            fsm0.in <= UInt(12)
        when or(and(and(eq(fsm0.out, UInt(1)), and(wrapper_early_reset_cond00_done.out, comb_reg.out)), tdcc_go.out), and(and(eq(fsm0.out, UInt(21)), and(wrapper_early_reset_cond00_done.out, comb_reg.out)), tdcc_go.out)):
            fsm0.in <= UInt(2)
        when and(and(eq(fsm0.out, UInt(7)), invoke3_done.out), tdcc_go.out):
            fsm0.in <= UInt(8)
        when and(and(eq(fsm0.out, UInt(9)), invoke4_done.out), tdcc_go.out):
            fsm0.in <= UInt(10)
        when and(and(eq(fsm0.out, UInt(6)), beg_spl_let3_done.out), tdcc_go.out):
            fsm0.in <= UInt(7)
        when and(and(eq(fsm0.out, UInt(10)), beg_spl_let5_done.out), tdcc_go.out):
            fsm0.in <= UInt(11)
        when and(and(eq(fsm0.out, UInt(20)), invoke14_done.out), tdcc_go.out):
            fsm0.in <= UInt(21)
        when and(and(eq(fsm0.out, UInt(18)), wrapper_early_reset_static_seq0_done.out), tdcc_go.out):
            fsm0.in <= UInt(19)
        when or(and(and(eq(fsm0.out, UInt(1)), and(wrapper_early_reset_cond00_done.out, not(comb_reg.out))), tdcc_go.out), and(and(eq(fsm0.out, UInt(21)), and(wrapper_early_reset_cond00_done.out, not(comb_reg.out))), tdcc_go.out)):
            fsm0.in <= UInt(22)
        when or(and(and(eq(fsm0.out, UInt(3)), and(wrapper_early_reset_cond10_done.out, comb_reg0.out)), tdcc_go.out), and(and(eq(fsm0.out, UInt(19)), and(wrapper_early_reset_cond10_done.out, comb_reg0.out)), tdcc_go.out)):
            fsm0.in <= UInt(4)
        when or(and(and(eq(fsm0.out, UInt(5)), and(wrapper_early_reset_cond20_done.out, comb_reg1.out)), tdcc_go.out), and(and(eq(fsm0.out, UInt(13)), and(wrapper_early_reset_cond20_done.out, comb_reg1.out)), tdcc_go.out)):
            fsm0.in <= UInt(6)
        when or(and(and(eq(fsm0.out, UInt(3)), and(wrapper_early_reset_cond10_done.out, not(comb_reg0.out))), tdcc_go.out), and(and(eq(fsm0.out, UInt(19)), and(wrapper_early_reset_cond10_done.out, not(comb_reg0.out))), tdcc_go.out)):
            fsm0.in <= UInt(20)
        when and(and(eq(fsm0.out, UInt(16)), beg_spl_let8_done.out), tdcc_go.out):
            fsm0.in <= UInt(17)
        when and(and(eq(fsm0.out, UInt(8)), beg_spl_let4_done.out), tdcc_go.out):
            fsm0.in <= UInt(9)
        invoke3_done.in <= B_i_j_0.done
        invoke10_done.in <= B_i_j_0.done
        B_k_j_0.write_en is invalid ; default initialization
        B_k_j_0.write_en <= UInt(0)
        when invoke4_go.out:
            B_k_j_0.write_en <= UInt(1)
        B_k_j_0.clk <= clk
        B_k_j_0.reset <= reset
        B_k_j_0.in is invalid ; default initialization
        B_k_j_0.in <= UInt(0)
        when invoke4_go.out:
            B_k_j_0.in <= B_int_read_data
        adder3.left is invalid ; default initialization
        adder3.left <= UInt(0)
        when early_reset_static_seq0_go.out:
            adder3.left <= fsm.out
        adder3.right is invalid ; default initialization
        adder3.right <= UInt(0)
        when early_reset_static_seq0_go.out:
            adder3.right <= UInt(1)
        beg_spl_let3_go.in is invalid ; default initialization
        beg_spl_let3_go.in <= UInt(0)
        when and(and(not(beg_spl_let3_done.out), eq(fsm0.out, UInt(6))), tdcc_go.out):
            beg_spl_let3_go.in <= UInt(1)
        mult_pipe0.clk <= clk
        mult_pipe0.left is invalid ; default initialization
        mult_pipe0.left <= UInt(0)
        when and(lt(fsm.out, UInt(3)), early_reset_static_par_go.out):
            mult_pipe0.left <= A_int_read0_0.out
        when and(lt(fsm.out, UInt(3)), early_reset_static_seq0_go.out):
            mult_pipe0.left <= B_i_j_0.out
        mult_pipe0.go is invalid ; default initialization
        mult_pipe0.go <= UInt(0)
        when or(and(lt(fsm.out, UInt(3)), early_reset_static_par_go.out), and(lt(fsm.out, UInt(3)), early_reset_static_seq0_go.out)):
            mult_pipe0.go <= UInt(1)
        mult_pipe0.reset <= reset
        mult_pipe0.right is invalid ; default initialization
        mult_pipe0.right <= UInt(0)
        when and(lt(fsm.out, UInt(3)), early_reset_static_seq0_go.out):
            mult_pipe0.right <= A_int_read0_0.out
        when and(lt(fsm.out, UInt(3)), early_reset_static_par_go.out):
            mult_pipe0.right <= B_k_j_0.out
        adder0.left is invalid ; default initialization
        adder0.left <= UInt(0)
        when early_reset_cond10_go.out:
            adder0.left <= fsm.out
        adder0.right is invalid ; default initialization
        adder0.right <= UInt(0)
        when early_reset_cond10_go.out:
            adder0.right <= UInt(1)
        invoke0_done.in <= i0.done
        invoke1_go.in is invalid ; default initialization
        invoke1_go.in <= UInt(0)
        when and(and(not(invoke1_done.out), eq(fsm0.out, UInt(2))), tdcc_go.out):
            invoke1_go.in <= UInt(1)
        early_reset_static_par_done.in <= ud2.out
        wrapper_early_reset_cond10_done.in is invalid ; default initialization
        wrapper_early_reset_cond10_done.in <= UInt(0)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            wrapper_early_reset_cond10_done.in <= UInt(1)
        le0.left is invalid ; default initialization
        le0.left <= UInt(0)
        when early_reset_cond00_go.out:
            le0.left <= i0.out
        when early_reset_cond10_go.out:
            le0.left <= j0.out
        le0.right is invalid ; default initialization
        le0.right <= UInt(0)
        when early_reset_cond00_go.out:
            le0.right <= const1.out
        when early_reset_cond10_go.out:
            le0.right <= const3.out
        signal_reg.write_en is invalid ; default initialization
        signal_reg.write_en <= UInt(0)
        when or(or(or(or(or(and(eq(fsm.out, UInt(0)), signal_reg.out), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_cond00_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_cond10_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_cond20_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_static_par_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_static_seq0_go.out)):
            signal_reg.write_en <= UInt(1)
        signal_reg.clk <= clk
        signal_reg.reset <= reset
        signal_reg.in is invalid ; default initialization
        signal_reg.in <= UInt(0)
        when or(or(or(or(and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_cond00_go.out), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_cond10_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_cond20_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_static_par_go.out)), and(and(eq(fsm.out, UInt(0)), not(signal_reg.out)), wrapper_early_reset_static_seq0_go.out)):
            signal_reg.in <= UInt(1)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            signal_reg.in <= UInt(0)
        beg_spl_let5_go.in is invalid ; default initialization
        beg_spl_let5_go.in <= UInt(0)
        when and(and(not(beg_spl_let5_done.out), eq(fsm0.out, UInt(10))), tdcc_go.out):
            beg_spl_let5_go.in <= UInt(1)
        beg_spl_let8_go.in is invalid ; default initialization
        beg_spl_let8_go.in <= UInt(0)
        when and(and(not(beg_spl_let8_done.out), eq(fsm0.out, UInt(16))), tdcc_go.out):
            beg_spl_let8_go.in <= UInt(1)
        invoke2_done.in <= k_0.done
        B_i_j_0.write_en is invalid ; default initialization
        B_i_j_0.write_en <= UInt(0)
        when or(invoke3_go.out, invoke10_go.out):
            B_i_j_0.write_en <= UInt(1)
        B_i_j_0.clk <= clk
        B_i_j_0.reset <= reset
        B_i_j_0.in is invalid ; default initialization
        B_i_j_0.in <= UInt(0)
        when invoke10_go.out:
            B_i_j_0.in <= alpha_int_read_data
        when invoke3_go.out:
            B_i_j_0.in <= B_int_read_data
        wrapper_early_reset_cond00_go.in is invalid ; default initialization
        wrapper_early_reset_cond00_go.in <= UInt(0)
        when or(and(and(not(wrapper_early_reset_cond00_done.out), eq(fsm0.out, UInt(1))), tdcc_go.out), and(and(not(wrapper_early_reset_cond00_done.out), eq(fsm0.out, UInt(21))), tdcc_go.out)):
            wrapper_early_reset_cond00_go.in <= UInt(1)
        wrapper_early_reset_cond00_done.in is invalid ; default initialization
        wrapper_early_reset_cond00_done.in <= UInt(0)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            wrapper_early_reset_cond00_done.in <= UInt(1)
        wrapper_early_reset_cond20_go.in is invalid ; default initialization
        wrapper_early_reset_cond20_go.in <= UInt(0)
        when or(and(and(not(wrapper_early_reset_cond20_done.out), eq(fsm0.out, UInt(5))), tdcc_go.out), and(and(not(wrapper_early_reset_cond20_done.out), eq(fsm0.out, UInt(13))), tdcc_go.out)):
            wrapper_early_reset_cond20_go.in <= UInt(1)
        j0.write_en is invalid ; default initialization
        j0.write_en <= UInt(0)
        when or(invoke1_go.out, and(eq(fsm.out, UInt(5)), early_reset_static_seq0_go.out)):
            j0.write_en <= UInt(1)
        j0.clk <= clk
        j0.reset <= reset
        j0.in is invalid ; default initialization
        j0.in <= UInt(0)
        when and(eq(fsm.out, UInt(5)), early_reset_static_seq0_go.out):
            j0.in <= add0.out
        when invoke1_go.out:
            j0.in <= const0.out
        beg_spl_let5_done.in <= A_int_read_done
        early_reset_cond20_done.in <= ud1.out
        tdcc_done.in is invalid ; default initialization
        tdcc_done.in <= UInt(0)
        when eq(fsm0.out, UInt(22)):
            tdcc_done.in <= UInt(1)
        beg_spl_let7_done.in <= B_int_read_done
        invoke3_go.in is invalid ; default initialization
        invoke3_go.in <= UInt(0)
        when and(and(not(invoke3_done.out), eq(fsm0.out, UInt(7))), tdcc_go.out):
            invoke3_go.in <= UInt(1)
        invoke4_done.in <= B_k_j_0.done
        early_reset_static_par_go.in is invalid ; default initialization
        early_reset_static_par_go.in <= UInt(0)
        when wrapper_early_reset_static_par_go.out:
            early_reset_static_par_go.in <= UInt(1)
        invoke1_done.in <= j0.done
        early_reset_static_seq0_done.in <= ud3.out
        wrapper_early_reset_static_seq0_done.in is invalid ; default initialization
        wrapper_early_reset_static_seq0_done.in <= UInt(0)
        when and(eq(fsm.out, UInt(0)), signal_reg.out):
            wrapper_early_reset_static_seq0_done.in <= UInt(1)
        lt0.left is invalid ; default initialization
        lt0.left <= UInt(0)
        when early_reset_cond20_go.out:
            lt0.left <= k_0.out
        lt0.right is invalid ; default initialization
        lt0.right <= UInt(0)
        when early_reset_cond20_go.out:
            lt0.right <= const5.out
        beg_spl_let7_go.in is invalid ; default initialization
        beg_spl_let7_go.in <= UInt(0)
        when and(and(not(beg_spl_let7_done.out), eq(fsm0.out, UInt(14))), tdcc_go.out):
            beg_spl_let7_go.in <= UInt(1)
        invoke10_go.in is invalid ; default initialization
        invoke10_go.in <= UInt(0)
        when and(and(not(invoke10_done.out), eq(fsm0.out, UInt(17))), tdcc_go.out):
            invoke10_go.in <= UInt(1)
        invoke14_go.in is invalid ; default initialization
        invoke14_go.in <= UInt(0)
        when and(and(not(invoke14_done.out), eq(fsm0.out, UInt(20))), tdcc_go.out):
            invoke14_go.in <= UInt(1)
        ; COMPONENT END: main


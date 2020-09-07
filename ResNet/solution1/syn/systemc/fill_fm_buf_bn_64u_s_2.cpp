#include "fill_fm_buf_bn_64u_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void fill_fm_buf_bn_64u_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter2 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_1109.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(icmp_ln45_reg_8731.read(), ap_const_lv1_0) && 
             esl_seteq<1,2,2>(trunc_ln1265_1_reg_8670.read(), ap_const_lv2_3))) {
            ap_phi_reg_pp0_iter2_phi_ln1265_reg_1615 = fm_buf_V_48_q0.read();
        } else if ((esl_seteq<1,1,1>(icmp_ln45_reg_8731.read(), ap_const_lv1_0) && 
                    esl_seteq<1,2,2>(trunc_ln1265_1_reg_8670.read(), ap_const_lv2_2))) {
            ap_phi_reg_pp0_iter2_phi_ln1265_reg_1615 = fm_buf_V_32_q0.read();
        } else if ((esl_seteq<1,1,1>(icmp_ln45_reg_8731.read(), ap_const_lv1_0) && 
                    esl_seteq<1,2,2>(trunc_ln1265_1_reg_8670.read(), ap_const_lv2_1))) {
            ap_phi_reg_pp0_iter2_phi_ln1265_reg_1615 = fm_buf_V_16_q0.read();
        } else if ((esl_seteq<1,1,1>(icmp_ln45_reg_8731.read(), ap_const_lv1_0) && 
                    esl_seteq<1,2,2>(trunc_ln1265_1_reg_8670.read(), ap_const_lv2_0))) {
            ap_phi_reg_pp0_iter2_phi_ln1265_reg_1615 = fm_buf_V_0_q0.read();
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter2_phi_ln1265_reg_1615 = ap_phi_reg_pp0_iter1_phi_ln1265_reg_1615.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln45_fu_1662_p2.read(), ap_const_lv1_0))) {
        bcol_0_reg_1604 = bcol_fu_1826_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        bcol_0_reg_1604 = ap_const_lv4_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln45_reg_8731.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        brow_0_reg_1593 = select_ln52_1_reg_8740.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        brow_0_reg_1593 = ap_const_lv4_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln45_fu_1662_p2.read(), ap_const_lv1_0))) {
        indvar_flatten_reg_1582 = add_ln45_fu_1668_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_1582 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        ap_phi_reg_pp0_iter1_phi_ln1265_reg_1615 = ap_phi_reg_pp0_iter0_phi_ln1265_reg_1615.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln45_fu_1662_p2.read(), ap_const_lv1_0))) {
        fm_buf_V_0_addr_reg_8745 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_10_addr_reg_8757 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_11_addr_reg_8763 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_12_addr_reg_8769 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_13_addr_reg_8775 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_14_addr_reg_8781 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_15_addr_reg_8787 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_16_addr_reg_8793 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_17_addr_reg_8799 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_18_addr_reg_8805 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_19_addr_reg_8811 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_1_addr_reg_8751 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_20_addr_reg_8823 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_21_addr_reg_8829 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_22_addr_reg_8835 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_23_addr_reg_8841 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_24_addr_reg_8847 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_25_addr_reg_8853 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_26_addr_reg_8859 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_27_addr_reg_8865 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_28_addr_reg_8871 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_29_addr_reg_8877 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_2_addr_reg_8817 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_30_addr_reg_8889 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_31_addr_reg_8895 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_32_addr_reg_8901 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_33_addr_reg_8907 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_34_addr_reg_8913 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_35_addr_reg_8919 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_36_addr_reg_8925 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_37_addr_reg_8931 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_38_addr_reg_8937 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_39_addr_reg_8943 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_3_addr_reg_8883 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_40_addr_reg_8955 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_41_addr_reg_8961 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_42_addr_reg_8967 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_43_addr_reg_8973 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_44_addr_reg_8979 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_45_addr_reg_8985 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_46_addr_reg_8991 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_47_addr_reg_8997 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_48_addr_reg_9003 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_49_addr_reg_9009 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_4_addr_reg_8949 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_50_addr_reg_9021 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_51_addr_reg_9027 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_52_addr_reg_9033 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_53_addr_reg_9039 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_54_addr_reg_9045 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_55_addr_reg_9051 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_56_addr_reg_9057 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_57_addr_reg_9063 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_58_addr_reg_9069 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_59_addr_reg_9075 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_5_addr_reg_9015 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_60_addr_reg_9087 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_61_addr_reg_9093 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_62_addr_reg_9099 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_63_addr_reg_9105 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_6_addr_reg_9081 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_7_addr_reg_9111 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_8_addr_reg_9117 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
        fm_buf_V_9_addr_reg_9123 =  (sc_lv<11>) (zext_ln1265_3_fu_1742_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        fm_buf_V_0_addr_reg_8745_pp0_iter1_reg = fm_buf_V_0_addr_reg_8745.read();
        fm_buf_V_10_addr_reg_8757_pp0_iter1_reg = fm_buf_V_10_addr_reg_8757.read();
        fm_buf_V_11_addr_reg_8763_pp0_iter1_reg = fm_buf_V_11_addr_reg_8763.read();
        fm_buf_V_12_addr_reg_8769_pp0_iter1_reg = fm_buf_V_12_addr_reg_8769.read();
        fm_buf_V_13_addr_reg_8775_pp0_iter1_reg = fm_buf_V_13_addr_reg_8775.read();
        fm_buf_V_14_addr_reg_8781_pp0_iter1_reg = fm_buf_V_14_addr_reg_8781.read();
        fm_buf_V_15_addr_reg_8787_pp0_iter1_reg = fm_buf_V_15_addr_reg_8787.read();
        fm_buf_V_16_addr_reg_8793_pp0_iter1_reg = fm_buf_V_16_addr_reg_8793.read();
        fm_buf_V_17_addr_reg_8799_pp0_iter1_reg = fm_buf_V_17_addr_reg_8799.read();
        fm_buf_V_18_addr_reg_8805_pp0_iter1_reg = fm_buf_V_18_addr_reg_8805.read();
        fm_buf_V_19_addr_reg_8811_pp0_iter1_reg = fm_buf_V_19_addr_reg_8811.read();
        fm_buf_V_1_addr_reg_8751_pp0_iter1_reg = fm_buf_V_1_addr_reg_8751.read();
        fm_buf_V_20_addr_reg_8823_pp0_iter1_reg = fm_buf_V_20_addr_reg_8823.read();
        fm_buf_V_21_addr_reg_8829_pp0_iter1_reg = fm_buf_V_21_addr_reg_8829.read();
        fm_buf_V_22_addr_reg_8835_pp0_iter1_reg = fm_buf_V_22_addr_reg_8835.read();
        fm_buf_V_23_addr_reg_8841_pp0_iter1_reg = fm_buf_V_23_addr_reg_8841.read();
        fm_buf_V_24_addr_reg_8847_pp0_iter1_reg = fm_buf_V_24_addr_reg_8847.read();
        fm_buf_V_25_addr_reg_8853_pp0_iter1_reg = fm_buf_V_25_addr_reg_8853.read();
        fm_buf_V_26_addr_reg_8859_pp0_iter1_reg = fm_buf_V_26_addr_reg_8859.read();
        fm_buf_V_27_addr_reg_8865_pp0_iter1_reg = fm_buf_V_27_addr_reg_8865.read();
        fm_buf_V_28_addr_reg_8871_pp0_iter1_reg = fm_buf_V_28_addr_reg_8871.read();
        fm_buf_V_29_addr_reg_8877_pp0_iter1_reg = fm_buf_V_29_addr_reg_8877.read();
        fm_buf_V_2_addr_reg_8817_pp0_iter1_reg = fm_buf_V_2_addr_reg_8817.read();
        fm_buf_V_30_addr_reg_8889_pp0_iter1_reg = fm_buf_V_30_addr_reg_8889.read();
        fm_buf_V_31_addr_reg_8895_pp0_iter1_reg = fm_buf_V_31_addr_reg_8895.read();
        fm_buf_V_32_addr_reg_8901_pp0_iter1_reg = fm_buf_V_32_addr_reg_8901.read();
        fm_buf_V_33_addr_reg_8907_pp0_iter1_reg = fm_buf_V_33_addr_reg_8907.read();
        fm_buf_V_34_addr_reg_8913_pp0_iter1_reg = fm_buf_V_34_addr_reg_8913.read();
        fm_buf_V_35_addr_reg_8919_pp0_iter1_reg = fm_buf_V_35_addr_reg_8919.read();
        fm_buf_V_36_addr_reg_8925_pp0_iter1_reg = fm_buf_V_36_addr_reg_8925.read();
        fm_buf_V_37_addr_reg_8931_pp0_iter1_reg = fm_buf_V_37_addr_reg_8931.read();
        fm_buf_V_38_addr_reg_8937_pp0_iter1_reg = fm_buf_V_38_addr_reg_8937.read();
        fm_buf_V_39_addr_reg_8943_pp0_iter1_reg = fm_buf_V_39_addr_reg_8943.read();
        fm_buf_V_3_addr_reg_8883_pp0_iter1_reg = fm_buf_V_3_addr_reg_8883.read();
        fm_buf_V_40_addr_reg_8955_pp0_iter1_reg = fm_buf_V_40_addr_reg_8955.read();
        fm_buf_V_41_addr_reg_8961_pp0_iter1_reg = fm_buf_V_41_addr_reg_8961.read();
        fm_buf_V_42_addr_reg_8967_pp0_iter1_reg = fm_buf_V_42_addr_reg_8967.read();
        fm_buf_V_43_addr_reg_8973_pp0_iter1_reg = fm_buf_V_43_addr_reg_8973.read();
        fm_buf_V_44_addr_reg_8979_pp0_iter1_reg = fm_buf_V_44_addr_reg_8979.read();
        fm_buf_V_45_addr_reg_8985_pp0_iter1_reg = fm_buf_V_45_addr_reg_8985.read();
        fm_buf_V_46_addr_reg_8991_pp0_iter1_reg = fm_buf_V_46_addr_reg_8991.read();
        fm_buf_V_47_addr_reg_8997_pp0_iter1_reg = fm_buf_V_47_addr_reg_8997.read();
        fm_buf_V_48_addr_reg_9003_pp0_iter1_reg = fm_buf_V_48_addr_reg_9003.read();
        fm_buf_V_49_addr_reg_9009_pp0_iter1_reg = fm_buf_V_49_addr_reg_9009.read();
        fm_buf_V_4_addr_reg_8949_pp0_iter1_reg = fm_buf_V_4_addr_reg_8949.read();
        fm_buf_V_50_addr_reg_9021_pp0_iter1_reg = fm_buf_V_50_addr_reg_9021.read();
        fm_buf_V_51_addr_reg_9027_pp0_iter1_reg = fm_buf_V_51_addr_reg_9027.read();
        fm_buf_V_52_addr_reg_9033_pp0_iter1_reg = fm_buf_V_52_addr_reg_9033.read();
        fm_buf_V_53_addr_reg_9039_pp0_iter1_reg = fm_buf_V_53_addr_reg_9039.read();
        fm_buf_V_54_addr_reg_9045_pp0_iter1_reg = fm_buf_V_54_addr_reg_9045.read();
        fm_buf_V_55_addr_reg_9051_pp0_iter1_reg = fm_buf_V_55_addr_reg_9051.read();
        fm_buf_V_56_addr_reg_9057_pp0_iter1_reg = fm_buf_V_56_addr_reg_9057.read();
        fm_buf_V_57_addr_reg_9063_pp0_iter1_reg = fm_buf_V_57_addr_reg_9063.read();
        fm_buf_V_58_addr_reg_9069_pp0_iter1_reg = fm_buf_V_58_addr_reg_9069.read();
        fm_buf_V_59_addr_reg_9075_pp0_iter1_reg = fm_buf_V_59_addr_reg_9075.read();
        fm_buf_V_5_addr_reg_9015_pp0_iter1_reg = fm_buf_V_5_addr_reg_9015.read();
        fm_buf_V_60_addr_reg_9087_pp0_iter1_reg = fm_buf_V_60_addr_reg_9087.read();
        fm_buf_V_61_addr_reg_9093_pp0_iter1_reg = fm_buf_V_61_addr_reg_9093.read();
        fm_buf_V_62_addr_reg_9099_pp0_iter1_reg = fm_buf_V_62_addr_reg_9099.read();
        fm_buf_V_63_addr_reg_9105_pp0_iter1_reg = fm_buf_V_63_addr_reg_9105.read();
        fm_buf_V_6_addr_reg_9081_pp0_iter1_reg = fm_buf_V_6_addr_reg_9081.read();
        fm_buf_V_7_addr_reg_9111_pp0_iter1_reg = fm_buf_V_7_addr_reg_9111.read();
        fm_buf_V_8_addr_reg_9117_pp0_iter1_reg = fm_buf_V_8_addr_reg_9117.read();
        fm_buf_V_9_addr_reg_9123_pp0_iter1_reg = fm_buf_V_9_addr_reg_9123.read();
        icmp_ln45_reg_8731 = icmp_ln45_fu_1662_p2.read();
        select_ln340_64_reg_9240 = select_ln340_64_fu_1935_p3.read();
        select_ln340_66_reg_9245 = select_ln340_66_fu_2046_p3.read();
        select_ln340_68_reg_9250 = select_ln340_68_fu_2157_p3.read();
        select_ln340_70_reg_9255 = select_ln340_70_fu_2268_p3.read();
        select_ln340_72_reg_9260 = select_ln340_72_fu_2379_p3.read();
        select_ln340_74_reg_9265 = select_ln340_74_fu_2490_p3.read();
        select_ln340_76_reg_9270 = select_ln340_76_fu_2601_p3.read();
        select_ln340_78_reg_9275 = select_ln340_78_fu_2712_p3.read();
        select_ln340_80_reg_9280 = select_ln340_80_fu_2823_p3.read();
        select_ln340_82_reg_9285 = select_ln340_82_fu_2934_p3.read();
        select_ln340_84_reg_9290 = select_ln340_84_fu_3045_p3.read();
        select_ln340_86_reg_9295 = select_ln340_86_fu_3156_p3.read();
        select_ln340_88_reg_9300 = select_ln340_88_fu_3267_p3.read();
        select_ln340_90_reg_9305 = select_ln340_90_fu_3378_p3.read();
        select_ln340_92_reg_9310 = select_ln340_92_fu_3489_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        icmp_ln1265_1_reg_8693 = icmp_ln1265_1_fu_1650_p2.read();
        icmp_ln1265_2_reg_8712 = icmp_ln1265_2_fu_1656_p2.read();
        icmp_ln1265_reg_8674 = icmp_ln1265_fu_1644_p2.read();
        shl_ln_reg_8665 = shl_ln_fu_1632_p3.read();
        trunc_ln1265_1_reg_8670 = trunc_ln1265_1_fu_1640_p1.read();
        trunc_ln1265_reg_8631 = trunc_ln1265_fu_1628_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln45_reg_8731.read(), ap_const_lv1_0))) {
        out_buf0_V_0_load_reg_9214 = out_buf0_V_0_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln45_fu_1662_p2.read(), ap_const_lv1_0))) {
        select_ln52_1_reg_8740 = select_ln52_1_fu_1694_p3.read();
    }
}

void fill_fm_buf_bn_64u_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln45_fu_1662_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln45_fu_1662_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}


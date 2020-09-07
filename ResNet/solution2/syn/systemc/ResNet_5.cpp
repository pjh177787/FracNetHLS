#include "ResNet.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ResNet::thread_fm_buf_V_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_2_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_2_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_2_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_2_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_2_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_2_ce0.read();
    } else {
        fm_buf_V_2_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_2_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_2_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_2_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_2_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_2_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_2_ce1.read();
    } else {
        fm_buf_V_2_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_2_d0() {
    fm_buf_V_2_d0 = (!or_ln340_269_fu_9842_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_269_fu_9842_p2.read()[0].to_bool())? select_ln340_2_fu_9848_p3.read(): select_ln388_2_fu_9855_p3.read());
}

void ResNet::thread_fm_buf_V_2_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_2_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_2_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_2_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_2_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_2_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_2_d1.read();
    } else {
        fm_buf_V_2_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_2_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_2_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_2_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_2_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_2_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_2_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_2_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_2_we1.read();
    } else {
        fm_buf_V_2_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_30_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_30_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_30_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_30_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_30_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_30_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_30_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_30_address0.read();
    } else {
        fm_buf_V_30_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_30_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_30_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_30_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_30_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_30_address1.read();
    } else {
        fm_buf_V_30_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_30_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_30_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_30_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_30_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_30_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_30_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_30_ce0.read();
    } else {
        fm_buf_V_30_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_30_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_30_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_30_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_30_ce1.read();
    } else {
        fm_buf_V_30_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_30_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_30_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_30_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_30_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_30_d1.read();
    } else {
        fm_buf_V_30_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_30_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_30_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_30_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_30_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_30_we1.read();
    } else {
        fm_buf_V_30_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_31_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_31_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_31_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_31_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_31_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_31_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_31_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_31_address0.read();
    } else {
        fm_buf_V_31_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_31_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_31_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_31_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_31_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_31_address1.read();
    } else {
        fm_buf_V_31_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_31_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_31_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_31_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_31_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_31_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_31_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_31_ce0.read();
    } else {
        fm_buf_V_31_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_31_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_31_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_31_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_31_ce1.read();
    } else {
        fm_buf_V_31_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_31_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_31_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_31_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_31_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_31_d1.read();
    } else {
        fm_buf_V_31_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_31_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_31_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_31_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_31_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_31_we1.read();
    } else {
        fm_buf_V_31_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_32_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_32_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_32_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_32_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_32_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_32_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_32_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_32_address0.read();
    } else {
        fm_buf_V_32_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_32_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_32_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_32_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_32_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_32_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_32_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_32_ce0.read();
    } else {
        fm_buf_V_32_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_32_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_32_ce1.read();
    } else {
        fm_buf_V_32_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_32_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_32_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_32_we1.read();
    } else {
        fm_buf_V_32_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_33_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_33_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_33_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_33_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_33_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_33_address0.read();
    } else {
        fm_buf_V_33_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_33_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_33_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_33_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_33_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_33_ce0.read();
    } else {
        fm_buf_V_33_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_33_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_33_ce1.read();
    } else {
        fm_buf_V_33_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_33_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_33_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_33_we1.read();
    } else {
        fm_buf_V_33_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_34_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_34_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_34_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_34_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_34_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_34_address0.read();
    } else {
        fm_buf_V_34_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_34_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_34_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_34_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_34_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_34_ce0.read();
    } else {
        fm_buf_V_34_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_34_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_34_ce1.read();
    } else {
        fm_buf_V_34_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_34_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_34_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_34_we1.read();
    } else {
        fm_buf_V_34_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_35_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_35_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_35_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_35_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_35_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_35_address0.read();
    } else {
        fm_buf_V_35_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_35_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_35_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_35_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_35_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_35_ce0.read();
    } else {
        fm_buf_V_35_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_35_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_35_ce1.read();
    } else {
        fm_buf_V_35_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_35_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_35_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_35_we1.read();
    } else {
        fm_buf_V_35_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_36_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_36_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_36_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_36_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_36_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_36_address0.read();
    } else {
        fm_buf_V_36_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_36_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_36_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_36_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_36_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_36_ce0.read();
    } else {
        fm_buf_V_36_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_36_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_36_ce1.read();
    } else {
        fm_buf_V_36_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_36_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_36_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_36_we1.read();
    } else {
        fm_buf_V_36_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_37_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_37_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_37_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_37_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_37_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_37_address0.read();
    } else {
        fm_buf_V_37_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_37_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_37_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_37_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_37_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_37_ce0.read();
    } else {
        fm_buf_V_37_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_37_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_37_ce1.read();
    } else {
        fm_buf_V_37_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_37_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_37_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_37_we1.read();
    } else {
        fm_buf_V_37_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_38_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_38_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_38_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_38_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_38_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_38_address0.read();
    } else {
        fm_buf_V_38_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_38_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_38_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_38_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_38_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_38_ce0.read();
    } else {
        fm_buf_V_38_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_38_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_38_ce1.read();
    } else {
        fm_buf_V_38_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_38_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_38_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_38_we1.read();
    } else {
        fm_buf_V_38_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_39_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_39_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_39_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_39_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_39_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_39_address0.read();
    } else {
        fm_buf_V_39_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_39_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_39_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_39_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_39_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_39_ce0.read();
    } else {
        fm_buf_V_39_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_39_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_39_ce1.read();
    } else {
        fm_buf_V_39_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_39_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_39_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_39_we1.read();
    } else {
        fm_buf_V_39_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_3_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_3_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_3_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_3_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_3_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_3_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_3_address0.read();
    } else {
        fm_buf_V_3_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_3_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_3_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_3_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_3_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_3_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_3_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_3_address1.read();
    } else {
        fm_buf_V_3_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_3_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_3_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_3_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_3_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_3_ce0.read();
    } else {
        fm_buf_V_3_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_3_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_3_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_3_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_3_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_3_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_3_ce1.read();
    } else {
        fm_buf_V_3_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_3_d0() {
    fm_buf_V_3_d0 = (!or_ln340_271_fu_9929_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_271_fu_9929_p2.read()[0].to_bool())? select_ln340_3_fu_9935_p3.read(): select_ln388_3_fu_9942_p3.read());
}

void ResNet::thread_fm_buf_V_3_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_3_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_3_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_3_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_3_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_3_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_3_d1.read();
    } else {
        fm_buf_V_3_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_3_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_3_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_3_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_3_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_3_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_3_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_3_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_3_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_3_we1.read();
    } else {
        fm_buf_V_3_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_40_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_40_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_40_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_40_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_40_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_40_address0.read();
    } else {
        fm_buf_V_40_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_40_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_40_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_40_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_40_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_40_ce0.read();
    } else {
        fm_buf_V_40_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_40_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_40_ce1.read();
    } else {
        fm_buf_V_40_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_40_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_40_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_40_we1.read();
    } else {
        fm_buf_V_40_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_41_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_41_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_41_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_41_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_41_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_41_address0.read();
    } else {
        fm_buf_V_41_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_41_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_41_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_41_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_41_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_41_ce0.read();
    } else {
        fm_buf_V_41_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_41_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_41_ce1.read();
    } else {
        fm_buf_V_41_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_41_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_41_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_41_we1.read();
    } else {
        fm_buf_V_41_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_42_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_42_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_42_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_42_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_42_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_42_address0.read();
    } else {
        fm_buf_V_42_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_42_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_42_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_42_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_42_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_42_ce0.read();
    } else {
        fm_buf_V_42_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_42_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_42_ce1.read();
    } else {
        fm_buf_V_42_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_42_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_42_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_42_we1.read();
    } else {
        fm_buf_V_42_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_43_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_43_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_43_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_43_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_43_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_43_address0.read();
    } else {
        fm_buf_V_43_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_43_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_43_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_43_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_43_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_43_ce0.read();
    } else {
        fm_buf_V_43_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_43_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_43_ce1.read();
    } else {
        fm_buf_V_43_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_43_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_43_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_43_we1.read();
    } else {
        fm_buf_V_43_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_44_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_44_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_44_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_44_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_44_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_44_address0.read();
    } else {
        fm_buf_V_44_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_44_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_44_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_44_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_44_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_44_ce0.read();
    } else {
        fm_buf_V_44_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_44_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_44_ce1.read();
    } else {
        fm_buf_V_44_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_44_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_44_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_44_we1.read();
    } else {
        fm_buf_V_44_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_45_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_45_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_45_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_45_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_45_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_45_address0.read();
    } else {
        fm_buf_V_45_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_45_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_45_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_45_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_45_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_45_ce0.read();
    } else {
        fm_buf_V_45_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_45_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_45_ce1.read();
    } else {
        fm_buf_V_45_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_45_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_45_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_45_we1.read();
    } else {
        fm_buf_V_45_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_46_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_46_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_46_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_46_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_46_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_46_address0.read();
    } else {
        fm_buf_V_46_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_46_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_46_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_46_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_46_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_46_ce0.read();
    } else {
        fm_buf_V_46_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_46_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_46_ce1.read();
    } else {
        fm_buf_V_46_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_46_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_46_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_46_we1.read();
    } else {
        fm_buf_V_46_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_47_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_47_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_47_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_47_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_47_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_47_address0.read();
    } else {
        fm_buf_V_47_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_47_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_47_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_47_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_47_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_47_ce0.read();
    } else {
        fm_buf_V_47_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_47_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_47_ce1.read();
    } else {
        fm_buf_V_47_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_47_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_47_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_47_we1.read();
    } else {
        fm_buf_V_47_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_48_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_48_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_48_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_48_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_48_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_48_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_48_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_48_address0.read();
    } else {
        fm_buf_V_48_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_48_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_48_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_48_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_48_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_48_address1.read();
    } else {
        fm_buf_V_48_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_48_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_48_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_48_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_48_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_48_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_48_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_48_ce0.read();
    } else {
        fm_buf_V_48_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_48_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_48_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_48_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_48_ce1.read();
    } else {
        fm_buf_V_48_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_48_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_48_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_48_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_48_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_48_d1.read();
    } else {
        fm_buf_V_48_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_48_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_48_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_48_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_48_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_48_we1.read();
    } else {
        fm_buf_V_48_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_49_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_49_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_49_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_49_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_49_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_49_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_49_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_49_address0.read();
    } else {
        fm_buf_V_49_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_49_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_49_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_49_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_49_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_49_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_49_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_49_ce0.read();
    } else {
        fm_buf_V_49_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_49_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_49_ce1.read();
    } else {
        fm_buf_V_49_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_49_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_49_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_49_we0.read();
    } else {
        fm_buf_V_49_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_49_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_49_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_49_we1.read();
    } else {
        fm_buf_V_49_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_4_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_4_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_4_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_4_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_4_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_4_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_4_address0.read();
    } else {
        fm_buf_V_4_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_4_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_4_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_4_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_4_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_4_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_4_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_4_address1.read();
    } else {
        fm_buf_V_4_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_4_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_4_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_4_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_4_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_4_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_4_ce0.read();
    } else {
        fm_buf_V_4_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_4_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_4_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_4_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_4_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_4_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_4_ce1.read();
    } else {
        fm_buf_V_4_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_4_d0() {
    fm_buf_V_4_d0 = (!or_ln340_273_fu_10016_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_273_fu_10016_p2.read()[0].to_bool())? select_ln340_68_fu_10022_p3.read(): select_ln388_67_fu_10029_p3.read());
}

void ResNet::thread_fm_buf_V_4_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_4_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_4_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_4_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_4_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_4_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_4_d1.read();
    } else {
        fm_buf_V_4_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_4_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_4_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_4_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_4_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_4_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_4_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_4_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_4_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_4_we1.read();
    } else {
        fm_buf_V_4_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_50_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_50_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_50_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_50_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_50_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_50_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_50_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_50_address0.read();
    } else {
        fm_buf_V_50_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_50_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_50_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_50_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_50_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_50_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_50_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_50_ce0.read();
    } else {
        fm_buf_V_50_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_50_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_50_ce1.read();
    } else {
        fm_buf_V_50_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_50_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_50_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_50_we0.read();
    } else {
        fm_buf_V_50_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_50_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_50_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_50_we1.read();
    } else {
        fm_buf_V_50_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_51_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_51_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_51_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_51_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_51_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_51_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_51_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_51_address0.read();
    } else {
        fm_buf_V_51_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_51_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_51_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_51_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_51_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_51_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_51_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_51_ce0.read();
    } else {
        fm_buf_V_51_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_51_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_51_ce1.read();
    } else {
        fm_buf_V_51_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_51_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_51_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_51_we0.read();
    } else {
        fm_buf_V_51_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_51_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_51_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_51_we1.read();
    } else {
        fm_buf_V_51_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_52_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_52_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_52_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_52_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_52_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_52_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_52_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_52_address0.read();
    } else {
        fm_buf_V_52_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_52_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_52_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_52_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_52_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_52_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_52_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_52_ce0.read();
    } else {
        fm_buf_V_52_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_52_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_52_ce1.read();
    } else {
        fm_buf_V_52_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_52_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_52_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_52_we0.read();
    } else {
        fm_buf_V_52_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_52_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_52_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_52_we1.read();
    } else {
        fm_buf_V_52_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_53_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_53_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_53_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_53_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_53_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_53_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_53_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_53_address0.read();
    } else {
        fm_buf_V_53_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_53_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_53_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_53_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_53_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_53_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_53_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_53_ce0.read();
    } else {
        fm_buf_V_53_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_53_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_53_ce1.read();
    } else {
        fm_buf_V_53_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_53_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_53_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_53_we0.read();
    } else {
        fm_buf_V_53_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_53_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_53_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_53_we1.read();
    } else {
        fm_buf_V_53_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_54_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_54_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_54_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_54_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_54_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_54_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_54_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_54_address0.read();
    } else {
        fm_buf_V_54_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_54_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_54_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_54_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_54_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_54_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_54_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_54_ce0.read();
    } else {
        fm_buf_V_54_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_54_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_54_ce1.read();
    } else {
        fm_buf_V_54_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_54_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_54_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_54_we0.read();
    } else {
        fm_buf_V_54_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_54_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_54_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_54_we1.read();
    } else {
        fm_buf_V_54_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_55_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_55_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_55_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_55_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_55_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_55_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_55_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_55_address0.read();
    } else {
        fm_buf_V_55_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_55_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_55_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_55_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_55_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_55_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_55_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_55_ce0.read();
    } else {
        fm_buf_V_55_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_55_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_55_ce1.read();
    } else {
        fm_buf_V_55_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_55_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_55_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_55_we0.read();
    } else {
        fm_buf_V_55_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_55_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_55_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_55_we1.read();
    } else {
        fm_buf_V_55_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_56_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_56_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_56_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_56_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_56_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_56_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_56_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_56_address0.read();
    } else {
        fm_buf_V_56_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_56_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_56_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_56_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_56_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_56_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_56_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_56_ce0.read();
    } else {
        fm_buf_V_56_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_56_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_56_ce1.read();
    } else {
        fm_buf_V_56_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_56_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_56_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_56_we0.read();
    } else {
        fm_buf_V_56_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_56_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_56_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_56_we1.read();
    } else {
        fm_buf_V_56_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_57_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_57_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_57_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_57_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_57_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_57_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_57_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_57_address0.read();
    } else {
        fm_buf_V_57_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_57_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_57_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_57_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_57_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_57_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_57_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_57_ce0.read();
    } else {
        fm_buf_V_57_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_57_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_57_ce1.read();
    } else {
        fm_buf_V_57_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_57_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_57_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_57_we0.read();
    } else {
        fm_buf_V_57_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_57_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_57_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_57_we1.read();
    } else {
        fm_buf_V_57_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_58_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_58_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_58_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_58_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_58_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_58_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_58_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_58_address0.read();
    } else {
        fm_buf_V_58_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_58_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_58_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_58_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_58_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_58_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_58_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_58_ce0.read();
    } else {
        fm_buf_V_58_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_58_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_58_ce1.read();
    } else {
        fm_buf_V_58_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_58_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_58_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_58_we0.read();
    } else {
        fm_buf_V_58_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_58_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_58_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_58_we1.read();
    } else {
        fm_buf_V_58_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_59_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_59_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_59_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_59_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_59_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_59_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_59_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_59_address0.read();
    } else {
        fm_buf_V_59_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_59_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_59_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_59_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_59_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_59_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_59_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_59_ce0.read();
    } else {
        fm_buf_V_59_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_59_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_59_ce1.read();
    } else {
        fm_buf_V_59_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_59_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_59_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_59_we0.read();
    } else {
        fm_buf_V_59_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_59_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_59_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_59_we1.read();
    } else {
        fm_buf_V_59_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_5_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_5_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_5_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_5_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_5_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_5_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_5_address0.read();
    } else {
        fm_buf_V_5_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_5_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_5_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_5_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_5_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_5_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_5_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_5_address1.read();
    } else {
        fm_buf_V_5_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_5_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_5_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_5_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_5_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_5_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_5_ce0.read();
    } else {
        fm_buf_V_5_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_5_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_5_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_5_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_5_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_5_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_5_ce1.read();
    } else {
        fm_buf_V_5_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_5_d0() {
    fm_buf_V_5_d0 = (!or_ln340_275_fu_10103_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_275_fu_10103_p2.read()[0].to_bool())? select_ln340_72_fu_10109_p3.read(): select_ln388_69_fu_10116_p3.read());
}

void ResNet::thread_fm_buf_V_5_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_5_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_5_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_5_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_5_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_5_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_5_d1.read();
    } else {
        fm_buf_V_5_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_5_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_5_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_5_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_5_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_5_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_5_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_5_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_5_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_5_we1.read();
    } else {
        fm_buf_V_5_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_60_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_60_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_60_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_60_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_60_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_60_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_60_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_60_address0.read();
    } else {
        fm_buf_V_60_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_60_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_60_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_60_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_60_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_60_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_60_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_60_ce0.read();
    } else {
        fm_buf_V_60_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_60_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_60_ce1.read();
    } else {
        fm_buf_V_60_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_60_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_60_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_60_we0.read();
    } else {
        fm_buf_V_60_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_60_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_60_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_60_we1.read();
    } else {
        fm_buf_V_60_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_61_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_61_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_61_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_61_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_61_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_61_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_61_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_61_address0.read();
    } else {
        fm_buf_V_61_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_61_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_61_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_61_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_61_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_61_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_61_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_61_ce0.read();
    } else {
        fm_buf_V_61_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_61_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_61_ce1.read();
    } else {
        fm_buf_V_61_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_61_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_61_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_61_we0.read();
    } else {
        fm_buf_V_61_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_61_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_61_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_61_we1.read();
    } else {
        fm_buf_V_61_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_62_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_62_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_62_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_62_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_62_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_62_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_62_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_62_address0.read();
    } else {
        fm_buf_V_62_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_62_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_62_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_62_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_62_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_62_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_62_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_62_ce0.read();
    } else {
        fm_buf_V_62_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_62_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_62_ce1.read();
    } else {
        fm_buf_V_62_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_62_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_62_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_62_we0.read();
    } else {
        fm_buf_V_62_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_62_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_62_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_62_we1.read();
    } else {
        fm_buf_V_62_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_63_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_63_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_63_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_63_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_63_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_63_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_63_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_63_address0.read();
    } else {
        fm_buf_V_63_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        fm_buf_V_63_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_63_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_63_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_63_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_63_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_63_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_63_ce0.read();
    } else {
        fm_buf_V_63_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_63_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_63_ce1.read();
    } else {
        fm_buf_V_63_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_63_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_63_we0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_63_we0.read();
    } else {
        fm_buf_V_63_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_63_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_63_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_63_we1.read();
    } else {
        fm_buf_V_63_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_6_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_6_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_6_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_6_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_6_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_6_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_6_address0.read();
    } else {
        fm_buf_V_6_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_6_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_6_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_6_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_6_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_6_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_6_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_6_address1.read();
    } else {
        fm_buf_V_6_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_6_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_6_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_6_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_6_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_6_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_6_ce0.read();
    } else {
        fm_buf_V_6_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_6_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_6_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_6_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_6_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_6_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_6_ce1.read();
    } else {
        fm_buf_V_6_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_6_d0() {
    fm_buf_V_6_d0 = (!or_ln340_277_fu_10190_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_277_fu_10190_p2.read()[0].to_bool())? select_ln340_6_fu_10196_p3.read(): select_ln388_6_fu_10203_p3.read());
}

void ResNet::thread_fm_buf_V_6_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_6_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_6_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_6_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_6_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_6_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_6_d1.read();
    } else {
        fm_buf_V_6_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_6_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_6_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_6_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_6_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_6_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_6_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_6_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_6_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_6_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_6_we1.read();
    } else {
        fm_buf_V_6_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_7_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_7_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_7_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_7_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_7_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_7_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_7_address0.read();
    } else {
        fm_buf_V_7_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_7_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_7_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_7_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_7_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_7_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_7_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_7_address1.read();
    } else {
        fm_buf_V_7_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_7_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_7_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_7_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_7_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_7_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_7_ce0.read();
    } else {
        fm_buf_V_7_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_7_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_7_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_7_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_7_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_7_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_7_ce1.read();
    } else {
        fm_buf_V_7_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_7_d0() {
    fm_buf_V_7_d0 = (!or_ln340_279_fu_10277_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_279_fu_10277_p2.read()[0].to_bool())? select_ln340_7_fu_10283_p3.read(): select_ln388_7_fu_10290_p3.read());
}

void ResNet::thread_fm_buf_V_7_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_7_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_7_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_7_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_7_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_7_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_7_d1.read();
    } else {
        fm_buf_V_7_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_7_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_7_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_7_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_7_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_7_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_7_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_7_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_7_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_7_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_7_we1.read();
    } else {
        fm_buf_V_7_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_8_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_8_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_8_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_8_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_8_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_8_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_8_address0.read();
    } else {
        fm_buf_V_8_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_8_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_8_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_8_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_8_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_8_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_8_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_8_address1.read();
    } else {
        fm_buf_V_8_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_8_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_8_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_8_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_8_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_8_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_8_ce0.read();
    } else {
        fm_buf_V_8_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_8_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_8_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_8_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_8_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_8_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_8_ce1.read();
    } else {
        fm_buf_V_8_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_8_d0() {
    fm_buf_V_8_d0 = (!or_ln340_281_fu_10364_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_281_fu_10364_p2.read()[0].to_bool())? select_ln340_8_fu_10370_p3.read(): select_ln388_8_fu_10377_p3.read());
}

void ResNet::thread_fm_buf_V_8_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_8_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_8_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_8_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_8_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_8_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_8_d1.read();
    } else {
        fm_buf_V_8_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_8_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_8_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_8_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_8_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_8_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_8_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_8_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_8_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_8_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_8_we1.read();
    } else {
        fm_buf_V_8_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        fm_buf_V_9_address0 =  (sc_lv<11>) (zext_ln1265_25_fu_11641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()))) {
        fm_buf_V_9_address0 =  (sc_lv<11>) (zext_ln203_3_fu_9590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_9_address0 = grp_fill_fm_buf_fu_4436_fm_buf_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_9_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_9_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_9_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_9_address0.read();
    } else {
        fm_buf_V_9_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_9_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_9_address1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_9_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_9_address1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_9_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_9_address1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_9_address1.read();
    } else {
        fm_buf_V_9_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read())))) {
        fm_buf_V_9_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        fm_buf_V_9_ce0 = grp_fill_fm_buf_fu_4436_fm_buf_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_9_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_9_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_9_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_9_ce0.read();
    } else {
        fm_buf_V_9_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_9_ce1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_9_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_9_ce1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_9_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_9_ce1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_9_ce1.read();
    } else {
        fm_buf_V_9_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_9_d0() {
    fm_buf_V_9_d0 = (!or_ln340_283_fu_10451_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_283_fu_10451_p2.read()[0].to_bool())? select_ln340_9_fu_10457_p3.read(): select_ln388_9_fu_10464_p3.read());
}

void ResNet::thread_fm_buf_V_9_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_9_d1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_9_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_9_d1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_9_d1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_9_d1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_9_d1.read();
    } else {
        fm_buf_V_9_d1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_fm_buf_V_9_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln122_reg_21912_pp2_iter3_reg.read()))) {
        fm_buf_V_9_we0 = ap_const_logic_1;
    } else {
        fm_buf_V_9_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_fm_buf_V_9_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        fm_buf_V_9_we1 = grp_fill_fm_buf_bn_16u_s_fu_4179_fm_buf_V_9_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        fm_buf_V_9_we1 = grp_fill_fm_buf_bn_32u_s_fu_4028_fm_buf_V_9_we1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        fm_buf_V_9_we1 = grp_fill_fm_buf_bn_64u_s_fu_3850_fm_buf_V_9_we1.read();
    } else {
        fm_buf_V_9_we1 = ap_const_logic_0;
    }
}

void ResNet::thread_grp_biconv16_fu_3804_ap_start() {
    grp_biconv16_fu_3804_ap_start = grp_biconv16_fu_3804_ap_start_reg.read();
}

void ResNet::thread_grp_fill_fm_buf_bn_16u_s_fu_4179_ap_start() {
    grp_fill_fm_buf_bn_16u_s_fu_4179_ap_start = grp_fill_fm_buf_bn_16u_s_fu_4179_ap_start_reg.read();
}

void ResNet::thread_grp_fill_fm_buf_bn_16u_s_fu_4179_col() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_fill_fm_buf_bn_16u_s_fu_4179_col = col29_0_reg_2531.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        grp_fill_fm_buf_bn_16u_s_fu_4179_col = col27_0_reg_2507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()))) {
        grp_fill_fm_buf_bn_16u_s_fu_4179_col = col25_0_reg_2483.read();
    } else {
        grp_fill_fm_buf_bn_16u_s_fu_4179_col =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_fill_fm_buf_bn_16u_s_fu_4179_row() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_fill_fm_buf_bn_16u_s_fu_4179_row = row28_0_reg_2519.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        grp_fill_fm_buf_bn_16u_s_fu_4179_row = row26_0_reg_2495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()))) {
        grp_fill_fm_buf_bn_16u_s_fu_4179_row = row24_0_reg_2471.read();
    } else {
        grp_fill_fm_buf_bn_16u_s_fu_4179_row =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_fill_fm_buf_bn_32u_s_fu_4028_ap_start() {
    grp_fill_fm_buf_bn_32u_s_fu_4028_ap_start = grp_fill_fm_buf_bn_32u_s_fu_4028_ap_start_reg.read();
}

void ResNet::thread_grp_fill_fm_buf_bn_32u_s_fu_4028_c_cat() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_c_cat = coo45_0_reg_2766.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_c_cat = cio43_0_reg_2743.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_c_cat = coo39_0_reg_2696.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_c_cat = cio37_0_reg_2673.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_c_cat = coo_0_reg_2626.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_c_cat = ap_const_lv2_0;
    } else {
        grp_fill_fm_buf_bn_32u_s_fu_4028_c_cat =  (sc_lv<2>) ("XX");
    }
}

void ResNet::thread_grp_fill_fm_buf_bn_32u_s_fu_4028_col() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_col = col42_0_reg_2731.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_col = col36_0_reg_2661.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_col = col34_0_reg_2614.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_col = col31_0_reg_2566.read();
    } else {
        grp_fill_fm_buf_bn_32u_s_fu_4028_col =  (sc_lv<2>) ("XX");
    }
}

void ResNet::thread_grp_fill_fm_buf_bn_32u_s_fu_4028_row() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_row = row41_0_reg_2719.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_row = row35_0_reg_2649.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_row = row33_0_reg_2602.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        grp_fill_fm_buf_bn_32u_s_fu_4028_row = row30_0_reg_2554.read();
    } else {
        grp_fill_fm_buf_bn_32u_s_fu_4028_row =  (sc_lv<2>) ("XX");
    }
}

void ResNet::thread_grp_fill_fm_buf_bn_64u_s_fu_3850_ap_start() {
    grp_fill_fm_buf_bn_64u_s_fu_3850_ap_start = grp_fill_fm_buf_bn_64u_s_fu_3850_ap_start_reg.read();
}

void ResNet::thread_grp_fill_fm_buf_bn_64u_s_fu_3850_c() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c = coo67_0_0_0_reg_2933.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c = cio65_0_0_0_reg_2909.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c = coo61_0_0_0_reg_2885.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c = cio59_0_0_0_reg_2861.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c = coo55_0_0_0_reg_2837.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c = cc_reg_2789.read();
    } else {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_fill_fm_buf_bn_64u_s_fu_3850_c_cat() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c_cat = coo67_0_0_0_reg_2933.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c_cat = cio65_0_0_0_reg_2909.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c_cat = coo61_0_0_0_reg_2885.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c_cat = cio59_0_0_0_reg_2861.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c_cat = coo55_0_0_0_reg_2837.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c_cat = ap_const_lv3_0;
    } else {
        grp_fill_fm_buf_bn_64u_s_fu_3850_c_cat =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_fill_fm_buf_fu_4436_ap_start() {
    grp_fill_fm_buf_fu_4436_ap_start = grp_fill_fm_buf_fu_4436_ap_start_reg.read();
}

void ResNet::thread_grp_fill_fm_buf_fu_4436_col() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read())) {
        grp_fill_fm_buf_fu_4436_col = zext_ln438_1_reg_23102.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        grp_fill_fm_buf_fu_4436_col = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        grp_fill_fm_buf_fu_4436_col = zext_ln384_1_reg_23028.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()))) {
        grp_fill_fm_buf_fu_4436_col = zext_ln334_1_reg_22970.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        grp_fill_fm_buf_fu_4436_col = zext_ln302_1_reg_22928.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        grp_fill_fm_buf_fu_4436_col = zext_ln277_1_reg_22902.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()))) {
        grp_fill_fm_buf_fu_4436_col = col29_0_reg_2531.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        grp_fill_fm_buf_fu_4436_col = col27_0_reg_2507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_fill_fm_buf_fu_4436_col = col25_0_reg_2483.read();
    } else {
        grp_fill_fm_buf_fu_4436_col =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_fill_fm_buf_fu_4436_row() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read())) {
        grp_fill_fm_buf_fu_4436_row = zext_ln438_reg_23089.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        grp_fill_fm_buf_fu_4436_row = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        grp_fill_fm_buf_fu_4436_row = zext_ln384_reg_23015.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()))) {
        grp_fill_fm_buf_fu_4436_row = zext_ln334_reg_22957.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        grp_fill_fm_buf_fu_4436_row = zext_ln302_reg_22915.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        grp_fill_fm_buf_fu_4436_row = zext_ln277_reg_22889.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()))) {
        grp_fill_fm_buf_fu_4436_row = row28_0_reg_2519.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        grp_fill_fm_buf_fu_4436_row = row26_0_reg_2495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_fill_fm_buf_fu_4436_row = row24_0_reg_2471.read();
    } else {
        grp_fill_fm_buf_fu_4436_row =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_matmul_fu_4301_ap_start() {
    grp_matmul_fu_4301_ap_start = grp_matmul_fu_4301_ap_start_reg.read();
}

void ResNet::thread_grp_pgconv64_16u_s_fu_4585_ap_start() {
    grp_pgconv64_16u_s_fu_4585_ap_start = grp_pgconv64_16u_s_fu_4585_ap_start_reg.read();
}

void ResNet::thread_grp_pgconv64_32u_s_fu_4625_ap_start() {
    grp_pgconv64_32u_s_fu_4625_ap_start = grp_pgconv64_32u_s_fu_4625_ap_start_reg.read();
}

void ResNet::thread_grp_pgconv64_64u_s_fu_4255_ap_start() {
    grp_pgconv64_64u_s_fu_4255_ap_start = grp_pgconv64_64u_s_fu_4255_ap_start_reg.read();
}

void ResNet::thread_grp_pgconv64_64u_s_fu_4255_c() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read())) {
        grp_pgconv64_64u_s_fu_4255_c = coi68_0_0_0_reg_2945.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read())) {
        grp_pgconv64_64u_s_fu_4255_c = cii66_0_0_0_reg_2921.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        grp_pgconv64_64u_s_fu_4255_c = coi62_0_0_0_reg_2897.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        grp_pgconv64_64u_s_fu_4255_c = cii60_0_0_0_reg_2873.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        grp_pgconv64_64u_s_fu_4255_c = coi56_0_0_0_reg_2849.read();
    } else {
        grp_pgconv64_64u_s_fu_4255_c =  (sc_lv<3>) ("XXX");
    }
}

void ResNet::thread_grp_pgconv64s2_16u_s_fu_4392_ap_start() {
    grp_pgconv64s2_16u_s_fu_4392_ap_start = grp_pgconv64s2_16u_s_fu_4392_ap_start_reg.read();
}

void ResNet::thread_grp_pgconv64s2_32u_s_fu_3758_ap_start() {
    grp_pgconv64s2_32u_s_fu_3758_ap_start = grp_pgconv64s2_32u_s_fu_3758_ap_start_reg.read();
}

void ResNet::thread_i_fu_11573_p2() {
    i_fu_11573_p2 = (!ap_phi_mux_i_0_phi_fu_2972_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_i_0_phi_fu_2972_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ResNet::thread_icmp_ln108_fu_4871_p2() {
    icmp_ln108_fu_4871_p2 = (!cii_0_reg_2349.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(cii_0_reg_2349.read() == ap_const_lv3_6);
}

void ResNet::thread_icmp_ln109_fu_5381_p2() {
    icmp_ln109_fu_5381_p2 = (!indvar_flatten26_reg_2361.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten26_reg_2361.read() == ap_const_lv4_9);
}

void ResNet::thread_icmp_ln110_fu_5399_p2() {
    icmp_ln110_fu_5399_p2 = (!col22_0_reg_2383.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(col22_0_reg_2383.read() == ap_const_lv2_3);
}

void ResNet::thread_icmp_ln122_fu_6266_p2() {
    icmp_ln122_fu_6266_p2 = (!indvar_flatten89_reg_2394.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten89_reg_2394.read() == ap_const_lv11_400);
}

void ResNet::thread_icmp_ln123_fu_6284_p2() {
    icmp_ln123_fu_6284_p2 = (!indvar_flatten53_reg_2416.read().is_01() || !ap_const_lv10_100.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten53_reg_2416.read() == ap_const_lv10_100);
}

void ResNet::thread_icmp_ln124_fu_6382_p2() {
    icmp_ln124_fu_6382_p2 = (!indvar_flatten33_reg_2438.read().is_01() || !ap_const_lv8_40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten33_reg_2438.read() == ap_const_lv8_40);
}

void ResNet::thread_icmp_ln125_fu_6370_p2() {
    icmp_ln125_fu_6370_p2 = (!bcol_0_reg_2460.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(bcol_0_reg_2460.read() == ap_const_lv4_9);
}

void ResNet::thread_icmp_ln145_fu_11002_p2() {
    icmp_ln145_fu_11002_p2 = (!row24_0_reg_2471.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(row24_0_reg_2471.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln146_fu_11014_p2() {
    icmp_ln146_fu_11014_p2 = (!col25_0_reg_2483.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(col25_0_reg_2483.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln187_fu_11026_p2() {
    icmp_ln187_fu_11026_p2 = (!row26_0_reg_2495.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(row26_0_reg_2495.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln188_fu_11038_p2() {
    icmp_ln188_fu_11038_p2 = (!col27_0_reg_2507.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(col27_0_reg_2507.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln229_fu_11050_p2() {
    icmp_ln229_fu_11050_p2 = (!row28_0_reg_2519.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(row28_0_reg_2519.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln230_fu_11062_p2() {
    icmp_ln230_fu_11062_p2 = (!col29_0_reg_2531.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(col29_0_reg_2531.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln271_fu_11074_p2() {
    icmp_ln271_fu_11074_p2 = (!cio_0_reg_2543.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(cio_0_reg_2543.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln272_fu_11086_p2() {
    icmp_ln272_fu_11086_p2 = (!row30_0_reg_2554.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(row30_0_reg_2554.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln273_fu_11104_p2() {
    icmp_ln273_fu_11104_p2 = (!col31_0_reg_2566.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(col31_0_reg_2566.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln275_fu_11122_p2() {
    icmp_ln275_fu_11122_p2 = (!row0_0_0_reg_2578.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(row0_0_0_reg_2578.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln276_fu_11143_p2() {
    icmp_ln276_fu_11143_p2 = (!col0_0_0_reg_2590.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(col0_0_0_reg_2590.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln300_fu_11165_p2() {
    icmp_ln300_fu_11165_p2 = (!row33_0_reg_2602.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(row33_0_reg_2602.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln301_fu_11181_p2() {
    icmp_ln301_fu_11181_p2 = (!col34_0_reg_2614.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(col34_0_reg_2614.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln303_fu_11198_p2() {
    icmp_ln303_fu_11198_p2 = (!coo_0_reg_2626.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(coo_0_reg_2626.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln304_fu_11210_p2() {
    icmp_ln304_fu_11210_p2 = (!coi_0_reg_2638.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(coi_0_reg_2638.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln332_fu_11222_p2() {
    icmp_ln332_fu_11222_p2 = (!row35_0_reg_2649.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(row35_0_reg_2649.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln333_fu_11238_p2() {
    icmp_ln333_fu_11238_p2 = (!col36_0_reg_2661.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(col36_0_reg_2661.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln335_fu_11255_p2() {
    icmp_ln335_fu_11255_p2 = (!cio37_0_reg_2673.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(cio37_0_reg_2673.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln336_fu_11267_p2() {
    icmp_ln336_fu_11267_p2 = (!cii38_0_reg_2685.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(cii38_0_reg_2685.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln354_fu_11279_p2() {
    icmp_ln354_fu_11279_p2 = (!coo39_0_reg_2696.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(coo39_0_reg_2696.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln355_fu_11291_p2() {
    icmp_ln355_fu_11291_p2 = (!coi40_0_reg_2708.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(coi40_0_reg_2708.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln382_fu_11303_p2() {
    icmp_ln382_fu_11303_p2 = (!row41_0_reg_2719.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(row41_0_reg_2719.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln383_fu_11319_p2() {
    icmp_ln383_fu_11319_p2 = (!col42_0_reg_2731.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(col42_0_reg_2731.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln385_fu_11336_p2() {
    icmp_ln385_fu_11336_p2 = (!cio43_0_reg_2743.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(cio43_0_reg_2743.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln386_fu_11348_p2() {
    icmp_ln386_fu_11348_p2 = (!cii44_0_reg_2755.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(cii44_0_reg_2755.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln404_fu_11360_p2() {
    icmp_ln404_fu_11360_p2 = (!coo45_0_reg_2766.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(coo45_0_reg_2766.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln405_fu_11372_p2() {
    icmp_ln405_fu_11372_p2 = (!coi46_0_reg_2778.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(coi46_0_reg_2778.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln432_fu_11384_p2() {
    icmp_ln432_fu_11384_p2 = (!cc_reg_2789.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(cc_reg_2789.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln435_fu_11396_p2() {
    icmp_ln435_fu_11396_p2 = (!cii50_0_0_0_reg_2801.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(cii50_0_0_0_reg_2801.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln436_fu_11408_p2() {
    icmp_ln436_fu_11408_p2 = (!row051_0_0_0_reg_2813.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(row051_0_0_0_reg_2813.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln437_fu_11424_p2() {
    icmp_ln437_fu_11424_p2 = (!col052_0_0_0_reg_2825.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(col052_0_0_0_reg_2825.read() == ap_const_lv2_2);
}

void ResNet::thread_icmp_ln469_fu_11441_p2() {
    icmp_ln469_fu_11441_p2 = (!coo55_0_0_0_reg_2837.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(coo55_0_0_0_reg_2837.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln470_fu_11453_p2() {
    icmp_ln470_fu_11453_p2 = (!coi56_0_0_0_reg_2849.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(coi56_0_0_0_reg_2849.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln500_fu_11465_p2() {
    icmp_ln500_fu_11465_p2 = (!cio59_0_0_0_reg_2861.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(cio59_0_0_0_reg_2861.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln501_fu_11477_p2() {
    icmp_ln501_fu_11477_p2 = (!cii60_0_0_0_reg_2873.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(cii60_0_0_0_reg_2873.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln519_fu_11489_p2() {
    icmp_ln519_fu_11489_p2 = (!coo61_0_0_0_reg_2885.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(coo61_0_0_0_reg_2885.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln520_fu_11501_p2() {
    icmp_ln520_fu_11501_p2 = (!coi62_0_0_0_reg_2897.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(coi62_0_0_0_reg_2897.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln550_fu_11513_p2() {
    icmp_ln550_fu_11513_p2 = (!cio65_0_0_0_reg_2909.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(cio65_0_0_0_reg_2909.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln551_fu_11525_p2() {
    icmp_ln551_fu_11525_p2 = (!cii66_0_0_0_reg_2921.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(cii66_0_0_0_reg_2921.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln569_fu_11537_p2() {
    icmp_ln569_fu_11537_p2 = (!coo67_0_0_0_reg_2933.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(coo67_0_0_0_reg_2933.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln570_fu_11549_p2() {
    icmp_ln570_fu_11549_p2 = (!coi68_0_0_0_reg_2945.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(coi68_0_0_0_reg_2945.read() == ap_const_lv3_4);
}

void ResNet::thread_icmp_ln592_fu_11561_p2() {
    icmp_ln592_fu_11561_p2 = (!indvar_flatten96_reg_2957.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten96_reg_2957.read() == ap_const_lv7_40);
}

void ResNet::thread_icmp_ln593_fu_11579_p2() {
    icmp_ln593_fu_11579_p2 = (!j_0_reg_3747.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_3747.read() == ap_const_lv4_9);
}

void ResNet::thread_icmp_ln768_55_fu_6954_p2() {
    icmp_ln768_55_fu_6954_p2 = (!tmp_190_fu_6938_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_190_fu_6938_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_56_fu_7134_p2() {
    icmp_ln768_56_fu_7134_p2 = (!tmp_192_fu_7118_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_192_fu_7118_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_57_fu_7314_p2() {
    icmp_ln768_57_fu_7314_p2 = (!tmp_194_fu_7298_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_194_fu_7298_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_58_fu_7494_p2() {
    icmp_ln768_58_fu_7494_p2 = (!tmp_196_fu_7478_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_196_fu_7478_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_59_fu_7674_p2() {
    icmp_ln768_59_fu_7674_p2 = (!tmp_198_fu_7658_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_198_fu_7658_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_60_fu_7854_p2() {
    icmp_ln768_60_fu_7854_p2 = (!tmp_200_fu_7838_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_200_fu_7838_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_61_fu_8034_p2() {
    icmp_ln768_61_fu_8034_p2 = (!tmp_202_fu_8018_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_202_fu_8018_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_62_fu_8214_p2() {
    icmp_ln768_62_fu_8214_p2 = (!tmp_204_fu_8198_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_204_fu_8198_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_63_fu_8394_p2() {
    icmp_ln768_63_fu_8394_p2 = (!tmp_206_fu_8378_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_206_fu_8378_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_64_fu_8574_p2() {
    icmp_ln768_64_fu_8574_p2 = (!tmp_208_fu_8558_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_208_fu_8558_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_65_fu_8754_p2() {
    icmp_ln768_65_fu_8754_p2 = (!tmp_210_fu_8738_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_210_fu_8738_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_66_fu_8934_p2() {
    icmp_ln768_66_fu_8934_p2 = (!tmp_212_fu_8918_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_212_fu_8918_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_67_fu_9114_p2() {
    icmp_ln768_67_fu_9114_p2 = (!tmp_214_fu_9098_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_214_fu_9098_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_68_fu_9294_p2() {
    icmp_ln768_68_fu_9294_p2 = (!tmp_216_fu_9278_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_216_fu_9278_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_69_fu_9474_p2() {
    icmp_ln768_69_fu_9474_p2 = (!tmp_218_fu_9458_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_218_fu_9458_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln768_fu_6774_p2() {
    icmp_ln768_fu_6774_p2 = (!tmp_188_fu_6758_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_188_fu_6758_p4.read() == ap_const_lv4_0);
}

void ResNet::thread_icmp_ln879_113_fu_6768_p2() {
    icmp_ln879_113_fu_6768_p2 = (!tmp_188_fu_6758_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_188_fu_6758_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_114_fu_6932_p2() {
    icmp_ln879_114_fu_6932_p2 = (!tmp_189_fu_6922_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_189_fu_6922_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_115_fu_6948_p2() {
    icmp_ln879_115_fu_6948_p2 = (!tmp_190_fu_6938_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_190_fu_6938_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_116_fu_7112_p2() {
    icmp_ln879_116_fu_7112_p2 = (!tmp_191_fu_7102_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_191_fu_7102_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_117_fu_7128_p2() {
    icmp_ln879_117_fu_7128_p2 = (!tmp_192_fu_7118_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_192_fu_7118_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_118_fu_7292_p2() {
    icmp_ln879_118_fu_7292_p2 = (!tmp_193_fu_7282_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_193_fu_7282_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_119_fu_7308_p2() {
    icmp_ln879_119_fu_7308_p2 = (!tmp_194_fu_7298_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_194_fu_7298_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_120_fu_7472_p2() {
    icmp_ln879_120_fu_7472_p2 = (!tmp_195_fu_7462_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_195_fu_7462_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_121_fu_7488_p2() {
    icmp_ln879_121_fu_7488_p2 = (!tmp_196_fu_7478_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_196_fu_7478_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_122_fu_7652_p2() {
    icmp_ln879_122_fu_7652_p2 = (!tmp_197_fu_7642_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_197_fu_7642_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_123_fu_7668_p2() {
    icmp_ln879_123_fu_7668_p2 = (!tmp_198_fu_7658_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_198_fu_7658_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_124_fu_7832_p2() {
    icmp_ln879_124_fu_7832_p2 = (!tmp_199_fu_7822_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_199_fu_7822_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_125_fu_7848_p2() {
    icmp_ln879_125_fu_7848_p2 = (!tmp_200_fu_7838_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_200_fu_7838_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_126_fu_8012_p2() {
    icmp_ln879_126_fu_8012_p2 = (!tmp_201_fu_8002_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_201_fu_8002_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_127_fu_8028_p2() {
    icmp_ln879_127_fu_8028_p2 = (!tmp_202_fu_8018_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_202_fu_8018_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_128_fu_8192_p2() {
    icmp_ln879_128_fu_8192_p2 = (!tmp_203_fu_8182_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_203_fu_8182_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_129_fu_8208_p2() {
    icmp_ln879_129_fu_8208_p2 = (!tmp_204_fu_8198_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_204_fu_8198_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_130_fu_8372_p2() {
    icmp_ln879_130_fu_8372_p2 = (!tmp_205_fu_8362_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_fu_8362_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_131_fu_8388_p2() {
    icmp_ln879_131_fu_8388_p2 = (!tmp_206_fu_8378_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_206_fu_8378_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_132_fu_8552_p2() {
    icmp_ln879_132_fu_8552_p2 = (!tmp_207_fu_8542_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_207_fu_8542_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_133_fu_8568_p2() {
    icmp_ln879_133_fu_8568_p2 = (!tmp_208_fu_8558_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_208_fu_8558_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_134_fu_8732_p2() {
    icmp_ln879_134_fu_8732_p2 = (!tmp_209_fu_8722_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_209_fu_8722_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_135_fu_8748_p2() {
    icmp_ln879_135_fu_8748_p2 = (!tmp_210_fu_8738_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_210_fu_8738_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_136_fu_8912_p2() {
    icmp_ln879_136_fu_8912_p2 = (!tmp_211_fu_8902_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_211_fu_8902_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_137_fu_8928_p2() {
    icmp_ln879_137_fu_8928_p2 = (!tmp_212_fu_8918_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_212_fu_8918_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_138_fu_9092_p2() {
    icmp_ln879_138_fu_9092_p2 = (!tmp_213_fu_9082_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_213_fu_9082_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_139_fu_9108_p2() {
    icmp_ln879_139_fu_9108_p2 = (!tmp_214_fu_9098_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_214_fu_9098_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_140_fu_9272_p2() {
    icmp_ln879_140_fu_9272_p2 = (!tmp_215_fu_9262_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_215_fu_9262_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_141_fu_9288_p2() {
    icmp_ln879_141_fu_9288_p2 = (!tmp_216_fu_9278_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_216_fu_9278_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_142_fu_9452_p2() {
    icmp_ln879_142_fu_9452_p2 = (!tmp_217_fu_9442_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_217_fu_9442_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln879_143_fu_9468_p2() {
    icmp_ln879_143_fu_9468_p2 = (!tmp_218_fu_9458_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_218_fu_9458_p4.read() == ap_const_lv4_F);
}

void ResNet::thread_icmp_ln879_fu_6752_p2() {
    icmp_ln879_fu_6752_p2 = (!tmp_187_fu_6742_p4.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_187_fu_6742_p4.read() == ap_const_lv3_7);
}

void ResNet::thread_icmp_ln89_fu_4689_p2() {
    icmp_ln89_fu_4689_p2 = (!indvar_flatten19_reg_2291.read().is_01() || !ap_const_lv13_1800.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten19_reg_2291.read() == ap_const_lv13_1800);
}

void ResNet::thread_icmp_ln90_fu_4701_p2() {
    icmp_ln90_fu_4701_p2 = (!indvar_flatten_reg_2314.read().is_01() || !ap_const_lv9_C0.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_2314.read() == ap_const_lv9_C0);
}

void ResNet::thread_icmp_ln91_fu_4762_p2() {
    icmp_ln91_fu_4762_p2 = (!ap_phi_mux_cbb_0_phi_fu_2341_p4.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_cbb_0_phi_fu_2341_p4.read() == ap_const_lv3_6);
}

void ResNet::thread_image_buf_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        image_buf_0_V_address0 =  (sc_lv<10>) (zext_ln321_fu_4862_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_0_V_address0 = grp_biconv16_fu_3804_bottom_0_V_address0.read();
    } else {
        image_buf_0_V_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_image_buf_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        image_buf_0_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_0_V_ce0 = grp_biconv16_fu_3804_bottom_0_V_ce0.read();
    } else {
        image_buf_0_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_0_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_0_V_ce1 = grp_biconv16_fu_3804_bottom_0_V_ce1.read();
    } else {
        image_buf_0_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,3,3>(select_ln93_reg_21673_pp0_iter9_reg.read(), ap_const_lv3_0))) {
        image_buf_0_V_we0 = ap_const_logic_1;
    } else {
        image_buf_0_V_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        image_buf_1_V_address0 =  (sc_lv<10>) (zext_ln321_fu_4862_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_1_V_address0 = grp_biconv16_fu_3804_bottom_1_V_address0.read();
    } else {
        image_buf_1_V_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_image_buf_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        image_buf_1_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_1_V_ce0 = grp_biconv16_fu_3804_bottom_1_V_ce0.read();
    } else {
        image_buf_1_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_1_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_1_V_ce1 = grp_biconv16_fu_3804_bottom_1_V_ce1.read();
    } else {
        image_buf_1_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,3,3>(select_ln93_reg_21673_pp0_iter9_reg.read(), ap_const_lv3_1))) {
        image_buf_1_V_we0 = ap_const_logic_1;
    } else {
        image_buf_1_V_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        image_buf_2_V_address0 =  (sc_lv<10>) (zext_ln321_fu_4862_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_2_V_address0 = grp_biconv16_fu_3804_bottom_2_V_address0.read();
    } else {
        image_buf_2_V_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_image_buf_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        image_buf_2_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_2_V_ce0 = grp_biconv16_fu_3804_bottom_2_V_ce0.read();
    } else {
        image_buf_2_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_2_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_2_V_ce1 = grp_biconv16_fu_3804_bottom_2_V_ce1.read();
    } else {
        image_buf_2_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,3,3>(select_ln93_reg_21673_pp0_iter9_reg.read(), ap_const_lv3_2))) {
        image_buf_2_V_we0 = ap_const_logic_1;
    } else {
        image_buf_2_V_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        image_buf_3_V_address0 =  (sc_lv<10>) (zext_ln321_fu_4862_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_3_V_address0 = grp_biconv16_fu_3804_bottom_3_V_address0.read();
    } else {
        image_buf_3_V_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_image_buf_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        image_buf_3_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_3_V_ce0 = grp_biconv16_fu_3804_bottom_3_V_ce0.read();
    } else {
        image_buf_3_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_3_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_3_V_ce1 = grp_biconv16_fu_3804_bottom_3_V_ce1.read();
    } else {
        image_buf_3_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,3,3>(select_ln93_reg_21673_pp0_iter9_reg.read(), ap_const_lv3_3))) {
        image_buf_3_V_we0 = ap_const_logic_1;
    } else {
        image_buf_3_V_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        image_buf_4_V_address0 =  (sc_lv<10>) (zext_ln321_fu_4862_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_4_V_address0 = grp_biconv16_fu_3804_bottom_4_V_address0.read();
    } else {
        image_buf_4_V_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_image_buf_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        image_buf_4_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_4_V_ce0 = grp_biconv16_fu_3804_bottom_4_V_ce0.read();
    } else {
        image_buf_4_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_4_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_4_V_ce1 = grp_biconv16_fu_3804_bottom_4_V_ce1.read();
    } else {
        image_buf_4_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,3,3>(select_ln93_reg_21673_pp0_iter9_reg.read(), ap_const_lv3_4))) {
        image_buf_4_V_we0 = ap_const_logic_1;
    } else {
        image_buf_4_V_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        image_buf_5_V_address0 =  (sc_lv<10>) (zext_ln321_fu_4862_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_5_V_address0 = grp_biconv16_fu_3804_bottom_5_V_address0.read();
    } else {
        image_buf_5_V_address0 = "XXXXXXXXXX";
    }
}

void ResNet::thread_image_buf_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        image_buf_5_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_5_V_ce0 = grp_biconv16_fu_3804_bottom_5_V_ce0.read();
    } else {
        image_buf_5_V_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_5_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        image_buf_5_V_ce1 = grp_biconv16_fu_3804_bottom_5_V_ce1.read();
    } else {
        image_buf_5_V_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_image_buf_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         ((esl_seteq<1,3,3>(select_ln93_reg_21673_pp0_iter9_reg.read(), ap_const_lv3_7) || 
           esl_seteq<1,3,3>(select_ln93_reg_21673_pp0_iter9_reg.read(), ap_const_lv3_6)) || 
          esl_seteq<1,3,3>(select_ln93_reg_21673_pp0_iter9_reg.read(), ap_const_lv3_5)))) {
        image_buf_5_V_we0 = ap_const_logic_1;
    } else {
        image_buf_5_V_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_input_buf_V_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        input_buf_V_1_address0 = grp_pgconv64_32u_s_fu_4625_bottom1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        input_buf_V_1_address0 = grp_pgconv64_16u_s_fu_4585_bottom1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        input_buf_V_1_address0 = grp_fill_fm_buf_fu_4436_input_buf_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        input_buf_V_1_address0 = grp_pgconv64s2_16u_s_fu_4392_bottom1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        input_buf_V_1_address0 = grp_pgconv64_64u_s_fu_4255_bottom1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        input_buf_V_1_address0 = grp_pgconv64s2_32u_s_fu_3758_bottom1_V_address0.read();
    } else {
        input_buf_V_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_input_buf_V_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        input_buf_V_1_address1 = grp_pgconv64_32u_s_fu_4625_bottom1_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        input_buf_V_1_address1 = grp_pgconv64_16u_s_fu_4585_bottom1_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        input_buf_V_1_address1 = grp_pgconv64s2_16u_s_fu_4392_bottom1_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        input_buf_V_1_address1 = grp_pgconv64_64u_s_fu_4255_bottom1_V_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        input_buf_V_1_address1 = grp_pgconv64s2_32u_s_fu_3758_bottom1_V_address1.read();
    } else {
        input_buf_V_1_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_input_buf_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        input_buf_V_1_ce0 = grp_pgconv64_32u_s_fu_4625_bottom1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        input_buf_V_1_ce0 = grp_pgconv64_16u_s_fu_4585_bottom1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        input_buf_V_1_ce0 = grp_fill_fm_buf_fu_4436_input_buf_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        input_buf_V_1_ce0 = grp_pgconv64s2_16u_s_fu_4392_bottom1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        input_buf_V_1_ce0 = grp_pgconv64_64u_s_fu_4255_bottom1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        input_buf_V_1_ce0 = grp_pgconv64s2_32u_s_fu_3758_bottom1_V_ce0.read();
    } else {
        input_buf_V_1_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_input_buf_V_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        input_buf_V_1_ce1 = grp_pgconv64_32u_s_fu_4625_bottom1_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        input_buf_V_1_ce1 = grp_pgconv64_16u_s_fu_4585_bottom1_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        input_buf_V_1_ce1 = grp_pgconv64s2_16u_s_fu_4392_bottom1_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        input_buf_V_1_ce1 = grp_pgconv64_64u_s_fu_4255_bottom1_V_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        input_buf_V_1_ce1 = grp_pgconv64s2_32u_s_fu_3758_bottom1_V_ce1.read();
    } else {
        input_buf_V_1_ce1 = ap_const_logic_0;
    }
}

void ResNet::thread_input_buf_V_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()))) {
        input_buf_V_1_we0 = grp_fill_fm_buf_fu_4436_input_buf_V_1_we0.read();
    } else {
        input_buf_V_1_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_j_fu_11709_p2() {
    j_fu_11709_p2 = (!select_ln598_fu_11585_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(select_ln598_fu_11585_p3.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ResNet::thread_linear_buf_0_V_fu_11797_p3() {
    linear_buf_0_V_fu_11797_p3 = (!or_ln340_296_fu_11775_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_296_fu_11775_p2.read()[0].to_bool())? select_ln340_66_fu_11781_p3.read(): select_ln388_68_fu_11789_p3.read());
}

void ResNet::thread_linear_buf_10_V_fu_12697_p3() {
    linear_buf_10_V_fu_12697_p3 = (!or_ln340_306_fu_12675_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_306_fu_12675_p2.read()[0].to_bool())? select_ln340_88_fu_12681_p3.read(): select_ln388_79_fu_12689_p3.read());
}

void ResNet::thread_linear_buf_11_V_fu_12787_p3() {
    linear_buf_11_V_fu_12787_p3 = (!or_ln340_307_fu_12765_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_307_fu_12765_p2.read()[0].to_bool())? select_ln340_90_fu_12771_p3.read(): select_ln388_80_fu_12779_p3.read());
}

void ResNet::thread_linear_buf_12_V_fu_12877_p3() {
    linear_buf_12_V_fu_12877_p3 = (!or_ln340_308_fu_12855_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_308_fu_12855_p2.read()[0].to_bool())? select_ln340_92_fu_12861_p3.read(): select_ln388_81_fu_12869_p3.read());
}

void ResNet::thread_linear_buf_13_V_fu_12967_p3() {
    linear_buf_13_V_fu_12967_p3 = (!or_ln340_309_fu_12945_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_309_fu_12945_p2.read()[0].to_bool())? select_ln340_94_fu_12951_p3.read(): select_ln388_82_fu_12959_p3.read());
}

void ResNet::thread_linear_buf_14_V_fu_13057_p3() {
    linear_buf_14_V_fu_13057_p3 = (!or_ln340_310_fu_13035_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_310_fu_13035_p2.read()[0].to_bool())? select_ln340_96_fu_13041_p3.read(): select_ln388_83_fu_13049_p3.read());
}

void ResNet::thread_linear_buf_15_V_fu_13147_p3() {
    linear_buf_15_V_fu_13147_p3 = (!or_ln340_311_fu_13125_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_311_fu_13125_p2.read()[0].to_bool())? select_ln340_98_fu_13131_p3.read(): select_ln388_84_fu_13139_p3.read());
}

void ResNet::thread_linear_buf_16_V_fu_13237_p3() {
    linear_buf_16_V_fu_13237_p3 = (!or_ln340_312_fu_13215_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_312_fu_13215_p2.read()[0].to_bool())? select_ln340_100_fu_13221_p3.read(): select_ln388_85_fu_13229_p3.read());
}

void ResNet::thread_linear_buf_17_V_fu_13327_p3() {
    linear_buf_17_V_fu_13327_p3 = (!or_ln340_313_fu_13305_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_313_fu_13305_p2.read()[0].to_bool())? select_ln340_102_fu_13311_p3.read(): select_ln388_86_fu_13319_p3.read());
}

void ResNet::thread_linear_buf_18_V_fu_13417_p3() {
    linear_buf_18_V_fu_13417_p3 = (!or_ln340_314_fu_13395_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_314_fu_13395_p2.read()[0].to_bool())? select_ln340_104_fu_13401_p3.read(): select_ln388_87_fu_13409_p3.read());
}

void ResNet::thread_linear_buf_19_V_fu_13507_p3() {
    linear_buf_19_V_fu_13507_p3 = (!or_ln340_315_fu_13485_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_315_fu_13485_p2.read()[0].to_bool())? select_ln340_106_fu_13491_p3.read(): select_ln388_88_fu_13499_p3.read());
}

void ResNet::thread_linear_buf_1_V_fu_11887_p3() {
    linear_buf_1_V_fu_11887_p3 = (!or_ln340_297_fu_11865_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_297_fu_11865_p2.read()[0].to_bool())? select_ln340_69_fu_11871_p3.read(): select_ln388_70_fu_11879_p3.read());
}

void ResNet::thread_linear_buf_20_V_fu_13597_p3() {
    linear_buf_20_V_fu_13597_p3 = (!or_ln340_316_fu_13575_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_316_fu_13575_p2.read()[0].to_bool())? select_ln340_108_fu_13581_p3.read(): select_ln388_89_fu_13589_p3.read());
}

void ResNet::thread_linear_buf_21_V_fu_13687_p3() {
    linear_buf_21_V_fu_13687_p3 = (!or_ln340_317_fu_13665_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_317_fu_13665_p2.read()[0].to_bool())? select_ln340_110_fu_13671_p3.read(): select_ln388_90_fu_13679_p3.read());
}

void ResNet::thread_linear_buf_22_V_fu_13777_p3() {
    linear_buf_22_V_fu_13777_p3 = (!or_ln340_318_fu_13755_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_318_fu_13755_p2.read()[0].to_bool())? select_ln340_112_fu_13761_p3.read(): select_ln388_91_fu_13769_p3.read());
}

void ResNet::thread_linear_buf_23_V_fu_13867_p3() {
    linear_buf_23_V_fu_13867_p3 = (!or_ln340_319_fu_13845_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_319_fu_13845_p2.read()[0].to_bool())? select_ln340_114_fu_13851_p3.read(): select_ln388_92_fu_13859_p3.read());
}

void ResNet::thread_linear_buf_24_V_fu_13957_p3() {
    linear_buf_24_V_fu_13957_p3 = (!or_ln340_320_fu_13935_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_320_fu_13935_p2.read()[0].to_bool())? select_ln340_116_fu_13941_p3.read(): select_ln388_93_fu_13949_p3.read());
}

void ResNet::thread_linear_buf_25_V_fu_14047_p3() {
    linear_buf_25_V_fu_14047_p3 = (!or_ln340_321_fu_14025_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_321_fu_14025_p2.read()[0].to_bool())? select_ln340_118_fu_14031_p3.read(): select_ln388_94_fu_14039_p3.read());
}

void ResNet::thread_linear_buf_26_V_fu_14137_p3() {
    linear_buf_26_V_fu_14137_p3 = (!or_ln340_322_fu_14115_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_322_fu_14115_p2.read()[0].to_bool())? select_ln340_120_fu_14121_p3.read(): select_ln388_95_fu_14129_p3.read());
}

void ResNet::thread_linear_buf_27_V_fu_14227_p3() {
    linear_buf_27_V_fu_14227_p3 = (!or_ln340_323_fu_14205_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_323_fu_14205_p2.read()[0].to_bool())? select_ln340_122_fu_14211_p3.read(): select_ln388_96_fu_14219_p3.read());
}

void ResNet::thread_linear_buf_28_V_fu_14317_p3() {
    linear_buf_28_V_fu_14317_p3 = (!or_ln340_324_fu_14295_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_324_fu_14295_p2.read()[0].to_bool())? select_ln340_124_fu_14301_p3.read(): select_ln388_97_fu_14309_p3.read());
}

void ResNet::thread_linear_buf_29_V_fu_14407_p3() {
    linear_buf_29_V_fu_14407_p3 = (!or_ln340_325_fu_14385_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_325_fu_14385_p2.read()[0].to_bool())? select_ln340_126_fu_14391_p3.read(): select_ln388_98_fu_14399_p3.read());
}

void ResNet::thread_linear_buf_2_V_fu_11977_p3() {
    linear_buf_2_V_fu_11977_p3 = (!or_ln340_298_fu_11955_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_298_fu_11955_p2.read()[0].to_bool())? select_ln340_71_fu_11961_p3.read(): select_ln388_71_fu_11969_p3.read());
}

void ResNet::thread_linear_buf_30_V_fu_14497_p3() {
    linear_buf_30_V_fu_14497_p3 = (!or_ln340_326_fu_14475_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_326_fu_14475_p2.read()[0].to_bool())? select_ln340_128_fu_14481_p3.read(): select_ln388_99_fu_14489_p3.read());
}

void ResNet::thread_linear_buf_31_V_fu_14587_p3() {
    linear_buf_31_V_fu_14587_p3 = (!or_ln340_327_fu_14565_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_327_fu_14565_p2.read()[0].to_bool())? select_ln340_130_fu_14571_p3.read(): select_ln388_100_fu_14579_p3.read());
}

void ResNet::thread_linear_buf_32_V_fu_14677_p3() {
    linear_buf_32_V_fu_14677_p3 = (!or_ln340_328_fu_14655_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_328_fu_14655_p2.read()[0].to_bool())? select_ln340_132_fu_14661_p3.read(): select_ln388_101_fu_14669_p3.read());
}

void ResNet::thread_linear_buf_33_V_fu_14767_p3() {
    linear_buf_33_V_fu_14767_p3 = (!or_ln340_329_fu_14745_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_329_fu_14745_p2.read()[0].to_bool())? select_ln340_134_fu_14751_p3.read(): select_ln388_102_fu_14759_p3.read());
}

void ResNet::thread_linear_buf_34_V_fu_14857_p3() {
    linear_buf_34_V_fu_14857_p3 = (!or_ln340_330_fu_14835_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_330_fu_14835_p2.read()[0].to_bool())? select_ln340_136_fu_14841_p3.read(): select_ln388_103_fu_14849_p3.read());
}

void ResNet::thread_linear_buf_35_V_fu_14947_p3() {
    linear_buf_35_V_fu_14947_p3 = (!or_ln340_331_fu_14925_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_331_fu_14925_p2.read()[0].to_bool())? select_ln340_138_fu_14931_p3.read(): select_ln388_104_fu_14939_p3.read());
}

void ResNet::thread_linear_buf_36_V_fu_15037_p3() {
    linear_buf_36_V_fu_15037_p3 = (!or_ln340_332_fu_15015_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_332_fu_15015_p2.read()[0].to_bool())? select_ln340_140_fu_15021_p3.read(): select_ln388_105_fu_15029_p3.read());
}

void ResNet::thread_linear_buf_37_V_fu_15127_p3() {
    linear_buf_37_V_fu_15127_p3 = (!or_ln340_333_fu_15105_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_333_fu_15105_p2.read()[0].to_bool())? select_ln340_142_fu_15111_p3.read(): select_ln388_106_fu_15119_p3.read());
}

void ResNet::thread_linear_buf_38_V_fu_15217_p3() {
    linear_buf_38_V_fu_15217_p3 = (!or_ln340_334_fu_15195_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_334_fu_15195_p2.read()[0].to_bool())? select_ln340_144_fu_15201_p3.read(): select_ln388_107_fu_15209_p3.read());
}

void ResNet::thread_linear_buf_39_V_fu_15307_p3() {
    linear_buf_39_V_fu_15307_p3 = (!or_ln340_335_fu_15285_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_335_fu_15285_p2.read()[0].to_bool())? select_ln340_146_fu_15291_p3.read(): select_ln388_108_fu_15299_p3.read());
}

void ResNet::thread_linear_buf_3_V_fu_12067_p3() {
    linear_buf_3_V_fu_12067_p3 = (!or_ln340_299_fu_12045_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_299_fu_12045_p2.read()[0].to_bool())? select_ln340_74_fu_12051_p3.read(): select_ln388_72_fu_12059_p3.read());
}

void ResNet::thread_linear_buf_40_V_fu_15397_p3() {
    linear_buf_40_V_fu_15397_p3 = (!or_ln340_336_fu_15375_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_336_fu_15375_p2.read()[0].to_bool())? select_ln340_148_fu_15381_p3.read(): select_ln388_109_fu_15389_p3.read());
}

void ResNet::thread_linear_buf_41_V_fu_15487_p3() {
    linear_buf_41_V_fu_15487_p3 = (!or_ln340_337_fu_15465_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_337_fu_15465_p2.read()[0].to_bool())? select_ln340_150_fu_15471_p3.read(): select_ln388_110_fu_15479_p3.read());
}

void ResNet::thread_linear_buf_42_V_fu_15577_p3() {
    linear_buf_42_V_fu_15577_p3 = (!or_ln340_338_fu_15555_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_338_fu_15555_p2.read()[0].to_bool())? select_ln340_152_fu_15561_p3.read(): select_ln388_111_fu_15569_p3.read());
}

void ResNet::thread_linear_buf_43_V_fu_15667_p3() {
    linear_buf_43_V_fu_15667_p3 = (!or_ln340_339_fu_15645_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_339_fu_15645_p2.read()[0].to_bool())? select_ln340_154_fu_15651_p3.read(): select_ln388_112_fu_15659_p3.read());
}

void ResNet::thread_linear_buf_44_V_fu_15757_p3() {
    linear_buf_44_V_fu_15757_p3 = (!or_ln340_340_fu_15735_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_340_fu_15735_p2.read()[0].to_bool())? select_ln340_156_fu_15741_p3.read(): select_ln388_113_fu_15749_p3.read());
}

void ResNet::thread_linear_buf_45_V_fu_15847_p3() {
    linear_buf_45_V_fu_15847_p3 = (!or_ln340_341_fu_15825_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_341_fu_15825_p2.read()[0].to_bool())? select_ln340_158_fu_15831_p3.read(): select_ln388_114_fu_15839_p3.read());
}

void ResNet::thread_linear_buf_46_V_fu_15937_p3() {
    linear_buf_46_V_fu_15937_p3 = (!or_ln340_342_fu_15915_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_342_fu_15915_p2.read()[0].to_bool())? select_ln340_160_fu_15921_p3.read(): select_ln388_115_fu_15929_p3.read());
}

void ResNet::thread_linear_buf_47_V_fu_16027_p3() {
    linear_buf_47_V_fu_16027_p3 = (!or_ln340_343_fu_16005_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_343_fu_16005_p2.read()[0].to_bool())? select_ln340_162_fu_16011_p3.read(): select_ln388_116_fu_16019_p3.read());
}

void ResNet::thread_linear_buf_48_V_fu_16117_p3() {
    linear_buf_48_V_fu_16117_p3 = (!or_ln340_344_fu_16095_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_344_fu_16095_p2.read()[0].to_bool())? select_ln340_164_fu_16101_p3.read(): select_ln388_117_fu_16109_p3.read());
}

void ResNet::thread_linear_buf_49_V_fu_16207_p3() {
    linear_buf_49_V_fu_16207_p3 = (!or_ln340_345_fu_16185_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_345_fu_16185_p2.read()[0].to_bool())? select_ln340_166_fu_16191_p3.read(): select_ln388_118_fu_16199_p3.read());
}

void ResNet::thread_linear_buf_4_V_fu_12157_p3() {
    linear_buf_4_V_fu_12157_p3 = (!or_ln340_300_fu_12135_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_300_fu_12135_p2.read()[0].to_bool())? select_ln340_76_fu_12141_p3.read(): select_ln388_73_fu_12149_p3.read());
}

void ResNet::thread_linear_buf_50_V_fu_16297_p3() {
    linear_buf_50_V_fu_16297_p3 = (!or_ln340_346_fu_16275_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_346_fu_16275_p2.read()[0].to_bool())? select_ln340_168_fu_16281_p3.read(): select_ln388_119_fu_16289_p3.read());
}

void ResNet::thread_linear_buf_51_V_fu_16387_p3() {
    linear_buf_51_V_fu_16387_p3 = (!or_ln340_347_fu_16365_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_347_fu_16365_p2.read()[0].to_bool())? select_ln340_170_fu_16371_p3.read(): select_ln388_120_fu_16379_p3.read());
}

void ResNet::thread_linear_buf_52_V_fu_16477_p3() {
    linear_buf_52_V_fu_16477_p3 = (!or_ln340_348_fu_16455_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_348_fu_16455_p2.read()[0].to_bool())? select_ln340_172_fu_16461_p3.read(): select_ln388_121_fu_16469_p3.read());
}

void ResNet::thread_linear_buf_53_V_fu_16567_p3() {
    linear_buf_53_V_fu_16567_p3 = (!or_ln340_349_fu_16545_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_349_fu_16545_p2.read()[0].to_bool())? select_ln340_174_fu_16551_p3.read(): select_ln388_122_fu_16559_p3.read());
}

void ResNet::thread_linear_buf_54_V_fu_16657_p3() {
    linear_buf_54_V_fu_16657_p3 = (!or_ln340_350_fu_16635_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_350_fu_16635_p2.read()[0].to_bool())? select_ln340_176_fu_16641_p3.read(): select_ln388_123_fu_16649_p3.read());
}

void ResNet::thread_linear_buf_55_V_fu_16747_p3() {
    linear_buf_55_V_fu_16747_p3 = (!or_ln340_351_fu_16725_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_351_fu_16725_p2.read()[0].to_bool())? select_ln340_178_fu_16731_p3.read(): select_ln388_124_fu_16739_p3.read());
}

void ResNet::thread_linear_buf_56_V_fu_16837_p3() {
    linear_buf_56_V_fu_16837_p3 = (!or_ln340_352_fu_16815_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_352_fu_16815_p2.read()[0].to_bool())? select_ln340_180_fu_16821_p3.read(): select_ln388_125_fu_16829_p3.read());
}

void ResNet::thread_linear_buf_57_V_fu_16927_p3() {
    linear_buf_57_V_fu_16927_p3 = (!or_ln340_353_fu_16905_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_353_fu_16905_p2.read()[0].to_bool())? select_ln340_182_fu_16911_p3.read(): select_ln388_126_fu_16919_p3.read());
}

void ResNet::thread_linear_buf_58_V_fu_17017_p3() {
    linear_buf_58_V_fu_17017_p3 = (!or_ln340_354_fu_16995_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_354_fu_16995_p2.read()[0].to_bool())? select_ln340_184_fu_17001_p3.read(): select_ln388_127_fu_17009_p3.read());
}

void ResNet::thread_linear_buf_59_V_fu_17107_p3() {
    linear_buf_59_V_fu_17107_p3 = (!or_ln340_355_fu_17085_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_355_fu_17085_p2.read()[0].to_bool())? select_ln340_186_fu_17091_p3.read(): select_ln388_128_fu_17099_p3.read());
}

void ResNet::thread_linear_buf_5_V_fu_12247_p3() {
    linear_buf_5_V_fu_12247_p3 = (!or_ln340_301_fu_12225_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_301_fu_12225_p2.read()[0].to_bool())? select_ln340_78_fu_12231_p3.read(): select_ln388_74_fu_12239_p3.read());
}

void ResNet::thread_linear_buf_60_V_fu_17197_p3() {
    linear_buf_60_V_fu_17197_p3 = (!or_ln340_356_fu_17175_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_356_fu_17175_p2.read()[0].to_bool())? select_ln340_188_fu_17181_p3.read(): select_ln388_129_fu_17189_p3.read());
}

void ResNet::thread_linear_buf_61_V_fu_17287_p3() {
    linear_buf_61_V_fu_17287_p3 = (!or_ln340_357_fu_17265_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_357_fu_17265_p2.read()[0].to_bool())? select_ln340_190_fu_17271_p3.read(): select_ln388_130_fu_17279_p3.read());
}

void ResNet::thread_linear_buf_62_V_fu_17377_p3() {
    linear_buf_62_V_fu_17377_p3 = (!or_ln340_358_fu_17355_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_358_fu_17355_p2.read()[0].to_bool())? select_ln340_192_fu_17361_p3.read(): select_ln388_131_fu_17369_p3.read());
}

void ResNet::thread_linear_buf_63_V_fu_17467_p3() {
    linear_buf_63_V_fu_17467_p3 = (!or_ln340_359_fu_17445_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_359_fu_17445_p2.read()[0].to_bool())? select_ln340_194_fu_17451_p3.read(): select_ln388_132_fu_17459_p3.read());
}

void ResNet::thread_linear_buf_6_V_fu_12337_p3() {
    linear_buf_6_V_fu_12337_p3 = (!or_ln340_302_fu_12315_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_302_fu_12315_p2.read()[0].to_bool())? select_ln340_80_fu_12321_p3.read(): select_ln388_75_fu_12329_p3.read());
}

void ResNet::thread_linear_buf_7_V_fu_12427_p3() {
    linear_buf_7_V_fu_12427_p3 = (!or_ln340_303_fu_12405_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_303_fu_12405_p2.read()[0].to_bool())? select_ln340_82_fu_12411_p3.read(): select_ln388_76_fu_12419_p3.read());
}

void ResNet::thread_linear_buf_8_V_fu_12517_p3() {
    linear_buf_8_V_fu_12517_p3 = (!or_ln340_304_fu_12495_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_304_fu_12495_p2.read()[0].to_bool())? select_ln340_84_fu_12501_p3.read(): select_ln388_77_fu_12509_p3.read());
}

void ResNet::thread_linear_buf_9_V_fu_12607_p3() {
    linear_buf_9_V_fu_12607_p3 = (!or_ln340_305_fu_12585_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_305_fu_12585_p2.read()[0].to_bool())? select_ln340_86_fu_12591_p3.read(): select_ln388_78_fu_12599_p3.read());
}

void ResNet::thread_or_ln114_10_fu_5225_p2() {
    or_ln114_10_fu_5225_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_B);
}

void ResNet::thread_or_ln114_11_fu_5257_p2() {
    or_ln114_11_fu_5257_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_C);
}

void ResNet::thread_or_ln114_12_fu_5285_p2() {
    or_ln114_12_fu_5285_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_D);
}

void ResNet::thread_or_ln114_13_fu_5317_p2() {
    or_ln114_13_fu_5317_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_E);
}

void ResNet::thread_or_ln114_14_fu_5349_p2() {
    or_ln114_14_fu_5349_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_F);
}

void ResNet::thread_or_ln114_1_fu_4945_p2() {
    or_ln114_1_fu_4945_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_2);
}

void ResNet::thread_or_ln114_2_fu_4977_p2() {
    or_ln114_2_fu_4977_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_3);
}

void ResNet::thread_or_ln114_3_fu_5009_p2() {
    or_ln114_3_fu_5009_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_4);
}

void ResNet::thread_or_ln114_4_fu_5037_p2() {
    or_ln114_4_fu_5037_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_5);
}

void ResNet::thread_or_ln114_5_fu_5069_p2() {
    or_ln114_5_fu_5069_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_6);
}

void ResNet::thread_or_ln114_6_fu_5101_p2() {
    or_ln114_6_fu_5101_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_7);
}

void ResNet::thread_or_ln114_7_fu_5133_p2() {
    or_ln114_7_fu_5133_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_8);
}

void ResNet::thread_or_ln114_8_fu_5161_p2() {
    or_ln114_8_fu_5161_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_9);
}

void ResNet::thread_or_ln114_9_fu_5193_p2() {
    or_ln114_9_fu_5193_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_A);
}

void ResNet::thread_or_ln114_fu_4913_p2() {
    or_ln114_fu_4913_p2 = (shl_ln_fu_4883_p3.read() | ap_const_lv7_1);
}

void ResNet::thread_or_ln123_1_fu_6472_p2() {
    or_ln123_1_fu_6472_p2 = (icmp_ln123_fu_6284_p2.read() | xor_ln123_fu_6466_p2.read());
}

void ResNet::thread_or_ln123_fu_6400_p2() {
    or_ln123_fu_6400_p2 = (and_ln122_1_fu_6388_p2.read() | icmp_ln123_fu_6284_p2.read());
}

void ResNet::thread_or_ln124_1_fu_6496_p2() {
    or_ln124_1_fu_6496_p2 = (or_ln124_fu_6490_p2.read() | icmp_ln123_fu_6284_p2.read());
}

void ResNet::thread_or_ln124_fu_6490_p2() {
    or_ln124_fu_6490_p2 = (and_ln123_fu_6478_p2.read() | and_ln122_1_fu_6388_p2.read());
}

void ResNet::thread_or_ln129_1_fu_6456_p2() {
    or_ln129_1_fu_6456_p2 = (select_ln122_2_fu_6330_p3.read() | ap_const_lv5_1);
}

void ResNet::thread_or_ln129_fu_6350_p2() {
    or_ln129_fu_6350_p2 = (shl_ln129_mid1_fu_6322_p3.read() | ap_const_lv5_1);
}

void ResNet::thread_or_ln321_1_fu_5534_p2() {
    or_ln321_1_fu_5534_p2 = (trunc_ln321_1_fu_5531_p1.read() | select_ln114_1_fu_5413_p3.read());
}

void ResNet::thread_or_ln321_2_fu_5640_p2() {
    or_ln321_2_fu_5640_p2 = (trunc_ln321_2_fu_5637_p1.read() | select_ln114_1_fu_5413_p3.read());
}

void ResNet::thread_or_ln321_3_fu_5746_p2() {
    or_ln321_3_fu_5746_p2 = (trunc_ln321_3_fu_5743_p1.read() | select_ln114_1_fu_5413_p3.read());
}

void ResNet::thread_or_ln321_fu_5428_p2() {
    or_ln321_fu_5428_p2 = (trunc_ln321_fu_5425_p1.read() | select_ln114_1_fu_5413_p3.read());
}

void ResNet::thread_or_ln340_10_fu_10527_p2() {
    or_ln340_10_fu_10527_p2 = (and_ln786_169_fu_10522_p2.read() | and_ln785_64_fu_10505_p2.read());
}

void ResNet::thread_or_ln340_11_fu_10614_p2() {
    or_ln340_11_fu_10614_p2 = (and_ln786_170_fu_10609_p2.read() | and_ln785_65_fu_10592_p2.read());
}

void ResNet::thread_or_ln340_12_fu_10701_p2() {
    or_ln340_12_fu_10701_p2 = (and_ln786_172_fu_10696_p2.read() | and_ln785_66_fu_10679_p2.read());
}

void ResNet::thread_or_ln340_13_fu_10788_p2() {
    or_ln340_13_fu_10788_p2 = (and_ln786_173_fu_10783_p2.read() | and_ln785_67_fu_10766_p2.read());
}

void ResNet::thread_or_ln340_14_fu_10875_p2() {
    or_ln340_14_fu_10875_p2 = (and_ln786_175_fu_10870_p2.read() | and_ln785_68_fu_10853_p2.read());
}

void ResNet::thread_or_ln340_15_fu_10962_p2() {
    or_ln340_15_fu_10962_p2 = (and_ln786_177_fu_10957_p2.read() | and_ln785_69_fu_10940_p2.read());
}

void ResNet::thread_or_ln340_1_fu_9744_p2() {
    or_ln340_1_fu_9744_p2 = (and_ln786_156_fu_9739_p2.read() | and_ln785_55_fu_9722_p2.read());
}

void ResNet::thread_or_ln340_264_fu_9663_p2() {
    or_ln340_264_fu_9663_p2 = (and_ln786_reg_22193.read() | xor_ln785_113_fu_9630_p2.read());
}

void ResNet::thread_or_ln340_265_fu_9668_p2() {
    or_ln340_265_fu_9668_p2 = (or_ln340_264_fu_9663_p2.read() | and_ln781_fu_9615_p2.read());
}

void ResNet::thread_or_ln340_266_fu_9750_p2() {
    or_ln340_266_fu_9750_p2 = (and_ln786_1_reg_22233.read() | xor_ln785_114_fu_9717_p2.read());
}

void ResNet::thread_or_ln340_267_fu_9755_p2() {
    or_ln340_267_fu_9755_p2 = (or_ln340_266_fu_9750_p2.read() | and_ln781_1_fu_9702_p2.read());
}

void ResNet::thread_or_ln340_268_fu_9837_p2() {
    or_ln340_268_fu_9837_p2 = (and_ln786_2_reg_22273.read() | xor_ln785_115_fu_9804_p2.read());
}

void ResNet::thread_or_ln340_269_fu_9842_p2() {
    or_ln340_269_fu_9842_p2 = (or_ln340_268_fu_9837_p2.read() | and_ln781_2_fu_9789_p2.read());
}

void ResNet::thread_or_ln340_270_fu_9924_p2() {
    or_ln340_270_fu_9924_p2 = (and_ln786_3_reg_22313.read() | xor_ln785_116_fu_9891_p2.read());
}

void ResNet::thread_or_ln340_271_fu_9929_p2() {
    or_ln340_271_fu_9929_p2 = (or_ln340_270_fu_9924_p2.read() | and_ln781_3_fu_9876_p2.read());
}

void ResNet::thread_or_ln340_272_fu_10011_p2() {
    or_ln340_272_fu_10011_p2 = (and_ln786_4_reg_22353.read() | xor_ln785_117_fu_9978_p2.read());
}

void ResNet::thread_or_ln340_273_fu_10016_p2() {
    or_ln340_273_fu_10016_p2 = (or_ln340_272_fu_10011_p2.read() | and_ln781_4_fu_9963_p2.read());
}

void ResNet::thread_or_ln340_274_fu_10098_p2() {
    or_ln340_274_fu_10098_p2 = (and_ln786_5_reg_22393.read() | xor_ln785_118_fu_10065_p2.read());
}

void ResNet::thread_or_ln340_275_fu_10103_p2() {
    or_ln340_275_fu_10103_p2 = (or_ln340_274_fu_10098_p2.read() | and_ln781_5_fu_10050_p2.read());
}

void ResNet::thread_or_ln340_276_fu_10185_p2() {
    or_ln340_276_fu_10185_p2 = (and_ln786_6_reg_22433.read() | xor_ln785_119_fu_10152_p2.read());
}

void ResNet::thread_or_ln340_277_fu_10190_p2() {
    or_ln340_277_fu_10190_p2 = (or_ln340_276_fu_10185_p2.read() | and_ln781_6_fu_10137_p2.read());
}

void ResNet::thread_or_ln340_278_fu_10272_p2() {
    or_ln340_278_fu_10272_p2 = (and_ln786_7_reg_22473.read() | xor_ln785_120_fu_10239_p2.read());
}

void ResNet::thread_or_ln340_279_fu_10277_p2() {
    or_ln340_279_fu_10277_p2 = (or_ln340_278_fu_10272_p2.read() | and_ln781_7_fu_10224_p2.read());
}

void ResNet::thread_or_ln340_280_fu_10359_p2() {
    or_ln340_280_fu_10359_p2 = (and_ln786_8_reg_22513.read() | xor_ln785_121_fu_10326_p2.read());
}

void ResNet::thread_or_ln340_281_fu_10364_p2() {
    or_ln340_281_fu_10364_p2 = (or_ln340_280_fu_10359_p2.read() | and_ln781_8_fu_10311_p2.read());
}

void ResNet::thread_or_ln340_282_fu_10446_p2() {
    or_ln340_282_fu_10446_p2 = (and_ln786_9_reg_22553.read() | xor_ln785_122_fu_10413_p2.read());
}

void ResNet::thread_or_ln340_283_fu_10451_p2() {
    or_ln340_283_fu_10451_p2 = (or_ln340_282_fu_10446_p2.read() | and_ln781_9_fu_10398_p2.read());
}

void ResNet::thread_or_ln340_284_fu_10533_p2() {
    or_ln340_284_fu_10533_p2 = (and_ln786_10_reg_22593.read() | xor_ln785_123_fu_10500_p2.read());
}

void ResNet::thread_or_ln340_285_fu_10538_p2() {
    or_ln340_285_fu_10538_p2 = (or_ln340_284_fu_10533_p2.read() | and_ln781_10_fu_10485_p2.read());
}

void ResNet::thread_or_ln340_286_fu_10620_p2() {
    or_ln340_286_fu_10620_p2 = (and_ln786_11_reg_22633.read() | xor_ln785_125_fu_10587_p2.read());
}

void ResNet::thread_or_ln340_287_fu_10625_p2() {
    or_ln340_287_fu_10625_p2 = (or_ln340_286_fu_10620_p2.read() | and_ln781_11_fu_10572_p2.read());
}

void ResNet::thread_or_ln340_288_fu_10707_p2() {
    or_ln340_288_fu_10707_p2 = (and_ln786_12_reg_22673.read() | xor_ln785_127_fu_10674_p2.read());
}

void ResNet::thread_or_ln340_289_fu_10712_p2() {
    or_ln340_289_fu_10712_p2 = (or_ln340_288_fu_10707_p2.read() | and_ln781_12_fu_10659_p2.read());
}

void ResNet::thread_or_ln340_290_fu_10794_p2() {
    or_ln340_290_fu_10794_p2 = (and_ln786_13_reg_22713.read() | xor_ln785_129_fu_10761_p2.read());
}

void ResNet::thread_or_ln340_291_fu_10799_p2() {
    or_ln340_291_fu_10799_p2 = (or_ln340_290_fu_10794_p2.read() | and_ln781_13_fu_10746_p2.read());
}

void ResNet::thread_or_ln340_292_fu_10881_p2() {
    or_ln340_292_fu_10881_p2 = (and_ln786_14_reg_22753.read() | xor_ln785_130_fu_10848_p2.read());
}

void ResNet::thread_or_ln340_293_fu_10886_p2() {
    or_ln340_293_fu_10886_p2 = (or_ln340_292_fu_10881_p2.read() | and_ln781_14_fu_10833_p2.read());
}

void ResNet::thread_or_ln340_294_fu_10968_p2() {
    or_ln340_294_fu_10968_p2 = (and_ln786_15_reg_22793.read() | xor_ln785_131_fu_10935_p2.read());
}

void ResNet::thread_or_ln340_295_fu_10973_p2() {
    or_ln340_295_fu_10973_p2 = (or_ln340_294_fu_10968_p2.read() | and_ln781_15_fu_10920_p2.read());
}

void ResNet::thread_or_ln340_296_fu_11775_p2() {
    or_ln340_296_fu_11775_p2 = (tmp_920_fu_11743_p3.read() | xor_ln340_66_fu_11769_p2.read());
}

void ResNet::thread_or_ln340_297_fu_11865_p2() {
    or_ln340_297_fu_11865_p2 = (tmp_922_fu_11833_p3.read() | xor_ln340_68_fu_11859_p2.read());
}

void ResNet::thread_or_ln340_298_fu_11955_p2() {
    or_ln340_298_fu_11955_p2 = (tmp_924_fu_11923_p3.read() | xor_ln340_70_fu_11949_p2.read());
}

void ResNet::thread_or_ln340_299_fu_12045_p2() {
    or_ln340_299_fu_12045_p2 = (tmp_926_fu_12013_p3.read() | xor_ln340_73_fu_12039_p2.read());
}

void ResNet::thread_or_ln340_2_fu_9831_p2() {
    or_ln340_2_fu_9831_p2 = (and_ln786_157_fu_9826_p2.read() | and_ln785_56_fu_9809_p2.read());
}

void ResNet::thread_or_ln340_300_fu_12135_p2() {
    or_ln340_300_fu_12135_p2 = (tmp_928_fu_12103_p3.read() | xor_ln340_75_fu_12129_p2.read());
}

void ResNet::thread_or_ln340_301_fu_12225_p2() {
    or_ln340_301_fu_12225_p2 = (tmp_930_fu_12193_p3.read() | xor_ln340_77_fu_12219_p2.read());
}

void ResNet::thread_or_ln340_302_fu_12315_p2() {
    or_ln340_302_fu_12315_p2 = (tmp_932_fu_12283_p3.read() | xor_ln340_79_fu_12309_p2.read());
}

void ResNet::thread_or_ln340_303_fu_12405_p2() {
    or_ln340_303_fu_12405_p2 = (tmp_934_fu_12373_p3.read() | xor_ln340_81_fu_12399_p2.read());
}

void ResNet::thread_or_ln340_304_fu_12495_p2() {
    or_ln340_304_fu_12495_p2 = (tmp_936_fu_12463_p3.read() | xor_ln340_83_fu_12489_p2.read());
}

void ResNet::thread_or_ln340_305_fu_12585_p2() {
    or_ln340_305_fu_12585_p2 = (tmp_938_fu_12553_p3.read() | xor_ln340_85_fu_12579_p2.read());
}

void ResNet::thread_or_ln340_306_fu_12675_p2() {
    or_ln340_306_fu_12675_p2 = (tmp_940_fu_12643_p3.read() | xor_ln340_87_fu_12669_p2.read());
}

void ResNet::thread_or_ln340_307_fu_12765_p2() {
    or_ln340_307_fu_12765_p2 = (tmp_942_fu_12733_p3.read() | xor_ln340_89_fu_12759_p2.read());
}

void ResNet::thread_or_ln340_308_fu_12855_p2() {
    or_ln340_308_fu_12855_p2 = (tmp_944_fu_12823_p3.read() | xor_ln340_91_fu_12849_p2.read());
}

void ResNet::thread_or_ln340_309_fu_12945_p2() {
    or_ln340_309_fu_12945_p2 = (tmp_946_fu_12913_p3.read() | xor_ln340_93_fu_12939_p2.read());
}

void ResNet::thread_or_ln340_310_fu_13035_p2() {
    or_ln340_310_fu_13035_p2 = (tmp_948_fu_13003_p3.read() | xor_ln340_95_fu_13029_p2.read());
}

void ResNet::thread_or_ln340_311_fu_13125_p2() {
    or_ln340_311_fu_13125_p2 = (tmp_950_fu_13093_p3.read() | xor_ln340_97_fu_13119_p2.read());
}

void ResNet::thread_or_ln340_312_fu_13215_p2() {
    or_ln340_312_fu_13215_p2 = (tmp_952_fu_13183_p3.read() | xor_ln340_99_fu_13209_p2.read());
}

void ResNet::thread_or_ln340_313_fu_13305_p2() {
    or_ln340_313_fu_13305_p2 = (tmp_954_fu_13273_p3.read() | xor_ln340_101_fu_13299_p2.read());
}

void ResNet::thread_or_ln340_314_fu_13395_p2() {
    or_ln340_314_fu_13395_p2 = (tmp_956_fu_13363_p3.read() | xor_ln340_103_fu_13389_p2.read());
}

void ResNet::thread_or_ln340_315_fu_13485_p2() {
    or_ln340_315_fu_13485_p2 = (tmp_958_fu_13453_p3.read() | xor_ln340_105_fu_13479_p2.read());
}

void ResNet::thread_or_ln340_316_fu_13575_p2() {
    or_ln340_316_fu_13575_p2 = (tmp_960_fu_13543_p3.read() | xor_ln340_107_fu_13569_p2.read());
}

void ResNet::thread_or_ln340_317_fu_13665_p2() {
    or_ln340_317_fu_13665_p2 = (tmp_962_fu_13633_p3.read() | xor_ln340_109_fu_13659_p2.read());
}

void ResNet::thread_or_ln340_318_fu_13755_p2() {
    or_ln340_318_fu_13755_p2 = (tmp_964_fu_13723_p3.read() | xor_ln340_111_fu_13749_p2.read());
}

void ResNet::thread_or_ln340_319_fu_13845_p2() {
    or_ln340_319_fu_13845_p2 = (tmp_966_fu_13813_p3.read() | xor_ln340_113_fu_13839_p2.read());
}

void ResNet::thread_or_ln340_320_fu_13935_p2() {
    or_ln340_320_fu_13935_p2 = (tmp_968_fu_13903_p3.read() | xor_ln340_115_fu_13929_p2.read());
}

void ResNet::thread_or_ln340_321_fu_14025_p2() {
    or_ln340_321_fu_14025_p2 = (tmp_970_fu_13993_p3.read() | xor_ln340_117_fu_14019_p2.read());
}

void ResNet::thread_or_ln340_322_fu_14115_p2() {
    or_ln340_322_fu_14115_p2 = (tmp_972_fu_14083_p3.read() | xor_ln340_119_fu_14109_p2.read());
}

void ResNet::thread_or_ln340_323_fu_14205_p2() {
    or_ln340_323_fu_14205_p2 = (tmp_974_fu_14173_p3.read() | xor_ln340_121_fu_14199_p2.read());
}

void ResNet::thread_or_ln340_324_fu_14295_p2() {
    or_ln340_324_fu_14295_p2 = (tmp_976_fu_14263_p3.read() | xor_ln340_123_fu_14289_p2.read());
}

void ResNet::thread_or_ln340_325_fu_14385_p2() {
    or_ln340_325_fu_14385_p2 = (tmp_978_fu_14353_p3.read() | xor_ln340_125_fu_14379_p2.read());
}

void ResNet::thread_or_ln340_326_fu_14475_p2() {
    or_ln340_326_fu_14475_p2 = (tmp_980_fu_14443_p3.read() | xor_ln340_127_fu_14469_p2.read());
}

void ResNet::thread_or_ln340_327_fu_14565_p2() {
    or_ln340_327_fu_14565_p2 = (tmp_982_fu_14533_p3.read() | xor_ln340_129_fu_14559_p2.read());
}

void ResNet::thread_or_ln340_328_fu_14655_p2() {
    or_ln340_328_fu_14655_p2 = (tmp_984_fu_14623_p3.read() | xor_ln340_131_fu_14649_p2.read());
}

void ResNet::thread_or_ln340_329_fu_14745_p2() {
    or_ln340_329_fu_14745_p2 = (tmp_986_fu_14713_p3.read() | xor_ln340_133_fu_14739_p2.read());
}

void ResNet::thread_or_ln340_330_fu_14835_p2() {
    or_ln340_330_fu_14835_p2 = (tmp_988_fu_14803_p3.read() | xor_ln340_135_fu_14829_p2.read());
}

void ResNet::thread_or_ln340_331_fu_14925_p2() {
    or_ln340_331_fu_14925_p2 = (tmp_990_fu_14893_p3.read() | xor_ln340_137_fu_14919_p2.read());
}

void ResNet::thread_or_ln340_332_fu_15015_p2() {
    or_ln340_332_fu_15015_p2 = (tmp_992_fu_14983_p3.read() | xor_ln340_139_fu_15009_p2.read());
}

void ResNet::thread_or_ln340_333_fu_15105_p2() {
    or_ln340_333_fu_15105_p2 = (tmp_994_fu_15073_p3.read() | xor_ln340_141_fu_15099_p2.read());
}

void ResNet::thread_or_ln340_334_fu_15195_p2() {
    or_ln340_334_fu_15195_p2 = (tmp_996_fu_15163_p3.read() | xor_ln340_143_fu_15189_p2.read());
}

void ResNet::thread_or_ln340_335_fu_15285_p2() {
    or_ln340_335_fu_15285_p2 = (tmp_998_fu_15253_p3.read() | xor_ln340_145_fu_15279_p2.read());
}

void ResNet::thread_or_ln340_336_fu_15375_p2() {
    or_ln340_336_fu_15375_p2 = (tmp_1000_fu_15343_p3.read() | xor_ln340_147_fu_15369_p2.read());
}

void ResNet::thread_or_ln340_337_fu_15465_p2() {
    or_ln340_337_fu_15465_p2 = (tmp_1002_fu_15433_p3.read() | xor_ln340_149_fu_15459_p2.read());
}

void ResNet::thread_or_ln340_338_fu_15555_p2() {
    or_ln340_338_fu_15555_p2 = (tmp_1004_fu_15523_p3.read() | xor_ln340_151_fu_15549_p2.read());
}

void ResNet::thread_or_ln340_339_fu_15645_p2() {
    or_ln340_339_fu_15645_p2 = (tmp_1006_fu_15613_p3.read() | xor_ln340_153_fu_15639_p2.read());
}

void ResNet::thread_or_ln340_340_fu_15735_p2() {
    or_ln340_340_fu_15735_p2 = (tmp_1008_fu_15703_p3.read() | xor_ln340_155_fu_15729_p2.read());
}

void ResNet::thread_or_ln340_341_fu_15825_p2() {
    or_ln340_341_fu_15825_p2 = (tmp_1010_fu_15793_p3.read() | xor_ln340_157_fu_15819_p2.read());
}

void ResNet::thread_or_ln340_342_fu_15915_p2() {
    or_ln340_342_fu_15915_p2 = (tmp_1012_fu_15883_p3.read() | xor_ln340_159_fu_15909_p2.read());
}

void ResNet::thread_or_ln340_343_fu_16005_p2() {
    or_ln340_343_fu_16005_p2 = (tmp_1014_fu_15973_p3.read() | xor_ln340_161_fu_15999_p2.read());
}

void ResNet::thread_or_ln340_344_fu_16095_p2() {
    or_ln340_344_fu_16095_p2 = (tmp_1016_fu_16063_p3.read() | xor_ln340_163_fu_16089_p2.read());
}

void ResNet::thread_or_ln340_345_fu_16185_p2() {
    or_ln340_345_fu_16185_p2 = (tmp_1018_fu_16153_p3.read() | xor_ln340_165_fu_16179_p2.read());
}

void ResNet::thread_or_ln340_346_fu_16275_p2() {
    or_ln340_346_fu_16275_p2 = (tmp_1020_fu_16243_p3.read() | xor_ln340_167_fu_16269_p2.read());
}

void ResNet::thread_or_ln340_347_fu_16365_p2() {
    or_ln340_347_fu_16365_p2 = (tmp_1022_fu_16333_p3.read() | xor_ln340_169_fu_16359_p2.read());
}

void ResNet::thread_or_ln340_348_fu_16455_p2() {
    or_ln340_348_fu_16455_p2 = (tmp_1024_fu_16423_p3.read() | xor_ln340_171_fu_16449_p2.read());
}

void ResNet::thread_or_ln340_349_fu_16545_p2() {
    or_ln340_349_fu_16545_p2 = (tmp_1026_fu_16513_p3.read() | xor_ln340_173_fu_16539_p2.read());
}

void ResNet::thread_or_ln340_350_fu_16635_p2() {
    or_ln340_350_fu_16635_p2 = (tmp_1028_fu_16603_p3.read() | xor_ln340_175_fu_16629_p2.read());
}

void ResNet::thread_or_ln340_351_fu_16725_p2() {
    or_ln340_351_fu_16725_p2 = (tmp_1030_fu_16693_p3.read() | xor_ln340_177_fu_16719_p2.read());
}

void ResNet::thread_or_ln340_352_fu_16815_p2() {
    or_ln340_352_fu_16815_p2 = (tmp_1032_fu_16783_p3.read() | xor_ln340_179_fu_16809_p2.read());
}

void ResNet::thread_or_ln340_353_fu_16905_p2() {
    or_ln340_353_fu_16905_p2 = (tmp_1034_fu_16873_p3.read() | xor_ln340_181_fu_16899_p2.read());
}

void ResNet::thread_or_ln340_354_fu_16995_p2() {
    or_ln340_354_fu_16995_p2 = (tmp_1036_fu_16963_p3.read() | xor_ln340_183_fu_16989_p2.read());
}

void ResNet::thread_or_ln340_355_fu_17085_p2() {
    or_ln340_355_fu_17085_p2 = (tmp_1038_fu_17053_p3.read() | xor_ln340_185_fu_17079_p2.read());
}

void ResNet::thread_or_ln340_356_fu_17175_p2() {
    or_ln340_356_fu_17175_p2 = (tmp_1040_fu_17143_p3.read() | xor_ln340_187_fu_17169_p2.read());
}

void ResNet::thread_or_ln340_357_fu_17265_p2() {
    or_ln340_357_fu_17265_p2 = (tmp_1042_fu_17233_p3.read() | xor_ln340_189_fu_17259_p2.read());
}

void ResNet::thread_or_ln340_358_fu_17355_p2() {
    or_ln340_358_fu_17355_p2 = (tmp_1044_fu_17323_p3.read() | xor_ln340_191_fu_17349_p2.read());
}

void ResNet::thread_or_ln340_359_fu_17445_p2() {
    or_ln340_359_fu_17445_p2 = (tmp_1046_fu_17413_p3.read() | xor_ln340_193_fu_17439_p2.read());
}

void ResNet::thread_or_ln340_3_fu_9918_p2() {
    or_ln340_3_fu_9918_p2 = (and_ln786_158_fu_9913_p2.read() | and_ln785_57_fu_9896_p2.read());
}

void ResNet::thread_or_ln340_4_fu_10005_p2() {
    or_ln340_4_fu_10005_p2 = (and_ln786_159_fu_10000_p2.read() | and_ln785_58_fu_9983_p2.read());
}

void ResNet::thread_or_ln340_5_fu_10092_p2() {
    or_ln340_5_fu_10092_p2 = (and_ln786_161_fu_10087_p2.read() | and_ln785_59_fu_10070_p2.read());
}

void ResNet::thread_or_ln340_6_fu_10179_p2() {
    or_ln340_6_fu_10179_p2 = (and_ln786_162_fu_10174_p2.read() | and_ln785_60_fu_10157_p2.read());
}

void ResNet::thread_or_ln340_7_fu_10266_p2() {
    or_ln340_7_fu_10266_p2 = (and_ln786_164_fu_10261_p2.read() | and_ln785_61_fu_10244_p2.read());
}

void ResNet::thread_or_ln340_8_fu_10353_p2() {
    or_ln340_8_fu_10353_p2 = (and_ln786_166_fu_10348_p2.read() | and_ln785_62_fu_10331_p2.read());
}

void ResNet::thread_or_ln340_9_fu_10440_p2() {
    or_ln340_9_fu_10440_p2 = (and_ln786_167_fu_10435_p2.read() | and_ln785_63_fu_10418_p2.read());
}

void ResNet::thread_or_ln340_fu_9657_p2() {
    or_ln340_fu_9657_p2 = (and_ln786_155_fu_9652_p2.read() | and_ln785_fu_9635_p2.read());
}

void ResNet::thread_or_ln785_10_fu_10495_p2() {
    or_ln785_10_fu_10495_p2 = (tmp_811_reg_22577.read() | xor_ln785_10_fu_10489_p2.read());
}

void ResNet::thread_or_ln785_11_fu_10582_p2() {
    or_ln785_11_fu_10582_p2 = (tmp_817_reg_22617.read() | xor_ln785_124_fu_10576_p2.read());
}

void ResNet::thread_or_ln785_12_fu_10669_p2() {
    or_ln785_12_fu_10669_p2 = (tmp_823_reg_22657.read() | xor_ln785_126_fu_10663_p2.read());
}

void ResNet::thread_or_ln785_13_fu_10756_p2() {
    or_ln785_13_fu_10756_p2 = (tmp_829_reg_22697.read() | xor_ln785_128_fu_10750_p2.read());
}

void ResNet::thread_or_ln785_14_fu_10843_p2() {
    or_ln785_14_fu_10843_p2 = (tmp_835_reg_22737.read() | xor_ln785_14_fu_10837_p2.read());
}

void ResNet::thread_or_ln785_15_fu_10930_p2() {
    or_ln785_15_fu_10930_p2 = (tmp_841_reg_22777.read() | xor_ln785_15_fu_10924_p2.read());
}

void ResNet::thread_or_ln785_1_fu_9712_p2() {
    or_ln785_1_fu_9712_p2 = (tmp_757_reg_22217.read() | xor_ln785_1_fu_9706_p2.read());
}

void ResNet::thread_or_ln785_2_fu_9799_p2() {
    or_ln785_2_fu_9799_p2 = (tmp_763_reg_22257.read() | xor_ln785_2_fu_9793_p2.read());
}

void ResNet::thread_or_ln785_3_fu_9886_p2() {
    or_ln785_3_fu_9886_p2 = (tmp_769_reg_22297.read() | xor_ln785_3_fu_9880_p2.read());
}

void ResNet::thread_or_ln785_4_fu_9973_p2() {
    or_ln785_4_fu_9973_p2 = (tmp_775_reg_22337.read() | xor_ln785_4_fu_9967_p2.read());
}

void ResNet::thread_or_ln785_55_fu_10147_p2() {
    or_ln785_55_fu_10147_p2 = (tmp_787_reg_22417.read() | xor_ln785_6_fu_10141_p2.read());
}

void ResNet::thread_or_ln785_56_fu_10234_p2() {
    or_ln785_56_fu_10234_p2 = (tmp_793_reg_22457.read() | xor_ln785_7_fu_10228_p2.read());
}

void ResNet::thread_or_ln785_5_fu_10060_p2() {
    or_ln785_5_fu_10060_p2 = (tmp_781_reg_22377.read() | xor_ln785_5_fu_10054_p2.read());
}

void ResNet::thread_or_ln785_8_fu_10321_p2() {
    or_ln785_8_fu_10321_p2 = (tmp_799_reg_22497.read() | xor_ln785_8_fu_10315_p2.read());
}

void ResNet::thread_or_ln785_9_fu_10408_p2() {
    or_ln785_9_fu_10408_p2 = (tmp_805_reg_22537.read() | xor_ln785_9_fu_10402_p2.read());
}

void ResNet::thread_or_ln785_fu_9625_p2() {
    or_ln785_fu_9625_p2 = (tmp_751_reg_22177.read() | xor_ln785_fu_9619_p2.read());
}

void ResNet::thread_or_ln786_55_fu_9728_p2() {
    or_ln786_55_fu_9728_p2 = (and_ln781_1_fu_9702_p2.read() | and_ln786_1_reg_22233.read());
}

void ResNet::thread_or_ln786_56_fu_9815_p2() {
    or_ln786_56_fu_9815_p2 = (and_ln781_2_fu_9789_p2.read() | and_ln786_2_reg_22273.read());
}

void ResNet::thread_or_ln786_57_fu_9902_p2() {
    or_ln786_57_fu_9902_p2 = (and_ln781_3_fu_9876_p2.read() | and_ln786_3_reg_22313.read());
}

void ResNet::thread_or_ln786_58_fu_9989_p2() {
    or_ln786_58_fu_9989_p2 = (and_ln781_4_fu_9963_p2.read() | and_ln786_4_reg_22353.read());
}

void ResNet::thread_or_ln786_59_fu_10076_p2() {
    or_ln786_59_fu_10076_p2 = (and_ln781_5_fu_10050_p2.read() | and_ln786_5_reg_22393.read());
}

void ResNet::thread_or_ln786_60_fu_10163_p2() {
    or_ln786_60_fu_10163_p2 = (and_ln781_6_fu_10137_p2.read() | and_ln786_6_reg_22433.read());
}

void ResNet::thread_or_ln786_61_fu_10250_p2() {
    or_ln786_61_fu_10250_p2 = (and_ln781_7_fu_10224_p2.read() | and_ln786_7_reg_22473.read());
}

void ResNet::thread_or_ln786_62_fu_10337_p2() {
    or_ln786_62_fu_10337_p2 = (and_ln781_8_fu_10311_p2.read() | and_ln786_8_reg_22513.read());
}

void ResNet::thread_or_ln786_63_fu_10424_p2() {
    or_ln786_63_fu_10424_p2 = (and_ln781_9_fu_10398_p2.read() | and_ln786_9_reg_22553.read());
}

void ResNet::thread_or_ln786_64_fu_10511_p2() {
    or_ln786_64_fu_10511_p2 = (and_ln781_10_fu_10485_p2.read() | and_ln786_10_reg_22593.read());
}

void ResNet::thread_or_ln786_65_fu_10598_p2() {
    or_ln786_65_fu_10598_p2 = (and_ln781_11_fu_10572_p2.read() | and_ln786_11_reg_22633.read());
}

void ResNet::thread_or_ln786_66_fu_10685_p2() {
    or_ln786_66_fu_10685_p2 = (and_ln781_12_fu_10659_p2.read() | and_ln786_12_reg_22673.read());
}

void ResNet::thread_or_ln786_67_fu_10772_p2() {
    or_ln786_67_fu_10772_p2 = (and_ln781_13_fu_10746_p2.read() | and_ln786_13_reg_22713.read());
}

void ResNet::thread_or_ln786_68_fu_10859_p2() {
    or_ln786_68_fu_10859_p2 = (and_ln781_14_fu_10833_p2.read() | and_ln786_14_reg_22753.read());
}

void ResNet::thread_or_ln786_69_fu_10946_p2() {
    or_ln786_69_fu_10946_p2 = (and_ln781_15_fu_10920_p2.read() | and_ln786_15_reg_22793.read());
}

void ResNet::thread_or_ln786_fu_9641_p2() {
    or_ln786_fu_9641_p2 = (and_ln781_fu_9615_p2.read() | and_ln786_reg_22193.read());
}

void ResNet::thread_or_ln93_fu_4780_p2() {
    or_ln93_fu_4780_p2 = (and_ln89_fu_4768_p2.read() | icmp_ln90_reg_21654.read());
}

void ResNet::thread_out_buf0_V_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_0_address0 = grp_pgconv64_32u_s_fu_4625_top_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_0_address0 = grp_pgconv64_16u_s_fu_4585_top_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_0_address0 = grp_pgconv64s2_16u_s_fu_4392_top_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_0_address0 = grp_pgconv64_64u_s_fu_4255_top_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_0_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_0_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_0_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_0_address0 = grp_pgconv64s2_32u_s_fu_3758_top_0_V_address0.read();
    } else {
        out_buf0_V_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_0_ce0 = grp_pgconv64_32u_s_fu_4625_top_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_0_ce0 = grp_pgconv64_16u_s_fu_4585_top_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_0_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_0_ce0 = grp_pgconv64_64u_s_fu_4255_top_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_0_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_0_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_0_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_0_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_0_V_ce0.read();
    } else {
        out_buf0_V_0_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_0_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_0_d0 = grp_pgconv64_32u_s_fu_4625_top_0_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_0_d0 = grp_pgconv64_16u_s_fu_4585_top_0_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_0_d0 = grp_pgconv64s2_16u_s_fu_4392_top_0_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_0_d0 = grp_pgconv64_64u_s_fu_4255_top_0_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_0_d0 = grp_pgconv64s2_32u_s_fu_3758_top_0_V_d0.read();
    } else {
        out_buf0_V_0_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_0_we0 = grp_pgconv64_32u_s_fu_4625_top_0_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_0_we0 = grp_pgconv64_16u_s_fu_4585_top_0_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_0_we0 = grp_pgconv64s2_16u_s_fu_4392_top_0_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_0_we0 = grp_pgconv64_64u_s_fu_4255_top_0_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_0_we0 = grp_pgconv64s2_32u_s_fu_3758_top_0_V_we0.read();
    } else {
        out_buf0_V_0_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_10_address0 = grp_pgconv64_32u_s_fu_4625_top_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_10_address0 = grp_pgconv64_16u_s_fu_4585_top_10_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_10_address0 = grp_pgconv64s2_16u_s_fu_4392_top_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_10_address0 = grp_pgconv64_64u_s_fu_4255_top_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_10_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_10_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_10_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_10_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_10_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_10_address0 = grp_pgconv64s2_32u_s_fu_3758_top_10_V_address0.read();
    } else {
        out_buf0_V_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_10_ce0 = grp_pgconv64_32u_s_fu_4625_top_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_10_ce0 = grp_pgconv64_16u_s_fu_4585_top_10_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_10_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_10_ce0 = grp_pgconv64_64u_s_fu_4255_top_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_10_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_10_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_10_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_10_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_10_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_10_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_10_V_ce0.read();
    } else {
        out_buf0_V_10_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_10_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_10_d0 = grp_pgconv64_32u_s_fu_4625_top_10_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_10_d0 = grp_pgconv64_16u_s_fu_4585_top_10_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_10_d0 = grp_pgconv64s2_16u_s_fu_4392_top_10_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_10_d0 = grp_pgconv64_64u_s_fu_4255_top_10_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_10_d0 = grp_pgconv64s2_32u_s_fu_3758_top_10_V_d0.read();
    } else {
        out_buf0_V_10_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_10_we0 = grp_pgconv64_32u_s_fu_4625_top_10_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_10_we0 = grp_pgconv64_16u_s_fu_4585_top_10_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_10_we0 = grp_pgconv64s2_16u_s_fu_4392_top_10_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_10_we0 = grp_pgconv64_64u_s_fu_4255_top_10_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_10_we0 = grp_pgconv64s2_32u_s_fu_3758_top_10_V_we0.read();
    } else {
        out_buf0_V_10_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_11_address0 = grp_pgconv64_32u_s_fu_4625_top_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_11_address0 = grp_pgconv64_16u_s_fu_4585_top_11_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_11_address0 = grp_pgconv64s2_16u_s_fu_4392_top_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_11_address0 = grp_pgconv64_64u_s_fu_4255_top_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_11_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_11_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_11_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_11_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_11_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_11_address0 = grp_pgconv64s2_32u_s_fu_3758_top_11_V_address0.read();
    } else {
        out_buf0_V_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_11_ce0 = grp_pgconv64_32u_s_fu_4625_top_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_11_ce0 = grp_pgconv64_16u_s_fu_4585_top_11_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_11_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_11_ce0 = grp_pgconv64_64u_s_fu_4255_top_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_11_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_11_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_11_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_11_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_11_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_11_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_11_V_ce0.read();
    } else {
        out_buf0_V_11_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_11_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_11_d0 = grp_pgconv64_32u_s_fu_4625_top_11_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_11_d0 = grp_pgconv64_16u_s_fu_4585_top_11_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_11_d0 = grp_pgconv64s2_16u_s_fu_4392_top_11_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_11_d0 = grp_pgconv64_64u_s_fu_4255_top_11_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_11_d0 = grp_pgconv64s2_32u_s_fu_3758_top_11_V_d0.read();
    } else {
        out_buf0_V_11_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_11_we0 = grp_pgconv64_32u_s_fu_4625_top_11_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_11_we0 = grp_pgconv64_16u_s_fu_4585_top_11_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_11_we0 = grp_pgconv64s2_16u_s_fu_4392_top_11_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_11_we0 = grp_pgconv64_64u_s_fu_4255_top_11_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_11_we0 = grp_pgconv64s2_32u_s_fu_3758_top_11_V_we0.read();
    } else {
        out_buf0_V_11_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_12_address0 = grp_pgconv64_32u_s_fu_4625_top_12_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_12_address0 = grp_pgconv64_16u_s_fu_4585_top_12_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_12_address0 = grp_pgconv64s2_16u_s_fu_4392_top_12_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_12_address0 = grp_pgconv64_64u_s_fu_4255_top_12_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_12_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_12_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_12_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_12_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_12_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_12_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_12_address0 = grp_pgconv64s2_32u_s_fu_3758_top_12_V_address0.read();
    } else {
        out_buf0_V_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_12_ce0 = grp_pgconv64_32u_s_fu_4625_top_12_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_12_ce0 = grp_pgconv64_16u_s_fu_4585_top_12_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_12_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_12_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_12_ce0 = grp_pgconv64_64u_s_fu_4255_top_12_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_12_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_12_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_12_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_12_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_12_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_12_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_12_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_12_V_ce0.read();
    } else {
        out_buf0_V_12_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_12_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_12_d0 = grp_pgconv64_32u_s_fu_4625_top_12_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_12_d0 = grp_pgconv64_16u_s_fu_4585_top_12_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_12_d0 = grp_pgconv64s2_16u_s_fu_4392_top_12_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_12_d0 = grp_pgconv64_64u_s_fu_4255_top_12_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_12_d0 = grp_pgconv64s2_32u_s_fu_3758_top_12_V_d0.read();
    } else {
        out_buf0_V_12_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_12_we0 = grp_pgconv64_32u_s_fu_4625_top_12_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_12_we0 = grp_pgconv64_16u_s_fu_4585_top_12_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_12_we0 = grp_pgconv64s2_16u_s_fu_4392_top_12_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_12_we0 = grp_pgconv64_64u_s_fu_4255_top_12_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_12_we0 = grp_pgconv64s2_32u_s_fu_3758_top_12_V_we0.read();
    } else {
        out_buf0_V_12_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_13_address0 = grp_pgconv64_32u_s_fu_4625_top_13_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_13_address0 = grp_pgconv64_16u_s_fu_4585_top_13_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_13_address0 = grp_pgconv64s2_16u_s_fu_4392_top_13_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_13_address0 = grp_pgconv64_64u_s_fu_4255_top_13_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_13_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_13_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_13_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_13_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_13_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_13_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_13_address0 = grp_pgconv64s2_32u_s_fu_3758_top_13_V_address0.read();
    } else {
        out_buf0_V_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_13_ce0 = grp_pgconv64_32u_s_fu_4625_top_13_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_13_ce0 = grp_pgconv64_16u_s_fu_4585_top_13_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_13_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_13_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_13_ce0 = grp_pgconv64_64u_s_fu_4255_top_13_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_13_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_13_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_13_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_13_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_13_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_13_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_13_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_13_V_ce0.read();
    } else {
        out_buf0_V_13_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_13_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_13_d0 = grp_pgconv64_32u_s_fu_4625_top_13_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_13_d0 = grp_pgconv64_16u_s_fu_4585_top_13_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_13_d0 = grp_pgconv64s2_16u_s_fu_4392_top_13_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_13_d0 = grp_pgconv64_64u_s_fu_4255_top_13_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_13_d0 = grp_pgconv64s2_32u_s_fu_3758_top_13_V_d0.read();
    } else {
        out_buf0_V_13_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_13_we0 = grp_pgconv64_32u_s_fu_4625_top_13_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_13_we0 = grp_pgconv64_16u_s_fu_4585_top_13_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_13_we0 = grp_pgconv64s2_16u_s_fu_4392_top_13_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_13_we0 = grp_pgconv64_64u_s_fu_4255_top_13_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_13_we0 = grp_pgconv64s2_32u_s_fu_3758_top_13_V_we0.read();
    } else {
        out_buf0_V_13_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_14_address0 = grp_pgconv64_32u_s_fu_4625_top_14_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_14_address0 = grp_pgconv64_16u_s_fu_4585_top_14_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_14_address0 = grp_pgconv64s2_16u_s_fu_4392_top_14_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_14_address0 = grp_pgconv64_64u_s_fu_4255_top_14_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_14_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_14_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_14_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_14_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_14_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_14_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_14_address0 = grp_pgconv64s2_32u_s_fu_3758_top_14_V_address0.read();
    } else {
        out_buf0_V_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_14_ce0 = grp_pgconv64_32u_s_fu_4625_top_14_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_14_ce0 = grp_pgconv64_16u_s_fu_4585_top_14_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_14_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_14_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_14_ce0 = grp_pgconv64_64u_s_fu_4255_top_14_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_14_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_14_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_14_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_14_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_14_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_14_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_14_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_14_V_ce0.read();
    } else {
        out_buf0_V_14_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_14_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_14_d0 = grp_pgconv64_32u_s_fu_4625_top_14_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_14_d0 = grp_pgconv64_16u_s_fu_4585_top_14_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_14_d0 = grp_pgconv64s2_16u_s_fu_4392_top_14_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_14_d0 = grp_pgconv64_64u_s_fu_4255_top_14_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_14_d0 = grp_pgconv64s2_32u_s_fu_3758_top_14_V_d0.read();
    } else {
        out_buf0_V_14_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_14_we0 = grp_pgconv64_32u_s_fu_4625_top_14_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_14_we0 = grp_pgconv64_16u_s_fu_4585_top_14_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_14_we0 = grp_pgconv64s2_16u_s_fu_4392_top_14_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_14_we0 = grp_pgconv64_64u_s_fu_4255_top_14_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_14_we0 = grp_pgconv64s2_32u_s_fu_3758_top_14_V_we0.read();
    } else {
        out_buf0_V_14_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_15_address0 = grp_pgconv64_32u_s_fu_4625_top_15_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_15_address0 = grp_pgconv64_16u_s_fu_4585_top_15_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_15_address0 = grp_pgconv64s2_16u_s_fu_4392_top_15_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_15_address0 = grp_pgconv64_64u_s_fu_4255_top_15_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_15_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_15_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_15_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_15_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_15_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_15_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_15_address0 = grp_pgconv64s2_32u_s_fu_3758_top_15_V_address0.read();
    } else {
        out_buf0_V_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_15_ce0 = grp_pgconv64_32u_s_fu_4625_top_15_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_15_ce0 = grp_pgconv64_16u_s_fu_4585_top_15_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_15_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_15_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_15_ce0 = grp_pgconv64_64u_s_fu_4255_top_15_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_15_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_15_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_15_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_15_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_15_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_15_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_15_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_15_V_ce0.read();
    } else {
        out_buf0_V_15_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_15_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_15_d0 = grp_pgconv64_32u_s_fu_4625_top_15_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_15_d0 = grp_pgconv64_16u_s_fu_4585_top_15_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_15_d0 = grp_pgconv64s2_16u_s_fu_4392_top_15_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_15_d0 = grp_pgconv64_64u_s_fu_4255_top_15_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_15_d0 = grp_pgconv64s2_32u_s_fu_3758_top_15_V_d0.read();
    } else {
        out_buf0_V_15_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_15_we0 = grp_pgconv64_32u_s_fu_4625_top_15_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_15_we0 = grp_pgconv64_16u_s_fu_4585_top_15_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_15_we0 = grp_pgconv64s2_16u_s_fu_4392_top_15_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_15_we0 = grp_pgconv64_64u_s_fu_4255_top_15_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_15_we0 = grp_pgconv64s2_32u_s_fu_3758_top_15_V_we0.read();
    } else {
        out_buf0_V_15_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_1_address0 = grp_pgconv64_32u_s_fu_4625_top_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_1_address0 = grp_pgconv64_16u_s_fu_4585_top_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_1_address0 = grp_pgconv64s2_16u_s_fu_4392_top_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_1_address0 = grp_pgconv64_64u_s_fu_4255_top_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_1_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_1_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_1_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_1_address0 = grp_pgconv64s2_32u_s_fu_3758_top_1_V_address0.read();
    } else {
        out_buf0_V_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_1_ce0 = grp_pgconv64_32u_s_fu_4625_top_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_1_ce0 = grp_pgconv64_16u_s_fu_4585_top_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_1_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_1_ce0 = grp_pgconv64_64u_s_fu_4255_top_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_1_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_1_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_1_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_1_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_1_V_ce0.read();
    } else {
        out_buf0_V_1_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_1_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_1_d0 = grp_pgconv64_32u_s_fu_4625_top_1_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_1_d0 = grp_pgconv64_16u_s_fu_4585_top_1_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_1_d0 = grp_pgconv64s2_16u_s_fu_4392_top_1_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_1_d0 = grp_pgconv64_64u_s_fu_4255_top_1_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_1_d0 = grp_pgconv64s2_32u_s_fu_3758_top_1_V_d0.read();
    } else {
        out_buf0_V_1_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_1_we0 = grp_pgconv64_32u_s_fu_4625_top_1_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_1_we0 = grp_pgconv64_16u_s_fu_4585_top_1_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_1_we0 = grp_pgconv64s2_16u_s_fu_4392_top_1_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_1_we0 = grp_pgconv64_64u_s_fu_4255_top_1_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_1_we0 = grp_pgconv64s2_32u_s_fu_3758_top_1_V_we0.read();
    } else {
        out_buf0_V_1_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_2_address0 = grp_pgconv64_32u_s_fu_4625_top_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_2_address0 = grp_pgconv64_16u_s_fu_4585_top_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_2_address0 = grp_pgconv64s2_16u_s_fu_4392_top_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_2_address0 = grp_pgconv64_64u_s_fu_4255_top_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_2_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_2_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_2_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_2_address0 = grp_pgconv64s2_32u_s_fu_3758_top_2_V_address0.read();
    } else {
        out_buf0_V_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_2_ce0 = grp_pgconv64_32u_s_fu_4625_top_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_2_ce0 = grp_pgconv64_16u_s_fu_4585_top_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_2_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_2_ce0 = grp_pgconv64_64u_s_fu_4255_top_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_2_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_2_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_2_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_2_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_2_V_ce0.read();
    } else {
        out_buf0_V_2_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_2_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_2_d0 = grp_pgconv64_32u_s_fu_4625_top_2_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_2_d0 = grp_pgconv64_16u_s_fu_4585_top_2_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_2_d0 = grp_pgconv64s2_16u_s_fu_4392_top_2_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_2_d0 = grp_pgconv64_64u_s_fu_4255_top_2_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_2_d0 = grp_pgconv64s2_32u_s_fu_3758_top_2_V_d0.read();
    } else {
        out_buf0_V_2_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_2_we0 = grp_pgconv64_32u_s_fu_4625_top_2_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_2_we0 = grp_pgconv64_16u_s_fu_4585_top_2_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_2_we0 = grp_pgconv64s2_16u_s_fu_4392_top_2_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_2_we0 = grp_pgconv64_64u_s_fu_4255_top_2_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_2_we0 = grp_pgconv64s2_32u_s_fu_3758_top_2_V_we0.read();
    } else {
        out_buf0_V_2_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_3_address0 = grp_pgconv64_32u_s_fu_4625_top_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_3_address0 = grp_pgconv64_16u_s_fu_4585_top_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_3_address0 = grp_pgconv64s2_16u_s_fu_4392_top_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_3_address0 = grp_pgconv64_64u_s_fu_4255_top_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_3_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_3_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_3_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_3_address0 = grp_pgconv64s2_32u_s_fu_3758_top_3_V_address0.read();
    } else {
        out_buf0_V_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_3_ce0 = grp_pgconv64_32u_s_fu_4625_top_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_3_ce0 = grp_pgconv64_16u_s_fu_4585_top_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_3_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_3_ce0 = grp_pgconv64_64u_s_fu_4255_top_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_3_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_3_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_3_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_3_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_3_V_ce0.read();
    } else {
        out_buf0_V_3_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_3_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_3_d0 = grp_pgconv64_32u_s_fu_4625_top_3_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_3_d0 = grp_pgconv64_16u_s_fu_4585_top_3_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_3_d0 = grp_pgconv64s2_16u_s_fu_4392_top_3_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_3_d0 = grp_pgconv64_64u_s_fu_4255_top_3_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_3_d0 = grp_pgconv64s2_32u_s_fu_3758_top_3_V_d0.read();
    } else {
        out_buf0_V_3_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_3_we0 = grp_pgconv64_32u_s_fu_4625_top_3_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_3_we0 = grp_pgconv64_16u_s_fu_4585_top_3_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_3_we0 = grp_pgconv64s2_16u_s_fu_4392_top_3_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_3_we0 = grp_pgconv64_64u_s_fu_4255_top_3_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_3_we0 = grp_pgconv64s2_32u_s_fu_3758_top_3_V_we0.read();
    } else {
        out_buf0_V_3_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_4_address0 = grp_pgconv64_32u_s_fu_4625_top_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_4_address0 = grp_pgconv64_16u_s_fu_4585_top_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_4_address0 = grp_pgconv64s2_16u_s_fu_4392_top_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_4_address0 = grp_pgconv64_64u_s_fu_4255_top_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_4_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_4_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_4_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_4_address0 = grp_pgconv64s2_32u_s_fu_3758_top_4_V_address0.read();
    } else {
        out_buf0_V_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_4_ce0 = grp_pgconv64_32u_s_fu_4625_top_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_4_ce0 = grp_pgconv64_16u_s_fu_4585_top_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_4_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_4_ce0 = grp_pgconv64_64u_s_fu_4255_top_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_4_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_4_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_4_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_4_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_4_V_ce0.read();
    } else {
        out_buf0_V_4_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_4_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_4_d0 = grp_pgconv64_32u_s_fu_4625_top_4_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_4_d0 = grp_pgconv64_16u_s_fu_4585_top_4_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_4_d0 = grp_pgconv64s2_16u_s_fu_4392_top_4_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_4_d0 = grp_pgconv64_64u_s_fu_4255_top_4_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_4_d0 = grp_pgconv64s2_32u_s_fu_3758_top_4_V_d0.read();
    } else {
        out_buf0_V_4_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_4_we0 = grp_pgconv64_32u_s_fu_4625_top_4_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_4_we0 = grp_pgconv64_16u_s_fu_4585_top_4_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_4_we0 = grp_pgconv64s2_16u_s_fu_4392_top_4_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_4_we0 = grp_pgconv64_64u_s_fu_4255_top_4_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_4_we0 = grp_pgconv64s2_32u_s_fu_3758_top_4_V_we0.read();
    } else {
        out_buf0_V_4_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_5_address0 = grp_pgconv64_32u_s_fu_4625_top_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_5_address0 = grp_pgconv64_16u_s_fu_4585_top_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_5_address0 = grp_pgconv64s2_16u_s_fu_4392_top_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_5_address0 = grp_pgconv64_64u_s_fu_4255_top_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_5_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_5_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_5_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_5_address0 = grp_pgconv64s2_32u_s_fu_3758_top_5_V_address0.read();
    } else {
        out_buf0_V_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_5_ce0 = grp_pgconv64_32u_s_fu_4625_top_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_5_ce0 = grp_pgconv64_16u_s_fu_4585_top_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_5_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_5_ce0 = grp_pgconv64_64u_s_fu_4255_top_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_5_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_5_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_5_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_5_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_5_V_ce0.read();
    } else {
        out_buf0_V_5_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_5_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_5_d0 = grp_pgconv64_32u_s_fu_4625_top_5_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_5_d0 = grp_pgconv64_16u_s_fu_4585_top_5_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_5_d0 = grp_pgconv64s2_16u_s_fu_4392_top_5_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_5_d0 = grp_pgconv64_64u_s_fu_4255_top_5_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_5_d0 = grp_pgconv64s2_32u_s_fu_3758_top_5_V_d0.read();
    } else {
        out_buf0_V_5_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_5_we0 = grp_pgconv64_32u_s_fu_4625_top_5_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_5_we0 = grp_pgconv64_16u_s_fu_4585_top_5_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_5_we0 = grp_pgconv64s2_16u_s_fu_4392_top_5_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_5_we0 = grp_pgconv64_64u_s_fu_4255_top_5_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_5_we0 = grp_pgconv64s2_32u_s_fu_3758_top_5_V_we0.read();
    } else {
        out_buf0_V_5_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_6_address0 = grp_pgconv64_32u_s_fu_4625_top_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_6_address0 = grp_pgconv64_16u_s_fu_4585_top_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_6_address0 = grp_pgconv64s2_16u_s_fu_4392_top_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_6_address0 = grp_pgconv64_64u_s_fu_4255_top_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_6_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_6_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_6_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_6_address0 = grp_pgconv64s2_32u_s_fu_3758_top_6_V_address0.read();
    } else {
        out_buf0_V_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_6_ce0 = grp_pgconv64_32u_s_fu_4625_top_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_6_ce0 = grp_pgconv64_16u_s_fu_4585_top_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_6_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_6_ce0 = grp_pgconv64_64u_s_fu_4255_top_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_6_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_6_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_6_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_6_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_6_V_ce0.read();
    } else {
        out_buf0_V_6_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_6_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_6_d0 = grp_pgconv64_32u_s_fu_4625_top_6_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_6_d0 = grp_pgconv64_16u_s_fu_4585_top_6_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_6_d0 = grp_pgconv64s2_16u_s_fu_4392_top_6_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_6_d0 = grp_pgconv64_64u_s_fu_4255_top_6_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_6_d0 = grp_pgconv64s2_32u_s_fu_3758_top_6_V_d0.read();
    } else {
        out_buf0_V_6_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_6_we0 = grp_pgconv64_32u_s_fu_4625_top_6_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_6_we0 = grp_pgconv64_16u_s_fu_4585_top_6_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_6_we0 = grp_pgconv64s2_16u_s_fu_4392_top_6_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_6_we0 = grp_pgconv64_64u_s_fu_4255_top_6_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_6_we0 = grp_pgconv64s2_32u_s_fu_3758_top_6_V_we0.read();
    } else {
        out_buf0_V_6_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_7_address0 = grp_pgconv64_32u_s_fu_4625_top_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_7_address0 = grp_pgconv64_16u_s_fu_4585_top_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_7_address0 = grp_pgconv64s2_16u_s_fu_4392_top_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_7_address0 = grp_pgconv64_64u_s_fu_4255_top_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_7_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_7_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_7_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_7_address0 = grp_pgconv64s2_32u_s_fu_3758_top_7_V_address0.read();
    } else {
        out_buf0_V_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_7_ce0 = grp_pgconv64_32u_s_fu_4625_top_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_7_ce0 = grp_pgconv64_16u_s_fu_4585_top_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_7_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_7_ce0 = grp_pgconv64_64u_s_fu_4255_top_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_7_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_7_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_7_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_7_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_7_V_ce0.read();
    } else {
        out_buf0_V_7_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_7_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_7_d0 = grp_pgconv64_32u_s_fu_4625_top_7_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_7_d0 = grp_pgconv64_16u_s_fu_4585_top_7_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_7_d0 = grp_pgconv64s2_16u_s_fu_4392_top_7_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_7_d0 = grp_pgconv64_64u_s_fu_4255_top_7_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_7_d0 = grp_pgconv64s2_32u_s_fu_3758_top_7_V_d0.read();
    } else {
        out_buf0_V_7_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_7_we0 = grp_pgconv64_32u_s_fu_4625_top_7_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_7_we0 = grp_pgconv64_16u_s_fu_4585_top_7_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_7_we0 = grp_pgconv64s2_16u_s_fu_4392_top_7_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_7_we0 = grp_pgconv64_64u_s_fu_4255_top_7_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_7_we0 = grp_pgconv64s2_32u_s_fu_3758_top_7_V_we0.read();
    } else {
        out_buf0_V_7_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_8_address0 = grp_pgconv64_32u_s_fu_4625_top_8_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_8_address0 = grp_pgconv64_16u_s_fu_4585_top_8_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_8_address0 = grp_pgconv64s2_16u_s_fu_4392_top_8_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_8_address0 = grp_pgconv64_64u_s_fu_4255_top_8_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_8_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_8_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_8_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_8_address0 = grp_pgconv64s2_32u_s_fu_3758_top_8_V_address0.read();
    } else {
        out_buf0_V_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_8_ce0 = grp_pgconv64_32u_s_fu_4625_top_8_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_8_ce0 = grp_pgconv64_16u_s_fu_4585_top_8_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_8_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_8_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_8_ce0 = grp_pgconv64_64u_s_fu_4255_top_8_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_8_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_8_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_8_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_8_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_8_V_ce0.read();
    } else {
        out_buf0_V_8_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_8_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_8_d0 = grp_pgconv64_32u_s_fu_4625_top_8_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_8_d0 = grp_pgconv64_16u_s_fu_4585_top_8_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_8_d0 = grp_pgconv64s2_16u_s_fu_4392_top_8_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_8_d0 = grp_pgconv64_64u_s_fu_4255_top_8_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_8_d0 = grp_pgconv64s2_32u_s_fu_3758_top_8_V_d0.read();
    } else {
        out_buf0_V_8_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_8_we0 = grp_pgconv64_32u_s_fu_4625_top_8_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_8_we0 = grp_pgconv64_16u_s_fu_4585_top_8_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_8_we0 = grp_pgconv64s2_16u_s_fu_4392_top_8_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_8_we0 = grp_pgconv64_64u_s_fu_4255_top_8_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_8_we0 = grp_pgconv64s2_32u_s_fu_3758_top_8_V_we0.read();
    } else {
        out_buf0_V_8_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_9_address0 = grp_pgconv64_32u_s_fu_4625_top_9_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_9_address0 = grp_pgconv64_16u_s_fu_4585_top_9_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_9_address0 = grp_pgconv64s2_16u_s_fu_4392_top_9_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_9_address0 = grp_pgconv64_64u_s_fu_4255_top_9_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_9_address0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_9_address0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_9_address0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_9_address0 = grp_pgconv64s2_32u_s_fu_3758_top_9_V_address0.read();
    } else {
        out_buf0_V_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_9_ce0 = grp_pgconv64_32u_s_fu_4625_top_9_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_9_ce0 = grp_pgconv64_16u_s_fu_4585_top_9_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_9_ce0 = grp_pgconv64s2_16u_s_fu_4392_top_9_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_9_ce0 = grp_pgconv64_64u_s_fu_4255_top_9_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        out_buf0_V_9_ce0 = grp_fill_fm_buf_bn_16u_s_fu_4179_out_buf0_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        out_buf0_V_9_ce0 = grp_fill_fm_buf_bn_32u_s_fu_4028_out_buf0_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()))) {
        out_buf0_V_9_ce0 = grp_fill_fm_buf_bn_64u_s_fu_3850_out_buf0_V_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_9_ce0 = grp_pgconv64s2_32u_s_fu_3758_top_9_V_ce0.read();
    } else {
        out_buf0_V_9_ce0 = ap_const_logic_0;
    }
}

void ResNet::thread_out_buf0_V_9_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_9_d0 = grp_pgconv64_32u_s_fu_4625_top_9_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_9_d0 = grp_pgconv64_16u_s_fu_4585_top_9_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_9_d0 = grp_pgconv64s2_16u_s_fu_4392_top_9_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_9_d0 = grp_pgconv64_64u_s_fu_4255_top_9_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_9_d0 = grp_pgconv64s2_32u_s_fu_3758_top_9_V_d0.read();
    } else {
        out_buf0_V_9_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ResNet::thread_out_buf0_V_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()))) {
        out_buf0_V_9_we0 = grp_pgconv64_32u_s_fu_4625_top_9_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()))) {
        out_buf0_V_9_we0 = grp_pgconv64_16u_s_fu_4585_top_9_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        out_buf0_V_9_we0 = grp_pgconv64s2_16u_s_fu_4392_top_9_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()))) {
        out_buf0_V_9_we0 = grp_pgconv64_64u_s_fu_4255_top_9_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        out_buf0_V_9_we0 = grp_pgconv64s2_32u_s_fu_3758_top_9_V_we0.read();
    } else {
        out_buf0_V_9_we0 = ap_const_logic_0;
    }
}

void ResNet::thread_p_cast_fu_4685_p1() {
    p_cast_fu_4685_p1 = esl_zext<32,31>(tmp_744_fu_4675_p4.read());
}

void ResNet::thread_p_shl24_cast_fu_5782_p4() {
    p_shl24_cast_fu_5782_p4 = esl_concat<9,2>(esl_concat<7,2>(tmp_854_fu_5773_p4.read(), or_ln321_3_fu_5746_p2.read()), ap_const_lv2_0);
}

void ResNet::thread_p_shl28_cast_fu_5676_p4() {
    p_shl28_cast_fu_5676_p4 = esl_concat<9,2>(esl_concat<7,2>(tmp_851_fu_5667_p4.read(), or_ln321_2_fu_5640_p2.read()), ap_const_lv2_0);
}

void ResNet::thread_p_shl32_cast_fu_5570_p4() {
    p_shl32_cast_fu_5570_p4 = esl_concat<9,2>(esl_concat<7,2>(tmp_848_fu_5561_p4.read(), or_ln321_1_fu_5534_p2.read()), ap_const_lv2_0);
}

void ResNet::thread_p_shl36_cast_fu_5464_p4() {
    p_shl36_cast_fu_5464_p4 = esl_concat<9,2>(esl_concat<7,2>(tmp_845_fu_5455_p4.read(), or_ln321_fu_5428_p2.read()), ap_const_lv2_0);
}

void ResNet::thread_p_shl37_cast_fu_9555_p3() {
    p_shl37_cast_fu_9555_p3 = esl_concat<9,3>(trunc_ln203_fu_9551_p1.read(), ap_const_lv3_0);
}

void ResNet::thread_p_shl38_cast_fu_9567_p3() {
    p_shl38_cast_fu_9567_p3 = esl_concat<11,1>(trunc_ln203_1_fu_9563_p1.read(), ap_const_lv1_0);
}

void ResNet::thread_row_2_fu_5393_p2() {
    row_2_fu_5393_p2 = (!ap_const_lv2_1.is_01() || !ap_phi_mux_row21_0_phi_fu_2376_p4.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(ap_phi_mux_row21_0_phi_fu_2376_p4.read()));
}

void ResNet::thread_row_3_fu_11008_p2() {
    row_3_fu_11008_p2 = (!row24_0_reg_2471.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(row24_0_reg_2471.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_row_4_fu_11032_p2() {
    row_4_fu_11032_p2 = (!row26_0_reg_2495.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(row26_0_reg_2495.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_row_5_fu_11056_p2() {
    row_5_fu_11056_p2 = (!row28_0_reg_2519.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(row28_0_reg_2519.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ResNet::thread_row_6_fu_11171_p2() {
    row_6_fu_11171_p2 = (!row33_0_reg_2602.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(row33_0_reg_2602.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_row_7_fu_11092_p2() {
    row_7_fu_11092_p2 = (!row30_0_reg_2554.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(row30_0_reg_2554.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_row_8_fu_11228_p2() {
    row_8_fu_11228_p2 = (!row35_0_reg_2649.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(row35_0_reg_2649.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_row_9_fu_11309_p2() {
    row_9_fu_11309_p2 = (!row41_0_reg_2719.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(row41_0_reg_2719.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ResNet::thread_row_b_fu_6278_p2() {
    row_b_fu_6278_p2 = (!ap_const_lv3_1.is_01() || !ap_phi_mux_row_b_0_phi_fu_2409_p4.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(ap_phi_mux_row_b_0_phi_fu_2409_p4.read()));
}

void ResNet::thread_row_fu_4721_p2() {
    row_fu_4721_p2 = (!ap_const_lv6_1.is_01() || !ap_phi_mux_row_0_phi_fu_2306_p4.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(ap_phi_mux_row_0_phi_fu_2306_p4.read()));
}

void ResNet::thread_select_ln1148_10_fu_18181_p3() {
    select_ln1148_10_fu_18181_p3 = (!tmp_865_fu_18129_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_865_fu_18129_p3.read()[0].to_bool())? sub_ln1148_21_fu_18157_p2.read(): zext_ln1148_10_fu_18177_p1.read());
}

void ResNet::thread_select_ln1148_11_fu_18246_p3() {
    select_ln1148_11_fu_18246_p3 = (!tmp_866_fu_18194_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_866_fu_18194_p3.read()[0].to_bool())? sub_ln1148_23_fu_18222_p2.read(): zext_ln1148_11_fu_18242_p1.read());
}

void ResNet::thread_select_ln1148_12_fu_18311_p3() {
    select_ln1148_12_fu_18311_p3 = (!tmp_867_fu_18259_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_867_fu_18259_p3.read()[0].to_bool())? sub_ln1148_25_fu_18287_p2.read(): zext_ln1148_12_fu_18307_p1.read());
}

void ResNet::thread_select_ln1148_13_fu_18376_p3() {
    select_ln1148_13_fu_18376_p3 = (!tmp_868_fu_18324_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_868_fu_18324_p3.read()[0].to_bool())? sub_ln1148_27_fu_18352_p2.read(): zext_ln1148_13_fu_18372_p1.read());
}

void ResNet::thread_select_ln1148_14_fu_18441_p3() {
    select_ln1148_14_fu_18441_p3 = (!tmp_869_fu_18389_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_869_fu_18389_p3.read()[0].to_bool())? sub_ln1148_29_fu_18417_p2.read(): zext_ln1148_14_fu_18437_p1.read());
}

void ResNet::thread_select_ln1148_15_fu_18506_p3() {
    select_ln1148_15_fu_18506_p3 = (!tmp_870_fu_18454_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_870_fu_18454_p3.read()[0].to_bool())? sub_ln1148_31_fu_18482_p2.read(): zext_ln1148_15_fu_18502_p1.read());
}

void ResNet::thread_select_ln1148_16_fu_18571_p3() {
    select_ln1148_16_fu_18571_p3 = (!tmp_871_fu_18519_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_871_fu_18519_p3.read()[0].to_bool())? sub_ln1148_33_fu_18547_p2.read(): zext_ln1148_16_fu_18567_p1.read());
}

void ResNet::thread_select_ln1148_17_fu_18636_p3() {
    select_ln1148_17_fu_18636_p3 = (!tmp_872_fu_18584_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_872_fu_18584_p3.read()[0].to_bool())? sub_ln1148_35_fu_18612_p2.read(): zext_ln1148_17_fu_18632_p1.read());
}

void ResNet::thread_select_ln1148_18_fu_18701_p3() {
    select_ln1148_18_fu_18701_p3 = (!tmp_873_fu_18649_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_873_fu_18649_p3.read()[0].to_bool())? sub_ln1148_37_fu_18677_p2.read(): zext_ln1148_18_fu_18697_p1.read());
}

void ResNet::thread_select_ln1148_19_fu_18766_p3() {
    select_ln1148_19_fu_18766_p3 = (!tmp_874_fu_18714_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_874_fu_18714_p3.read()[0].to_bool())? sub_ln1148_39_fu_18742_p2.read(): zext_ln1148_19_fu_18762_p1.read());
}

void ResNet::thread_select_ln1148_1_fu_17596_p3() {
    select_ln1148_1_fu_17596_p3 = (!tmp_856_fu_17544_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_856_fu_17544_p3.read()[0].to_bool())? sub_ln1148_3_fu_17572_p2.read(): zext_ln1148_1_fu_17592_p1.read());
}

void ResNet::thread_select_ln1148_20_fu_18831_p3() {
    select_ln1148_20_fu_18831_p3 = (!tmp_875_fu_18779_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_875_fu_18779_p3.read()[0].to_bool())? sub_ln1148_41_fu_18807_p2.read(): zext_ln1148_20_fu_18827_p1.read());
}

void ResNet::thread_select_ln1148_21_fu_18896_p3() {
    select_ln1148_21_fu_18896_p3 = (!tmp_876_fu_18844_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_876_fu_18844_p3.read()[0].to_bool())? sub_ln1148_43_fu_18872_p2.read(): zext_ln1148_21_fu_18892_p1.read());
}

void ResNet::thread_select_ln1148_22_fu_18961_p3() {
    select_ln1148_22_fu_18961_p3 = (!tmp_877_fu_18909_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_877_fu_18909_p3.read()[0].to_bool())? sub_ln1148_45_fu_18937_p2.read(): zext_ln1148_22_fu_18957_p1.read());
}

void ResNet::thread_select_ln1148_23_fu_19026_p3() {
    select_ln1148_23_fu_19026_p3 = (!tmp_878_fu_18974_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_878_fu_18974_p3.read()[0].to_bool())? sub_ln1148_47_fu_19002_p2.read(): zext_ln1148_23_fu_19022_p1.read());
}

void ResNet::thread_select_ln1148_24_fu_19091_p3() {
    select_ln1148_24_fu_19091_p3 = (!tmp_879_fu_19039_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_879_fu_19039_p3.read()[0].to_bool())? sub_ln1148_49_fu_19067_p2.read(): zext_ln1148_24_fu_19087_p1.read());
}

void ResNet::thread_select_ln1148_25_fu_19156_p3() {
    select_ln1148_25_fu_19156_p3 = (!tmp_880_fu_19104_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_880_fu_19104_p3.read()[0].to_bool())? sub_ln1148_51_fu_19132_p2.read(): zext_ln1148_25_fu_19152_p1.read());
}

void ResNet::thread_select_ln1148_26_fu_19221_p3() {
    select_ln1148_26_fu_19221_p3 = (!tmp_881_fu_19169_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_881_fu_19169_p3.read()[0].to_bool())? sub_ln1148_53_fu_19197_p2.read(): zext_ln1148_26_fu_19217_p1.read());
}

void ResNet::thread_select_ln1148_27_fu_19286_p3() {
    select_ln1148_27_fu_19286_p3 = (!tmp_882_fu_19234_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_882_fu_19234_p3.read()[0].to_bool())? sub_ln1148_55_fu_19262_p2.read(): zext_ln1148_27_fu_19282_p1.read());
}

void ResNet::thread_select_ln1148_28_fu_19351_p3() {
    select_ln1148_28_fu_19351_p3 = (!tmp_883_fu_19299_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_883_fu_19299_p3.read()[0].to_bool())? sub_ln1148_57_fu_19327_p2.read(): zext_ln1148_28_fu_19347_p1.read());
}

void ResNet::thread_select_ln1148_29_fu_19416_p3() {
    select_ln1148_29_fu_19416_p3 = (!tmp_884_fu_19364_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_884_fu_19364_p3.read()[0].to_bool())? sub_ln1148_59_fu_19392_p2.read(): zext_ln1148_29_fu_19412_p1.read());
}

void ResNet::thread_select_ln1148_2_fu_17661_p3() {
    select_ln1148_2_fu_17661_p3 = (!tmp_857_fu_17609_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_857_fu_17609_p3.read()[0].to_bool())? sub_ln1148_5_fu_17637_p2.read(): zext_ln1148_2_fu_17657_p1.read());
}

void ResNet::thread_select_ln1148_30_fu_19481_p3() {
    select_ln1148_30_fu_19481_p3 = (!tmp_885_fu_19429_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_885_fu_19429_p3.read()[0].to_bool())? sub_ln1148_61_fu_19457_p2.read(): zext_ln1148_30_fu_19477_p1.read());
}

void ResNet::thread_select_ln1148_31_fu_19546_p3() {
    select_ln1148_31_fu_19546_p3 = (!tmp_886_fu_19494_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_886_fu_19494_p3.read()[0].to_bool())? sub_ln1148_63_fu_19522_p2.read(): zext_ln1148_31_fu_19542_p1.read());
}

void ResNet::thread_select_ln1148_32_fu_19611_p3() {
    select_ln1148_32_fu_19611_p3 = (!tmp_887_fu_19559_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_887_fu_19559_p3.read()[0].to_bool())? sub_ln1148_65_fu_19587_p2.read(): zext_ln1148_32_fu_19607_p1.read());
}

void ResNet::thread_select_ln1148_33_fu_19676_p3() {
    select_ln1148_33_fu_19676_p3 = (!tmp_888_fu_19624_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_888_fu_19624_p3.read()[0].to_bool())? sub_ln1148_67_fu_19652_p2.read(): zext_ln1148_33_fu_19672_p1.read());
}

void ResNet::thread_select_ln1148_34_fu_19741_p3() {
    select_ln1148_34_fu_19741_p3 = (!tmp_889_fu_19689_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_889_fu_19689_p3.read()[0].to_bool())? sub_ln1148_69_fu_19717_p2.read(): zext_ln1148_34_fu_19737_p1.read());
}

void ResNet::thread_select_ln1148_35_fu_19806_p3() {
    select_ln1148_35_fu_19806_p3 = (!tmp_890_fu_19754_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_890_fu_19754_p3.read()[0].to_bool())? sub_ln1148_71_fu_19782_p2.read(): zext_ln1148_35_fu_19802_p1.read());
}

void ResNet::thread_select_ln1148_36_fu_19871_p3() {
    select_ln1148_36_fu_19871_p3 = (!tmp_891_fu_19819_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_891_fu_19819_p3.read()[0].to_bool())? sub_ln1148_73_fu_19847_p2.read(): zext_ln1148_36_fu_19867_p1.read());
}

void ResNet::thread_select_ln1148_37_fu_19936_p3() {
    select_ln1148_37_fu_19936_p3 = (!tmp_892_fu_19884_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_892_fu_19884_p3.read()[0].to_bool())? sub_ln1148_75_fu_19912_p2.read(): zext_ln1148_37_fu_19932_p1.read());
}

void ResNet::thread_select_ln1148_38_fu_20001_p3() {
    select_ln1148_38_fu_20001_p3 = (!tmp_893_fu_19949_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_893_fu_19949_p3.read()[0].to_bool())? sub_ln1148_77_fu_19977_p2.read(): zext_ln1148_38_fu_19997_p1.read());
}

void ResNet::thread_select_ln1148_39_fu_20066_p3() {
    select_ln1148_39_fu_20066_p3 = (!tmp_894_fu_20014_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_894_fu_20014_p3.read()[0].to_bool())? sub_ln1148_79_fu_20042_p2.read(): zext_ln1148_39_fu_20062_p1.read());
}

void ResNet::thread_select_ln1148_3_fu_17726_p3() {
    select_ln1148_3_fu_17726_p3 = (!tmp_858_fu_17674_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_858_fu_17674_p3.read()[0].to_bool())? sub_ln1148_7_fu_17702_p2.read(): zext_ln1148_3_fu_17722_p1.read());
}

void ResNet::thread_select_ln1148_40_fu_20131_p3() {
    select_ln1148_40_fu_20131_p3 = (!tmp_895_fu_20079_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_895_fu_20079_p3.read()[0].to_bool())? sub_ln1148_81_fu_20107_p2.read(): zext_ln1148_40_fu_20127_p1.read());
}

void ResNet::thread_select_ln1148_41_fu_20196_p3() {
    select_ln1148_41_fu_20196_p3 = (!tmp_896_fu_20144_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_896_fu_20144_p3.read()[0].to_bool())? sub_ln1148_83_fu_20172_p2.read(): zext_ln1148_41_fu_20192_p1.read());
}

void ResNet::thread_select_ln1148_42_fu_20261_p3() {
    select_ln1148_42_fu_20261_p3 = (!tmp_897_fu_20209_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_897_fu_20209_p3.read()[0].to_bool())? sub_ln1148_85_fu_20237_p2.read(): zext_ln1148_42_fu_20257_p1.read());
}

void ResNet::thread_select_ln1148_43_fu_20326_p3() {
    select_ln1148_43_fu_20326_p3 = (!tmp_898_fu_20274_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_898_fu_20274_p3.read()[0].to_bool())? sub_ln1148_87_fu_20302_p2.read(): zext_ln1148_43_fu_20322_p1.read());
}

void ResNet::thread_select_ln1148_44_fu_20391_p3() {
    select_ln1148_44_fu_20391_p3 = (!tmp_899_fu_20339_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_899_fu_20339_p3.read()[0].to_bool())? sub_ln1148_89_fu_20367_p2.read(): zext_ln1148_44_fu_20387_p1.read());
}

void ResNet::thread_select_ln1148_45_fu_20456_p3() {
    select_ln1148_45_fu_20456_p3 = (!tmp_900_fu_20404_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_900_fu_20404_p3.read()[0].to_bool())? sub_ln1148_91_fu_20432_p2.read(): zext_ln1148_45_fu_20452_p1.read());
}

void ResNet::thread_select_ln1148_46_fu_20521_p3() {
    select_ln1148_46_fu_20521_p3 = (!tmp_901_fu_20469_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_901_fu_20469_p3.read()[0].to_bool())? sub_ln1148_93_fu_20497_p2.read(): zext_ln1148_46_fu_20517_p1.read());
}

void ResNet::thread_select_ln1148_47_fu_20586_p3() {
    select_ln1148_47_fu_20586_p3 = (!tmp_902_fu_20534_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_902_fu_20534_p3.read()[0].to_bool())? sub_ln1148_95_fu_20562_p2.read(): zext_ln1148_47_fu_20582_p1.read());
}

void ResNet::thread_select_ln1148_48_fu_20651_p3() {
    select_ln1148_48_fu_20651_p3 = (!tmp_903_fu_20599_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_903_fu_20599_p3.read()[0].to_bool())? sub_ln1148_97_fu_20627_p2.read(): zext_ln1148_48_fu_20647_p1.read());
}

void ResNet::thread_select_ln1148_49_fu_20716_p3() {
    select_ln1148_49_fu_20716_p3 = (!tmp_904_fu_20664_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_904_fu_20664_p3.read()[0].to_bool())? sub_ln1148_99_fu_20692_p2.read(): zext_ln1148_49_fu_20712_p1.read());
}

void ResNet::thread_select_ln1148_4_fu_17791_p3() {
    select_ln1148_4_fu_17791_p3 = (!tmp_859_fu_17739_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_859_fu_17739_p3.read()[0].to_bool())? sub_ln1148_9_fu_17767_p2.read(): zext_ln1148_4_fu_17787_p1.read());
}

void ResNet::thread_select_ln1148_50_fu_20781_p3() {
    select_ln1148_50_fu_20781_p3 = (!tmp_905_fu_20729_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_905_fu_20729_p3.read()[0].to_bool())? sub_ln1148_101_fu_20757_p2.read(): zext_ln1148_50_fu_20777_p1.read());
}

void ResNet::thread_select_ln1148_51_fu_20846_p3() {
    select_ln1148_51_fu_20846_p3 = (!tmp_906_fu_20794_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_906_fu_20794_p3.read()[0].to_bool())? sub_ln1148_103_fu_20822_p2.read(): zext_ln1148_51_fu_20842_p1.read());
}

void ResNet::thread_select_ln1148_52_fu_20911_p3() {
    select_ln1148_52_fu_20911_p3 = (!tmp_907_fu_20859_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_907_fu_20859_p3.read()[0].to_bool())? sub_ln1148_105_fu_20887_p2.read(): zext_ln1148_52_fu_20907_p1.read());
}

void ResNet::thread_select_ln1148_53_fu_20976_p3() {
    select_ln1148_53_fu_20976_p3 = (!tmp_908_fu_20924_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_908_fu_20924_p3.read()[0].to_bool())? sub_ln1148_107_fu_20952_p2.read(): zext_ln1148_53_fu_20972_p1.read());
}

void ResNet::thread_select_ln1148_54_fu_21041_p3() {
    select_ln1148_54_fu_21041_p3 = (!tmp_909_fu_20989_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_909_fu_20989_p3.read()[0].to_bool())? sub_ln1148_109_fu_21017_p2.read(): zext_ln1148_54_fu_21037_p1.read());
}

void ResNet::thread_select_ln1148_55_fu_21106_p3() {
    select_ln1148_55_fu_21106_p3 = (!tmp_910_fu_21054_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_910_fu_21054_p3.read()[0].to_bool())? sub_ln1148_111_fu_21082_p2.read(): zext_ln1148_55_fu_21102_p1.read());
}

void ResNet::thread_select_ln1148_56_fu_21171_p3() {
    select_ln1148_56_fu_21171_p3 = (!tmp_911_fu_21119_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_911_fu_21119_p3.read()[0].to_bool())? sub_ln1148_113_fu_21147_p2.read(): zext_ln1148_56_fu_21167_p1.read());
}

void ResNet::thread_select_ln1148_57_fu_21236_p3() {
    select_ln1148_57_fu_21236_p3 = (!tmp_912_fu_21184_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_912_fu_21184_p3.read()[0].to_bool())? sub_ln1148_115_fu_21212_p2.read(): zext_ln1148_57_fu_21232_p1.read());
}

void ResNet::thread_select_ln1148_58_fu_21301_p3() {
    select_ln1148_58_fu_21301_p3 = (!tmp_913_fu_21249_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_913_fu_21249_p3.read()[0].to_bool())? sub_ln1148_117_fu_21277_p2.read(): zext_ln1148_58_fu_21297_p1.read());
}

void ResNet::thread_select_ln1148_59_fu_21366_p3() {
    select_ln1148_59_fu_21366_p3 = (!tmp_914_fu_21314_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_914_fu_21314_p3.read()[0].to_bool())? sub_ln1148_119_fu_21342_p2.read(): zext_ln1148_59_fu_21362_p1.read());
}

void ResNet::thread_select_ln1148_5_fu_17856_p3() {
    select_ln1148_5_fu_17856_p3 = (!tmp_860_fu_17804_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_860_fu_17804_p3.read()[0].to_bool())? sub_ln1148_11_fu_17832_p2.read(): zext_ln1148_5_fu_17852_p1.read());
}

void ResNet::thread_select_ln1148_60_fu_21431_p3() {
    select_ln1148_60_fu_21431_p3 = (!tmp_915_fu_21379_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_915_fu_21379_p3.read()[0].to_bool())? sub_ln1148_121_fu_21407_p2.read(): zext_ln1148_60_fu_21427_p1.read());
}

void ResNet::thread_select_ln1148_61_fu_21496_p3() {
    select_ln1148_61_fu_21496_p3 = (!tmp_916_fu_21444_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_916_fu_21444_p3.read()[0].to_bool())? sub_ln1148_123_fu_21472_p2.read(): zext_ln1148_61_fu_21492_p1.read());
}

void ResNet::thread_select_ln1148_62_fu_21561_p3() {
    select_ln1148_62_fu_21561_p3 = (!tmp_917_fu_21509_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_917_fu_21509_p3.read()[0].to_bool())? sub_ln1148_125_fu_21537_p2.read(): zext_ln1148_62_fu_21557_p1.read());
}

void ResNet::thread_select_ln1148_63_fu_21626_p3() {
    select_ln1148_63_fu_21626_p3 = (!tmp_918_fu_21574_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_918_fu_21574_p3.read()[0].to_bool())? sub_ln1148_127_fu_21602_p2.read(): zext_ln1148_63_fu_21622_p1.read());
}

void ResNet::thread_select_ln1148_6_fu_17921_p3() {
    select_ln1148_6_fu_17921_p3 = (!tmp_861_fu_17869_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_861_fu_17869_p3.read()[0].to_bool())? sub_ln1148_13_fu_17897_p2.read(): zext_ln1148_6_fu_17917_p1.read());
}

void ResNet::thread_select_ln1148_7_fu_17986_p3() {
    select_ln1148_7_fu_17986_p3 = (!tmp_862_fu_17934_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_862_fu_17934_p3.read()[0].to_bool())? sub_ln1148_15_fu_17962_p2.read(): zext_ln1148_7_fu_17982_p1.read());
}

void ResNet::thread_select_ln1148_8_fu_18051_p3() {
    select_ln1148_8_fu_18051_p3 = (!tmp_863_fu_17999_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_863_fu_17999_p3.read()[0].to_bool())? sub_ln1148_17_fu_18027_p2.read(): zext_ln1148_8_fu_18047_p1.read());
}

void ResNet::thread_select_ln1148_9_fu_18116_p3() {
    select_ln1148_9_fu_18116_p3 = (!tmp_864_fu_18064_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_864_fu_18064_p3.read()[0].to_bool())? sub_ln1148_19_fu_18092_p2.read(): zext_ln1148_9_fu_18112_p1.read());
}

void ResNet::thread_select_ln1148_fu_17531_p3() {
    select_ln1148_fu_17531_p3 = (!tmp_855_fu_17479_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_855_fu_17479_p3.read()[0].to_bool())? sub_ln1148_1_fu_17507_p2.read(): zext_ln1148_fu_17527_p1.read());
}

void ResNet::thread_select_ln114_1_fu_5413_p3() {
    select_ln114_1_fu_5413_p3 = (!icmp_ln110_fu_5399_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln110_fu_5399_p2.read()[0].to_bool())? row_2_fu_5393_p2.read(): ap_phi_mux_row21_0_phi_fu_2376_p4.read());
}

void ResNet::thread_select_ln114_fu_5405_p3() {
    select_ln114_fu_5405_p3 = (!icmp_ln110_fu_5399_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln110_fu_5399_p2.read()[0].to_bool())? ap_const_lv2_0: col22_0_reg_2383.read());
}

void ResNet::thread_select_ln122_1_fu_6298_p3() {
    select_ln122_1_fu_6298_p3 = (!icmp_ln123_fu_6284_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln123_fu_6284_p2.read()[0].to_bool())? row_b_fu_6278_p2.read(): ap_phi_mux_row_b_0_phi_fu_2409_p4.read());
}

void ResNet::thread_select_ln122_2_fu_6330_p3() {
    select_ln122_2_fu_6330_p3 = (!icmp_ln123_fu_6284_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln123_fu_6284_p2.read()[0].to_bool())? shl_ln129_mid1_fu_6322_p3.read(): shl_ln2_fu_6232_p3.read());
}

void ResNet::thread_select_ln122_3_fu_6342_p3() {
    select_ln122_3_fu_6342_p3 = (!icmp_ln123_fu_6284_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln123_fu_6284_p2.read()[0].to_bool())? ap_const_lv5_0: shl_ln129_1_fu_6248_p3.read());
}

void ResNet::thread_select_ln122_4_fu_6528_p3() {
    select_ln122_4_fu_6528_p3 = (!icmp_ln123_fu_6284_p2.read()[0].is_01())? sc_lv<6>(): ((icmp_ln123_fu_6284_p2.read()[0].to_bool())? add_ln129_mid_fu_6356_p3.read(): add_ln129_fu_6260_p2.read());
}

void ResNet::thread_select_ln122_fu_6290_p3() {
    select_ln122_fu_6290_p3 = (!icmp_ln123_fu_6284_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln123_fu_6284_p2.read()[0].to_bool())? ap_const_lv3_0: ap_phi_mux_col_b_0_phi_fu_2431_p4.read());
}

void ResNet::thread_select_ln123_1_fu_6414_p3() {
    select_ln123_1_fu_6414_p3 = (!and_ln122_1_fu_6388_p2.read()[0].is_01())? sc_lv<3>(): ((and_ln122_1_fu_6388_p2.read()[0].to_bool())? col_b_fu_6394_p2.read(): select_ln122_fu_6290_p3.read());
}

void ResNet::thread_select_ln123_2_fu_6444_p3() {
    select_ln123_2_fu_6444_p3 = (!and_ln122_1_fu_6388_p2.read()[0].is_01())? sc_lv<5>(): ((and_ln122_1_fu_6388_p2.read()[0].to_bool())? shl_ln129_1_mid1_fu_6436_p3.read(): select_ln122_3_fu_6342_p3.read());
}

void ResNet::thread_select_ln123_3_fu_6536_p3() {
    select_ln123_3_fu_6536_p3 = (!and_ln122_1_fu_6388_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln122_1_fu_6388_p2.read()[0].to_bool())? zext_ln129_2_fu_6462_p1.read(): select_ln122_4_fu_6528_p3.read());
}

void ResNet::thread_select_ln123_4_fu_6580_p3() {
    select_ln123_4_fu_6580_p3 = (!icmp_ln123_fu_6284_p2.read()[0].is_01())? sc_lv<10>(): ((icmp_ln123_fu_6284_p2.read()[0].to_bool())? ap_const_lv10_1: add_ln123_1_fu_6574_p2.read());
}

void ResNet::thread_select_ln123_fu_6406_p3() {
    select_ln123_fu_6406_p3 = (!or_ln123_fu_6400_p2.read()[0].is_01())? sc_lv<4>(): ((or_ln123_fu_6400_p2.read()[0].to_bool())? ap_const_lv4_1: ap_phi_mux_brow_0_phi_fu_2453_p4.read());
}

void ResNet::thread_select_ln124_1_fu_6514_p3() {
    select_ln124_1_fu_6514_p3 = (!and_ln123_fu_6478_p2.read()[0].is_01())? sc_lv<4>(): ((and_ln123_fu_6478_p2.read()[0].to_bool())? brow_fu_6484_p2.read(): select_ln123_fu_6406_p3.read());
}

void ResNet::thread_select_ln124_2_fu_6588_p3() {
    select_ln124_2_fu_6588_p3 = (!and_ln123_reg_21937.read()[0].is_01())? sc_lv<6>(): ((and_ln123_reg_21937.read()[0].to_bool())? add_ln129_2_reg_21953.read(): select_ln123_3_reg_21958.read());
}

void ResNet::thread_select_ln124_3_fu_6566_p3() {
    select_ln124_3_fu_6566_p3 = (!or_ln123_fu_6400_p2.read()[0].is_01())? sc_lv<8>(): ((or_ln123_fu_6400_p2.read()[0].to_bool())? ap_const_lv8_1: add_ln124_1_fu_6560_p2.read());
}

void ResNet::thread_select_ln124_fu_6502_p3() {
    select_ln124_fu_6502_p3 = (!or_ln124_1_fu_6496_p2.read()[0].is_01())? sc_lv<4>(): ((or_ln124_1_fu_6496_p2.read()[0].to_bool())? ap_const_lv4_1: bcol_0_reg_2460.read());
}

void ResNet::thread_select_ln340_100_fu_13221_p3() {
    select_ln340_100_fu_13221_p3 = (!xor_ln340_128_fu_13203_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_128_fu_13203_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_106_fu_13177_p2.read());
}

void ResNet::thread_select_ln340_102_fu_13311_p3() {
    select_ln340_102_fu_13311_p3 = (!xor_ln340_130_fu_13293_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_130_fu_13293_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_107_fu_13267_p2.read());
}

void ResNet::thread_select_ln340_104_fu_13401_p3() {
    select_ln340_104_fu_13401_p3 = (!xor_ln340_132_fu_13383_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_132_fu_13383_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_108_fu_13357_p2.read());
}

void ResNet::thread_select_ln340_106_fu_13491_p3() {
    select_ln340_106_fu_13491_p3 = (!xor_ln340_134_fu_13473_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_134_fu_13473_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_109_fu_13447_p2.read());
}

void ResNet::thread_select_ln340_108_fu_13581_p3() {
    select_ln340_108_fu_13581_p3 = (!xor_ln340_136_fu_13563_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_136_fu_13563_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_110_fu_13537_p2.read());
}

void ResNet::thread_select_ln340_10_fu_10544_p3() {
    select_ln340_10_fu_10544_p3 = (!or_ln340_10_fu_10527_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_10_fu_10527_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_64_reg_22565.read());
}

void ResNet::thread_select_ln340_110_fu_13671_p3() {
    select_ln340_110_fu_13671_p3 = (!xor_ln340_138_fu_13653_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_138_fu_13653_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_111_fu_13627_p2.read());
}

void ResNet::thread_select_ln340_112_fu_13761_p3() {
    select_ln340_112_fu_13761_p3 = (!xor_ln340_140_fu_13743_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_140_fu_13743_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_112_fu_13717_p2.read());
}

void ResNet::thread_select_ln340_114_fu_13851_p3() {
    select_ln340_114_fu_13851_p3 = (!xor_ln340_142_fu_13833_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_142_fu_13833_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_113_fu_13807_p2.read());
}

void ResNet::thread_select_ln340_116_fu_13941_p3() {
    select_ln340_116_fu_13941_p3 = (!xor_ln340_144_fu_13923_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_144_fu_13923_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_114_fu_13897_p2.read());
}

void ResNet::thread_select_ln340_118_fu_14031_p3() {
    select_ln340_118_fu_14031_p3 = (!xor_ln340_146_fu_14013_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_146_fu_14013_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_115_fu_13987_p2.read());
}

void ResNet::thread_select_ln340_11_fu_10631_p3() {
    select_ln340_11_fu_10631_p3 = (!or_ln340_11_fu_10614_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_11_fu_10614_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_65_reg_22605.read());
}

void ResNet::thread_select_ln340_120_fu_14121_p3() {
    select_ln340_120_fu_14121_p3 = (!xor_ln340_148_fu_14103_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_148_fu_14103_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_116_fu_14077_p2.read());
}

void ResNet::thread_select_ln340_122_fu_14211_p3() {
    select_ln340_122_fu_14211_p3 = (!xor_ln340_150_fu_14193_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_150_fu_14193_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_117_fu_14167_p2.read());
}

void ResNet::thread_select_ln340_124_fu_14301_p3() {
    select_ln340_124_fu_14301_p3 = (!xor_ln340_152_fu_14283_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_152_fu_14283_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_118_fu_14257_p2.read());
}

void ResNet::thread_select_ln340_126_fu_14391_p3() {
    select_ln340_126_fu_14391_p3 = (!xor_ln340_154_fu_14373_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_154_fu_14373_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_119_fu_14347_p2.read());
}

void ResNet::thread_select_ln340_128_fu_14481_p3() {
    select_ln340_128_fu_14481_p3 = (!xor_ln340_156_fu_14463_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_156_fu_14463_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_120_fu_14437_p2.read());
}

void ResNet::thread_select_ln340_12_fu_10718_p3() {
    select_ln340_12_fu_10718_p3 = (!or_ln340_12_fu_10701_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_12_fu_10701_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_66_reg_22645.read());
}

void ResNet::thread_select_ln340_130_fu_14571_p3() {
    select_ln340_130_fu_14571_p3 = (!xor_ln340_158_fu_14553_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_158_fu_14553_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_121_fu_14527_p2.read());
}

void ResNet::thread_select_ln340_132_fu_14661_p3() {
    select_ln340_132_fu_14661_p3 = (!xor_ln340_160_fu_14643_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_160_fu_14643_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_122_fu_14617_p2.read());
}

void ResNet::thread_select_ln340_134_fu_14751_p3() {
    select_ln340_134_fu_14751_p3 = (!xor_ln340_162_fu_14733_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_162_fu_14733_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_123_fu_14707_p2.read());
}

void ResNet::thread_select_ln340_136_fu_14841_p3() {
    select_ln340_136_fu_14841_p3 = (!xor_ln340_164_fu_14823_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_164_fu_14823_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_124_fu_14797_p2.read());
}

void ResNet::thread_select_ln340_138_fu_14931_p3() {
    select_ln340_138_fu_14931_p3 = (!xor_ln340_166_fu_14913_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_166_fu_14913_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_125_fu_14887_p2.read());
}

void ResNet::thread_select_ln340_13_fu_10805_p3() {
    select_ln340_13_fu_10805_p3 = (!or_ln340_13_fu_10788_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_13_fu_10788_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_67_reg_22685.read());
}

void ResNet::thread_select_ln340_140_fu_15021_p3() {
    select_ln340_140_fu_15021_p3 = (!xor_ln340_168_fu_15003_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_168_fu_15003_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_126_fu_14977_p2.read());
}

void ResNet::thread_select_ln340_142_fu_15111_p3() {
    select_ln340_142_fu_15111_p3 = (!xor_ln340_170_fu_15093_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_170_fu_15093_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_127_fu_15067_p2.read());
}

void ResNet::thread_select_ln340_144_fu_15201_p3() {
    select_ln340_144_fu_15201_p3 = (!xor_ln340_172_fu_15183_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_172_fu_15183_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_128_fu_15157_p2.read());
}

void ResNet::thread_select_ln340_146_fu_15291_p3() {
    select_ln340_146_fu_15291_p3 = (!xor_ln340_174_fu_15273_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_174_fu_15273_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_129_fu_15247_p2.read());
}

void ResNet::thread_select_ln340_148_fu_15381_p3() {
    select_ln340_148_fu_15381_p3 = (!xor_ln340_176_fu_15363_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_176_fu_15363_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_130_fu_15337_p2.read());
}

void ResNet::thread_select_ln340_14_fu_10892_p3() {
    select_ln340_14_fu_10892_p3 = (!or_ln340_14_fu_10875_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_14_fu_10875_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_68_reg_22725.read());
}

void ResNet::thread_select_ln340_150_fu_15471_p3() {
    select_ln340_150_fu_15471_p3 = (!xor_ln340_178_fu_15453_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_178_fu_15453_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_131_fu_15427_p2.read());
}

void ResNet::thread_select_ln340_152_fu_15561_p3() {
    select_ln340_152_fu_15561_p3 = (!xor_ln340_180_fu_15543_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_180_fu_15543_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_132_fu_15517_p2.read());
}

void ResNet::thread_select_ln340_154_fu_15651_p3() {
    select_ln340_154_fu_15651_p3 = (!xor_ln340_182_fu_15633_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_182_fu_15633_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_133_fu_15607_p2.read());
}

void ResNet::thread_select_ln340_156_fu_15741_p3() {
    select_ln340_156_fu_15741_p3 = (!xor_ln340_184_fu_15723_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_184_fu_15723_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_134_fu_15697_p2.read());
}

void ResNet::thread_select_ln340_158_fu_15831_p3() {
    select_ln340_158_fu_15831_p3 = (!xor_ln340_186_fu_15813_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_186_fu_15813_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_135_fu_15787_p2.read());
}

void ResNet::thread_select_ln340_15_fu_10979_p3() {
    select_ln340_15_fu_10979_p3 = (!or_ln340_15_fu_10962_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_15_fu_10962_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_69_reg_22765.read());
}

void ResNet::thread_select_ln340_160_fu_15921_p3() {
    select_ln340_160_fu_15921_p3 = (!xor_ln340_188_fu_15903_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_188_fu_15903_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_136_fu_15877_p2.read());
}

void ResNet::thread_select_ln340_162_fu_16011_p3() {
    select_ln340_162_fu_16011_p3 = (!xor_ln340_190_fu_15993_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_190_fu_15993_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_137_fu_15967_p2.read());
}

void ResNet::thread_select_ln340_164_fu_16101_p3() {
    select_ln340_164_fu_16101_p3 = (!xor_ln340_192_fu_16083_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_192_fu_16083_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_138_fu_16057_p2.read());
}

void ResNet::thread_select_ln340_166_fu_16191_p3() {
    select_ln340_166_fu_16191_p3 = (!xor_ln340_194_fu_16173_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_194_fu_16173_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_139_fu_16147_p2.read());
}

void ResNet::thread_select_ln340_168_fu_16281_p3() {
    select_ln340_168_fu_16281_p3 = (!xor_ln340_195_fu_16263_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_195_fu_16263_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_140_fu_16237_p2.read());
}

void ResNet::thread_select_ln340_170_fu_16371_p3() {
    select_ln340_170_fu_16371_p3 = (!xor_ln340_196_fu_16353_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_196_fu_16353_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_141_fu_16327_p2.read());
}

void ResNet::thread_select_ln340_172_fu_16461_p3() {
    select_ln340_172_fu_16461_p3 = (!xor_ln340_197_fu_16443_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_197_fu_16443_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_142_fu_16417_p2.read());
}

void ResNet::thread_select_ln340_174_fu_16551_p3() {
    select_ln340_174_fu_16551_p3 = (!xor_ln340_198_fu_16533_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_198_fu_16533_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_143_fu_16507_p2.read());
}

void ResNet::thread_select_ln340_176_fu_16641_p3() {
    select_ln340_176_fu_16641_p3 = (!xor_ln340_199_fu_16623_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_199_fu_16623_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_144_fu_16597_p2.read());
}

void ResNet::thread_select_ln340_178_fu_16731_p3() {
    select_ln340_178_fu_16731_p3 = (!xor_ln340_200_fu_16713_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_200_fu_16713_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_145_fu_16687_p2.read());
}

void ResNet::thread_select_ln340_180_fu_16821_p3() {
    select_ln340_180_fu_16821_p3 = (!xor_ln340_201_fu_16803_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_201_fu_16803_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_146_fu_16777_p2.read());
}

void ResNet::thread_select_ln340_182_fu_16911_p3() {
    select_ln340_182_fu_16911_p3 = (!xor_ln340_202_fu_16893_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_202_fu_16893_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_147_fu_16867_p2.read());
}

void ResNet::thread_select_ln340_184_fu_17001_p3() {
    select_ln340_184_fu_17001_p3 = (!xor_ln340_203_fu_16983_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_203_fu_16983_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_148_fu_16957_p2.read());
}

void ResNet::thread_select_ln340_186_fu_17091_p3() {
    select_ln340_186_fu_17091_p3 = (!xor_ln340_204_fu_17073_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_204_fu_17073_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_149_fu_17047_p2.read());
}

void ResNet::thread_select_ln340_188_fu_17181_p3() {
    select_ln340_188_fu_17181_p3 = (!xor_ln340_205_fu_17163_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_205_fu_17163_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_150_fu_17137_p2.read());
}

void ResNet::thread_select_ln340_190_fu_17271_p3() {
    select_ln340_190_fu_17271_p3 = (!xor_ln340_206_fu_17253_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_206_fu_17253_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_151_fu_17227_p2.read());
}

void ResNet::thread_select_ln340_192_fu_17361_p3() {
    select_ln340_192_fu_17361_p3 = (!xor_ln340_207_fu_17343_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_207_fu_17343_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_152_fu_17317_p2.read());
}

void ResNet::thread_select_ln340_194_fu_17451_p3() {
    select_ln340_194_fu_17451_p3 = (!xor_ln340_208_fu_17433_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_208_fu_17433_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_153_fu_17407_p2.read());
}

void ResNet::thread_select_ln340_1_fu_9761_p3() {
    select_ln340_1_fu_9761_p3 = (!or_ln340_1_fu_9744_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_1_fu_9744_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_55_reg_22205.read());
}

void ResNet::thread_select_ln340_2_fu_9848_p3() {
    select_ln340_2_fu_9848_p3 = (!or_ln340_2_fu_9831_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_2_fu_9831_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_56_reg_22245.read());
}

void ResNet::thread_select_ln340_3_fu_9935_p3() {
    select_ln340_3_fu_9935_p3 = (!or_ln340_3_fu_9918_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_3_fu_9918_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_57_reg_22285.read());
}

void ResNet::thread_select_ln340_66_fu_11781_p3() {
    select_ln340_66_fu_11781_p3 = (!xor_ln340_fu_11763_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_fu_11763_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_fu_11737_p2.read());
}

void ResNet::thread_select_ln340_68_fu_10022_p3() {
    select_ln340_68_fu_10022_p3 = (!or_ln340_4_fu_10005_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_4_fu_10005_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_58_reg_22325.read());
}

void ResNet::thread_select_ln340_69_fu_11871_p3() {
    select_ln340_69_fu_11871_p3 = (!xor_ln340_98_fu_11853_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_98_fu_11853_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_91_fu_11827_p2.read());
}

void ResNet::thread_select_ln340_6_fu_10196_p3() {
    select_ln340_6_fu_10196_p3 = (!or_ln340_6_fu_10179_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_6_fu_10179_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_60_reg_22405.read());
}

void ResNet::thread_select_ln340_71_fu_11961_p3() {
    select_ln340_71_fu_11961_p3 = (!xor_ln340_100_fu_11943_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_100_fu_11943_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_92_fu_11917_p2.read());
}

void ResNet::thread_select_ln340_72_fu_10109_p3() {
    select_ln340_72_fu_10109_p3 = (!or_ln340_5_fu_10092_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_5_fu_10092_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_59_reg_22365.read());
}

void ResNet::thread_select_ln340_74_fu_12051_p3() {
    select_ln340_74_fu_12051_p3 = (!xor_ln340_102_fu_12033_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_102_fu_12033_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_93_fu_12007_p2.read());
}

void ResNet::thread_select_ln340_76_fu_12141_p3() {
    select_ln340_76_fu_12141_p3 = (!xor_ln340_104_fu_12123_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_104_fu_12123_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_94_fu_12097_p2.read());
}

void ResNet::thread_select_ln340_78_fu_12231_p3() {
    select_ln340_78_fu_12231_p3 = (!xor_ln340_106_fu_12213_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_106_fu_12213_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_95_fu_12187_p2.read());
}

void ResNet::thread_select_ln340_7_fu_10283_p3() {
    select_ln340_7_fu_10283_p3 = (!or_ln340_7_fu_10266_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_7_fu_10266_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_61_reg_22445.read());
}

void ResNet::thread_select_ln340_80_fu_12321_p3() {
    select_ln340_80_fu_12321_p3 = (!xor_ln340_108_fu_12303_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_108_fu_12303_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_96_fu_12277_p2.read());
}

void ResNet::thread_select_ln340_82_fu_12411_p3() {
    select_ln340_82_fu_12411_p3 = (!xor_ln340_110_fu_12393_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_110_fu_12393_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_97_fu_12367_p2.read());
}

void ResNet::thread_select_ln340_84_fu_12501_p3() {
    select_ln340_84_fu_12501_p3 = (!xor_ln340_112_fu_12483_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_112_fu_12483_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_98_fu_12457_p2.read());
}

void ResNet::thread_select_ln340_86_fu_12591_p3() {
    select_ln340_86_fu_12591_p3 = (!xor_ln340_114_fu_12573_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_114_fu_12573_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_99_fu_12547_p2.read());
}

void ResNet::thread_select_ln340_88_fu_12681_p3() {
    select_ln340_88_fu_12681_p3 = (!xor_ln340_116_fu_12663_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_116_fu_12663_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_100_fu_12637_p2.read());
}

void ResNet::thread_select_ln340_8_fu_10370_p3() {
    select_ln340_8_fu_10370_p3 = (!or_ln340_8_fu_10353_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_8_fu_10353_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_62_reg_22485.read());
}

void ResNet::thread_select_ln340_90_fu_12771_p3() {
    select_ln340_90_fu_12771_p3 = (!xor_ln340_118_fu_12753_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_118_fu_12753_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_101_fu_12727_p2.read());
}

void ResNet::thread_select_ln340_92_fu_12861_p3() {
    select_ln340_92_fu_12861_p3 = (!xor_ln340_120_fu_12843_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_120_fu_12843_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_102_fu_12817_p2.read());
}

void ResNet::thread_select_ln340_94_fu_12951_p3() {
    select_ln340_94_fu_12951_p3 = (!xor_ln340_122_fu_12933_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_122_fu_12933_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_103_fu_12907_p2.read());
}

void ResNet::thread_select_ln340_96_fu_13041_p3() {
    select_ln340_96_fu_13041_p3 = (!xor_ln340_124_fu_13023_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_124_fu_13023_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_104_fu_12997_p2.read());
}

void ResNet::thread_select_ln340_98_fu_13131_p3() {
    select_ln340_98_fu_13131_p3 = (!xor_ln340_126_fu_13113_p2.read()[0].is_01())? sc_lv<12>(): ((xor_ln340_126_fu_13113_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln703_105_fu_13087_p2.read());
}

void ResNet::thread_select_ln340_9_fu_10457_p3() {
    select_ln340_9_fu_10457_p3 = (!or_ln340_9_fu_10440_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_9_fu_10440_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_63_reg_22525.read());
}

void ResNet::thread_select_ln340_fu_9674_p3() {
    select_ln340_fu_9674_p3 = (!or_ln340_fu_9657_p2.read()[0].is_01())? sc_lv<12>(): ((or_ln340_fu_9657_p2.read()[0].to_bool())? ap_const_lv12_7FF: add_ln415_reg_22165.read());
}

void ResNet::thread_select_ln388_100_fu_14579_p3() {
    select_ln388_100_fu_14579_p3 = (!and_ln786_202_fu_14547_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_202_fu_14547_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_121_fu_14527_p2.read());
}

void ResNet::thread_select_ln388_101_fu_14669_p3() {
    select_ln388_101_fu_14669_p3 = (!and_ln786_203_fu_14637_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_203_fu_14637_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_122_fu_14617_p2.read());
}

void ResNet::thread_select_ln388_102_fu_14759_p3() {
    select_ln388_102_fu_14759_p3 = (!and_ln786_204_fu_14727_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_204_fu_14727_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_123_fu_14707_p2.read());
}

void ResNet::thread_select_ln388_103_fu_14849_p3() {
    select_ln388_103_fu_14849_p3 = (!and_ln786_205_fu_14817_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_205_fu_14817_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_124_fu_14797_p2.read());
}

void ResNet::thread_select_ln388_104_fu_14939_p3() {
    select_ln388_104_fu_14939_p3 = (!and_ln786_206_fu_14907_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_206_fu_14907_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_125_fu_14887_p2.read());
}

void ResNet::thread_select_ln388_105_fu_15029_p3() {
    select_ln388_105_fu_15029_p3 = (!and_ln786_207_fu_14997_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_207_fu_14997_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_126_fu_14977_p2.read());
}

void ResNet::thread_select_ln388_106_fu_15119_p3() {
    select_ln388_106_fu_15119_p3 = (!and_ln786_208_fu_15087_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_208_fu_15087_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_127_fu_15067_p2.read());
}

void ResNet::thread_select_ln388_107_fu_15209_p3() {
    select_ln388_107_fu_15209_p3 = (!and_ln786_209_fu_15177_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_209_fu_15177_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_128_fu_15157_p2.read());
}

void ResNet::thread_select_ln388_108_fu_15299_p3() {
    select_ln388_108_fu_15299_p3 = (!and_ln786_210_fu_15267_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_210_fu_15267_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_129_fu_15247_p2.read());
}

void ResNet::thread_select_ln388_109_fu_15389_p3() {
    select_ln388_109_fu_15389_p3 = (!and_ln786_211_fu_15357_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_211_fu_15357_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_130_fu_15337_p2.read());
}

void ResNet::thread_select_ln388_10_fu_10551_p3() {
    select_ln388_10_fu_10551_p3 = (!and_ln786_169_fu_10522_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_169_fu_10522_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_64_reg_22565.read());
}

void ResNet::thread_select_ln388_110_fu_15479_p3() {
    select_ln388_110_fu_15479_p3 = (!and_ln786_212_fu_15447_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_212_fu_15447_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_131_fu_15427_p2.read());
}

void ResNet::thread_select_ln388_111_fu_15569_p3() {
    select_ln388_111_fu_15569_p3 = (!and_ln786_213_fu_15537_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_213_fu_15537_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_132_fu_15517_p2.read());
}

void ResNet::thread_select_ln388_112_fu_15659_p3() {
    select_ln388_112_fu_15659_p3 = (!and_ln786_214_fu_15627_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_214_fu_15627_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_133_fu_15607_p2.read());
}

void ResNet::thread_select_ln388_113_fu_15749_p3() {
    select_ln388_113_fu_15749_p3 = (!and_ln786_215_fu_15717_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_215_fu_15717_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_134_fu_15697_p2.read());
}

void ResNet::thread_select_ln388_114_fu_15839_p3() {
    select_ln388_114_fu_15839_p3 = (!and_ln786_216_fu_15807_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_216_fu_15807_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_135_fu_15787_p2.read());
}

void ResNet::thread_select_ln388_115_fu_15929_p3() {
    select_ln388_115_fu_15929_p3 = (!and_ln786_217_fu_15897_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_217_fu_15897_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_136_fu_15877_p2.read());
}

void ResNet::thread_select_ln388_116_fu_16019_p3() {
    select_ln388_116_fu_16019_p3 = (!and_ln786_218_fu_15987_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_218_fu_15987_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_137_fu_15967_p2.read());
}

void ResNet::thread_select_ln388_117_fu_16109_p3() {
    select_ln388_117_fu_16109_p3 = (!and_ln786_219_fu_16077_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_219_fu_16077_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_138_fu_16057_p2.read());
}

void ResNet::thread_select_ln388_118_fu_16199_p3() {
    select_ln388_118_fu_16199_p3 = (!and_ln786_220_fu_16167_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_220_fu_16167_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_139_fu_16147_p2.read());
}

void ResNet::thread_select_ln388_119_fu_16289_p3() {
    select_ln388_119_fu_16289_p3 = (!and_ln786_221_fu_16257_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_221_fu_16257_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_140_fu_16237_p2.read());
}

void ResNet::thread_select_ln388_11_fu_10638_p3() {
    select_ln388_11_fu_10638_p3 = (!and_ln786_170_fu_10609_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_170_fu_10609_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_65_reg_22605.read());
}

void ResNet::thread_select_ln388_120_fu_16379_p3() {
    select_ln388_120_fu_16379_p3 = (!and_ln786_222_fu_16347_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_222_fu_16347_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_141_fu_16327_p2.read());
}

void ResNet::thread_select_ln388_121_fu_16469_p3() {
    select_ln388_121_fu_16469_p3 = (!and_ln786_223_fu_16437_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_223_fu_16437_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_142_fu_16417_p2.read());
}

void ResNet::thread_select_ln388_122_fu_16559_p3() {
    select_ln388_122_fu_16559_p3 = (!and_ln786_224_fu_16527_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_224_fu_16527_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_143_fu_16507_p2.read());
}

void ResNet::thread_select_ln388_123_fu_16649_p3() {
    select_ln388_123_fu_16649_p3 = (!and_ln786_225_fu_16617_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_225_fu_16617_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_144_fu_16597_p2.read());
}

void ResNet::thread_select_ln388_124_fu_16739_p3() {
    select_ln388_124_fu_16739_p3 = (!and_ln786_226_fu_16707_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_226_fu_16707_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_145_fu_16687_p2.read());
}

void ResNet::thread_select_ln388_125_fu_16829_p3() {
    select_ln388_125_fu_16829_p3 = (!and_ln786_227_fu_16797_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_227_fu_16797_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_146_fu_16777_p2.read());
}

void ResNet::thread_select_ln388_126_fu_16919_p3() {
    select_ln388_126_fu_16919_p3 = (!and_ln786_228_fu_16887_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_228_fu_16887_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_147_fu_16867_p2.read());
}

void ResNet::thread_select_ln388_127_fu_17009_p3() {
    select_ln388_127_fu_17009_p3 = (!and_ln786_229_fu_16977_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_229_fu_16977_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_148_fu_16957_p2.read());
}

void ResNet::thread_select_ln388_128_fu_17099_p3() {
    select_ln388_128_fu_17099_p3 = (!and_ln786_230_fu_17067_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_230_fu_17067_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_149_fu_17047_p2.read());
}

void ResNet::thread_select_ln388_129_fu_17189_p3() {
    select_ln388_129_fu_17189_p3 = (!and_ln786_231_fu_17157_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_231_fu_17157_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_150_fu_17137_p2.read());
}

void ResNet::thread_select_ln388_12_fu_10725_p3() {
    select_ln388_12_fu_10725_p3 = (!and_ln786_172_fu_10696_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_172_fu_10696_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_66_reg_22645.read());
}

void ResNet::thread_select_ln388_130_fu_17279_p3() {
    select_ln388_130_fu_17279_p3 = (!and_ln786_232_fu_17247_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_232_fu_17247_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_151_fu_17227_p2.read());
}

void ResNet::thread_select_ln388_131_fu_17369_p3() {
    select_ln388_131_fu_17369_p3 = (!and_ln786_233_fu_17337_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_233_fu_17337_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_152_fu_17317_p2.read());
}

void ResNet::thread_select_ln388_132_fu_17459_p3() {
    select_ln388_132_fu_17459_p3 = (!and_ln786_234_fu_17427_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_234_fu_17427_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_153_fu_17407_p2.read());
}

void ResNet::thread_select_ln388_13_fu_10812_p3() {
    select_ln388_13_fu_10812_p3 = (!and_ln786_173_fu_10783_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_173_fu_10783_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_67_reg_22685.read());
}

void ResNet::thread_select_ln388_14_fu_10899_p3() {
    select_ln388_14_fu_10899_p3 = (!and_ln786_175_fu_10870_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_175_fu_10870_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_68_reg_22725.read());
}

void ResNet::thread_select_ln388_15_fu_10986_p3() {
    select_ln388_15_fu_10986_p3 = (!and_ln786_177_fu_10957_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_177_fu_10957_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_69_reg_22765.read());
}

void ResNet::thread_select_ln388_1_fu_9768_p3() {
    select_ln388_1_fu_9768_p3 = (!and_ln786_156_fu_9739_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_156_fu_9739_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_55_reg_22205.read());
}

void ResNet::thread_select_ln388_2_fu_9855_p3() {
    select_ln388_2_fu_9855_p3 = (!and_ln786_157_fu_9826_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_157_fu_9826_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_56_reg_22245.read());
}

void ResNet::thread_select_ln388_3_fu_9942_p3() {
    select_ln388_3_fu_9942_p3 = (!and_ln786_158_fu_9913_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_158_fu_9913_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_57_reg_22285.read());
}

void ResNet::thread_select_ln388_67_fu_10029_p3() {
    select_ln388_67_fu_10029_p3 = (!and_ln786_159_fu_10000_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_159_fu_10000_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_58_reg_22325.read());
}

void ResNet::thread_select_ln388_68_fu_11789_p3() {
    select_ln388_68_fu_11789_p3 = (!and_ln786_160_fu_11757_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_160_fu_11757_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_fu_11737_p2.read());
}

void ResNet::thread_select_ln388_69_fu_10116_p3() {
    select_ln388_69_fu_10116_p3 = (!and_ln786_161_fu_10087_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_161_fu_10087_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_59_reg_22365.read());
}

void ResNet::thread_select_ln388_6_fu_10203_p3() {
    select_ln388_6_fu_10203_p3 = (!and_ln786_162_fu_10174_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_162_fu_10174_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_60_reg_22405.read());
}

void ResNet::thread_select_ln388_70_fu_11879_p3() {
    select_ln388_70_fu_11879_p3 = (!and_ln786_163_fu_11847_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_163_fu_11847_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_91_fu_11827_p2.read());
}

void ResNet::thread_select_ln388_71_fu_11969_p3() {
    select_ln388_71_fu_11969_p3 = (!and_ln786_165_fu_11937_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_165_fu_11937_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_92_fu_11917_p2.read());
}

void ResNet::thread_select_ln388_72_fu_12059_p3() {
    select_ln388_72_fu_12059_p3 = (!and_ln786_168_fu_12027_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_168_fu_12027_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_93_fu_12007_p2.read());
}

void ResNet::thread_select_ln388_73_fu_12149_p3() {
    select_ln388_73_fu_12149_p3 = (!and_ln786_171_fu_12117_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_171_fu_12117_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_94_fu_12097_p2.read());
}

void ResNet::thread_select_ln388_74_fu_12239_p3() {
    select_ln388_74_fu_12239_p3 = (!and_ln786_174_fu_12207_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_174_fu_12207_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_95_fu_12187_p2.read());
}

void ResNet::thread_select_ln388_75_fu_12329_p3() {
    select_ln388_75_fu_12329_p3 = (!and_ln786_176_fu_12297_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_176_fu_12297_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_96_fu_12277_p2.read());
}

void ResNet::thread_select_ln388_76_fu_12419_p3() {
    select_ln388_76_fu_12419_p3 = (!and_ln786_178_fu_12387_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_178_fu_12387_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_97_fu_12367_p2.read());
}

void ResNet::thread_select_ln388_77_fu_12509_p3() {
    select_ln388_77_fu_12509_p3 = (!and_ln786_179_fu_12477_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_179_fu_12477_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_98_fu_12457_p2.read());
}

void ResNet::thread_select_ln388_78_fu_12599_p3() {
    select_ln388_78_fu_12599_p3 = (!and_ln786_180_fu_12567_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_180_fu_12567_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_99_fu_12547_p2.read());
}

void ResNet::thread_select_ln388_79_fu_12689_p3() {
    select_ln388_79_fu_12689_p3 = (!and_ln786_181_fu_12657_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_181_fu_12657_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_100_fu_12637_p2.read());
}

void ResNet::thread_select_ln388_7_fu_10290_p3() {
    select_ln388_7_fu_10290_p3 = (!and_ln786_164_fu_10261_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_164_fu_10261_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_61_reg_22445.read());
}

void ResNet::thread_select_ln388_80_fu_12779_p3() {
    select_ln388_80_fu_12779_p3 = (!and_ln786_182_fu_12747_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_182_fu_12747_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_101_fu_12727_p2.read());
}

void ResNet::thread_select_ln388_81_fu_12869_p3() {
    select_ln388_81_fu_12869_p3 = (!and_ln786_183_fu_12837_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_183_fu_12837_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_102_fu_12817_p2.read());
}

void ResNet::thread_select_ln388_82_fu_12959_p3() {
    select_ln388_82_fu_12959_p3 = (!and_ln786_184_fu_12927_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_184_fu_12927_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_103_fu_12907_p2.read());
}

void ResNet::thread_select_ln388_83_fu_13049_p3() {
    select_ln388_83_fu_13049_p3 = (!and_ln786_185_fu_13017_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_185_fu_13017_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_104_fu_12997_p2.read());
}

void ResNet::thread_select_ln388_84_fu_13139_p3() {
    select_ln388_84_fu_13139_p3 = (!and_ln786_186_fu_13107_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_186_fu_13107_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_105_fu_13087_p2.read());
}

void ResNet::thread_select_ln388_85_fu_13229_p3() {
    select_ln388_85_fu_13229_p3 = (!and_ln786_187_fu_13197_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_187_fu_13197_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_106_fu_13177_p2.read());
}

void ResNet::thread_select_ln388_86_fu_13319_p3() {
    select_ln388_86_fu_13319_p3 = (!and_ln786_188_fu_13287_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_188_fu_13287_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_107_fu_13267_p2.read());
}

void ResNet::thread_select_ln388_87_fu_13409_p3() {
    select_ln388_87_fu_13409_p3 = (!and_ln786_189_fu_13377_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_189_fu_13377_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_108_fu_13357_p2.read());
}

void ResNet::thread_select_ln388_88_fu_13499_p3() {
    select_ln388_88_fu_13499_p3 = (!and_ln786_190_fu_13467_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_190_fu_13467_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_109_fu_13447_p2.read());
}

void ResNet::thread_select_ln388_89_fu_13589_p3() {
    select_ln388_89_fu_13589_p3 = (!and_ln786_191_fu_13557_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_191_fu_13557_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_110_fu_13537_p2.read());
}

void ResNet::thread_select_ln388_8_fu_10377_p3() {
    select_ln388_8_fu_10377_p3 = (!and_ln786_166_fu_10348_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_166_fu_10348_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_62_reg_22485.read());
}

void ResNet::thread_select_ln388_90_fu_13679_p3() {
    select_ln388_90_fu_13679_p3 = (!and_ln786_192_fu_13647_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_192_fu_13647_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_111_fu_13627_p2.read());
}

void ResNet::thread_select_ln388_91_fu_13769_p3() {
    select_ln388_91_fu_13769_p3 = (!and_ln786_193_fu_13737_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_193_fu_13737_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_112_fu_13717_p2.read());
}

void ResNet::thread_select_ln388_92_fu_13859_p3() {
    select_ln388_92_fu_13859_p3 = (!and_ln786_194_fu_13827_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_194_fu_13827_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_113_fu_13807_p2.read());
}

void ResNet::thread_select_ln388_93_fu_13949_p3() {
    select_ln388_93_fu_13949_p3 = (!and_ln786_195_fu_13917_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_195_fu_13917_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_114_fu_13897_p2.read());
}

void ResNet::thread_select_ln388_94_fu_14039_p3() {
    select_ln388_94_fu_14039_p3 = (!and_ln786_196_fu_14007_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_196_fu_14007_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_115_fu_13987_p2.read());
}

void ResNet::thread_select_ln388_95_fu_14129_p3() {
    select_ln388_95_fu_14129_p3 = (!and_ln786_197_fu_14097_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_197_fu_14097_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_116_fu_14077_p2.read());
}

void ResNet::thread_select_ln388_96_fu_14219_p3() {
    select_ln388_96_fu_14219_p3 = (!and_ln786_198_fu_14187_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_198_fu_14187_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_117_fu_14167_p2.read());
}

void ResNet::thread_select_ln388_97_fu_14309_p3() {
    select_ln388_97_fu_14309_p3 = (!and_ln786_199_fu_14277_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_199_fu_14277_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_118_fu_14257_p2.read());
}

void ResNet::thread_select_ln388_98_fu_14399_p3() {
    select_ln388_98_fu_14399_p3 = (!and_ln786_200_fu_14367_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_200_fu_14367_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_119_fu_14347_p2.read());
}

void ResNet::thread_select_ln388_99_fu_14489_p3() {
    select_ln388_99_fu_14489_p3 = (!and_ln786_201_fu_14457_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_201_fu_14457_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln703_120_fu_14437_p2.read());
}

void ResNet::thread_select_ln388_9_fu_10464_p3() {
    select_ln388_9_fu_10464_p3 = (!and_ln786_167_fu_10435_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_167_fu_10435_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_63_reg_22525.read());
}

void ResNet::thread_select_ln388_fu_9681_p3() {
    select_ln388_fu_9681_p3 = (!and_ln786_155_fu_9652_p2.read()[0].is_01())? sc_lv<12>(): ((and_ln786_155_fu_9652_p2.read()[0].to_bool())? ap_const_lv12_800: add_ln415_reg_22165.read());
}

void ResNet::thread_select_ln416_55_fu_6980_p3() {
    select_ln416_55_fu_6980_p3 = (!and_ln416_55_fu_6908_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_55_fu_6908_p2.read()[0].to_bool())? and_ln779_1_fu_6974_p2.read(): icmp_ln879_115_fu_6948_p2.read());
}

void ResNet::thread_select_ln416_56_fu_7160_p3() {
    select_ln416_56_fu_7160_p3 = (!and_ln416_56_fu_7088_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_56_fu_7088_p2.read()[0].to_bool())? and_ln779_2_fu_7154_p2.read(): icmp_ln879_117_fu_7128_p2.read());
}

void ResNet::thread_select_ln416_57_fu_7340_p3() {
    select_ln416_57_fu_7340_p3 = (!and_ln416_57_fu_7268_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_57_fu_7268_p2.read()[0].to_bool())? and_ln779_3_fu_7334_p2.read(): icmp_ln879_119_fu_7308_p2.read());
}

void ResNet::thread_select_ln416_58_fu_7520_p3() {
    select_ln416_58_fu_7520_p3 = (!and_ln416_58_fu_7448_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_58_fu_7448_p2.read()[0].to_bool())? and_ln779_4_fu_7514_p2.read(): icmp_ln879_121_fu_7488_p2.read());
}

void ResNet::thread_select_ln416_59_fu_7700_p3() {
    select_ln416_59_fu_7700_p3 = (!and_ln416_59_fu_7628_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_59_fu_7628_p2.read()[0].to_bool())? and_ln779_5_fu_7694_p2.read(): icmp_ln879_123_fu_7668_p2.read());
}

void ResNet::thread_select_ln416_60_fu_7880_p3() {
    select_ln416_60_fu_7880_p3 = (!and_ln416_60_fu_7808_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_60_fu_7808_p2.read()[0].to_bool())? and_ln779_6_fu_7874_p2.read(): icmp_ln879_125_fu_7848_p2.read());
}

void ResNet::thread_select_ln416_61_fu_8060_p3() {
    select_ln416_61_fu_8060_p3 = (!and_ln416_61_fu_7988_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_61_fu_7988_p2.read()[0].to_bool())? and_ln779_7_fu_8054_p2.read(): icmp_ln879_127_fu_8028_p2.read());
}

void ResNet::thread_select_ln416_62_fu_8240_p3() {
    select_ln416_62_fu_8240_p3 = (!and_ln416_62_fu_8168_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_62_fu_8168_p2.read()[0].to_bool())? and_ln779_8_fu_8234_p2.read(): icmp_ln879_129_fu_8208_p2.read());
}

void ResNet::thread_select_ln416_63_fu_8420_p3() {
    select_ln416_63_fu_8420_p3 = (!and_ln416_63_fu_8348_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_63_fu_8348_p2.read()[0].to_bool())? and_ln779_9_fu_8414_p2.read(): icmp_ln879_131_fu_8388_p2.read());
}

void ResNet::thread_select_ln416_64_fu_8600_p3() {
    select_ln416_64_fu_8600_p3 = (!and_ln416_64_fu_8528_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_64_fu_8528_p2.read()[0].to_bool())? and_ln779_10_fu_8594_p2.read(): icmp_ln879_133_fu_8568_p2.read());
}

void ResNet::thread_select_ln416_65_fu_8780_p3() {
    select_ln416_65_fu_8780_p3 = (!and_ln416_65_fu_8708_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_65_fu_8708_p2.read()[0].to_bool())? and_ln779_11_fu_8774_p2.read(): icmp_ln879_135_fu_8748_p2.read());
}

void ResNet::thread_select_ln416_66_fu_8960_p3() {
    select_ln416_66_fu_8960_p3 = (!and_ln416_66_fu_8888_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_66_fu_8888_p2.read()[0].to_bool())? and_ln779_12_fu_8954_p2.read(): icmp_ln879_137_fu_8928_p2.read());
}

void ResNet::thread_select_ln416_67_fu_9140_p3() {
    select_ln416_67_fu_9140_p3 = (!and_ln416_67_fu_9068_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_67_fu_9068_p2.read()[0].to_bool())? and_ln779_13_fu_9134_p2.read(): icmp_ln879_139_fu_9108_p2.read());
}

void ResNet::thread_select_ln416_68_fu_9320_p3() {
    select_ln416_68_fu_9320_p3 = (!and_ln416_68_fu_9248_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_68_fu_9248_p2.read()[0].to_bool())? and_ln779_14_fu_9314_p2.read(): icmp_ln879_141_fu_9288_p2.read());
}

void ResNet::thread_select_ln416_69_fu_9500_p3() {
    select_ln416_69_fu_9500_p3 = (!and_ln416_69_fu_9428_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_69_fu_9428_p2.read()[0].to_bool())? and_ln779_15_fu_9494_p2.read(): icmp_ln879_143_fu_9468_p2.read());
}

void ResNet::thread_select_ln416_fu_6800_p3() {
    select_ln416_fu_6800_p3 = (!and_ln416_fu_6728_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_fu_6728_p2.read()[0].to_bool())? and_ln779_fu_6794_p2.read(): icmp_ln879_113_fu_6768_p2.read());
}

void ResNet::thread_select_ln598_1_fu_11593_p3() {
    select_ln598_1_fu_11593_p3 = (!icmp_ln593_fu_11579_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln593_fu_11579_p2.read()[0].to_bool())? i_fu_11573_p2.read(): ap_phi_mux_i_0_phi_fu_2972_p4.read());
}

void ResNet::thread_select_ln598_fu_11585_p3() {
    select_ln598_fu_11585_p3 = (!icmp_ln593_fu_11579_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln593_fu_11579_p2.read()[0].to_bool())? ap_const_lv4_1: j_0_reg_3747.read());
}

void ResNet::thread_select_ln777_55_fu_9697_p3() {
    select_ln777_55_fu_9697_p3 = (!and_ln416_55_reg_22211.read()[0].is_01())? sc_lv<1>(): ((and_ln416_55_reg_22211.read()[0].to_bool())? icmp_ln879_115_reg_22222.read(): icmp_ln768_55_reg_22228.read());
}

void ResNet::thread_select_ln777_56_fu_9784_p3() {
    select_ln777_56_fu_9784_p3 = (!and_ln416_56_reg_22251.read()[0].is_01())? sc_lv<1>(): ((and_ln416_56_reg_22251.read()[0].to_bool())? icmp_ln879_117_reg_22262.read(): icmp_ln768_56_reg_22268.read());
}

void ResNet::thread_select_ln777_57_fu_9871_p3() {
    select_ln777_57_fu_9871_p3 = (!and_ln416_57_reg_22291.read()[0].is_01())? sc_lv<1>(): ((and_ln416_57_reg_22291.read()[0].to_bool())? icmp_ln879_119_reg_22302.read(): icmp_ln768_57_reg_22308.read());
}

void ResNet::thread_select_ln777_58_fu_9958_p3() {
    select_ln777_58_fu_9958_p3 = (!and_ln416_58_reg_22331.read()[0].is_01())? sc_lv<1>(): ((and_ln416_58_reg_22331.read()[0].to_bool())? icmp_ln879_121_reg_22342.read(): icmp_ln768_58_reg_22348.read());
}

void ResNet::thread_select_ln777_59_fu_10045_p3() {
    select_ln777_59_fu_10045_p3 = (!and_ln416_59_reg_22371.read()[0].is_01())? sc_lv<1>(): ((and_ln416_59_reg_22371.read()[0].to_bool())? icmp_ln879_123_reg_22382.read(): icmp_ln768_59_reg_22388.read());
}

void ResNet::thread_select_ln777_60_fu_10132_p3() {
    select_ln777_60_fu_10132_p3 = (!and_ln416_60_reg_22411.read()[0].is_01())? sc_lv<1>(): ((and_ln416_60_reg_22411.read()[0].to_bool())? icmp_ln879_125_reg_22422.read(): icmp_ln768_60_reg_22428.read());
}

void ResNet::thread_select_ln777_61_fu_10219_p3() {
    select_ln777_61_fu_10219_p3 = (!and_ln416_61_reg_22451.read()[0].is_01())? sc_lv<1>(): ((and_ln416_61_reg_22451.read()[0].to_bool())? icmp_ln879_127_reg_22462.read(): icmp_ln768_61_reg_22468.read());
}

void ResNet::thread_select_ln777_62_fu_10306_p3() {
    select_ln777_62_fu_10306_p3 = (!and_ln416_62_reg_22491.read()[0].is_01())? sc_lv<1>(): ((and_ln416_62_reg_22491.read()[0].to_bool())? icmp_ln879_129_reg_22502.read(): icmp_ln768_62_reg_22508.read());
}

void ResNet::thread_select_ln777_63_fu_10393_p3() {
    select_ln777_63_fu_10393_p3 = (!and_ln416_63_reg_22531.read()[0].is_01())? sc_lv<1>(): ((and_ln416_63_reg_22531.read()[0].to_bool())? icmp_ln879_131_reg_22542.read(): icmp_ln768_63_reg_22548.read());
}

void ResNet::thread_select_ln777_64_fu_10480_p3() {
    select_ln777_64_fu_10480_p3 = (!and_ln416_64_reg_22571.read()[0].is_01())? sc_lv<1>(): ((and_ln416_64_reg_22571.read()[0].to_bool())? icmp_ln879_133_reg_22582.read(): icmp_ln768_64_reg_22588.read());
}

void ResNet::thread_select_ln777_65_fu_10567_p3() {
    select_ln777_65_fu_10567_p3 = (!and_ln416_65_reg_22611.read()[0].is_01())? sc_lv<1>(): ((and_ln416_65_reg_22611.read()[0].to_bool())? icmp_ln879_135_reg_22622.read(): icmp_ln768_65_reg_22628.read());
}

void ResNet::thread_select_ln777_66_fu_10654_p3() {
    select_ln777_66_fu_10654_p3 = (!and_ln416_66_reg_22651.read()[0].is_01())? sc_lv<1>(): ((and_ln416_66_reg_22651.read()[0].to_bool())? icmp_ln879_137_reg_22662.read(): icmp_ln768_66_reg_22668.read());
}

void ResNet::thread_select_ln777_67_fu_10741_p3() {
    select_ln777_67_fu_10741_p3 = (!and_ln416_67_reg_22691.read()[0].is_01())? sc_lv<1>(): ((and_ln416_67_reg_22691.read()[0].to_bool())? icmp_ln879_139_reg_22702.read(): icmp_ln768_67_reg_22708.read());
}

void ResNet::thread_select_ln777_68_fu_10828_p3() {
    select_ln777_68_fu_10828_p3 = (!and_ln416_68_reg_22731.read()[0].is_01())? sc_lv<1>(): ((and_ln416_68_reg_22731.read()[0].to_bool())? icmp_ln879_141_reg_22742.read(): icmp_ln768_68_reg_22748.read());
}

void ResNet::thread_select_ln777_69_fu_10915_p3() {
    select_ln777_69_fu_10915_p3 = (!and_ln416_69_reg_22771.read()[0].is_01())? sc_lv<1>(): ((and_ln416_69_reg_22771.read()[0].to_bool())? icmp_ln879_143_reg_22782.read(): icmp_ln768_69_reg_22788.read());
}

void ResNet::thread_select_ln777_fu_9610_p3() {
    select_ln777_fu_9610_p3 = (!and_ln416_reg_22171.read()[0].is_01())? sc_lv<1>(): ((and_ln416_reg_22171.read()[0].to_bool())? icmp_ln879_113_reg_22182.read(): icmp_ln768_reg_22188.read());
}

void ResNet::thread_select_ln89_1_fu_4734_p3() {
    select_ln89_1_fu_4734_p3 = (!icmp_ln90_reg_21654.read()[0].is_01())? sc_lv<6>(): ((icmp_ln90_reg_21654.read()[0].to_bool())? row_fu_4721_p2.read(): ap_phi_mux_row_0_phi_fu_2306_p4.read());
}

void ResNet::thread_select_ln89_fu_4727_p3() {
    select_ln89_fu_4727_p3 = (!icmp_ln90_reg_21654.read()[0].is_01())? sc_lv<6>(): ((icmp_ln90_reg_21654.read()[0].to_bool())? ap_const_lv6_0: ap_phi_mux_col_0_phi_fu_2329_p4.read());
}

void ResNet::thread_select_ln90_fu_4713_p3() {
    select_ln90_fu_4713_p3 = (!icmp_ln90_fu_4701_p2.read()[0].is_01())? sc_lv<9>(): ((icmp_ln90_fu_4701_p2.read()[0].to_bool())? ap_const_lv9_1: add_ln90_1_fu_4707_p2.read());
}

void ResNet::thread_select_ln93_1_fu_4793_p3() {
    select_ln93_1_fu_4793_p3 = (!and_ln89_fu_4768_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln89_fu_4768_p2.read()[0].to_bool())? col_16_fu_4774_p2.read(): select_ln89_fu_4727_p3.read());
}

void ResNet::thread_select_ln93_fu_4785_p3() {
    select_ln93_fu_4785_p3 = (!or_ln93_fu_4780_p2.read()[0].is_01())? sc_lv<3>(): ((or_ln93_fu_4780_p2.read()[0].to_bool())? ap_const_lv3_0: ap_phi_mux_cbb_0_phi_fu_2341_p4.read());
}

void ResNet::thread_sext_ln1116_15_fu_6814_p1() {
    sext_ln1116_15_fu_6814_p1 = esl_sext<23,12>(conv1_out_1_load_reg_22069.read());
}

void ResNet::thread_sext_ln1116_16_fu_6994_p1() {
    sext_ln1116_16_fu_6994_p1 = esl_sext<23,12>(conv1_out_2_load_reg_22075.read());
}

void ResNet::thread_sext_ln1116_17_fu_7174_p1() {
    sext_ln1116_17_fu_7174_p1 = esl_sext<23,12>(conv1_out_3_load_reg_22081.read());
}

void ResNet::thread_sext_ln1116_18_fu_7354_p1() {
    sext_ln1116_18_fu_7354_p1 = esl_sext<23,12>(conv1_out_4_load_reg_22087.read());
}

void ResNet::thread_sext_ln1116_19_fu_7534_p1() {
    sext_ln1116_19_fu_7534_p1 = esl_sext<23,12>(conv1_out_5_load_reg_22093.read());
}

void ResNet::thread_sext_ln1116_20_fu_7714_p1() {
    sext_ln1116_20_fu_7714_p1 = esl_sext<23,12>(conv1_out_6_load_reg_22099.read());
}

void ResNet::thread_sext_ln1116_21_fu_7894_p1() {
    sext_ln1116_21_fu_7894_p1 = esl_sext<23,12>(conv1_out_7_load_reg_22105.read());
}

void ResNet::thread_sext_ln1116_22_fu_8074_p1() {
    sext_ln1116_22_fu_8074_p1 = esl_sext<23,12>(conv1_out_8_load_reg_22111.read());
}

void ResNet::thread_sext_ln1116_23_fu_8254_p1() {
    sext_ln1116_23_fu_8254_p1 = esl_sext<23,12>(conv1_out_9_load_reg_22117.read());
}

void ResNet::thread_sext_ln1116_24_fu_8434_p1() {
    sext_ln1116_24_fu_8434_p1 = esl_sext<23,12>(conv1_out_10_load_reg_22123.read());
}

void ResNet::thread_sext_ln1116_25_fu_8614_p1() {
    sext_ln1116_25_fu_8614_p1 = esl_sext<23,12>(conv1_out_11_load_reg_22129.read());
}

void ResNet::thread_sext_ln1116_26_fu_8794_p1() {
    sext_ln1116_26_fu_8794_p1 = esl_sext<23,12>(conv1_out_12_load_reg_22135.read());
}

void ResNet::thread_sext_ln1116_27_fu_8974_p1() {
    sext_ln1116_27_fu_8974_p1 = esl_sext<23,12>(conv1_out_13_load_reg_22141.read());
}

void ResNet::thread_sext_ln1116_28_fu_9154_p1() {
    sext_ln1116_28_fu_9154_p1 = esl_sext<23,12>(conv1_out_14_load_reg_22147.read());
}

void ResNet::thread_sext_ln1116_29_fu_9334_p1() {
    sext_ln1116_29_fu_9334_p1 = esl_sext<23,12>(conv1_out_15_load_reg_22153.read());
}

void ResNet::thread_sext_ln1116_fu_6634_p1() {
    sext_ln1116_fu_6634_p1 = esl_sext<23,12>(conv1_out_0_load_reg_22063.read());
}

void ResNet::thread_sext_ln1118_15_fu_6824_p1() {
    sext_ln1118_15_fu_6824_p1 = esl_sext<23,22>(shl_ln1118_1_fu_6817_p3.read());
}

void ResNet::thread_sext_ln1118_16_fu_7004_p1() {
    sext_ln1118_16_fu_7004_p1 = esl_sext<23,22>(shl_ln1118_2_fu_6997_p3.read());
}

void ResNet::thread_sext_ln1118_17_fu_7184_p1() {
    sext_ln1118_17_fu_7184_p1 = esl_sext<23,22>(shl_ln1118_3_fu_7177_p3.read());
}

void ResNet::thread_sext_ln1118_18_fu_7364_p1() {
    sext_ln1118_18_fu_7364_p1 = esl_sext<23,22>(shl_ln1118_4_fu_7357_p3.read());
}

void ResNet::thread_sext_ln1118_19_fu_7544_p1() {
    sext_ln1118_19_fu_7544_p1 = esl_sext<23,22>(shl_ln1118_5_fu_7537_p3.read());
}

void ResNet::thread_sext_ln1118_20_fu_7724_p1() {
    sext_ln1118_20_fu_7724_p1 = esl_sext<23,22>(shl_ln1118_6_fu_7717_p3.read());
}

void ResNet::thread_sext_ln1118_21_fu_7904_p1() {
    sext_ln1118_21_fu_7904_p1 = esl_sext<23,22>(shl_ln1118_7_fu_7897_p3.read());
}

void ResNet::thread_sext_ln1118_22_fu_8084_p1() {
    sext_ln1118_22_fu_8084_p1 = esl_sext<23,22>(shl_ln1118_8_fu_8077_p3.read());
}

void ResNet::thread_sext_ln1118_23_fu_8264_p1() {
    sext_ln1118_23_fu_8264_p1 = esl_sext<23,22>(shl_ln1118_9_fu_8257_p3.read());
}

void ResNet::thread_sext_ln1118_24_fu_8444_p1() {
    sext_ln1118_24_fu_8444_p1 = esl_sext<23,22>(shl_ln1118_s_fu_8437_p3.read());
}

void ResNet::thread_sext_ln1118_25_fu_8624_p1() {
    sext_ln1118_25_fu_8624_p1 = esl_sext<23,22>(shl_ln1118_10_fu_8617_p3.read());
}

void ResNet::thread_sext_ln1118_26_fu_8804_p1() {
    sext_ln1118_26_fu_8804_p1 = esl_sext<23,22>(shl_ln1118_11_fu_8797_p3.read());
}

void ResNet::thread_sext_ln1118_27_fu_8984_p1() {
    sext_ln1118_27_fu_8984_p1 = esl_sext<23,22>(shl_ln1118_12_fu_8977_p3.read());
}

void ResNet::thread_sext_ln1118_28_fu_9164_p1() {
    sext_ln1118_28_fu_9164_p1 = esl_sext<23,22>(shl_ln1118_13_fu_9157_p3.read());
}

void ResNet::thread_sext_ln1118_29_fu_9344_p1() {
    sext_ln1118_29_fu_9344_p1 = esl_sext<23,22>(shl_ln1118_14_fu_9337_p3.read());
}

void ResNet::thread_sext_ln1118_fu_6644_p1() {
    sext_ln1118_fu_6644_p1 = esl_sext<23,22>(shl_ln3_fu_6637_p3.read());
}

void ResNet::thread_sext_ln1148_100_fu_20725_p1() {
    sext_ln1148_100_fu_20725_p1 = esl_sext<13,12>(linear_buf_50_V_1115_reg_3135.read());
}

void ResNet::thread_sext_ln1148_101_fu_20773_p1() {
    sext_ln1148_101_fu_20773_p1 = esl_sext<7,6>(trunc_ln1148_50_fu_20763_p4.read());
}

}


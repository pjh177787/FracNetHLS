#include "matmul.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void matmul::thread_ap_clk_no_reset_() {
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
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter5 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_fu_5498_p2.read(), ap_const_lv1_0))) {
        cii_0_reg_5475 = cii_fu_5504_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        cii_0_reg_5475 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln28_reg_15686_pp0_iter2_reg.read(), ap_const_lv1_0))) {
        add_ln415_63_reg_15986 = add_ln415_63_fu_6594_p2.read();
        add_ln415_64_reg_16017 = add_ln415_64_fu_6768_p2.read();
        add_ln415_65_reg_16048 = add_ln415_65_fu_6942_p2.read();
        add_ln415_66_reg_16079 = add_ln415_66_fu_7116_p2.read();
        add_ln415_67_reg_16110 = add_ln415_67_fu_7290_p2.read();
        add_ln415_68_reg_16141 = add_ln415_68_fu_7464_p2.read();
        add_ln415_69_reg_16172 = add_ln415_69_fu_7638_p2.read();
        add_ln415_70_reg_16203 = add_ln415_70_fu_7812_p2.read();
        add_ln415_71_reg_16234 = add_ln415_71_fu_7986_p2.read();
        add_ln415_reg_15955 = add_ln415_fu_6420_p2.read();
        and_ln781_1_reg_15992 = and_ln781_1_fu_6691_p2.read();
        and_ln781_2_reg_16023 = and_ln781_2_fu_6865_p2.read();
        and_ln781_3_reg_16054 = and_ln781_3_fu_7039_p2.read();
        and_ln781_4_reg_16085 = and_ln781_4_fu_7213_p2.read();
        and_ln781_5_reg_16116 = and_ln781_5_fu_7387_p2.read();
        and_ln781_6_reg_16147 = and_ln781_6_fu_7561_p2.read();
        and_ln781_7_reg_16178 = and_ln781_7_fu_7735_p2.read();
        and_ln781_8_reg_16209 = and_ln781_8_fu_7909_p2.read();
        and_ln781_9_reg_16240 = and_ln781_9_fu_8083_p2.read();
        and_ln781_reg_15961 = and_ln781_fu_6517_p2.read();
        and_ln786_1_reg_16002 = and_ln786_1_fu_6720_p2.read();
        and_ln786_289_reg_15976 = and_ln786_289_fu_6564_p2.read();
        and_ln786_291_reg_16007 = and_ln786_291_fu_6738_p2.read();
        and_ln786_293_reg_16038 = and_ln786_293_fu_6912_p2.read();
        and_ln786_295_reg_16069 = and_ln786_295_fu_7086_p2.read();
        and_ln786_297_reg_16100 = and_ln786_297_fu_7260_p2.read();
        and_ln786_299_reg_16131 = and_ln786_299_fu_7434_p2.read();
        and_ln786_2_reg_16033 = and_ln786_2_fu_6894_p2.read();
        and_ln786_301_reg_16162 = and_ln786_301_fu_7608_p2.read();
        and_ln786_303_reg_16193 = and_ln786_303_fu_7782_p2.read();
        and_ln786_305_reg_16224 = and_ln786_305_fu_7956_p2.read();
        and_ln786_307_reg_16255 = and_ln786_307_fu_8130_p2.read();
        and_ln786_3_reg_16064 = and_ln786_3_fu_7068_p2.read();
        and_ln786_4_reg_16095 = and_ln786_4_fu_7242_p2.read();
        and_ln786_5_reg_16126 = and_ln786_5_fu_7416_p2.read();
        and_ln786_6_reg_16157 = and_ln786_6_fu_7590_p2.read();
        and_ln786_7_reg_16188 = and_ln786_7_fu_7764_p2.read();
        and_ln786_8_reg_16219 = and_ln786_8_fu_7938_p2.read();
        and_ln786_9_reg_16250 = and_ln786_9_fu_8112_p2.read();
        and_ln786_reg_15971 = and_ln786_fu_6546_p2.read();
        or_ln340_1_reg_16012 = or_ln340_1_fu_6743_p2.read();
        or_ln340_2_reg_16043 = or_ln340_2_fu_6917_p2.read();
        or_ln340_3_reg_16074 = or_ln340_3_fu_7091_p2.read();
        or_ln340_4_reg_16105 = or_ln340_4_fu_7265_p2.read();
        or_ln340_5_reg_16136 = or_ln340_5_fu_7439_p2.read();
        or_ln340_6_reg_16167 = or_ln340_6_fu_7613_p2.read();
        or_ln340_7_reg_16198 = or_ln340_7_fu_7787_p2.read();
        or_ln340_8_reg_16229 = or_ln340_8_fu_7961_p2.read();
        or_ln340_9_reg_16260 = or_ln340_9_fu_8135_p2.read();
        or_ln340_reg_15981 = or_ln340_fu_6569_p2.read();
        xor_ln785_127_reg_15966 = xor_ln785_127_fu_6535_p2.read();
        xor_ln785_128_reg_15997 = xor_ln785_128_fu_6709_p2.read();
        xor_ln785_129_reg_16028 = xor_ln785_129_fu_6883_p2.read();
        xor_ln785_130_reg_16059 = xor_ln785_130_fu_7057_p2.read();
        xor_ln785_131_reg_16090 = xor_ln785_131_fu_7231_p2.read();
        xor_ln785_132_reg_16121 = xor_ln785_132_fu_7405_p2.read();
        xor_ln785_133_reg_16152 = xor_ln785_133_fu_7579_p2.read();
        xor_ln785_134_reg_16183 = xor_ln785_134_fu_7753_p2.read();
        xor_ln785_135_reg_16214 = xor_ln785_135_fu_7927_p2.read();
        xor_ln785_136_reg_16245 = xor_ln785_136_fu_8101_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_1_reg_16397.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        add_ln944_1_reg_16846 = add_ln944_1_fu_10293_p2.read();
        add_ln949_1_reg_16862 = add_ln949_1_fu_10340_p2.read();
        add_ln958_1_reg_16867 = add_ln958_1_fu_10345_p2.read();
        icmp_ln947_2_reg_16852 = icmp_ln947_2_fu_10308_p2.read();
        icmp_ln947_3_reg_16857 = icmp_ln947_3_fu_10334_p2.read();
        sub_ln958_1_reg_16872 = sub_ln958_1_fu_10350_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_2_reg_16419.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        add_ln944_2_reg_16877 = add_ln944_2_fu_10355_p2.read();
        add_ln949_2_reg_16893 = add_ln949_2_fu_10402_p2.read();
        add_ln958_2_reg_16898 = add_ln958_2_fu_10407_p2.read();
        icmp_ln947_4_reg_16883 = icmp_ln947_4_fu_10370_p2.read();
        icmp_ln947_5_reg_16888 = icmp_ln947_5_fu_10396_p2.read();
        sub_ln958_2_reg_16903 = sub_ln958_2_fu_10412_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_3_reg_16441.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        add_ln944_3_reg_16908 = add_ln944_3_fu_10417_p2.read();
        add_ln949_3_reg_16924 = add_ln949_3_fu_10464_p2.read();
        add_ln958_3_reg_16929 = add_ln958_3_fu_10469_p2.read();
        icmp_ln947_6_reg_16914 = icmp_ln947_6_fu_10432_p2.read();
        icmp_ln947_7_reg_16919 = icmp_ln947_7_fu_10458_p2.read();
        sub_ln958_3_reg_16934 = sub_ln958_3_fu_10474_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_4_reg_16463.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        add_ln944_4_reg_16939 = add_ln944_4_fu_10479_p2.read();
        add_ln949_4_reg_16955 = add_ln949_4_fu_10526_p2.read();
        add_ln958_4_reg_16960 = add_ln958_4_fu_10531_p2.read();
        icmp_ln947_8_reg_16945 = icmp_ln947_8_fu_10494_p2.read();
        icmp_ln947_9_reg_16950 = icmp_ln947_9_fu_10520_p2.read();
        sub_ln958_4_reg_16965 = sub_ln958_4_fu_10536_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_5_reg_16485.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        add_ln944_5_reg_16970 = add_ln944_5_fu_10541_p2.read();
        add_ln949_5_reg_16986 = add_ln949_5_fu_10588_p2.read();
        add_ln958_5_reg_16991 = add_ln958_5_fu_10593_p2.read();
        icmp_ln947_10_reg_16976 = icmp_ln947_10_fu_10556_p2.read();
        icmp_ln947_11_reg_16981 = icmp_ln947_11_fu_10582_p2.read();
        sub_ln958_5_reg_16996 = sub_ln958_5_fu_10598_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_6_reg_16507.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        add_ln944_6_reg_17001 = add_ln944_6_fu_10603_p2.read();
        add_ln949_6_reg_17017 = add_ln949_6_fu_10650_p2.read();
        add_ln958_6_reg_17022 = add_ln958_6_fu_10655_p2.read();
        icmp_ln947_12_reg_17007 = icmp_ln947_12_fu_10618_p2.read();
        icmp_ln947_13_reg_17012 = icmp_ln947_13_fu_10644_p2.read();
        sub_ln958_6_reg_17027 = sub_ln958_6_fu_10660_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_7_reg_16529.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        add_ln944_7_reg_17032 = add_ln944_7_fu_10665_p2.read();
        add_ln949_7_reg_17048 = add_ln949_7_fu_10712_p2.read();
        add_ln958_7_reg_17053 = add_ln958_7_fu_10717_p2.read();
        icmp_ln947_14_reg_17038 = icmp_ln947_14_fu_10680_p2.read();
        icmp_ln947_15_reg_17043 = icmp_ln947_15_fu_10706_p2.read();
        sub_ln958_7_reg_17058 = sub_ln958_7_fu_10722_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_8_reg_16551.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        add_ln944_8_reg_17063 = add_ln944_8_fu_10727_p2.read();
        add_ln949_8_reg_17079 = add_ln949_8_fu_10774_p2.read();
        add_ln958_8_reg_17084 = add_ln958_8_fu_10779_p2.read();
        icmp_ln947_16_reg_17069 = icmp_ln947_16_fu_10742_p2.read();
        icmp_ln947_17_reg_17074 = icmp_ln947_17_fu_10768_p2.read();
        sub_ln958_8_reg_17089 = sub_ln958_8_fu_10784_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_9_reg_16573.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        add_ln944_9_reg_17094 = add_ln944_9_fu_10789_p2.read();
        add_ln949_9_reg_17110 = add_ln949_9_fu_10836_p2.read();
        add_ln958_9_reg_17115 = add_ln958_9_fu_10841_p2.read();
        icmp_ln947_18_reg_17100 = icmp_ln947_18_fu_10804_p2.read();
        icmp_ln947_19_reg_17105 = icmp_ln947_19_fu_10830_p2.read();
        sub_ln958_9_reg_17120 = sub_ln958_9_fu_10846_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_reg_16375.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        add_ln944_reg_16815 = add_ln944_fu_10231_p2.read();
        add_ln949_reg_16831 = add_ln949_fu_10278_p2.read();
        add_ln958_reg_16836 = add_ln958_fu_10283_p2.read();
        icmp_ln947_1_reg_16826 = icmp_ln947_1_fu_10272_p2.read();
        icmp_ln947_reg_16821 = icmp_ln947_fu_10246_p2.read();
        sub_ln958_reg_16841 = sub_ln958_fu_10288_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln28_reg_15686.read(), ap_const_lv1_0))) {
        bottom_V_load_reg_15750 = bottom_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(icmp_ln28_reg_15686_pp0_iter4_reg.read(), ap_const_lv1_0))) {
        buf_V_0_010_reg_5355 = buf_0_V_fu_8511_p3.read();
        buf_V_1_09_reg_5367 = buf_1_V_fu_8599_p3.read();
        buf_V_2_08_reg_5379 = buf_2_V_fu_8687_p3.read();
        buf_V_3_07_reg_5391 = buf_3_V_fu_8775_p3.read();
        buf_V_4_06_reg_5403 = buf_4_V_fu_8863_p3.read();
        buf_V_5_05_reg_5415 = buf_5_V_fu_8951_p3.read();
        buf_V_6_04_reg_5427 = buf_6_V_fu_9039_p3.read();
        buf_V_7_03_reg_5439 = buf_7_V_fu_9127_p3.read();
        buf_V_8_02_reg_5451 = buf_8_V_fu_9215_p3.read();
        buf_V_9_01_reg_5463 = buf_9_V_fu_9303_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln28_reg_15686 = icmp_ln28_fu_5498_p2.read();
        icmp_ln28_reg_15686_pp0_iter1_reg = icmp_ln28_reg_15686.read();
        tmp_12_reg_15700_pp0_iter1_reg = tmp_12_reg_15700.read();
        tmp_13_reg_15705_pp0_iter1_reg = tmp_13_reg_15705.read();
        tmp_14_reg_15710_pp0_iter1_reg = tmp_14_reg_15710.read();
        tmp_15_reg_15715_pp0_iter1_reg = tmp_15_reg_15715.read();
        tmp_16_reg_15720_pp0_iter1_reg = tmp_16_reg_15720.read();
        tmp_17_reg_15725_pp0_iter1_reg = tmp_17_reg_15725.read();
        tmp_18_reg_15730_pp0_iter1_reg = tmp_18_reg_15730.read();
        tmp_19_reg_15735_pp0_iter1_reg = tmp_19_reg_15735.read();
        tmp_20_reg_15740_pp0_iter1_reg = tmp_20_reg_15740.read();
        tmp_21_reg_15745_pp0_iter1_reg = tmp_21_reg_15745.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        icmp_ln28_reg_15686_pp0_iter2_reg = icmp_ln28_reg_15686_pp0_iter1_reg.read();
        icmp_ln28_reg_15686_pp0_iter3_reg = icmp_ln28_reg_15686_pp0_iter2_reg.read();
        icmp_ln28_reg_15686_pp0_iter4_reg = icmp_ln28_reg_15686_pp0_iter3_reg.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        icmp_ln935_1_reg_16397 = icmp_ln935_1_fu_9391_p2.read();
        icmp_ln935_2_reg_16419 = icmp_ln935_2_fu_9450_p2.read();
        icmp_ln935_3_reg_16441 = icmp_ln935_3_fu_9509_p2.read();
        icmp_ln935_4_reg_16463 = icmp_ln935_4_fu_9568_p2.read();
        icmp_ln935_5_reg_16485 = icmp_ln935_5_fu_9627_p2.read();
        icmp_ln935_6_reg_16507 = icmp_ln935_6_fu_9686_p2.read();
        icmp_ln935_7_reg_16529 = icmp_ln935_7_fu_9745_p2.read();
        icmp_ln935_8_reg_16551 = icmp_ln935_8_fu_9804_p2.read();
        icmp_ln935_9_reg_16573 = icmp_ln935_9_fu_9863_p2.read();
        icmp_ln935_reg_16375 = icmp_ln935_fu_9332_p2.read();
        p_Result_1_reg_16414 = p_Result_1_fu_9419_p4.read();
        p_Result_2_reg_16436 = p_Result_2_fu_9478_p4.read();
        p_Result_3_reg_16458 = p_Result_3_fu_9537_p4.read();
        p_Result_4_reg_16480 = p_Result_4_fu_9596_p4.read();
        p_Result_5_reg_16502 = p_Result_5_fu_9655_p4.read();
        p_Result_6_reg_16524 = p_Result_6_fu_9714_p4.read();
        p_Result_7_reg_16546 = p_Result_7_fu_9773_p4.read();
        p_Result_8_reg_16568 = p_Result_8_fu_9832_p4.read();
        p_Result_9_reg_16590 = p_Result_9_fu_9891_p4.read();
        p_Result_s_reg_16392 = p_Result_s_fu_9360_p4.read();
        select_ln938_1_reg_16407 = select_ln938_1_fu_9411_p3.read();
        select_ln938_2_reg_16429 = select_ln938_2_fu_9470_p3.read();
        select_ln938_3_reg_16451 = select_ln938_3_fu_9529_p3.read();
        select_ln938_4_reg_16473 = select_ln938_4_fu_9588_p3.read();
        select_ln938_5_reg_16495 = select_ln938_5_fu_9647_p3.read();
        select_ln938_6_reg_16517 = select_ln938_6_fu_9706_p3.read();
        select_ln938_7_reg_16539 = select_ln938_7_fu_9765_p3.read();
        select_ln938_8_reg_16561 = select_ln938_8_fu_9824_p3.read();
        select_ln938_9_reg_16583 = select_ln938_9_fu_9883_p3.read();
        select_ln938_reg_16385 = select_ln938_fu_9352_p3.read();
        tmp_837_reg_16380 = add_ln1192_fu_9326_p2.read().range(14, 14);
        tmp_841_reg_16402 = add_ln1192_192_fu_9385_p2.read().range(14, 14);
        tmp_845_reg_16424 = add_ln1192_194_fu_9444_p2.read().range(14, 14);
        tmp_849_reg_16446 = add_ln1192_195_fu_9503_p2.read().range(14, 14);
        tmp_853_reg_16468 = add_ln1192_197_fu_9562_p2.read().range(14, 14);
        tmp_857_reg_16490 = add_ln1192_199_fu_9621_p2.read().range(14, 14);
        tmp_861_reg_16512 = add_ln1192_201_fu_9680_p2.read().range(14, 14);
        tmp_865_reg_16534 = add_ln1192_203_fu_9739_p2.read().range(14, 14);
        tmp_869_reg_16556 = add_ln1192_205_fu_9798_p2.read().range(14, 14);
        tmp_873_reg_16578 = add_ln1192_207_fu_9857_p2.read().range(14, 14);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_1_reg_16397.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lshr_ln962_1_reg_17135 = add_ln961_1_fu_11013_p2.read().range(31, 1);
        tmp_844_reg_17140 = add_ln961_1_fu_11013_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_2_reg_16419.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lshr_ln962_2_reg_17145 = add_ln961_2_fu_11106_p2.read().range(31, 1);
        tmp_848_reg_17150 = add_ln961_2_fu_11106_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_3_reg_16441.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lshr_ln962_3_reg_17155 = add_ln961_3_fu_11199_p2.read().range(31, 1);
        tmp_852_reg_17160 = add_ln961_3_fu_11199_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_4_reg_16463.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lshr_ln962_4_reg_17165 = add_ln961_4_fu_11292_p2.read().range(31, 1);
        tmp_856_reg_17170 = add_ln961_4_fu_11292_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_5_reg_16485.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lshr_ln962_5_reg_17175 = add_ln961_5_fu_11385_p2.read().range(31, 1);
        tmp_860_reg_17180 = add_ln961_5_fu_11385_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_6_reg_16507.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lshr_ln962_6_reg_17185 = add_ln961_6_fu_11478_p2.read().range(31, 1);
        tmp_864_reg_17190 = add_ln961_6_fu_11478_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_7_reg_16529.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lshr_ln962_7_reg_17195 = add_ln961_7_fu_11571_p2.read().range(31, 1);
        tmp_868_reg_17200 = add_ln961_7_fu_11571_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_8_reg_16551.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lshr_ln962_8_reg_17205 = add_ln961_8_fu_11664_p2.read().range(31, 1);
        tmp_872_reg_17210 = add_ln961_8_fu_11664_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_9_reg_16573.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lshr_ln962_9_reg_17215 = add_ln961_9_fu_11757_p2.read().range(31, 1);
        tmp_876_reg_17220 = add_ln961_9_fu_11757_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_reg_16375.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        lshr_ln_reg_17125 = add_ln961_fu_10920_p2.read().range(31, 1);
        tmp_840_reg_17130 = add_ln961_fu_10920_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln28_reg_15686_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        mul_ln1118_63_reg_15775 = mul_ln1118_63_fu_12359_p2.read();
        mul_ln1118_64_reg_15795 = mul_ln1118_64_fu_12367_p2.read();
        mul_ln1118_65_reg_15815 = mul_ln1118_65_fu_12375_p2.read();
        mul_ln1118_66_reg_15835 = mul_ln1118_66_fu_12383_p2.read();
        mul_ln1118_67_reg_15855 = mul_ln1118_67_fu_12391_p2.read();
        mul_ln1118_68_reg_15875 = mul_ln1118_68_fu_12399_p2.read();
        mul_ln1118_69_reg_15895 = mul_ln1118_69_fu_12407_p2.read();
        mul_ln1118_70_reg_15915 = mul_ln1118_70_fu_12415_p2.read();
        mul_ln1118_71_reg_15935 = mul_ln1118_71_fu_12423_p2.read();
        mul_ln1118_reg_15755 = mul_ln1118_fu_12351_p2.read();
        tmp_877_reg_15764 = mul_ln1118_fu_12351_p2.read().range(22, 22);
        tmp_879_reg_15770 = mul_ln1118_fu_12351_p2.read().range(6, 6);
        tmp_887_reg_15784 = mul_ln1118_63_fu_12359_p2.read().range(22, 22);
        tmp_889_reg_15790 = mul_ln1118_63_fu_12359_p2.read().range(6, 6);
        tmp_897_reg_15804 = mul_ln1118_64_fu_12367_p2.read().range(22, 22);
        tmp_899_reg_15810 = mul_ln1118_64_fu_12367_p2.read().range(6, 6);
        tmp_907_reg_15824 = mul_ln1118_65_fu_12375_p2.read().range(22, 22);
        tmp_909_reg_15830 = mul_ln1118_65_fu_12375_p2.read().range(6, 6);
        tmp_917_reg_15844 = mul_ln1118_66_fu_12383_p2.read().range(22, 22);
        tmp_919_reg_15850 = mul_ln1118_66_fu_12383_p2.read().range(6, 6);
        tmp_927_reg_15864 = mul_ln1118_67_fu_12391_p2.read().range(22, 22);
        tmp_929_reg_15870 = mul_ln1118_67_fu_12391_p2.read().range(6, 6);
        tmp_937_reg_15884 = mul_ln1118_68_fu_12399_p2.read().range(22, 22);
        tmp_939_reg_15890 = mul_ln1118_68_fu_12399_p2.read().range(6, 6);
        tmp_947_reg_15904 = mul_ln1118_69_fu_12407_p2.read().range(22, 22);
        tmp_949_reg_15910 = mul_ln1118_69_fu_12407_p2.read().range(6, 6);
        tmp_957_reg_15924 = mul_ln1118_70_fu_12415_p2.read().range(22, 22);
        tmp_959_reg_15930 = mul_ln1118_70_fu_12415_p2.read().range(6, 6);
        tmp_967_reg_15944 = mul_ln1118_71_fu_12423_p2.read().range(22, 22);
        tmp_969_reg_15950 = mul_ln1118_71_fu_12423_p2.read().range(6, 6);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln28_reg_15686_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        select_ln340_356_reg_16265 = select_ln340_356_fu_8162_p3.read();
        select_ln340_358_reg_16271 = select_ln340_358_fu_8191_p3.read();
        select_ln340_360_reg_16277 = select_ln340_360_fu_8220_p3.read();
        select_ln340_362_reg_16283 = select_ln340_362_fu_8249_p3.read();
        select_ln340_364_reg_16289 = select_ln340_364_fu_8278_p3.read();
        select_ln340_366_reg_16295 = select_ln340_366_fu_8307_p3.read();
        select_ln340_368_reg_16301 = select_ln340_368_fu_8336_p3.read();
        select_ln340_370_reg_16307 = select_ln340_370_fu_8365_p3.read();
        select_ln340_372_reg_16313 = select_ln340_372_fu_8394_p3.read();
        select_ln340_374_reg_16319 = select_ln340_374_fu_8423_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_1_reg_16397.read()))) {
        sub_ln944_1_reg_16617 = sub_ln944_1_fu_9949_p2.read();
        trunc_ln943_1_reg_16634 = trunc_ln943_1_fu_9963_p1.read();
        trunc_ln944_1_reg_16624 = trunc_ln944_1_fu_9955_p1.read();
        trunc_ln947_1_reg_16629 = trunc_ln947_1_fu_9959_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_2_reg_16419.read()))) {
        sub_ln944_2_reg_16639 = sub_ln944_2_fu_9982_p2.read();
        trunc_ln943_2_reg_16656 = trunc_ln943_2_fu_9996_p1.read();
        trunc_ln944_2_reg_16646 = trunc_ln944_2_fu_9988_p1.read();
        trunc_ln947_2_reg_16651 = trunc_ln947_2_fu_9992_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_3_reg_16441.read()))) {
        sub_ln944_3_reg_16661 = sub_ln944_3_fu_10015_p2.read();
        trunc_ln943_3_reg_16678 = trunc_ln943_3_fu_10029_p1.read();
        trunc_ln944_3_reg_16668 = trunc_ln944_3_fu_10021_p1.read();
        trunc_ln947_3_reg_16673 = trunc_ln947_3_fu_10025_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_4_reg_16463.read()))) {
        sub_ln944_4_reg_16683 = sub_ln944_4_fu_10048_p2.read();
        trunc_ln943_4_reg_16700 = trunc_ln943_4_fu_10062_p1.read();
        trunc_ln944_4_reg_16690 = trunc_ln944_4_fu_10054_p1.read();
        trunc_ln947_4_reg_16695 = trunc_ln947_4_fu_10058_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_5_reg_16485.read()))) {
        sub_ln944_5_reg_16705 = sub_ln944_5_fu_10081_p2.read();
        trunc_ln943_5_reg_16722 = trunc_ln943_5_fu_10095_p1.read();
        trunc_ln944_5_reg_16712 = trunc_ln944_5_fu_10087_p1.read();
        trunc_ln947_5_reg_16717 = trunc_ln947_5_fu_10091_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_6_reg_16507.read()))) {
        sub_ln944_6_reg_16727 = sub_ln944_6_fu_10114_p2.read();
        trunc_ln943_6_reg_16744 = trunc_ln943_6_fu_10128_p1.read();
        trunc_ln944_6_reg_16734 = trunc_ln944_6_fu_10120_p1.read();
        trunc_ln947_6_reg_16739 = trunc_ln947_6_fu_10124_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_7_reg_16529.read()))) {
        sub_ln944_7_reg_16749 = sub_ln944_7_fu_10147_p2.read();
        trunc_ln943_7_reg_16766 = trunc_ln943_7_fu_10161_p1.read();
        trunc_ln944_7_reg_16756 = trunc_ln944_7_fu_10153_p1.read();
        trunc_ln947_7_reg_16761 = trunc_ln947_7_fu_10157_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_8_reg_16551.read()))) {
        sub_ln944_8_reg_16771 = sub_ln944_8_fu_10180_p2.read();
        trunc_ln943_8_reg_16788 = trunc_ln943_8_fu_10194_p1.read();
        trunc_ln944_8_reg_16778 = trunc_ln944_8_fu_10186_p1.read();
        trunc_ln947_8_reg_16783 = trunc_ln947_8_fu_10190_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_9_reg_16573.read()))) {
        sub_ln944_9_reg_16793 = sub_ln944_9_fu_10213_p2.read();
        trunc_ln943_9_reg_16810 = trunc_ln943_9_fu_10227_p1.read();
        trunc_ln944_9_reg_16800 = trunc_ln944_9_fu_10219_p1.read();
        trunc_ln947_9_reg_16805 = trunc_ln947_9_fu_10223_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_reg_16375.read()))) {
        sub_ln944_reg_16595 = sub_ln944_fu_9916_p2.read();
        trunc_ln943_reg_16612 = trunc_ln943_fu_9930_p1.read();
        trunc_ln944_reg_16602 = trunc_ln944_fu_9922_p1.read();
        trunc_ln947_reg_16607 = trunc_ln947_fu_9926_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln28_fu_5498_p2.read(), ap_const_lv1_0))) {
        tmp_12_reg_15700 = tmp_12_fu_5528_p66.read();
        tmp_13_reg_15705 = tmp_13_fu_5598_p66.read();
        tmp_14_reg_15710 = tmp_14_fu_5668_p66.read();
        tmp_15_reg_15715 = tmp_15_fu_5738_p66.read();
        tmp_16_reg_15720 = tmp_16_fu_5808_p66.read();
        tmp_17_reg_15725 = tmp_17_fu_5878_p66.read();
        tmp_18_reg_15730 = tmp_18_fu_5948_p66.read();
        tmp_19_reg_15735 = tmp_19_fu_6018_p66.read();
        tmp_20_reg_15740 = tmp_20_fu_6088_p66.read();
        tmp_21_reg_15745 = tmp_21_fu_6158_p66.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        zext_ln31_1_cast_reg_15681 = zext_ln31_1_cast_fu_5494_p1.read();
    }
}

void matmul::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln28_fu_5498_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln28_fu_5498_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXXXXX";
            break;
    }
}

}


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
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter4 = ap_const_logic_0;
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        add_ln1192_192_reg_16452 = add_ln1192_192_fu_9351_p2.read();
        add_ln1192_194_reg_16469 = add_ln1192_194_fu_9386_p2.read();
        add_ln1192_195_reg_16486 = add_ln1192_195_fu_9421_p2.read();
        add_ln1192_197_reg_16503 = add_ln1192_197_fu_9456_p2.read();
        add_ln1192_199_reg_16520 = add_ln1192_199_fu_9491_p2.read();
        add_ln1192_201_reg_16537 = add_ln1192_201_fu_9526_p2.read();
        add_ln1192_203_reg_16554 = add_ln1192_203_fu_9561_p2.read();
        add_ln1192_205_reg_16571 = add_ln1192_205_fu_9596_p2.read();
        add_ln1192_207_reg_16588 = add_ln1192_207_fu_9631_p2.read();
        add_ln1192_reg_16435 = add_ln1192_fu_9316_p2.read();
        sub_ln939_1_reg_16464 = sub_ln939_1_fu_9365_p2.read();
        sub_ln939_2_reg_16481 = sub_ln939_2_fu_9400_p2.read();
        sub_ln939_3_reg_16498 = sub_ln939_3_fu_9435_p2.read();
        sub_ln939_4_reg_16515 = sub_ln939_4_fu_9470_p2.read();
        sub_ln939_5_reg_16532 = sub_ln939_5_fu_9505_p2.read();
        sub_ln939_6_reg_16549 = sub_ln939_6_fu_9540_p2.read();
        sub_ln939_7_reg_16566 = sub_ln939_7_fu_9575_p2.read();
        sub_ln939_8_reg_16583 = sub_ln939_8_fu_9610_p2.read();
        sub_ln939_9_reg_16600 = sub_ln939_9_fu_9645_p2.read();
        sub_ln939_reg_16447 = sub_ln939_fu_9330_p2.read();
        tmp_837_reg_16441 = add_ln1192_fu_9316_p2.read().range(14, 14);
        tmp_841_reg_16458 = add_ln1192_192_fu_9351_p2.read().range(14, 14);
        tmp_845_reg_16475 = add_ln1192_194_fu_9386_p2.read().range(14, 14);
        tmp_849_reg_16492 = add_ln1192_195_fu_9421_p2.read().range(14, 14);
        tmp_853_reg_16509 = add_ln1192_197_fu_9456_p2.read().range(14, 14);
        tmp_857_reg_16526 = add_ln1192_199_fu_9491_p2.read().range(14, 14);
        tmp_861_reg_16543 = add_ln1192_201_fu_9526_p2.read().range(14, 14);
        tmp_865_reg_16560 = add_ln1192_203_fu_9561_p2.read().range(14, 14);
        tmp_869_reg_16577 = add_ln1192_205_fu_9596_p2.read().range(14, 14);
        tmp_873_reg_16594 = add_ln1192_207_fu_9631_p2.read().range(14, 14);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln28_reg_15716_pp0_iter2_reg.read(), ap_const_lv1_0))) {
        add_ln415_63_reg_16106 = add_ln415_63_fu_6744_p2.read();
        add_ln415_64_reg_16137 = add_ln415_64_fu_6897_p2.read();
        add_ln415_65_reg_16168 = add_ln415_65_fu_7050_p2.read();
        add_ln415_66_reg_16199 = add_ln415_66_fu_7203_p2.read();
        add_ln415_67_reg_16230 = add_ln415_67_fu_7356_p2.read();
        add_ln415_68_reg_16261 = add_ln415_68_fu_7509_p2.read();
        add_ln415_69_reg_16292 = add_ln415_69_fu_7662_p2.read();
        add_ln415_70_reg_16323 = add_ln415_70_fu_7815_p2.read();
        add_ln415_71_reg_16354 = add_ln415_71_fu_7968_p2.read();
        add_ln415_reg_16075 = add_ln415_fu_6591_p2.read();
        and_ln781_1_reg_16112 = and_ln781_1_fu_6829_p2.read();
        and_ln781_2_reg_16143 = and_ln781_2_fu_6982_p2.read();
        and_ln781_3_reg_16174 = and_ln781_3_fu_7135_p2.read();
        and_ln781_4_reg_16205 = and_ln781_4_fu_7288_p2.read();
        and_ln781_5_reg_16236 = and_ln781_5_fu_7441_p2.read();
        and_ln781_6_reg_16267 = and_ln781_6_fu_7594_p2.read();
        and_ln781_7_reg_16298 = and_ln781_7_fu_7747_p2.read();
        and_ln781_8_reg_16329 = and_ln781_8_fu_7900_p2.read();
        and_ln781_9_reg_16360 = and_ln781_9_fu_8053_p2.read();
        and_ln781_reg_16081 = and_ln781_fu_6676_p2.read();
        and_ln786_1_reg_16122 = and_ln786_1_fu_6858_p2.read();
        and_ln786_289_reg_16096 = and_ln786_289_fu_6723_p2.read();
        and_ln786_291_reg_16127 = and_ln786_291_fu_6876_p2.read();
        and_ln786_293_reg_16158 = and_ln786_293_fu_7029_p2.read();
        and_ln786_295_reg_16189 = and_ln786_295_fu_7182_p2.read();
        and_ln786_297_reg_16220 = and_ln786_297_fu_7335_p2.read();
        and_ln786_299_reg_16251 = and_ln786_299_fu_7488_p2.read();
        and_ln786_2_reg_16153 = and_ln786_2_fu_7011_p2.read();
        and_ln786_301_reg_16282 = and_ln786_301_fu_7641_p2.read();
        and_ln786_303_reg_16313 = and_ln786_303_fu_7794_p2.read();
        and_ln786_305_reg_16344 = and_ln786_305_fu_7947_p2.read();
        and_ln786_307_reg_16375 = and_ln786_307_fu_8100_p2.read();
        and_ln786_3_reg_16184 = and_ln786_3_fu_7164_p2.read();
        and_ln786_4_reg_16215 = and_ln786_4_fu_7317_p2.read();
        and_ln786_5_reg_16246 = and_ln786_5_fu_7470_p2.read();
        and_ln786_6_reg_16277 = and_ln786_6_fu_7623_p2.read();
        and_ln786_7_reg_16308 = and_ln786_7_fu_7776_p2.read();
        and_ln786_8_reg_16339 = and_ln786_8_fu_7929_p2.read();
        and_ln786_9_reg_16370 = and_ln786_9_fu_8082_p2.read();
        and_ln786_reg_16091 = and_ln786_fu_6705_p2.read();
        or_ln340_1_reg_16132 = or_ln340_1_fu_6881_p2.read();
        or_ln340_2_reg_16163 = or_ln340_2_fu_7034_p2.read();
        or_ln340_3_reg_16194 = or_ln340_3_fu_7187_p2.read();
        or_ln340_4_reg_16225 = or_ln340_4_fu_7340_p2.read();
        or_ln340_5_reg_16256 = or_ln340_5_fu_7493_p2.read();
        or_ln340_6_reg_16287 = or_ln340_6_fu_7646_p2.read();
        or_ln340_7_reg_16318 = or_ln340_7_fu_7799_p2.read();
        or_ln340_8_reg_16349 = or_ln340_8_fu_7952_p2.read();
        or_ln340_9_reg_16380 = or_ln340_9_fu_8105_p2.read();
        or_ln340_reg_16101 = or_ln340_fu_6728_p2.read();
        xor_ln785_127_reg_16086 = xor_ln785_127_fu_6694_p2.read();
        xor_ln785_128_reg_16117 = xor_ln785_128_fu_6847_p2.read();
        xor_ln785_129_reg_16148 = xor_ln785_129_fu_7000_p2.read();
        xor_ln785_130_reg_16179 = xor_ln785_130_fu_7153_p2.read();
        xor_ln785_131_reg_16210 = xor_ln785_131_fu_7306_p2.read();
        xor_ln785_132_reg_16241 = xor_ln785_132_fu_7459_p2.read();
        xor_ln785_133_reg_16272 = xor_ln785_133_fu_7612_p2.read();
        xor_ln785_134_reg_16303 = xor_ln785_134_fu_7765_p2.read();
        xor_ln785_135_reg_16334 = xor_ln785_135_fu_7918_p2.read();
        xor_ln785_136_reg_16365 = xor_ln785_136_fu_8071_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln28_reg_15716.read(), ap_const_lv1_0))) {
        bottom_V_load_reg_15780 = bottom_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(icmp_ln28_reg_15716_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        buf_V_0_010_reg_5355 = buf_0_V_fu_8222_p3.read();
        buf_V_1_09_reg_5367 = buf_1_V_fu_8341_p3.read();
        buf_V_2_08_reg_5379 = buf_2_V_fu_8460_p3.read();
        buf_V_3_07_reg_5391 = buf_3_V_fu_8579_p3.read();
        buf_V_4_06_reg_5403 = buf_4_V_fu_8698_p3.read();
        buf_V_5_05_reg_5415 = buf_5_V_fu_8817_p3.read();
        buf_V_6_04_reg_5427 = buf_6_V_fu_8936_p3.read();
        buf_V_7_03_reg_5439 = buf_7_V_fu_9055_p3.read();
        buf_V_8_02_reg_5451 = buf_8_V_fu_9174_p3.read();
        buf_V_9_01_reg_5463 = buf_9_V_fu_9293_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln28_reg_15716 = icmp_ln28_fu_5498_p2.read();
        icmp_ln28_reg_15716_pp0_iter1_reg = icmp_ln28_reg_15716.read();
        tmp_12_reg_15730_pp0_iter1_reg = tmp_12_reg_15730.read();
        tmp_13_reg_15735_pp0_iter1_reg = tmp_13_reg_15735.read();
        tmp_14_reg_15740_pp0_iter1_reg = tmp_14_reg_15740.read();
        tmp_15_reg_15745_pp0_iter1_reg = tmp_15_reg_15745.read();
        tmp_16_reg_15750_pp0_iter1_reg = tmp_16_reg_15750.read();
        tmp_17_reg_15755_pp0_iter1_reg = tmp_17_reg_15755.read();
        tmp_18_reg_15760_pp0_iter1_reg = tmp_18_reg_15760.read();
        tmp_19_reg_15765_pp0_iter1_reg = tmp_19_reg_15765.read();
        tmp_20_reg_15770_pp0_iter1_reg = tmp_20_reg_15770.read();
        tmp_21_reg_15775_pp0_iter1_reg = tmp_21_reg_15775.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        icmp_ln28_reg_15716_pp0_iter2_reg = icmp_ln28_reg_15716_pp0_iter1_reg.read();
        icmp_ln28_reg_15716_pp0_iter3_reg = icmp_ln28_reg_15716_pp0_iter2_reg.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        icmp_ln935_1_reg_16639 = icmp_ln935_1_fu_9705_p2.read();
        icmp_ln935_2_reg_16673 = icmp_ln935_2_fu_9759_p2.read();
        icmp_ln935_3_reg_16707 = icmp_ln935_3_fu_9813_p2.read();
        icmp_ln935_4_reg_16741 = icmp_ln935_4_fu_9867_p2.read();
        icmp_ln935_5_reg_16775 = icmp_ln935_5_fu_9921_p2.read();
        icmp_ln935_6_reg_16809 = icmp_ln935_6_fu_9975_p2.read();
        icmp_ln935_7_reg_16843 = icmp_ln935_7_fu_10029_p2.read();
        icmp_ln935_8_reg_16877 = icmp_ln935_8_fu_10083_p2.read();
        icmp_ln935_9_reg_16911 = icmp_ln935_9_fu_10137_p2.read();
        icmp_ln935_reg_16605 = icmp_ln935_fu_9651_p2.read();
        select_ln938_1_reg_16644 = select_ln938_1_fu_9710_p3.read();
        select_ln938_2_reg_16678 = select_ln938_2_fu_9764_p3.read();
        select_ln938_3_reg_16712 = select_ln938_3_fu_9818_p3.read();
        select_ln938_4_reg_16746 = select_ln938_4_fu_9872_p3.read();
        select_ln938_5_reg_16780 = select_ln938_5_fu_9926_p3.read();
        select_ln938_6_reg_16814 = select_ln938_6_fu_9980_p3.read();
        select_ln938_7_reg_16848 = select_ln938_7_fu_10034_p3.read();
        select_ln938_8_reg_16882 = select_ln938_8_fu_10088_p3.read();
        select_ln938_9_reg_16916 = select_ln938_9_fu_10142_p3.read();
        select_ln938_reg_16610 = select_ln938_fu_9656_p3.read();
        sub_ln944_1_reg_16651 = sub_ln944_1_fu_9741_p2.read();
        sub_ln944_2_reg_16685 = sub_ln944_2_fu_9795_p2.read();
        sub_ln944_3_reg_16719 = sub_ln944_3_fu_9849_p2.read();
        sub_ln944_4_reg_16753 = sub_ln944_4_fu_9903_p2.read();
        sub_ln944_5_reg_16787 = sub_ln944_5_fu_9957_p2.read();
        sub_ln944_6_reg_16821 = sub_ln944_6_fu_10011_p2.read();
        sub_ln944_7_reg_16855 = sub_ln944_7_fu_10065_p2.read();
        sub_ln944_8_reg_16889 = sub_ln944_8_fu_10119_p2.read();
        sub_ln944_9_reg_16923 = sub_ln944_9_fu_10173_p2.read();
        sub_ln944_reg_16617 = sub_ln944_fu_9687_p2.read();
        trunc_ln943_1_reg_16668 = trunc_ln943_1_fu_9755_p1.read();
        trunc_ln943_2_reg_16702 = trunc_ln943_2_fu_9809_p1.read();
        trunc_ln943_3_reg_16736 = trunc_ln943_3_fu_9863_p1.read();
        trunc_ln943_4_reg_16770 = trunc_ln943_4_fu_9917_p1.read();
        trunc_ln943_5_reg_16804 = trunc_ln943_5_fu_9971_p1.read();
        trunc_ln943_6_reg_16838 = trunc_ln943_6_fu_10025_p1.read();
        trunc_ln943_7_reg_16872 = trunc_ln943_7_fu_10079_p1.read();
        trunc_ln943_8_reg_16906 = trunc_ln943_8_fu_10133_p1.read();
        trunc_ln943_9_reg_16940 = trunc_ln943_9_fu_10187_p1.read();
        trunc_ln943_reg_16634 = trunc_ln943_fu_9701_p1.read();
        trunc_ln944_1_reg_16658 = trunc_ln944_1_fu_9747_p1.read();
        trunc_ln944_2_reg_16692 = trunc_ln944_2_fu_9801_p1.read();
        trunc_ln944_3_reg_16726 = trunc_ln944_3_fu_9855_p1.read();
        trunc_ln944_4_reg_16760 = trunc_ln944_4_fu_9909_p1.read();
        trunc_ln944_5_reg_16794 = trunc_ln944_5_fu_9963_p1.read();
        trunc_ln944_6_reg_16828 = trunc_ln944_6_fu_10017_p1.read();
        trunc_ln944_7_reg_16862 = trunc_ln944_7_fu_10071_p1.read();
        trunc_ln944_8_reg_16896 = trunc_ln944_8_fu_10125_p1.read();
        trunc_ln944_9_reg_16930 = trunc_ln944_9_fu_10179_p1.read();
        trunc_ln944_reg_16624 = trunc_ln944_fu_9693_p1.read();
        trunc_ln947_1_reg_16663 = trunc_ln947_1_fu_9751_p1.read();
        trunc_ln947_2_reg_16697 = trunc_ln947_2_fu_9805_p1.read();
        trunc_ln947_3_reg_16731 = trunc_ln947_3_fu_9859_p1.read();
        trunc_ln947_4_reg_16765 = trunc_ln947_4_fu_9913_p1.read();
        trunc_ln947_5_reg_16799 = trunc_ln947_5_fu_9967_p1.read();
        trunc_ln947_6_reg_16833 = trunc_ln947_6_fu_10021_p1.read();
        trunc_ln947_7_reg_16867 = trunc_ln947_7_fu_10075_p1.read();
        trunc_ln947_8_reg_16901 = trunc_ln947_8_fu_10129_p1.read();
        trunc_ln947_9_reg_16935 = trunc_ln947_9_fu_10183_p1.read();
        trunc_ln947_reg_16629 = trunc_ln947_fu_9697_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_1_reg_16639.read()))) {
        icmp_ln958_1_reg_16960 = icmp_ln958_1_fu_10395_p2.read();
        or_ln949_1_reg_16955 = or_ln949_1_fu_10387_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_2_reg_16673.read()))) {
        icmp_ln958_2_reg_16970 = icmp_ln958_2_fu_10500_p2.read();
        or_ln949_2_reg_16965 = or_ln949_2_fu_10492_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_3_reg_16707.read()))) {
        icmp_ln958_3_reg_16980 = icmp_ln958_3_fu_10605_p2.read();
        or_ln949_3_reg_16975 = or_ln949_3_fu_10597_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_4_reg_16741.read()))) {
        icmp_ln958_4_reg_16990 = icmp_ln958_4_fu_10710_p2.read();
        or_ln949_4_reg_16985 = or_ln949_4_fu_10702_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_5_reg_16775.read()))) {
        icmp_ln958_5_reg_17000 = icmp_ln958_5_fu_10815_p2.read();
        or_ln949_5_reg_16995 = or_ln949_5_fu_10807_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_6_reg_16809.read()))) {
        icmp_ln958_6_reg_17010 = icmp_ln958_6_fu_10920_p2.read();
        or_ln949_6_reg_17005 = or_ln949_6_fu_10912_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_7_reg_16843.read()))) {
        icmp_ln958_7_reg_17020 = icmp_ln958_7_fu_11025_p2.read();
        or_ln949_7_reg_17015 = or_ln949_7_fu_11017_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_8_reg_16877.read()))) {
        icmp_ln958_8_reg_17030 = icmp_ln958_8_fu_11130_p2.read();
        or_ln949_8_reg_17025 = or_ln949_8_fu_11122_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_9_reg_16911.read()))) {
        icmp_ln958_9_reg_17040 = icmp_ln958_9_fu_11235_p2.read();
        or_ln949_9_reg_17035 = or_ln949_9_fu_11227_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_reg_16605.read()))) {
        icmp_ln958_reg_16950 = icmp_ln958_fu_10290_p2.read();
        or_ln_reg_16945 = or_ln_fu_10282_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_1_reg_16639.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        lshr_ln962_1_reg_17055 = add_ln961_1_fu_11328_p2.read().range(31, 1);
        tmp_844_reg_17060 = add_ln961_1_fu_11328_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_2_reg_16673.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        lshr_ln962_2_reg_17065 = add_ln961_2_fu_11383_p2.read().range(31, 1);
        tmp_848_reg_17070 = add_ln961_2_fu_11383_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_3_reg_16707.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        lshr_ln962_3_reg_17075 = add_ln961_3_fu_11438_p2.read().range(31, 1);
        tmp_852_reg_17080 = add_ln961_3_fu_11438_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_4_reg_16741.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        lshr_ln962_4_reg_17085 = add_ln961_4_fu_11493_p2.read().range(31, 1);
        tmp_856_reg_17090 = add_ln961_4_fu_11493_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_5_reg_16775.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        lshr_ln962_5_reg_17095 = add_ln961_5_fu_11548_p2.read().range(31, 1);
        tmp_860_reg_17100 = add_ln961_5_fu_11548_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_6_reg_16809.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        lshr_ln962_6_reg_17105 = add_ln961_6_fu_11603_p2.read().range(31, 1);
        tmp_864_reg_17110 = add_ln961_6_fu_11603_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_7_reg_16843.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        lshr_ln962_7_reg_17115 = add_ln961_7_fu_11658_p2.read().range(31, 1);
        tmp_868_reg_17120 = add_ln961_7_fu_11658_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_8_reg_16877.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        lshr_ln962_8_reg_17125 = add_ln961_8_fu_11713_p2.read().range(31, 1);
        tmp_872_reg_17130 = add_ln961_8_fu_11713_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_9_reg_16911.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        lshr_ln962_9_reg_17135 = add_ln961_9_fu_11768_p2.read().range(31, 1);
        tmp_876_reg_17140 = add_ln961_9_fu_11768_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_reg_16605.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        lshr_ln_reg_17045 = add_ln961_fu_11273_p2.read().range(31, 1);
        tmp_840_reg_17050 = add_ln961_fu_11273_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln28_reg_15716_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        mul_ln1118_63_reg_15814 = mul_ln1118_63_fu_12371_p2.read();
        mul_ln1118_64_reg_15843 = mul_ln1118_64_fu_12381_p2.read();
        mul_ln1118_65_reg_15872 = mul_ln1118_65_fu_12391_p2.read();
        mul_ln1118_66_reg_15901 = mul_ln1118_66_fu_12401_p2.read();
        mul_ln1118_67_reg_15930 = mul_ln1118_67_fu_12411_p2.read();
        mul_ln1118_68_reg_15959 = mul_ln1118_68_fu_12421_p2.read();
        mul_ln1118_69_reg_15988 = mul_ln1118_69_fu_12431_p2.read();
        mul_ln1118_70_reg_16017 = mul_ln1118_70_fu_12441_p2.read();
        mul_ln1118_71_reg_16046 = mul_ln1118_71_fu_12451_p2.read();
        mul_ln1118_reg_15785 = mul_ln1118_fu_12361_p2.read();
        tmp_877_reg_15792 = mul_ln1118_fu_12361_p2.read().range(22, 22);
        tmp_879_reg_15803 = mul_ln1118_fu_12361_p2.read().range(6, 6);
        tmp_883_reg_15808 = mul_ln1118_fu_12361_p2.read().range(22, 21);
        tmp_887_reg_15821 = mul_ln1118_63_fu_12371_p2.read().range(22, 22);
        tmp_889_reg_15832 = mul_ln1118_63_fu_12371_p2.read().range(6, 6);
        tmp_893_reg_15837 = mul_ln1118_63_fu_12371_p2.read().range(22, 21);
        tmp_897_reg_15850 = mul_ln1118_64_fu_12381_p2.read().range(22, 22);
        tmp_899_reg_15861 = mul_ln1118_64_fu_12381_p2.read().range(6, 6);
        tmp_903_reg_15866 = mul_ln1118_64_fu_12381_p2.read().range(22, 21);
        tmp_907_reg_15879 = mul_ln1118_65_fu_12391_p2.read().range(22, 22);
        tmp_909_reg_15890 = mul_ln1118_65_fu_12391_p2.read().range(6, 6);
        tmp_913_reg_15895 = mul_ln1118_65_fu_12391_p2.read().range(22, 21);
        tmp_917_reg_15908 = mul_ln1118_66_fu_12401_p2.read().range(22, 22);
        tmp_919_reg_15919 = mul_ln1118_66_fu_12401_p2.read().range(6, 6);
        tmp_923_reg_15924 = mul_ln1118_66_fu_12401_p2.read().range(22, 21);
        tmp_927_reg_15937 = mul_ln1118_67_fu_12411_p2.read().range(22, 22);
        tmp_929_reg_15948 = mul_ln1118_67_fu_12411_p2.read().range(6, 6);
        tmp_933_reg_15953 = mul_ln1118_67_fu_12411_p2.read().range(22, 21);
        tmp_937_reg_15966 = mul_ln1118_68_fu_12421_p2.read().range(22, 22);
        tmp_939_reg_15977 = mul_ln1118_68_fu_12421_p2.read().range(6, 6);
        tmp_943_reg_15982 = mul_ln1118_68_fu_12421_p2.read().range(22, 21);
        tmp_947_reg_15995 = mul_ln1118_69_fu_12431_p2.read().range(22, 22);
        tmp_949_reg_16006 = mul_ln1118_69_fu_12431_p2.read().range(6, 6);
        tmp_953_reg_16011 = mul_ln1118_69_fu_12431_p2.read().range(22, 21);
        tmp_957_reg_16024 = mul_ln1118_70_fu_12441_p2.read().range(22, 22);
        tmp_959_reg_16035 = mul_ln1118_70_fu_12441_p2.read().range(6, 6);
        tmp_963_reg_16040 = mul_ln1118_70_fu_12441_p2.read().range(22, 21);
        tmp_967_reg_16053 = mul_ln1118_71_fu_12451_p2.read().range(22, 22);
        tmp_969_reg_16064 = mul_ln1118_71_fu_12451_p2.read().range(6, 6);
        tmp_973_reg_16069 = mul_ln1118_71_fu_12451_p2.read().range(22, 21);
        trunc_ln708_61_reg_15856 = mul_ln1118_64_fu_12381_p2.read().range(20, 7);
        trunc_ln708_62_reg_15885 = mul_ln1118_65_fu_12391_p2.read().range(20, 7);
        trunc_ln708_63_reg_15914 = mul_ln1118_66_fu_12401_p2.read().range(20, 7);
        trunc_ln708_64_reg_15943 = mul_ln1118_67_fu_12411_p2.read().range(20, 7);
        trunc_ln708_65_reg_15972 = mul_ln1118_68_fu_12421_p2.read().range(20, 7);
        trunc_ln708_66_reg_16001 = mul_ln1118_69_fu_12431_p2.read().range(20, 7);
        trunc_ln708_67_reg_16030 = mul_ln1118_70_fu_12441_p2.read().range(20, 7);
        trunc_ln708_68_reg_16059 = mul_ln1118_71_fu_12451_p2.read().range(20, 7);
        trunc_ln708_s_reg_15827 = mul_ln1118_63_fu_12371_p2.read().range(20, 7);
        trunc_ln_reg_15798 = mul_ln1118_fu_12361_p2.read().range(20, 7);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln28_fu_5498_p2.read(), ap_const_lv1_0))) {
        tmp_12_reg_15730 = tmp_12_fu_5528_p66.read();
        tmp_13_reg_15735 = tmp_13_fu_5598_p66.read();
        tmp_14_reg_15740 = tmp_14_fu_5668_p66.read();
        tmp_15_reg_15745 = tmp_15_fu_5738_p66.read();
        tmp_16_reg_15750 = tmp_16_fu_5808_p66.read();
        tmp_17_reg_15755 = tmp_17_fu_5878_p66.read();
        tmp_18_reg_15760 = tmp_18_fu_5948_p66.read();
        tmp_19_reg_15765 = tmp_19_fu_6018_p66.read();
        tmp_20_reg_15770 = tmp_20_fu_6088_p66.read();
        tmp_21_reg_15775 = tmp_21_fu_6158_p66.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        zext_ln31_1_cast_reg_15711 = zext_ln31_1_cast_fu_5494_p1.read();
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
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln28_fu_5498_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln28_fu_5498_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state11;
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


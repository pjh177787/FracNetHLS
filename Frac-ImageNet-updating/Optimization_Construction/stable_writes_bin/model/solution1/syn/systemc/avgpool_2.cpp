#include "avgpool.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void avgpool::thread_ap_clk_no_reset_() {
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
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(icmp_ln514_fu_1248_p2.read(), ap_const_lv1_0))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state3.read() ^ ap_const_logic_1);
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
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(icmp_ln514_fu_1248_p2.read(), ap_const_lv1_0))) {
            ap_enable_reg_pp0_iter4 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        col_0_reg_1032 = col_reg_17505.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        col_0_reg_1032 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln521_reg_15349.read()))) {
        ii_0_reg_1054 = select_ln521_1_reg_15363.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln514_fu_1248_p2.read(), ap_const_lv1_0))) {
        ii_0_reg_1054 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        indvar_flatten7_reg_1010 = add_ln514_reg_15318.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten7_reg_1010 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln521_fu_1316_p2.read()))) {
        indvar_flatten_reg_1043 = add_ln521_2_fu_1322_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln514_fu_1248_p2.read(), ap_const_lv1_0))) {
        indvar_flatten_reg_1043 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln521_fu_1316_p2.read()))) {
        jj_0_reg_1065 = jj_fu_1390_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln514_fu_1248_p2.read(), ap_const_lv1_0))) {
        jj_0_reg_1065 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        row_0_reg_1021 = select_ln514_1_reg_15329.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        row_0_reg_1021 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln521_reg_15349_pp0_iter2_reg.read()))) {
        add_ln1192_287_reg_15623 = add_ln1192_287_fu_1546_p2.read();
        add_ln1192_288_reg_15656 = add_ln1192_288_fu_1612_p2.read();
        add_ln1192_289_reg_15689 = add_ln1192_289_fu_1678_p2.read();
        add_ln1192_290_reg_15722 = add_ln1192_290_fu_1744_p2.read();
        add_ln1192_291_reg_15755 = add_ln1192_291_fu_1810_p2.read();
        add_ln1192_292_reg_15788 = add_ln1192_292_fu_1876_p2.read();
        add_ln1192_293_reg_15821 = add_ln1192_293_fu_1942_p2.read();
        add_ln1192_294_reg_15854 = add_ln1192_294_fu_2008_p2.read();
        add_ln1192_295_reg_15887 = add_ln1192_295_fu_2074_p2.read();
        add_ln1192_296_reg_15920 = add_ln1192_296_fu_2140_p2.read();
        add_ln1192_297_reg_15953 = add_ln1192_297_fu_2206_p2.read();
        add_ln1192_298_reg_15986 = add_ln1192_298_fu_2272_p2.read();
        add_ln1192_299_reg_16019 = add_ln1192_299_fu_2338_p2.read();
        add_ln1192_300_reg_16052 = add_ln1192_300_fu_2404_p2.read();
        add_ln1192_301_reg_16085 = add_ln1192_301_fu_2470_p2.read();
        add_ln1192_302_reg_16118 = add_ln1192_302_fu_2536_p2.read();
        add_ln1192_303_reg_16151 = add_ln1192_303_fu_2602_p2.read();
        add_ln1192_304_reg_16184 = add_ln1192_304_fu_2668_p2.read();
        add_ln1192_305_reg_16217 = add_ln1192_305_fu_2734_p2.read();
        add_ln1192_306_reg_16250 = add_ln1192_306_fu_2800_p2.read();
        add_ln1192_307_reg_16283 = add_ln1192_307_fu_2866_p2.read();
        add_ln1192_308_reg_16316 = add_ln1192_308_fu_2932_p2.read();
        add_ln1192_309_reg_16349 = add_ln1192_309_fu_2998_p2.read();
        add_ln1192_310_reg_16382 = add_ln1192_310_fu_3064_p2.read();
        add_ln1192_311_reg_16415 = add_ln1192_311_fu_3130_p2.read();
        add_ln1192_312_reg_16448 = add_ln1192_312_fu_3196_p2.read();
        add_ln1192_313_reg_16481 = add_ln1192_313_fu_3262_p2.read();
        add_ln1192_314_reg_16514 = add_ln1192_314_fu_3328_p2.read();
        add_ln1192_315_reg_16547 = add_ln1192_315_fu_3394_p2.read();
        add_ln1192_316_reg_16580 = add_ln1192_316_fu_3460_p2.read();
        add_ln1192_317_reg_16613 = add_ln1192_317_fu_3526_p2.read();
        add_ln1192_reg_15590 = add_ln1192_fu_1480_p2.read();
        tmp_2474_reg_15595 = add_ln1192_fu_1480_p2.read().range(21, 21);
        tmp_2476_reg_15608 = add_ln1192_fu_1480_p2.read().range(4, 4);
        tmp_2480_reg_15628 = add_ln1192_287_fu_1546_p2.read().range(21, 21);
        tmp_2482_reg_15641 = add_ln1192_287_fu_1546_p2.read().range(4, 4);
        tmp_2486_reg_15661 = add_ln1192_288_fu_1612_p2.read().range(21, 21);
        tmp_2488_reg_15674 = add_ln1192_288_fu_1612_p2.read().range(4, 4);
        tmp_2492_reg_15694 = add_ln1192_289_fu_1678_p2.read().range(21, 21);
        tmp_2494_reg_15707 = add_ln1192_289_fu_1678_p2.read().range(4, 4);
        tmp_2498_reg_15727 = add_ln1192_290_fu_1744_p2.read().range(21, 21);
        tmp_2500_reg_15740 = add_ln1192_290_fu_1744_p2.read().range(4, 4);
        tmp_2504_reg_15760 = add_ln1192_291_fu_1810_p2.read().range(21, 21);
        tmp_2506_reg_15773 = add_ln1192_291_fu_1810_p2.read().range(4, 4);
        tmp_2510_reg_15793 = add_ln1192_292_fu_1876_p2.read().range(21, 21);
        tmp_2512_reg_15806 = add_ln1192_292_fu_1876_p2.read().range(4, 4);
        tmp_2516_reg_15826 = add_ln1192_293_fu_1942_p2.read().range(21, 21);
        tmp_2518_reg_15839 = add_ln1192_293_fu_1942_p2.read().range(4, 4);
        tmp_2522_reg_15859 = add_ln1192_294_fu_2008_p2.read().range(21, 21);
        tmp_2524_reg_15872 = add_ln1192_294_fu_2008_p2.read().range(4, 4);
        tmp_2528_reg_15892 = add_ln1192_295_fu_2074_p2.read().range(21, 21);
        tmp_2530_reg_15905 = add_ln1192_295_fu_2074_p2.read().range(4, 4);
        tmp_2534_reg_15925 = add_ln1192_296_fu_2140_p2.read().range(21, 21);
        tmp_2536_reg_15938 = add_ln1192_296_fu_2140_p2.read().range(4, 4);
        tmp_2540_reg_15958 = add_ln1192_297_fu_2206_p2.read().range(21, 21);
        tmp_2542_reg_15971 = add_ln1192_297_fu_2206_p2.read().range(4, 4);
        tmp_2546_reg_15991 = add_ln1192_298_fu_2272_p2.read().range(21, 21);
        tmp_2548_reg_16004 = add_ln1192_298_fu_2272_p2.read().range(4, 4);
        tmp_2552_reg_16024 = add_ln1192_299_fu_2338_p2.read().range(21, 21);
        tmp_2554_reg_16037 = add_ln1192_299_fu_2338_p2.read().range(4, 4);
        tmp_2558_reg_16057 = add_ln1192_300_fu_2404_p2.read().range(21, 21);
        tmp_2560_reg_16070 = add_ln1192_300_fu_2404_p2.read().range(4, 4);
        tmp_2564_reg_16090 = add_ln1192_301_fu_2470_p2.read().range(21, 21);
        tmp_2566_reg_16103 = add_ln1192_301_fu_2470_p2.read().range(4, 4);
        tmp_2570_reg_16123 = add_ln1192_302_fu_2536_p2.read().range(21, 21);
        tmp_2572_reg_16136 = add_ln1192_302_fu_2536_p2.read().range(4, 4);
        tmp_2576_reg_16156 = add_ln1192_303_fu_2602_p2.read().range(21, 21);
        tmp_2578_reg_16169 = add_ln1192_303_fu_2602_p2.read().range(4, 4);
        tmp_2582_reg_16189 = add_ln1192_304_fu_2668_p2.read().range(21, 21);
        tmp_2584_reg_16202 = add_ln1192_304_fu_2668_p2.read().range(4, 4);
        tmp_2588_reg_16222 = add_ln1192_305_fu_2734_p2.read().range(21, 21);
        tmp_2590_reg_16235 = add_ln1192_305_fu_2734_p2.read().range(4, 4);
        tmp_2594_reg_16255 = add_ln1192_306_fu_2800_p2.read().range(21, 21);
        tmp_2596_reg_16268 = add_ln1192_306_fu_2800_p2.read().range(4, 4);
        tmp_2600_reg_16288 = add_ln1192_307_fu_2866_p2.read().range(21, 21);
        tmp_2602_reg_16301 = add_ln1192_307_fu_2866_p2.read().range(4, 4);
        tmp_2606_reg_16321 = add_ln1192_308_fu_2932_p2.read().range(21, 21);
        tmp_2608_reg_16334 = add_ln1192_308_fu_2932_p2.read().range(4, 4);
        tmp_2612_reg_16354 = add_ln1192_309_fu_2998_p2.read().range(21, 21);
        tmp_2614_reg_16367 = add_ln1192_309_fu_2998_p2.read().range(4, 4);
        tmp_2618_reg_16387 = add_ln1192_310_fu_3064_p2.read().range(21, 21);
        tmp_2620_reg_16400 = add_ln1192_310_fu_3064_p2.read().range(4, 4);
        tmp_2624_reg_16420 = add_ln1192_311_fu_3130_p2.read().range(21, 21);
        tmp_2626_reg_16433 = add_ln1192_311_fu_3130_p2.read().range(4, 4);
        tmp_2630_reg_16453 = add_ln1192_312_fu_3196_p2.read().range(21, 21);
        tmp_2632_reg_16466 = add_ln1192_312_fu_3196_p2.read().range(4, 4);
        tmp_2636_reg_16486 = add_ln1192_313_fu_3262_p2.read().range(21, 21);
        tmp_2638_reg_16499 = add_ln1192_313_fu_3262_p2.read().range(4, 4);
        tmp_2642_reg_16519 = add_ln1192_314_fu_3328_p2.read().range(21, 21);
        tmp_2644_reg_16532 = add_ln1192_314_fu_3328_p2.read().range(4, 4);
        tmp_2648_reg_16552 = add_ln1192_315_fu_3394_p2.read().range(21, 21);
        tmp_2650_reg_16565 = add_ln1192_315_fu_3394_p2.read().range(4, 4);
        tmp_2654_reg_16585 = add_ln1192_316_fu_3460_p2.read().range(21, 21);
        tmp_2656_reg_16598 = add_ln1192_316_fu_3460_p2.read().range(4, 4);
        tmp_2660_reg_16618 = add_ln1192_317_fu_3526_p2.read().range(21, 21);
        tmp_2662_reg_16631 = add_ln1192_317_fu_3526_p2.read().range(4, 4);
        trunc_ln708_350_reg_15636 = add_ln1192_287_fu_1546_p2.read().range(20, 5);
        trunc_ln708_352_reg_15669 = add_ln1192_288_fu_1612_p2.read().range(20, 5);
        trunc_ln708_354_reg_15702 = add_ln1192_289_fu_1678_p2.read().range(20, 5);
        trunc_ln708_356_reg_15735 = add_ln1192_290_fu_1744_p2.read().range(20, 5);
        trunc_ln708_358_reg_15768 = add_ln1192_291_fu_1810_p2.read().range(20, 5);
        trunc_ln708_360_reg_15801 = add_ln1192_292_fu_1876_p2.read().range(20, 5);
        trunc_ln708_362_reg_15834 = add_ln1192_293_fu_1942_p2.read().range(20, 5);
        trunc_ln708_364_reg_15867 = add_ln1192_294_fu_2008_p2.read().range(20, 5);
        trunc_ln708_366_reg_15900 = add_ln1192_295_fu_2074_p2.read().range(20, 5);
        trunc_ln708_368_reg_15933 = add_ln1192_296_fu_2140_p2.read().range(20, 5);
        trunc_ln708_370_reg_15966 = add_ln1192_297_fu_2206_p2.read().range(20, 5);
        trunc_ln708_372_reg_15999 = add_ln1192_298_fu_2272_p2.read().range(20, 5);
        trunc_ln708_374_reg_16032 = add_ln1192_299_fu_2338_p2.read().range(20, 5);
        trunc_ln708_376_reg_16065 = add_ln1192_300_fu_2404_p2.read().range(20, 5);
        trunc_ln708_378_reg_16098 = add_ln1192_301_fu_2470_p2.read().range(20, 5);
        trunc_ln708_380_reg_16131 = add_ln1192_302_fu_2536_p2.read().range(20, 5);
        trunc_ln708_382_reg_16164 = add_ln1192_303_fu_2602_p2.read().range(20, 5);
        trunc_ln708_384_reg_16197 = add_ln1192_304_fu_2668_p2.read().range(20, 5);
        trunc_ln708_386_reg_16230 = add_ln1192_305_fu_2734_p2.read().range(20, 5);
        trunc_ln708_388_reg_16263 = add_ln1192_306_fu_2800_p2.read().range(20, 5);
        trunc_ln708_390_reg_16296 = add_ln1192_307_fu_2866_p2.read().range(20, 5);
        trunc_ln708_392_reg_16329 = add_ln1192_308_fu_2932_p2.read().range(20, 5);
        trunc_ln708_394_reg_16362 = add_ln1192_309_fu_2998_p2.read().range(20, 5);
        trunc_ln708_396_reg_16395 = add_ln1192_310_fu_3064_p2.read().range(20, 5);
        trunc_ln708_398_reg_16428 = add_ln1192_311_fu_3130_p2.read().range(20, 5);
        trunc_ln708_400_reg_16461 = add_ln1192_312_fu_3196_p2.read().range(20, 5);
        trunc_ln708_402_reg_16494 = add_ln1192_313_fu_3262_p2.read().range(20, 5);
        trunc_ln708_404_reg_16527 = add_ln1192_314_fu_3328_p2.read().range(20, 5);
        trunc_ln708_406_reg_16560 = add_ln1192_315_fu_3394_p2.read().range(20, 5);
        trunc_ln708_408_reg_16593 = add_ln1192_316_fu_3460_p2.read().range(20, 5);
        trunc_ln708_410_reg_16626 = add_ln1192_317_fu_3526_p2.read().range(20, 5);
        trunc_ln708_s_reg_15603 = add_ln1192_fu_1480_p2.read().range(20, 5);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln521_reg_15349.read()))) {
        add_ln1265_reg_15415 = grp_fu_15099_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        add_ln203_reg_16636 = add_ln203_fu_9038_p2.read();
        col_reg_17505 = col_fu_12563_p2.read();
        icmp_ln785_10_reg_16928 = icmp_ln785_10_fu_10241_p2.read();
        icmp_ln785_11_reg_16955 = icmp_ln785_11_fu_10351_p2.read();
        icmp_ln785_12_reg_16982 = icmp_ln785_12_fu_10461_p2.read();
        icmp_ln785_13_reg_17009 = icmp_ln785_13_fu_10571_p2.read();
        icmp_ln785_14_reg_17036 = icmp_ln785_14_fu_10681_p2.read();
        icmp_ln785_15_reg_17063 = icmp_ln785_15_fu_10791_p2.read();
        icmp_ln785_16_reg_17090 = icmp_ln785_16_fu_10901_p2.read();
        icmp_ln785_17_reg_17117 = icmp_ln785_17_fu_11011_p2.read();
        icmp_ln785_18_reg_17144 = icmp_ln785_18_fu_11121_p2.read();
        icmp_ln785_19_reg_17171 = icmp_ln785_19_fu_11231_p2.read();
        icmp_ln785_1_reg_16685 = icmp_ln785_1_fu_9251_p2.read();
        icmp_ln785_20_reg_17198 = icmp_ln785_20_fu_11341_p2.read();
        icmp_ln785_21_reg_17225 = icmp_ln785_21_fu_11451_p2.read();
        icmp_ln785_22_reg_17252 = icmp_ln785_22_fu_11561_p2.read();
        icmp_ln785_23_reg_17279 = icmp_ln785_23_fu_11671_p2.read();
        icmp_ln785_24_reg_17306 = icmp_ln785_24_fu_11781_p2.read();
        icmp_ln785_25_reg_17333 = icmp_ln785_25_fu_11891_p2.read();
        icmp_ln785_26_reg_17360 = icmp_ln785_26_fu_12001_p2.read();
        icmp_ln785_27_reg_17387 = icmp_ln785_27_fu_12111_p2.read();
        icmp_ln785_28_reg_17414 = icmp_ln785_28_fu_12221_p2.read();
        icmp_ln785_29_reg_17441 = icmp_ln785_29_fu_12331_p2.read();
        icmp_ln785_2_reg_16712 = icmp_ln785_2_fu_9361_p2.read();
        icmp_ln785_30_reg_17468 = icmp_ln785_30_fu_12441_p2.read();
        icmp_ln785_31_reg_17495 = icmp_ln785_31_fu_12551_p2.read();
        icmp_ln785_3_reg_16739 = icmp_ln785_3_fu_9471_p2.read();
        icmp_ln785_4_reg_16766 = icmp_ln785_4_fu_9581_p2.read();
        icmp_ln785_5_reg_16793 = icmp_ln785_5_fu_9691_p2.read();
        icmp_ln785_6_reg_16820 = icmp_ln785_6_fu_9801_p2.read();
        icmp_ln785_7_reg_16847 = icmp_ln785_7_fu_9911_p2.read();
        icmp_ln785_8_reg_16874 = icmp_ln785_8_fu_10021_p2.read();
        icmp_ln785_9_reg_16901 = icmp_ln785_9_fu_10131_p2.read();
        icmp_ln785_reg_16658 = icmp_ln785_fu_9141_p2.read();
        icmp_ln786_10_reg_16933 = icmp_ln786_10_fu_10247_p2.read();
        icmp_ln786_11_reg_16960 = icmp_ln786_11_fu_10357_p2.read();
        icmp_ln786_12_reg_16987 = icmp_ln786_12_fu_10467_p2.read();
        icmp_ln786_13_reg_17014 = icmp_ln786_13_fu_10577_p2.read();
        icmp_ln786_14_reg_17041 = icmp_ln786_14_fu_10687_p2.read();
        icmp_ln786_15_reg_17068 = icmp_ln786_15_fu_10797_p2.read();
        icmp_ln786_16_reg_17095 = icmp_ln786_16_fu_10907_p2.read();
        icmp_ln786_17_reg_17122 = icmp_ln786_17_fu_11017_p2.read();
        icmp_ln786_18_reg_17149 = icmp_ln786_18_fu_11127_p2.read();
        icmp_ln786_19_reg_17176 = icmp_ln786_19_fu_11237_p2.read();
        icmp_ln786_1_reg_16690 = icmp_ln786_1_fu_9257_p2.read();
        icmp_ln786_20_reg_17203 = icmp_ln786_20_fu_11347_p2.read();
        icmp_ln786_21_reg_17230 = icmp_ln786_21_fu_11457_p2.read();
        icmp_ln786_22_reg_17257 = icmp_ln786_22_fu_11567_p2.read();
        icmp_ln786_23_reg_17284 = icmp_ln786_23_fu_11677_p2.read();
        icmp_ln786_24_reg_17311 = icmp_ln786_24_fu_11787_p2.read();
        icmp_ln786_25_reg_17338 = icmp_ln786_25_fu_11897_p2.read();
        icmp_ln786_26_reg_17365 = icmp_ln786_26_fu_12007_p2.read();
        icmp_ln786_27_reg_17392 = icmp_ln786_27_fu_12117_p2.read();
        icmp_ln786_28_reg_17419 = icmp_ln786_28_fu_12227_p2.read();
        icmp_ln786_29_reg_17446 = icmp_ln786_29_fu_12337_p2.read();
        icmp_ln786_2_reg_16717 = icmp_ln786_2_fu_9367_p2.read();
        icmp_ln786_30_reg_17473 = icmp_ln786_30_fu_12447_p2.read();
        icmp_ln786_31_reg_17500 = icmp_ln786_31_fu_12557_p2.read();
        icmp_ln786_3_reg_16744 = icmp_ln786_3_fu_9477_p2.read();
        icmp_ln786_4_reg_16771 = icmp_ln786_4_fu_9587_p2.read();
        icmp_ln786_5_reg_16798 = icmp_ln786_5_fu_9697_p2.read();
        icmp_ln786_6_reg_16825 = icmp_ln786_6_fu_9807_p2.read();
        icmp_ln786_7_reg_16852 = icmp_ln786_7_fu_9917_p2.read();
        icmp_ln786_8_reg_16879 = icmp_ln786_8_fu_10027_p2.read();
        icmp_ln786_9_reg_16906 = icmp_ln786_9_fu_10137_p2.read();
        icmp_ln786_reg_16663 = icmp_ln786_fu_9147_p2.read();
        select_ln1148_10_reg_16911 = select_ln1148_10_fu_10207_p3.read();
        select_ln1148_11_reg_16938 = select_ln1148_11_fu_10317_p3.read();
        select_ln1148_12_reg_16965 = select_ln1148_12_fu_10427_p3.read();
        select_ln1148_13_reg_16992 = select_ln1148_13_fu_10537_p3.read();
        select_ln1148_14_reg_17019 = select_ln1148_14_fu_10647_p3.read();
        select_ln1148_15_reg_17046 = select_ln1148_15_fu_10757_p3.read();
        select_ln1148_16_reg_17073 = select_ln1148_16_fu_10867_p3.read();
        select_ln1148_17_reg_17100 = select_ln1148_17_fu_10977_p3.read();
        select_ln1148_18_reg_17127 = select_ln1148_18_fu_11087_p3.read();
        select_ln1148_19_reg_17154 = select_ln1148_19_fu_11197_p3.read();
        select_ln1148_1_reg_16668 = select_ln1148_1_fu_9217_p3.read();
        select_ln1148_20_reg_17181 = select_ln1148_20_fu_11307_p3.read();
        select_ln1148_21_reg_17208 = select_ln1148_21_fu_11417_p3.read();
        select_ln1148_22_reg_17235 = select_ln1148_22_fu_11527_p3.read();
        select_ln1148_23_reg_17262 = select_ln1148_23_fu_11637_p3.read();
        select_ln1148_24_reg_17289 = select_ln1148_24_fu_11747_p3.read();
        select_ln1148_25_reg_17316 = select_ln1148_25_fu_11857_p3.read();
        select_ln1148_26_reg_17343 = select_ln1148_26_fu_11967_p3.read();
        select_ln1148_27_reg_17370 = select_ln1148_27_fu_12077_p3.read();
        select_ln1148_28_reg_17397 = select_ln1148_28_fu_12187_p3.read();
        select_ln1148_29_reg_17424 = select_ln1148_29_fu_12297_p3.read();
        select_ln1148_2_reg_16695 = select_ln1148_2_fu_9327_p3.read();
        select_ln1148_30_reg_17451 = select_ln1148_30_fu_12407_p3.read();
        select_ln1148_31_reg_17478 = select_ln1148_31_fu_12517_p3.read();
        select_ln1148_3_reg_16722 = select_ln1148_3_fu_9437_p3.read();
        select_ln1148_4_reg_16749 = select_ln1148_4_fu_9547_p3.read();
        select_ln1148_5_reg_16776 = select_ln1148_5_fu_9657_p3.read();
        select_ln1148_6_reg_16803 = select_ln1148_6_fu_9767_p3.read();
        select_ln1148_7_reg_16830 = select_ln1148_7_fu_9877_p3.read();
        select_ln1148_8_reg_16857 = select_ln1148_8_fu_9987_p3.read();
        select_ln1148_9_reg_16884 = select_ln1148_9_fu_10097_p3.read();
        select_ln1148_reg_16641 = select_ln1148_fu_9107_p3.read();
        tmp_2378_reg_16646 = select_ln1148_fu_9107_p3.read().range(15, 15);
        tmp_2379_reg_16652 = select_ln1148_fu_9107_p3.read().range(10, 10);
        tmp_2381_reg_16673 = select_ln1148_1_fu_9217_p3.read().range(15, 15);
        tmp_2382_reg_16679 = select_ln1148_1_fu_9217_p3.read().range(10, 10);
        tmp_2384_reg_16700 = select_ln1148_2_fu_9327_p3.read().range(15, 15);
        tmp_2385_reg_16706 = select_ln1148_2_fu_9327_p3.read().range(10, 10);
        tmp_2387_reg_16727 = select_ln1148_3_fu_9437_p3.read().range(15, 15);
        tmp_2388_reg_16733 = select_ln1148_3_fu_9437_p3.read().range(10, 10);
        tmp_2390_reg_16754 = select_ln1148_4_fu_9547_p3.read().range(15, 15);
        tmp_2391_reg_16760 = select_ln1148_4_fu_9547_p3.read().range(10, 10);
        tmp_2393_reg_16781 = select_ln1148_5_fu_9657_p3.read().range(15, 15);
        tmp_2394_reg_16787 = select_ln1148_5_fu_9657_p3.read().range(10, 10);
        tmp_2396_reg_16808 = select_ln1148_6_fu_9767_p3.read().range(15, 15);
        tmp_2397_reg_16814 = select_ln1148_6_fu_9767_p3.read().range(10, 10);
        tmp_2399_reg_16835 = select_ln1148_7_fu_9877_p3.read().range(15, 15);
        tmp_2400_reg_16841 = select_ln1148_7_fu_9877_p3.read().range(10, 10);
        tmp_2402_reg_16862 = select_ln1148_8_fu_9987_p3.read().range(15, 15);
        tmp_2403_reg_16868 = select_ln1148_8_fu_9987_p3.read().range(10, 10);
        tmp_2405_reg_16889 = select_ln1148_9_fu_10097_p3.read().range(15, 15);
        tmp_2406_reg_16895 = select_ln1148_9_fu_10097_p3.read().range(10, 10);
        tmp_2408_reg_16916 = select_ln1148_10_fu_10207_p3.read().range(15, 15);
        tmp_2409_reg_16922 = select_ln1148_10_fu_10207_p3.read().range(10, 10);
        tmp_2411_reg_16943 = select_ln1148_11_fu_10317_p3.read().range(15, 15);
        tmp_2412_reg_16949 = select_ln1148_11_fu_10317_p3.read().range(10, 10);
        tmp_2414_reg_16970 = select_ln1148_12_fu_10427_p3.read().range(15, 15);
        tmp_2415_reg_16976 = select_ln1148_12_fu_10427_p3.read().range(10, 10);
        tmp_2417_reg_16997 = select_ln1148_13_fu_10537_p3.read().range(15, 15);
        tmp_2418_reg_17003 = select_ln1148_13_fu_10537_p3.read().range(10, 10);
        tmp_2420_reg_17024 = select_ln1148_14_fu_10647_p3.read().range(15, 15);
        tmp_2421_reg_17030 = select_ln1148_14_fu_10647_p3.read().range(10, 10);
        tmp_2423_reg_17051 = select_ln1148_15_fu_10757_p3.read().range(15, 15);
        tmp_2424_reg_17057 = select_ln1148_15_fu_10757_p3.read().range(10, 10);
        tmp_2426_reg_17078 = select_ln1148_16_fu_10867_p3.read().range(15, 15);
        tmp_2427_reg_17084 = select_ln1148_16_fu_10867_p3.read().range(10, 10);
        tmp_2429_reg_17105 = select_ln1148_17_fu_10977_p3.read().range(15, 15);
        tmp_2430_reg_17111 = select_ln1148_17_fu_10977_p3.read().range(10, 10);
        tmp_2432_reg_17132 = select_ln1148_18_fu_11087_p3.read().range(15, 15);
        tmp_2433_reg_17138 = select_ln1148_18_fu_11087_p3.read().range(10, 10);
        tmp_2435_reg_17159 = select_ln1148_19_fu_11197_p3.read().range(15, 15);
        tmp_2436_reg_17165 = select_ln1148_19_fu_11197_p3.read().range(10, 10);
        tmp_2438_reg_17186 = select_ln1148_20_fu_11307_p3.read().range(15, 15);
        tmp_2439_reg_17192 = select_ln1148_20_fu_11307_p3.read().range(10, 10);
        tmp_2441_reg_17213 = select_ln1148_21_fu_11417_p3.read().range(15, 15);
        tmp_2442_reg_17219 = select_ln1148_21_fu_11417_p3.read().range(10, 10);
        tmp_2444_reg_17240 = select_ln1148_22_fu_11527_p3.read().range(15, 15);
        tmp_2445_reg_17246 = select_ln1148_22_fu_11527_p3.read().range(10, 10);
        tmp_2447_reg_17267 = select_ln1148_23_fu_11637_p3.read().range(15, 15);
        tmp_2448_reg_17273 = select_ln1148_23_fu_11637_p3.read().range(10, 10);
        tmp_2450_reg_17294 = select_ln1148_24_fu_11747_p3.read().range(15, 15);
        tmp_2451_reg_17300 = select_ln1148_24_fu_11747_p3.read().range(10, 10);
        tmp_2453_reg_17321 = select_ln1148_25_fu_11857_p3.read().range(15, 15);
        tmp_2454_reg_17327 = select_ln1148_25_fu_11857_p3.read().range(10, 10);
        tmp_2456_reg_17348 = select_ln1148_26_fu_11967_p3.read().range(15, 15);
        tmp_2457_reg_17354 = select_ln1148_26_fu_11967_p3.read().range(10, 10);
        tmp_2459_reg_17375 = select_ln1148_27_fu_12077_p3.read().range(15, 15);
        tmp_2460_reg_17381 = select_ln1148_27_fu_12077_p3.read().range(10, 10);
        tmp_2462_reg_17402 = select_ln1148_28_fu_12187_p3.read().range(15, 15);
        tmp_2463_reg_17408 = select_ln1148_28_fu_12187_p3.read().range(10, 10);
        tmp_2465_reg_17429 = select_ln1148_29_fu_12297_p3.read().range(15, 15);
        tmp_2466_reg_17435 = select_ln1148_29_fu_12297_p3.read().range(10, 10);
        tmp_2468_reg_17456 = select_ln1148_30_fu_12407_p3.read().range(15, 15);
        tmp_2469_reg_17462 = select_ln1148_30_fu_12407_p3.read().range(10, 10);
        tmp_2471_reg_17483 = select_ln1148_31_fu_12517_p3.read().range(15, 15);
        tmp_2472_reg_17489 = select_ln1148_31_fu_12517_p3.read().range(10, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln514_reg_15318 = add_ln514_fu_1253_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln521_fu_1316_p2.read()))) {
        add_ln521_1_reg_15368 = add_ln521_1_fu_1369_p2.read();
        icmp_ln525_reg_15373 = icmp_ln525_fu_1384_p2.read();
        select_ln521_reg_15358 = select_ln521_fu_1340_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln514_fu_1248_p2.read(), ap_const_lv1_0))) {
        col_start_reg_15344 = col_start_fu_1308_p3.read();
        mul_ln203_reg_15339 = mul_ln203_fu_1302_p2.read();
        select_ln514_1_reg_15329 = select_ln514_1_fu_1278_p3.read();
        select_ln514_reg_15323 = select_ln514_fu_1270_p3.read();
        zext_ln514_reg_15334 = zext_ln514_fu_1294_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln521_reg_15349 = icmp_ln521_fu_1316_p2.read();
        icmp_ln521_reg_15349_pp0_iter1_reg = icmp_ln521_reg_15349.read();
        icmp_ln525_reg_15373_pp0_iter1_reg = icmp_ln525_reg_15373.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        icmp_ln521_reg_15349_pp0_iter2_reg = icmp_ln521_reg_15349_pp0_iter1_reg.read();
        icmp_ln521_reg_15349_pp0_iter3_reg = icmp_ln521_reg_15349_pp0_iter2_reg.read();
        icmp_ln525_reg_15373_pp0_iter2_reg = icmp_ln525_reg_15373_pp0_iter1_reg.read();
        icmp_ln525_reg_15373_pp0_iter3_reg = icmp_ln525_reg_15373_pp0_iter2_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        mul_ln355_reg_15309 = mul_ln355_fu_1242_p2.read();
        select_ln507_reg_15299 = select_ln507_fu_1210_p3.read();
        trunc_ln515_3_reg_15304 = H_fmap.read().range(6, 1);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln521_fu_1316_p2.read()))) {
        select_ln521_1_reg_15363 = select_ln521_1_fu_1348_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln521_reg_15349_pp0_iter3_reg.read()))) {
        tmp_0_V_5_fu_198 = tmp_0_V_9_fu_3721_p3.read();
        tmp_10_V_5_fu_238 = tmp_10_V_9_fu_5381_p3.read();
        tmp_11_V_5_fu_242 = tmp_11_V_9_fu_5547_p3.read();
        tmp_12_V_5_fu_246 = tmp_12_V_9_fu_5713_p3.read();
        tmp_13_V_5_fu_250 = tmp_13_V_9_fu_5879_p3.read();
        tmp_14_V_5_fu_254 = tmp_14_V_9_fu_6045_p3.read();
        tmp_15_V_5_fu_258 = tmp_15_V_9_fu_6211_p3.read();
        tmp_16_V_5_fu_262 = tmp_16_V_9_fu_6377_p3.read();
        tmp_17_V_5_fu_266 = tmp_17_V_9_fu_6543_p3.read();
        tmp_18_V_5_fu_270 = tmp_18_V_9_fu_6709_p3.read();
        tmp_19_V_5_fu_274 = tmp_19_V_9_fu_6875_p3.read();
        tmp_1_V_5_fu_202 = tmp_1_V_9_fu_3887_p3.read();
        tmp_20_V_5_fu_278 = tmp_20_V_9_fu_7041_p3.read();
        tmp_21_V_5_fu_282 = tmp_21_V_9_fu_7207_p3.read();
        tmp_22_V_5_fu_286 = tmp_22_V_9_fu_7373_p3.read();
        tmp_23_V_5_fu_290 = tmp_23_V_9_fu_7539_p3.read();
        tmp_24_V_5_fu_294 = tmp_24_V_9_fu_7705_p3.read();
        tmp_25_V_5_fu_298 = tmp_25_V_9_fu_7871_p3.read();
        tmp_26_V_5_fu_302 = tmp_26_V_9_fu_8037_p3.read();
        tmp_27_V_5_fu_306 = tmp_27_V_9_fu_8203_p3.read();
        tmp_28_V_5_fu_310 = tmp_28_V_9_fu_8369_p3.read();
        tmp_29_V_5_fu_314 = tmp_29_V_9_fu_8535_p3.read();
        tmp_2_V_5_fu_206 = tmp_2_V_9_fu_4053_p3.read();
        tmp_30_V_5_fu_318 = tmp_30_V_9_fu_8701_p3.read();
        tmp_31_V_5_fu_322 = tmp_31_V_9_fu_8867_p3.read();
        tmp_3_V_5_fu_210 = tmp_3_V_9_fu_4219_p3.read();
        tmp_4_V_5_fu_214 = tmp_4_V_9_fu_4385_p3.read();
        tmp_5_V_5_fu_218 = tmp_5_V_9_fu_4551_p3.read();
        tmp_6_V_5_fu_222 = tmp_6_V_9_fu_4717_p3.read();
        tmp_7_V_5_fu_226 = tmp_7_V_9_fu_4883_p3.read();
        tmp_8_V_5_fu_230 = tmp_8_V_9_fu_5049_p3.read();
        tmp_9_V_5_fu_234 = tmp_9_V_9_fu_5215_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln521_reg_15349_pp0_iter2_reg.read()) && esl_seteq<1,1,1>(icmp_ln525_reg_15373_pp0_iter2_reg.read(), ap_const_lv1_1))) {
        tmp_2473_reg_15585 = tmp_2473_fu_1456_p1.read().range(4, 4);
        tmp_2479_reg_15618 = tmp_2479_fu_1522_p1.read().range(4, 4);
        tmp_2485_reg_15651 = tmp_2485_fu_1588_p1.read().range(4, 4);
        tmp_2491_reg_15684 = tmp_2491_fu_1654_p1.read().range(4, 4);
        tmp_2497_reg_15717 = tmp_2497_fu_1720_p1.read().range(4, 4);
        tmp_2503_reg_15750 = tmp_2503_fu_1786_p1.read().range(4, 4);
        tmp_2509_reg_15783 = tmp_2509_fu_1852_p1.read().range(4, 4);
        tmp_2515_reg_15816 = tmp_2515_fu_1918_p1.read().range(4, 4);
        tmp_2521_reg_15849 = tmp_2521_fu_1984_p1.read().range(4, 4);
        tmp_2527_reg_15882 = tmp_2527_fu_2050_p1.read().range(4, 4);
        tmp_2533_reg_15915 = tmp_2533_fu_2116_p1.read().range(4, 4);
        tmp_2539_reg_15948 = tmp_2539_fu_2182_p1.read().range(4, 4);
        tmp_2545_reg_15981 = tmp_2545_fu_2248_p1.read().range(4, 4);
        tmp_2551_reg_16014 = tmp_2551_fu_2314_p1.read().range(4, 4);
        tmp_2557_reg_16047 = tmp_2557_fu_2380_p1.read().range(4, 4);
        tmp_2563_reg_16080 = tmp_2563_fu_2446_p1.read().range(4, 4);
        tmp_2569_reg_16113 = tmp_2569_fu_2512_p1.read().range(4, 4);
        tmp_2575_reg_16146 = tmp_2575_fu_2578_p1.read().range(4, 4);
        tmp_2581_reg_16179 = tmp_2581_fu_2644_p1.read().range(4, 4);
        tmp_2587_reg_16212 = tmp_2587_fu_2710_p1.read().range(4, 4);
        tmp_2593_reg_16245 = tmp_2593_fu_2776_p1.read().range(4, 4);
        tmp_2599_reg_16278 = tmp_2599_fu_2842_p1.read().range(4, 4);
        tmp_2605_reg_16311 = tmp_2605_fu_2908_p1.read().range(4, 4);
        tmp_2611_reg_16344 = tmp_2611_fu_2974_p1.read().range(4, 4);
        tmp_2617_reg_16377 = tmp_2617_fu_3040_p1.read().range(4, 4);
        tmp_2623_reg_16410 = tmp_2623_fu_3106_p1.read().range(4, 4);
        tmp_2629_reg_16443 = tmp_2629_fu_3172_p1.read().range(4, 4);
        tmp_2635_reg_16476 = tmp_2635_fu_3238_p1.read().range(4, 4);
        tmp_2641_reg_16509 = tmp_2641_fu_3304_p1.read().range(4, 4);
        tmp_2647_reg_16542 = tmp_2647_fu_3370_p1.read().range(4, 4);
        tmp_2653_reg_16575 = tmp_2653_fu_3436_p1.read().range(4, 4);
        tmp_2659_reg_16608 = tmp_2659_fu_3502_p1.read().range(4, 4);
        trunc_ln708_349_reg_15613 = trunc_ln708_349_fu_1512_p1.read().range(15, 5);
        trunc_ln708_351_reg_15646 = trunc_ln708_351_fu_1578_p1.read().range(15, 5);
        trunc_ln708_353_reg_15679 = trunc_ln708_353_fu_1644_p1.read().range(15, 5);
        trunc_ln708_355_reg_15712 = trunc_ln708_355_fu_1710_p1.read().range(15, 5);
        trunc_ln708_357_reg_15745 = trunc_ln708_357_fu_1776_p1.read().range(15, 5);
        trunc_ln708_359_reg_15778 = trunc_ln708_359_fu_1842_p1.read().range(15, 5);
        trunc_ln708_361_reg_15811 = trunc_ln708_361_fu_1908_p1.read().range(15, 5);
        trunc_ln708_363_reg_15844 = trunc_ln708_363_fu_1974_p1.read().range(15, 5);
        trunc_ln708_365_reg_15877 = trunc_ln708_365_fu_2040_p1.read().range(15, 5);
        trunc_ln708_367_reg_15910 = trunc_ln708_367_fu_2106_p1.read().range(15, 5);
        trunc_ln708_369_reg_15943 = trunc_ln708_369_fu_2172_p1.read().range(15, 5);
        trunc_ln708_371_reg_15976 = trunc_ln708_371_fu_2238_p1.read().range(15, 5);
        trunc_ln708_373_reg_16009 = trunc_ln708_373_fu_2304_p1.read().range(15, 5);
        trunc_ln708_375_reg_16042 = trunc_ln708_375_fu_2370_p1.read().range(15, 5);
        trunc_ln708_377_reg_16075 = trunc_ln708_377_fu_2436_p1.read().range(15, 5);
        trunc_ln708_379_reg_16108 = trunc_ln708_379_fu_2502_p1.read().range(15, 5);
        trunc_ln708_381_reg_16141 = trunc_ln708_381_fu_2568_p1.read().range(15, 5);
        trunc_ln708_383_reg_16174 = trunc_ln708_383_fu_2634_p1.read().range(15, 5);
        trunc_ln708_385_reg_16207 = trunc_ln708_385_fu_2700_p1.read().range(15, 5);
        trunc_ln708_387_reg_16240 = trunc_ln708_387_fu_2766_p1.read().range(15, 5);
        trunc_ln708_389_reg_16273 = trunc_ln708_389_fu_2832_p1.read().range(15, 5);
        trunc_ln708_391_reg_16306 = trunc_ln708_391_fu_2898_p1.read().range(15, 5);
        trunc_ln708_393_reg_16339 = trunc_ln708_393_fu_2964_p1.read().range(15, 5);
        trunc_ln708_395_reg_16372 = trunc_ln708_395_fu_3030_p1.read().range(15, 5);
        trunc_ln708_397_reg_16405 = trunc_ln708_397_fu_3096_p1.read().range(15, 5);
        trunc_ln708_399_reg_16438 = trunc_ln708_399_fu_3162_p1.read().range(15, 5);
        trunc_ln708_401_reg_16471 = trunc_ln708_401_fu_3228_p1.read().range(15, 5);
        trunc_ln708_403_reg_16504 = trunc_ln708_403_fu_3294_p1.read().range(15, 5);
        trunc_ln708_405_reg_16537 = trunc_ln708_405_fu_3360_p1.read().range(15, 5);
        trunc_ln708_407_reg_16570 = trunc_ln708_407_fu_3426_p1.read().range(15, 5);
        trunc_ln708_409_reg_16603 = trunc_ln708_409_fu_3492_p1.read().range(15, 5);
        trunc_ln_reg_15580 = trunc_ln_fu_1446_p1.read().range(15, 5);
    }
}

void avgpool::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln514_fu_1248_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln521_fu_1316_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln521_fu_1316_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}


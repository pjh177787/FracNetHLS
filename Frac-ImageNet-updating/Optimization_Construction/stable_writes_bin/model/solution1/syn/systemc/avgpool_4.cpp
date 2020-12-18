#include "avgpool.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void avgpool::thread_select_ln779_120_fu_7777_p3() {
    select_ln779_120_fu_7777_p3 = (!and_ln416_375_fu_7758_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_375_fu_7758_p2.read()[0].to_bool())? xor_ln779_25_fu_7772_p2.read(): tmp_2624_reg_16420.read());
}

void avgpool::thread_select_ln779_121_fu_7943_p3() {
    select_ln779_121_fu_7943_p3 = (!and_ln416_376_fu_7924_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_376_fu_7924_p2.read()[0].to_bool())? xor_ln779_26_fu_7938_p2.read(): tmp_2630_reg_16453.read());
}

void avgpool::thread_select_ln779_122_fu_8109_p3() {
    select_ln779_122_fu_8109_p3 = (!and_ln416_377_fu_8090_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_377_fu_8090_p2.read()[0].to_bool())? xor_ln779_27_fu_8104_p2.read(): tmp_2636_reg_16486.read());
}

void avgpool::thread_select_ln779_123_fu_8275_p3() {
    select_ln779_123_fu_8275_p3 = (!and_ln416_378_fu_8256_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_378_fu_8256_p2.read()[0].to_bool())? xor_ln779_28_fu_8270_p2.read(): tmp_2642_reg_16519.read());
}

void avgpool::thread_select_ln779_124_fu_8441_p3() {
    select_ln779_124_fu_8441_p3 = (!and_ln416_379_fu_8422_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_379_fu_8422_p2.read()[0].to_bool())? xor_ln779_29_fu_8436_p2.read(): tmp_2648_reg_16552.read());
}

void avgpool::thread_select_ln779_125_fu_8607_p3() {
    select_ln779_125_fu_8607_p3 = (!and_ln416_380_fu_8588_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_380_fu_8588_p2.read()[0].to_bool())? xor_ln779_30_fu_8602_p2.read(): tmp_2654_reg_16585.read());
}

void avgpool::thread_select_ln779_126_fu_8773_p3() {
    select_ln779_126_fu_8773_p3 = (!and_ln416_381_fu_8754_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_381_fu_8754_p2.read()[0].to_bool())? xor_ln779_31_fu_8768_p2.read(): tmp_2660_reg_16618.read());
}

void avgpool::thread_select_ln779_96_fu_3793_p3() {
    select_ln779_96_fu_3793_p3 = (!and_ln416_351_fu_3774_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_351_fu_3774_p2.read()[0].to_bool())? xor_ln779_1_fu_3788_p2.read(): tmp_2480_reg_15628.read());
}

void avgpool::thread_select_ln779_97_fu_3959_p3() {
    select_ln779_97_fu_3959_p3 = (!and_ln416_352_fu_3940_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_352_fu_3940_p2.read()[0].to_bool())? xor_ln779_2_fu_3954_p2.read(): tmp_2486_reg_15661.read());
}

void avgpool::thread_select_ln779_98_fu_4125_p3() {
    select_ln779_98_fu_4125_p3 = (!and_ln416_353_fu_4106_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_353_fu_4106_p2.read()[0].to_bool())? xor_ln779_3_fu_4120_p2.read(): tmp_2492_reg_15694.read());
}

void avgpool::thread_select_ln779_99_fu_4291_p3() {
    select_ln779_99_fu_4291_p3 = (!and_ln416_354_fu_4272_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_354_fu_4272_p2.read()[0].to_bool())? xor_ln779_4_fu_4286_p2.read(): tmp_2498_reg_15727.read());
}

void avgpool::thread_select_ln779_fu_3622_p3() {
    select_ln779_fu_3622_p3 = (!and_ln416_fu_3603_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_fu_3603_p2.read()[0].to_bool())? xor_ln779_fu_3617_p2.read(): tmp_2474_reg_15595.read());
}

void avgpool::thread_sext_ln1148_10_fu_9601_p1() {
    sext_ln1148_10_fu_9601_p1 = esl_sext<24,23>(shl_ln728_194_fu_9593_p3.read());
}

void avgpool::thread_sext_ln1148_11_fu_9649_p1() {
    sext_ln1148_11_fu_9649_p1 = esl_sext<15,14>(trunc_ln1148_s_fu_9639_p4.read());
}

void avgpool::thread_sext_ln1148_12_fu_9711_p1() {
    sext_ln1148_12_fu_9711_p1 = esl_sext<24,23>(shl_ln728_195_fu_9703_p3.read());
}

void avgpool::thread_sext_ln1148_13_fu_9759_p1() {
    sext_ln1148_13_fu_9759_p1 = esl_sext<15,14>(trunc_ln1148_2_fu_9749_p4.read());
}

void avgpool::thread_sext_ln1148_14_fu_9821_p1() {
    sext_ln1148_14_fu_9821_p1 = esl_sext<24,23>(shl_ln728_196_fu_9813_p3.read());
}

void avgpool::thread_sext_ln1148_15_fu_9869_p1() {
    sext_ln1148_15_fu_9869_p1 = esl_sext<15,14>(trunc_ln1148_4_fu_9859_p4.read());
}

void avgpool::thread_sext_ln1148_16_fu_9931_p1() {
    sext_ln1148_16_fu_9931_p1 = esl_sext<24,23>(shl_ln728_197_fu_9923_p3.read());
}

void avgpool::thread_sext_ln1148_17_fu_9979_p1() {
    sext_ln1148_17_fu_9979_p1 = esl_sext<15,14>(trunc_ln1148_6_fu_9969_p4.read());
}

void avgpool::thread_sext_ln1148_18_fu_10041_p1() {
    sext_ln1148_18_fu_10041_p1 = esl_sext<24,23>(shl_ln728_198_fu_10033_p3.read());
}

void avgpool::thread_sext_ln1148_19_fu_10089_p1() {
    sext_ln1148_19_fu_10089_p1 = esl_sext<15,14>(trunc_ln1148_8_fu_10079_p4.read());
}

void avgpool::thread_sext_ln1148_1_fu_9099_p1() {
    sext_ln1148_1_fu_9099_p1 = esl_sext<15,14>(trunc_ln1148_1_fu_9089_p4.read());
}

void avgpool::thread_sext_ln1148_20_fu_10151_p1() {
    sext_ln1148_20_fu_10151_p1 = esl_sext<24,23>(shl_ln728_199_fu_10143_p3.read());
}

void avgpool::thread_sext_ln1148_21_fu_10199_p1() {
    sext_ln1148_21_fu_10199_p1 = esl_sext<15,14>(trunc_ln1148_10_fu_10189_p4.read());
}

void avgpool::thread_sext_ln1148_22_fu_10261_p1() {
    sext_ln1148_22_fu_10261_p1 = esl_sext<24,23>(shl_ln728_200_fu_10253_p3.read());
}

void avgpool::thread_sext_ln1148_23_fu_10309_p1() {
    sext_ln1148_23_fu_10309_p1 = esl_sext<15,14>(trunc_ln1148_11_fu_10299_p4.read());
}

void avgpool::thread_sext_ln1148_24_fu_10371_p1() {
    sext_ln1148_24_fu_10371_p1 = esl_sext<24,23>(shl_ln728_201_fu_10363_p3.read());
}

void avgpool::thread_sext_ln1148_25_fu_10419_p1() {
    sext_ln1148_25_fu_10419_p1 = esl_sext<15,14>(trunc_ln1148_12_fu_10409_p4.read());
}

void avgpool::thread_sext_ln1148_26_fu_10481_p1() {
    sext_ln1148_26_fu_10481_p1 = esl_sext<24,23>(shl_ln728_202_fu_10473_p3.read());
}

void avgpool::thread_sext_ln1148_27_fu_10529_p1() {
    sext_ln1148_27_fu_10529_p1 = esl_sext<15,14>(trunc_ln1148_13_fu_10519_p4.read());
}

void avgpool::thread_sext_ln1148_28_fu_10591_p1() {
    sext_ln1148_28_fu_10591_p1 = esl_sext<24,23>(shl_ln728_203_fu_10583_p3.read());
}

void avgpool::thread_sext_ln1148_29_fu_10639_p1() {
    sext_ln1148_29_fu_10639_p1 = esl_sext<15,14>(trunc_ln1148_14_fu_10629_p4.read());
}

void avgpool::thread_sext_ln1148_2_fu_9161_p1() {
    sext_ln1148_2_fu_9161_p1 = esl_sext<24,23>(shl_ln728_s_fu_9153_p3.read());
}

void avgpool::thread_sext_ln1148_30_fu_10701_p1() {
    sext_ln1148_30_fu_10701_p1 = esl_sext<24,23>(shl_ln728_204_fu_10693_p3.read());
}

void avgpool::thread_sext_ln1148_31_fu_10749_p1() {
    sext_ln1148_31_fu_10749_p1 = esl_sext<15,14>(trunc_ln1148_15_fu_10739_p4.read());
}

void avgpool::thread_sext_ln1148_32_fu_10811_p1() {
    sext_ln1148_32_fu_10811_p1 = esl_sext<24,23>(shl_ln728_205_fu_10803_p3.read());
}

void avgpool::thread_sext_ln1148_33_fu_10859_p1() {
    sext_ln1148_33_fu_10859_p1 = esl_sext<15,14>(trunc_ln1148_16_fu_10849_p4.read());
}

void avgpool::thread_sext_ln1148_34_fu_10921_p1() {
    sext_ln1148_34_fu_10921_p1 = esl_sext<24,23>(shl_ln728_206_fu_10913_p3.read());
}

void avgpool::thread_sext_ln1148_35_fu_10969_p1() {
    sext_ln1148_35_fu_10969_p1 = esl_sext<15,14>(trunc_ln1148_17_fu_10959_p4.read());
}

void avgpool::thread_sext_ln1148_36_fu_11031_p1() {
    sext_ln1148_36_fu_11031_p1 = esl_sext<24,23>(shl_ln728_207_fu_11023_p3.read());
}

void avgpool::thread_sext_ln1148_37_fu_11079_p1() {
    sext_ln1148_37_fu_11079_p1 = esl_sext<15,14>(trunc_ln1148_18_fu_11069_p4.read());
}

void avgpool::thread_sext_ln1148_38_fu_11141_p1() {
    sext_ln1148_38_fu_11141_p1 = esl_sext<24,23>(shl_ln728_208_fu_11133_p3.read());
}

void avgpool::thread_sext_ln1148_39_fu_11189_p1() {
    sext_ln1148_39_fu_11189_p1 = esl_sext<15,14>(trunc_ln1148_19_fu_11179_p4.read());
}

void avgpool::thread_sext_ln1148_3_fu_9209_p1() {
    sext_ln1148_3_fu_9209_p1 = esl_sext<15,14>(trunc_ln1148_3_fu_9199_p4.read());
}

void avgpool::thread_sext_ln1148_40_fu_11251_p1() {
    sext_ln1148_40_fu_11251_p1 = esl_sext<24,23>(shl_ln728_209_fu_11243_p3.read());
}

void avgpool::thread_sext_ln1148_41_fu_11299_p1() {
    sext_ln1148_41_fu_11299_p1 = esl_sext<15,14>(trunc_ln1148_20_fu_11289_p4.read());
}

void avgpool::thread_sext_ln1148_42_fu_11361_p1() {
    sext_ln1148_42_fu_11361_p1 = esl_sext<24,23>(shl_ln728_210_fu_11353_p3.read());
}

void avgpool::thread_sext_ln1148_43_fu_11409_p1() {
    sext_ln1148_43_fu_11409_p1 = esl_sext<15,14>(trunc_ln1148_21_fu_11399_p4.read());
}

void avgpool::thread_sext_ln1148_44_fu_11471_p1() {
    sext_ln1148_44_fu_11471_p1 = esl_sext<24,23>(shl_ln728_211_fu_11463_p3.read());
}

void avgpool::thread_sext_ln1148_45_fu_11519_p1() {
    sext_ln1148_45_fu_11519_p1 = esl_sext<15,14>(trunc_ln1148_22_fu_11509_p4.read());
}

void avgpool::thread_sext_ln1148_46_fu_11581_p1() {
    sext_ln1148_46_fu_11581_p1 = esl_sext<24,23>(shl_ln728_212_fu_11573_p3.read());
}

void avgpool::thread_sext_ln1148_47_fu_11629_p1() {
    sext_ln1148_47_fu_11629_p1 = esl_sext<15,14>(trunc_ln1148_23_fu_11619_p4.read());
}

void avgpool::thread_sext_ln1148_48_fu_11691_p1() {
    sext_ln1148_48_fu_11691_p1 = esl_sext<24,23>(shl_ln728_213_fu_11683_p3.read());
}

void avgpool::thread_sext_ln1148_49_fu_11739_p1() {
    sext_ln1148_49_fu_11739_p1 = esl_sext<15,14>(trunc_ln1148_24_fu_11729_p4.read());
}

void avgpool::thread_sext_ln1148_4_fu_9271_p1() {
    sext_ln1148_4_fu_9271_p1 = esl_sext<24,23>(shl_ln728_191_fu_9263_p3.read());
}

void avgpool::thread_sext_ln1148_50_fu_11801_p1() {
    sext_ln1148_50_fu_11801_p1 = esl_sext<24,23>(shl_ln728_214_fu_11793_p3.read());
}

void avgpool::thread_sext_ln1148_51_fu_11849_p1() {
    sext_ln1148_51_fu_11849_p1 = esl_sext<15,14>(trunc_ln1148_25_fu_11839_p4.read());
}

void avgpool::thread_sext_ln1148_52_fu_11911_p1() {
    sext_ln1148_52_fu_11911_p1 = esl_sext<24,23>(shl_ln728_215_fu_11903_p3.read());
}

void avgpool::thread_sext_ln1148_53_fu_11959_p1() {
    sext_ln1148_53_fu_11959_p1 = esl_sext<15,14>(trunc_ln1148_26_fu_11949_p4.read());
}

void avgpool::thread_sext_ln1148_54_fu_12021_p1() {
    sext_ln1148_54_fu_12021_p1 = esl_sext<24,23>(shl_ln728_216_fu_12013_p3.read());
}

void avgpool::thread_sext_ln1148_55_fu_12069_p1() {
    sext_ln1148_55_fu_12069_p1 = esl_sext<15,14>(trunc_ln1148_27_fu_12059_p4.read());
}

void avgpool::thread_sext_ln1148_56_fu_12131_p1() {
    sext_ln1148_56_fu_12131_p1 = esl_sext<24,23>(shl_ln728_217_fu_12123_p3.read());
}

void avgpool::thread_sext_ln1148_57_fu_12179_p1() {
    sext_ln1148_57_fu_12179_p1 = esl_sext<15,14>(trunc_ln1148_28_fu_12169_p4.read());
}

void avgpool::thread_sext_ln1148_58_fu_12241_p1() {
    sext_ln1148_58_fu_12241_p1 = esl_sext<24,23>(shl_ln728_218_fu_12233_p3.read());
}

void avgpool::thread_sext_ln1148_59_fu_12289_p1() {
    sext_ln1148_59_fu_12289_p1 = esl_sext<15,14>(trunc_ln1148_29_fu_12279_p4.read());
}

void avgpool::thread_sext_ln1148_5_fu_9319_p1() {
    sext_ln1148_5_fu_9319_p1 = esl_sext<15,14>(trunc_ln1148_5_fu_9309_p4.read());
}

void avgpool::thread_sext_ln1148_60_fu_12351_p1() {
    sext_ln1148_60_fu_12351_p1 = esl_sext<24,23>(shl_ln728_219_fu_12343_p3.read());
}

void avgpool::thread_sext_ln1148_61_fu_12399_p1() {
    sext_ln1148_61_fu_12399_p1 = esl_sext<15,14>(trunc_ln1148_30_fu_12389_p4.read());
}

void avgpool::thread_sext_ln1148_62_fu_12461_p1() {
    sext_ln1148_62_fu_12461_p1 = esl_sext<24,23>(shl_ln728_220_fu_12453_p3.read());
}

void avgpool::thread_sext_ln1148_63_fu_12509_p1() {
    sext_ln1148_63_fu_12509_p1 = esl_sext<15,14>(trunc_ln1148_31_fu_12499_p4.read());
}

void avgpool::thread_sext_ln1148_6_fu_9381_p1() {
    sext_ln1148_6_fu_9381_p1 = esl_sext<24,23>(shl_ln728_192_fu_9373_p3.read());
}

void avgpool::thread_sext_ln1148_7_fu_9429_p1() {
    sext_ln1148_7_fu_9429_p1 = esl_sext<15,14>(trunc_ln1148_7_fu_9419_p4.read());
}

void avgpool::thread_sext_ln1148_8_fu_9491_p1() {
    sext_ln1148_8_fu_9491_p1 = esl_sext<24,23>(shl_ln728_193_fu_9483_p3.read());
}

void avgpool::thread_sext_ln1148_9_fu_9539_p1() {
    sext_ln1148_9_fu_9539_p1 = esl_sext<15,14>(trunc_ln1148_9_fu_9529_p4.read());
}

void avgpool::thread_sext_ln1148_fu_9051_p1() {
    sext_ln1148_fu_9051_p1 = esl_sext<24,23>(shl_ln_fu_9043_p3.read());
}

void avgpool::thread_sext_ln1265_1_fu_1411_p1() {
    sext_ln1265_1_fu_1411_p1 = esl_sext<64,11>(add_ln1265_reg_15415.read());
}

void avgpool::thread_sext_ln415_10_fu_4393_p1() {
    sext_ln415_10_fu_4393_p1 = esl_sext<12,11>(trunc_ln708_357_reg_15745.read());
}

void avgpool::thread_sext_ln415_11_fu_4405_p1() {
    sext_ln415_11_fu_4405_p1 = esl_sext<16,12>(tmp_5_V_fu_4399_p2.read());
}

void avgpool::thread_sext_ln415_12_fu_4559_p1() {
    sext_ln415_12_fu_4559_p1 = esl_sext<12,11>(trunc_ln708_359_reg_15778.read());
}

void avgpool::thread_sext_ln415_13_fu_4571_p1() {
    sext_ln415_13_fu_4571_p1 = esl_sext<16,12>(tmp_6_V_fu_4565_p2.read());
}

void avgpool::thread_sext_ln415_14_fu_4725_p1() {
    sext_ln415_14_fu_4725_p1 = esl_sext<12,11>(trunc_ln708_361_reg_15811.read());
}

void avgpool::thread_sext_ln415_15_fu_4737_p1() {
    sext_ln415_15_fu_4737_p1 = esl_sext<16,12>(tmp_7_V_fu_4731_p2.read());
}

void avgpool::thread_sext_ln415_16_fu_4891_p1() {
    sext_ln415_16_fu_4891_p1 = esl_sext<12,11>(trunc_ln708_363_reg_15844.read());
}

void avgpool::thread_sext_ln415_17_fu_4903_p1() {
    sext_ln415_17_fu_4903_p1 = esl_sext<16,12>(tmp_8_V_fu_4897_p2.read());
}

void avgpool::thread_sext_ln415_18_fu_5057_p1() {
    sext_ln415_18_fu_5057_p1 = esl_sext<12,11>(trunc_ln708_365_reg_15877.read());
}

void avgpool::thread_sext_ln415_19_fu_5069_p1() {
    sext_ln415_19_fu_5069_p1 = esl_sext<16,12>(tmp_9_V_fu_5063_p2.read());
}

void avgpool::thread_sext_ln415_1_fu_3570_p1() {
    sext_ln415_1_fu_3570_p1 = esl_sext<16,12>(tmp_0_V_fu_3564_p2.read());
}

void avgpool::thread_sext_ln415_20_fu_5223_p1() {
    sext_ln415_20_fu_5223_p1 = esl_sext<12,11>(trunc_ln708_367_reg_15910.read());
}

void avgpool::thread_sext_ln415_21_fu_5235_p1() {
    sext_ln415_21_fu_5235_p1 = esl_sext<16,12>(tmp_10_V_fu_5229_p2.read());
}

void avgpool::thread_sext_ln415_22_fu_5389_p1() {
    sext_ln415_22_fu_5389_p1 = esl_sext<12,11>(trunc_ln708_369_reg_15943.read());
}

void avgpool::thread_sext_ln415_23_fu_5401_p1() {
    sext_ln415_23_fu_5401_p1 = esl_sext<16,12>(tmp_11_V_fu_5395_p2.read());
}

void avgpool::thread_sext_ln415_24_fu_5555_p1() {
    sext_ln415_24_fu_5555_p1 = esl_sext<12,11>(trunc_ln708_371_reg_15976.read());
}

void avgpool::thread_sext_ln415_25_fu_5567_p1() {
    sext_ln415_25_fu_5567_p1 = esl_sext<16,12>(tmp_12_V_fu_5561_p2.read());
}

void avgpool::thread_sext_ln415_26_fu_5721_p1() {
    sext_ln415_26_fu_5721_p1 = esl_sext<12,11>(trunc_ln708_373_reg_16009.read());
}

void avgpool::thread_sext_ln415_27_fu_5733_p1() {
    sext_ln415_27_fu_5733_p1 = esl_sext<16,12>(tmp_13_V_fu_5727_p2.read());
}

void avgpool::thread_sext_ln415_28_fu_5887_p1() {
    sext_ln415_28_fu_5887_p1 = esl_sext<12,11>(trunc_ln708_375_reg_16042.read());
}

void avgpool::thread_sext_ln415_29_fu_5899_p1() {
    sext_ln415_29_fu_5899_p1 = esl_sext<16,12>(tmp_14_V_fu_5893_p2.read());
}

void avgpool::thread_sext_ln415_2_fu_3729_p1() {
    sext_ln415_2_fu_3729_p1 = esl_sext<12,11>(trunc_ln708_349_reg_15613.read());
}

void avgpool::thread_sext_ln415_30_fu_6053_p1() {
    sext_ln415_30_fu_6053_p1 = esl_sext<12,11>(trunc_ln708_377_reg_16075.read());
}

void avgpool::thread_sext_ln415_31_fu_6065_p1() {
    sext_ln415_31_fu_6065_p1 = esl_sext<16,12>(tmp_15_V_fu_6059_p2.read());
}

void avgpool::thread_sext_ln415_32_fu_6219_p1() {
    sext_ln415_32_fu_6219_p1 = esl_sext<12,11>(trunc_ln708_379_reg_16108.read());
}

void avgpool::thread_sext_ln415_33_fu_6231_p1() {
    sext_ln415_33_fu_6231_p1 = esl_sext<16,12>(tmp_16_V_fu_6225_p2.read());
}

void avgpool::thread_sext_ln415_34_fu_6385_p1() {
    sext_ln415_34_fu_6385_p1 = esl_sext<12,11>(trunc_ln708_381_reg_16141.read());
}

void avgpool::thread_sext_ln415_35_fu_6397_p1() {
    sext_ln415_35_fu_6397_p1 = esl_sext<16,12>(tmp_17_V_fu_6391_p2.read());
}

void avgpool::thread_sext_ln415_36_fu_6551_p1() {
    sext_ln415_36_fu_6551_p1 = esl_sext<12,11>(trunc_ln708_383_reg_16174.read());
}

void avgpool::thread_sext_ln415_37_fu_6563_p1() {
    sext_ln415_37_fu_6563_p1 = esl_sext<16,12>(tmp_18_V_fu_6557_p2.read());
}

void avgpool::thread_sext_ln415_38_fu_6717_p1() {
    sext_ln415_38_fu_6717_p1 = esl_sext<12,11>(trunc_ln708_385_reg_16207.read());
}

void avgpool::thread_sext_ln415_39_fu_6729_p1() {
    sext_ln415_39_fu_6729_p1 = esl_sext<16,12>(tmp_19_V_fu_6723_p2.read());
}

void avgpool::thread_sext_ln415_3_fu_3741_p1() {
    sext_ln415_3_fu_3741_p1 = esl_sext<16,12>(tmp_1_V_fu_3735_p2.read());
}

void avgpool::thread_sext_ln415_40_fu_6883_p1() {
    sext_ln415_40_fu_6883_p1 = esl_sext<12,11>(trunc_ln708_387_reg_16240.read());
}

void avgpool::thread_sext_ln415_41_fu_6895_p1() {
    sext_ln415_41_fu_6895_p1 = esl_sext<16,12>(tmp_20_V_fu_6889_p2.read());
}

void avgpool::thread_sext_ln415_42_fu_7049_p1() {
    sext_ln415_42_fu_7049_p1 = esl_sext<12,11>(trunc_ln708_389_reg_16273.read());
}

void avgpool::thread_sext_ln415_43_fu_7061_p1() {
    sext_ln415_43_fu_7061_p1 = esl_sext<16,12>(tmp_21_V_fu_7055_p2.read());
}

void avgpool::thread_sext_ln415_44_fu_7215_p1() {
    sext_ln415_44_fu_7215_p1 = esl_sext<12,11>(trunc_ln708_391_reg_16306.read());
}

void avgpool::thread_sext_ln415_45_fu_7227_p1() {
    sext_ln415_45_fu_7227_p1 = esl_sext<16,12>(tmp_22_V_fu_7221_p2.read());
}

void avgpool::thread_sext_ln415_46_fu_7381_p1() {
    sext_ln415_46_fu_7381_p1 = esl_sext<12,11>(trunc_ln708_393_reg_16339.read());
}

void avgpool::thread_sext_ln415_47_fu_7393_p1() {
    sext_ln415_47_fu_7393_p1 = esl_sext<16,12>(tmp_23_V_fu_7387_p2.read());
}

void avgpool::thread_sext_ln415_48_fu_7547_p1() {
    sext_ln415_48_fu_7547_p1 = esl_sext<12,11>(trunc_ln708_395_reg_16372.read());
}

void avgpool::thread_sext_ln415_49_fu_7559_p1() {
    sext_ln415_49_fu_7559_p1 = esl_sext<16,12>(tmp_24_V_fu_7553_p2.read());
}

void avgpool::thread_sext_ln415_4_fu_3895_p1() {
    sext_ln415_4_fu_3895_p1 = esl_sext<12,11>(trunc_ln708_351_reg_15646.read());
}

void avgpool::thread_sext_ln415_50_fu_7713_p1() {
    sext_ln415_50_fu_7713_p1 = esl_sext<12,11>(trunc_ln708_397_reg_16405.read());
}

void avgpool::thread_sext_ln415_51_fu_7725_p1() {
    sext_ln415_51_fu_7725_p1 = esl_sext<16,12>(tmp_25_V_fu_7719_p2.read());
}

void avgpool::thread_sext_ln415_52_fu_7879_p1() {
    sext_ln415_52_fu_7879_p1 = esl_sext<12,11>(trunc_ln708_399_reg_16438.read());
}

void avgpool::thread_sext_ln415_53_fu_7891_p1() {
    sext_ln415_53_fu_7891_p1 = esl_sext<16,12>(tmp_26_V_fu_7885_p2.read());
}

void avgpool::thread_sext_ln415_54_fu_8045_p1() {
    sext_ln415_54_fu_8045_p1 = esl_sext<12,11>(trunc_ln708_401_reg_16471.read());
}

void avgpool::thread_sext_ln415_55_fu_8057_p1() {
    sext_ln415_55_fu_8057_p1 = esl_sext<16,12>(tmp_27_V_fu_8051_p2.read());
}

void avgpool::thread_sext_ln415_56_fu_8211_p1() {
    sext_ln415_56_fu_8211_p1 = esl_sext<12,11>(trunc_ln708_403_reg_16504.read());
}

void avgpool::thread_sext_ln415_57_fu_8223_p1() {
    sext_ln415_57_fu_8223_p1 = esl_sext<16,12>(tmp_28_V_fu_8217_p2.read());
}

void avgpool::thread_sext_ln415_58_fu_8377_p1() {
    sext_ln415_58_fu_8377_p1 = esl_sext<12,11>(trunc_ln708_405_reg_16537.read());
}

void avgpool::thread_sext_ln415_59_fu_8389_p1() {
    sext_ln415_59_fu_8389_p1 = esl_sext<16,12>(tmp_29_V_fu_8383_p2.read());
}

void avgpool::thread_sext_ln415_5_fu_3907_p1() {
    sext_ln415_5_fu_3907_p1 = esl_sext<16,12>(tmp_2_V_fu_3901_p2.read());
}

void avgpool::thread_sext_ln415_60_fu_8543_p1() {
    sext_ln415_60_fu_8543_p1 = esl_sext<12,11>(trunc_ln708_407_reg_16570.read());
}

void avgpool::thread_sext_ln415_61_fu_8555_p1() {
    sext_ln415_61_fu_8555_p1 = esl_sext<16,12>(tmp_30_V_fu_8549_p2.read());
}

void avgpool::thread_sext_ln415_62_fu_8709_p1() {
    sext_ln415_62_fu_8709_p1 = esl_sext<12,11>(trunc_ln708_409_reg_16603.read());
}

void avgpool::thread_sext_ln415_63_fu_8721_p1() {
    sext_ln415_63_fu_8721_p1 = esl_sext<16,12>(tmp_31_V_fu_8715_p2.read());
}

void avgpool::thread_sext_ln415_6_fu_4061_p1() {
    sext_ln415_6_fu_4061_p1 = esl_sext<12,11>(trunc_ln708_353_reg_15679.read());
}

void avgpool::thread_sext_ln415_7_fu_4073_p1() {
    sext_ln415_7_fu_4073_p1 = esl_sext<16,12>(tmp_3_V_fu_4067_p2.read());
}

void avgpool::thread_sext_ln415_8_fu_4227_p1() {
    sext_ln415_8_fu_4227_p1 = esl_sext<12,11>(trunc_ln708_355_reg_15712.read());
}

void avgpool::thread_sext_ln415_9_fu_4239_p1() {
    sext_ln415_9_fu_4239_p1 = esl_sext<16,12>(tmp_4_V_fu_4233_p2.read());
}

void avgpool::thread_sext_ln415_fu_3558_p1() {
    sext_ln415_fu_3558_p1 = esl_sext<12,11>(trunc_ln_reg_15580.read());
}

void avgpool::thread_sext_ln521_fu_1365_p1() {
    sext_ln521_fu_1365_p1 = esl_sext<5,3>(add_ln521_fu_1360_p2.read());
}

void avgpool::thread_sext_ln525_fu_1380_p1() {
    sext_ln525_fu_1380_p1 = esl_sext<3,2>(sub_ln525_fu_1374_p2.read());
}

void avgpool::thread_sext_ln703_100_fu_1806_p0() {
    sext_ln703_100_fu_1806_p0 = out_buf_sc_V_5_q0.read();
}

void avgpool::thread_sext_ln703_100_fu_1806_p1() {
    sext_ln703_100_fu_1806_p1 = esl_sext<22,16>(sext_ln703_100_fu_1806_p0.read());
}

void avgpool::thread_sext_ln703_101_fu_1872_p0() {
    sext_ln703_101_fu_1872_p0 = out_buf_sc_V_6_q0.read();
}

void avgpool::thread_sext_ln703_101_fu_1872_p1() {
    sext_ln703_101_fu_1872_p1 = esl_sext<22,16>(sext_ln703_101_fu_1872_p0.read());
}

void avgpool::thread_sext_ln703_102_fu_1938_p0() {
    sext_ln703_102_fu_1938_p0 = out_buf_sc_V_7_q0.read();
}

void avgpool::thread_sext_ln703_102_fu_1938_p1() {
    sext_ln703_102_fu_1938_p1 = esl_sext<22,16>(sext_ln703_102_fu_1938_p0.read());
}

void avgpool::thread_sext_ln703_103_fu_2004_p0() {
    sext_ln703_103_fu_2004_p0 = out_buf_sc_V_8_q0.read();
}

void avgpool::thread_sext_ln703_103_fu_2004_p1() {
    sext_ln703_103_fu_2004_p1 = esl_sext<22,16>(sext_ln703_103_fu_2004_p0.read());
}

void avgpool::thread_sext_ln703_104_fu_2070_p0() {
    sext_ln703_104_fu_2070_p0 = out_buf_sc_V_9_q0.read();
}

void avgpool::thread_sext_ln703_104_fu_2070_p1() {
    sext_ln703_104_fu_2070_p1 = esl_sext<22,16>(sext_ln703_104_fu_2070_p0.read());
}

void avgpool::thread_sext_ln703_105_fu_2136_p0() {
    sext_ln703_105_fu_2136_p0 = out_buf_sc_V_10_q0.read();
}

void avgpool::thread_sext_ln703_105_fu_2136_p1() {
    sext_ln703_105_fu_2136_p1 = esl_sext<22,16>(sext_ln703_105_fu_2136_p0.read());
}

void avgpool::thread_sext_ln703_106_fu_2202_p0() {
    sext_ln703_106_fu_2202_p0 = out_buf_sc_V_11_q0.read();
}

void avgpool::thread_sext_ln703_106_fu_2202_p1() {
    sext_ln703_106_fu_2202_p1 = esl_sext<22,16>(sext_ln703_106_fu_2202_p0.read());
}

void avgpool::thread_sext_ln703_107_fu_2268_p0() {
    sext_ln703_107_fu_2268_p0 = out_buf_sc_V_12_q0.read();
}

void avgpool::thread_sext_ln703_107_fu_2268_p1() {
    sext_ln703_107_fu_2268_p1 = esl_sext<22,16>(sext_ln703_107_fu_2268_p0.read());
}

void avgpool::thread_sext_ln703_108_fu_2334_p0() {
    sext_ln703_108_fu_2334_p0 = out_buf_sc_V_13_q0.read();
}

void avgpool::thread_sext_ln703_108_fu_2334_p1() {
    sext_ln703_108_fu_2334_p1 = esl_sext<22,16>(sext_ln703_108_fu_2334_p0.read());
}

void avgpool::thread_sext_ln703_109_fu_2400_p0() {
    sext_ln703_109_fu_2400_p0 = out_buf_sc_V_14_q0.read();
}

void avgpool::thread_sext_ln703_109_fu_2400_p1() {
    sext_ln703_109_fu_2400_p1 = esl_sext<22,16>(sext_ln703_109_fu_2400_p0.read());
}

void avgpool::thread_sext_ln703_110_fu_2466_p0() {
    sext_ln703_110_fu_2466_p0 = out_buf_sc_V_15_q0.read();
}

void avgpool::thread_sext_ln703_110_fu_2466_p1() {
    sext_ln703_110_fu_2466_p1 = esl_sext<22,16>(sext_ln703_110_fu_2466_p0.read());
}

void avgpool::thread_sext_ln703_111_fu_2532_p0() {
    sext_ln703_111_fu_2532_p0 = out_buf_sc_V_16_q0.read();
}

void avgpool::thread_sext_ln703_111_fu_2532_p1() {
    sext_ln703_111_fu_2532_p1 = esl_sext<22,16>(sext_ln703_111_fu_2532_p0.read());
}

void avgpool::thread_sext_ln703_112_fu_2598_p0() {
    sext_ln703_112_fu_2598_p0 = out_buf_sc_V_17_q0.read();
}

void avgpool::thread_sext_ln703_112_fu_2598_p1() {
    sext_ln703_112_fu_2598_p1 = esl_sext<22,16>(sext_ln703_112_fu_2598_p0.read());
}

void avgpool::thread_sext_ln703_113_fu_2664_p0() {
    sext_ln703_113_fu_2664_p0 = out_buf_sc_V_18_q0.read();
}

void avgpool::thread_sext_ln703_113_fu_2664_p1() {
    sext_ln703_113_fu_2664_p1 = esl_sext<22,16>(sext_ln703_113_fu_2664_p0.read());
}

void avgpool::thread_sext_ln703_114_fu_2730_p0() {
    sext_ln703_114_fu_2730_p0 = out_buf_sc_V_19_q0.read();
}

void avgpool::thread_sext_ln703_114_fu_2730_p1() {
    sext_ln703_114_fu_2730_p1 = esl_sext<22,16>(sext_ln703_114_fu_2730_p0.read());
}

void avgpool::thread_sext_ln703_115_fu_2796_p0() {
    sext_ln703_115_fu_2796_p0 = out_buf_sc_V_20_q0.read();
}

void avgpool::thread_sext_ln703_115_fu_2796_p1() {
    sext_ln703_115_fu_2796_p1 = esl_sext<22,16>(sext_ln703_115_fu_2796_p0.read());
}

void avgpool::thread_sext_ln703_116_fu_2862_p0() {
    sext_ln703_116_fu_2862_p0 = out_buf_sc_V_21_q0.read();
}

void avgpool::thread_sext_ln703_116_fu_2862_p1() {
    sext_ln703_116_fu_2862_p1 = esl_sext<22,16>(sext_ln703_116_fu_2862_p0.read());
}

void avgpool::thread_sext_ln703_117_fu_2928_p0() {
    sext_ln703_117_fu_2928_p0 = out_buf_sc_V_22_q0.read();
}

void avgpool::thread_sext_ln703_117_fu_2928_p1() {
    sext_ln703_117_fu_2928_p1 = esl_sext<22,16>(sext_ln703_117_fu_2928_p0.read());
}

void avgpool::thread_sext_ln703_118_fu_2994_p0() {
    sext_ln703_118_fu_2994_p0 = out_buf_sc_V_23_q0.read();
}

void avgpool::thread_sext_ln703_118_fu_2994_p1() {
    sext_ln703_118_fu_2994_p1 = esl_sext<22,16>(sext_ln703_118_fu_2994_p0.read());
}

void avgpool::thread_sext_ln703_119_fu_3060_p0() {
    sext_ln703_119_fu_3060_p0 = out_buf_sc_V_24_q0.read();
}

void avgpool::thread_sext_ln703_119_fu_3060_p1() {
    sext_ln703_119_fu_3060_p1 = esl_sext<22,16>(sext_ln703_119_fu_3060_p0.read());
}

void avgpool::thread_sext_ln703_120_fu_3126_p0() {
    sext_ln703_120_fu_3126_p0 = out_buf_sc_V_25_q0.read();
}

void avgpool::thread_sext_ln703_120_fu_3126_p1() {
    sext_ln703_120_fu_3126_p1 = esl_sext<22,16>(sext_ln703_120_fu_3126_p0.read());
}

void avgpool::thread_sext_ln703_121_fu_3192_p0() {
    sext_ln703_121_fu_3192_p0 = out_buf_sc_V_26_q0.read();
}

void avgpool::thread_sext_ln703_121_fu_3192_p1() {
    sext_ln703_121_fu_3192_p1 = esl_sext<22,16>(sext_ln703_121_fu_3192_p0.read());
}

void avgpool::thread_sext_ln703_122_fu_3258_p0() {
    sext_ln703_122_fu_3258_p0 = out_buf_sc_V_27_q0.read();
}

void avgpool::thread_sext_ln703_122_fu_3258_p1() {
    sext_ln703_122_fu_3258_p1 = esl_sext<22,16>(sext_ln703_122_fu_3258_p0.read());
}

void avgpool::thread_sext_ln703_123_fu_3324_p0() {
    sext_ln703_123_fu_3324_p0 = out_buf_sc_V_28_q0.read();
}

void avgpool::thread_sext_ln703_123_fu_3324_p1() {
    sext_ln703_123_fu_3324_p1 = esl_sext<22,16>(sext_ln703_123_fu_3324_p0.read());
}

void avgpool::thread_sext_ln703_124_fu_3390_p0() {
    sext_ln703_124_fu_3390_p0 = out_buf_sc_V_29_q0.read();
}

void avgpool::thread_sext_ln703_124_fu_3390_p1() {
    sext_ln703_124_fu_3390_p1 = esl_sext<22,16>(sext_ln703_124_fu_3390_p0.read());
}

void avgpool::thread_sext_ln703_125_fu_3456_p0() {
    sext_ln703_125_fu_3456_p0 = out_buf_sc_V_30_q0.read();
}

void avgpool::thread_sext_ln703_125_fu_3456_p1() {
    sext_ln703_125_fu_3456_p1 = esl_sext<22,16>(sext_ln703_125_fu_3456_p0.read());
}

void avgpool::thread_sext_ln703_126_fu_3522_p0() {
    sext_ln703_126_fu_3522_p0 = out_buf_sc_V_31_q0.read();
}

void avgpool::thread_sext_ln703_126_fu_3522_p1() {
    sext_ln703_126_fu_3522_p1 = esl_sext<22,16>(sext_ln703_126_fu_3522_p0.read());
}

void avgpool::thread_sext_ln703_96_fu_1542_p0() {
    sext_ln703_96_fu_1542_p0 = out_buf_sc_V_1_q0.read();
}

void avgpool::thread_sext_ln703_96_fu_1542_p1() {
    sext_ln703_96_fu_1542_p1 = esl_sext<22,16>(sext_ln703_96_fu_1542_p0.read());
}

void avgpool::thread_sext_ln703_97_fu_1608_p0() {
    sext_ln703_97_fu_1608_p0 = out_buf_sc_V_2_q0.read();
}

void avgpool::thread_sext_ln703_97_fu_1608_p1() {
    sext_ln703_97_fu_1608_p1 = esl_sext<22,16>(sext_ln703_97_fu_1608_p0.read());
}

void avgpool::thread_sext_ln703_98_fu_1674_p0() {
    sext_ln703_98_fu_1674_p0 = out_buf_sc_V_3_q0.read();
}

void avgpool::thread_sext_ln703_98_fu_1674_p1() {
    sext_ln703_98_fu_1674_p1 = esl_sext<22,16>(sext_ln703_98_fu_1674_p0.read());
}

void avgpool::thread_sext_ln703_99_fu_1740_p0() {
    sext_ln703_99_fu_1740_p0 = out_buf_sc_V_4_q0.read();
}

void avgpool::thread_sext_ln703_99_fu_1740_p1() {
    sext_ln703_99_fu_1740_p1 = esl_sext<22,16>(sext_ln703_99_fu_1740_p0.read());
}

void avgpool::thread_sext_ln703_fu_1476_p0() {
    sext_ln703_fu_1476_p0 = out_buf_sc_V_0_q0.read();
}

void avgpool::thread_sext_ln703_fu_1476_p1() {
    sext_ln703_fu_1476_p1 = esl_sext<22,16>(sext_ln703_fu_1476_p0.read());
}

void avgpool::thread_sext_ln728_223_fu_1538_p1() {
    sext_ln728_223_fu_1538_p1 = esl_sext<22,21>(shl_ln728_222_fu_1530_p3.read());
}

void avgpool::thread_sext_ln728_224_fu_1604_p1() {
    sext_ln728_224_fu_1604_p1 = esl_sext<22,21>(shl_ln728_223_fu_1596_p3.read());
}

void avgpool::thread_sext_ln728_225_fu_1670_p1() {
    sext_ln728_225_fu_1670_p1 = esl_sext<22,21>(shl_ln728_224_fu_1662_p3.read());
}

void avgpool::thread_sext_ln728_226_fu_1736_p1() {
    sext_ln728_226_fu_1736_p1 = esl_sext<22,21>(shl_ln728_225_fu_1728_p3.read());
}

void avgpool::thread_sext_ln728_227_fu_1802_p1() {
    sext_ln728_227_fu_1802_p1 = esl_sext<22,21>(shl_ln728_226_fu_1794_p3.read());
}

void avgpool::thread_sext_ln728_228_fu_1868_p1() {
    sext_ln728_228_fu_1868_p1 = esl_sext<22,21>(shl_ln728_227_fu_1860_p3.read());
}

void avgpool::thread_sext_ln728_229_fu_1934_p1() {
    sext_ln728_229_fu_1934_p1 = esl_sext<22,21>(shl_ln728_228_fu_1926_p3.read());
}

void avgpool::thread_sext_ln728_230_fu_2000_p1() {
    sext_ln728_230_fu_2000_p1 = esl_sext<22,21>(shl_ln728_229_fu_1992_p3.read());
}

void avgpool::thread_sext_ln728_231_fu_2066_p1() {
    sext_ln728_231_fu_2066_p1 = esl_sext<22,21>(shl_ln728_230_fu_2058_p3.read());
}

void avgpool::thread_sext_ln728_232_fu_2132_p1() {
    sext_ln728_232_fu_2132_p1 = esl_sext<22,21>(shl_ln728_231_fu_2124_p3.read());
}

void avgpool::thread_sext_ln728_233_fu_2198_p1() {
    sext_ln728_233_fu_2198_p1 = esl_sext<22,21>(shl_ln728_232_fu_2190_p3.read());
}

void avgpool::thread_sext_ln728_234_fu_2264_p1() {
    sext_ln728_234_fu_2264_p1 = esl_sext<22,21>(shl_ln728_233_fu_2256_p3.read());
}

void avgpool::thread_sext_ln728_235_fu_2330_p1() {
    sext_ln728_235_fu_2330_p1 = esl_sext<22,21>(shl_ln728_234_fu_2322_p3.read());
}

void avgpool::thread_sext_ln728_236_fu_2396_p1() {
    sext_ln728_236_fu_2396_p1 = esl_sext<22,21>(shl_ln728_235_fu_2388_p3.read());
}

void avgpool::thread_sext_ln728_237_fu_2462_p1() {
    sext_ln728_237_fu_2462_p1 = esl_sext<22,21>(shl_ln728_236_fu_2454_p3.read());
}

void avgpool::thread_sext_ln728_238_fu_2528_p1() {
    sext_ln728_238_fu_2528_p1 = esl_sext<22,21>(shl_ln728_237_fu_2520_p3.read());
}

void avgpool::thread_sext_ln728_239_fu_2594_p1() {
    sext_ln728_239_fu_2594_p1 = esl_sext<22,21>(shl_ln728_238_fu_2586_p3.read());
}

void avgpool::thread_sext_ln728_240_fu_2660_p1() {
    sext_ln728_240_fu_2660_p1 = esl_sext<22,21>(shl_ln728_239_fu_2652_p3.read());
}

void avgpool::thread_sext_ln728_241_fu_2726_p1() {
    sext_ln728_241_fu_2726_p1 = esl_sext<22,21>(shl_ln728_240_fu_2718_p3.read());
}

void avgpool::thread_sext_ln728_242_fu_2792_p1() {
    sext_ln728_242_fu_2792_p1 = esl_sext<22,21>(shl_ln728_241_fu_2784_p3.read());
}

void avgpool::thread_sext_ln728_243_fu_2858_p1() {
    sext_ln728_243_fu_2858_p1 = esl_sext<22,21>(shl_ln728_242_fu_2850_p3.read());
}

void avgpool::thread_sext_ln728_244_fu_2924_p1() {
    sext_ln728_244_fu_2924_p1 = esl_sext<22,21>(shl_ln728_243_fu_2916_p3.read());
}

void avgpool::thread_sext_ln728_245_fu_2990_p1() {
    sext_ln728_245_fu_2990_p1 = esl_sext<22,21>(shl_ln728_244_fu_2982_p3.read());
}

void avgpool::thread_sext_ln728_246_fu_3056_p1() {
    sext_ln728_246_fu_3056_p1 = esl_sext<22,21>(shl_ln728_245_fu_3048_p3.read());
}

void avgpool::thread_sext_ln728_247_fu_3122_p1() {
    sext_ln728_247_fu_3122_p1 = esl_sext<22,21>(shl_ln728_246_fu_3114_p3.read());
}

void avgpool::thread_sext_ln728_248_fu_3188_p1() {
    sext_ln728_248_fu_3188_p1 = esl_sext<22,21>(shl_ln728_247_fu_3180_p3.read());
}

void avgpool::thread_sext_ln728_249_fu_3254_p1() {
    sext_ln728_249_fu_3254_p1 = esl_sext<22,21>(shl_ln728_248_fu_3246_p3.read());
}

void avgpool::thread_sext_ln728_250_fu_3320_p1() {
    sext_ln728_250_fu_3320_p1 = esl_sext<22,21>(shl_ln728_249_fu_3312_p3.read());
}

void avgpool::thread_sext_ln728_251_fu_3386_p1() {
    sext_ln728_251_fu_3386_p1 = esl_sext<22,21>(shl_ln728_250_fu_3378_p3.read());
}

void avgpool::thread_sext_ln728_252_fu_3452_p1() {
    sext_ln728_252_fu_3452_p1 = esl_sext<22,21>(shl_ln728_251_fu_3444_p3.read());
}

void avgpool::thread_sext_ln728_253_fu_3518_p1() {
    sext_ln728_253_fu_3518_p1 = esl_sext<22,21>(shl_ln728_252_fu_3510_p3.read());
}

void avgpool::thread_sext_ln728_fu_1472_p1() {
    sext_ln728_fu_1472_p1 = esl_sext<22,21>(shl_ln728_221_fu_1464_p3.read());
}

void avgpool::thread_shl_ln728_191_fu_9263_p3() {
    shl_ln728_191_fu_9263_p3 = esl_concat<16,7>(grp_load_fu_1082_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_192_fu_9373_p3() {
    shl_ln728_192_fu_9373_p3 = esl_concat<16,7>(grp_load_fu_1085_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_193_fu_9483_p3() {
    shl_ln728_193_fu_9483_p3 = esl_concat<16,7>(grp_load_fu_1088_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_194_fu_9593_p3() {
    shl_ln728_194_fu_9593_p3 = esl_concat<16,7>(grp_load_fu_1091_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_195_fu_9703_p3() {
    shl_ln728_195_fu_9703_p3 = esl_concat<16,7>(grp_load_fu_1094_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_196_fu_9813_p3() {
    shl_ln728_196_fu_9813_p3 = esl_concat<16,7>(grp_load_fu_1097_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_197_fu_9923_p3() {
    shl_ln728_197_fu_9923_p3 = esl_concat<16,7>(grp_load_fu_1100_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_198_fu_10033_p3() {
    shl_ln728_198_fu_10033_p3 = esl_concat<16,7>(grp_load_fu_1103_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_199_fu_10143_p3() {
    shl_ln728_199_fu_10143_p3 = esl_concat<16,7>(grp_load_fu_1106_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_200_fu_10253_p3() {
    shl_ln728_200_fu_10253_p3 = esl_concat<16,7>(grp_load_fu_1109_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_201_fu_10363_p3() {
    shl_ln728_201_fu_10363_p3 = esl_concat<16,7>(grp_load_fu_1112_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_202_fu_10473_p3() {
    shl_ln728_202_fu_10473_p3 = esl_concat<16,7>(grp_load_fu_1115_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_203_fu_10583_p3() {
    shl_ln728_203_fu_10583_p3 = esl_concat<16,7>(grp_load_fu_1118_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_204_fu_10693_p3() {
    shl_ln728_204_fu_10693_p3 = esl_concat<16,7>(grp_load_fu_1121_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_205_fu_10803_p3() {
    shl_ln728_205_fu_10803_p3 = esl_concat<16,7>(grp_load_fu_1124_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_206_fu_10913_p3() {
    shl_ln728_206_fu_10913_p3 = esl_concat<16,7>(grp_load_fu_1127_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_207_fu_11023_p3() {
    shl_ln728_207_fu_11023_p3 = esl_concat<16,7>(grp_load_fu_1130_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_208_fu_11133_p3() {
    shl_ln728_208_fu_11133_p3 = esl_concat<16,7>(grp_load_fu_1133_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_209_fu_11243_p3() {
    shl_ln728_209_fu_11243_p3 = esl_concat<16,7>(grp_load_fu_1136_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_210_fu_11353_p3() {
    shl_ln728_210_fu_11353_p3 = esl_concat<16,7>(grp_load_fu_1139_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_211_fu_11463_p3() {
    shl_ln728_211_fu_11463_p3 = esl_concat<16,7>(grp_load_fu_1142_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_212_fu_11573_p3() {
    shl_ln728_212_fu_11573_p3 = esl_concat<16,7>(grp_load_fu_1145_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_213_fu_11683_p3() {
    shl_ln728_213_fu_11683_p3 = esl_concat<16,7>(grp_load_fu_1148_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_214_fu_11793_p3() {
    shl_ln728_214_fu_11793_p3 = esl_concat<16,7>(grp_load_fu_1151_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_215_fu_11903_p3() {
    shl_ln728_215_fu_11903_p3 = esl_concat<16,7>(grp_load_fu_1154_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_216_fu_12013_p3() {
    shl_ln728_216_fu_12013_p3 = esl_concat<16,7>(grp_load_fu_1157_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_217_fu_12123_p3() {
    shl_ln728_217_fu_12123_p3 = esl_concat<16,7>(grp_load_fu_1160_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_218_fu_12233_p3() {
    shl_ln728_218_fu_12233_p3 = esl_concat<16,7>(grp_load_fu_1163_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_219_fu_12343_p3() {
    shl_ln728_219_fu_12343_p3 = esl_concat<16,7>(grp_load_fu_1166_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_220_fu_12453_p3() {
    shl_ln728_220_fu_12453_p3 = esl_concat<16,7>(grp_load_fu_1169_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln728_221_fu_1464_p3() {
    shl_ln728_221_fu_1464_p3 = esl_concat<16,5>(grp_load_fu_1076_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_222_fu_1530_p3() {
    shl_ln728_222_fu_1530_p3 = esl_concat<16,5>(grp_load_fu_1079_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_223_fu_1596_p3() {
    shl_ln728_223_fu_1596_p3 = esl_concat<16,5>(grp_load_fu_1082_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_224_fu_1662_p3() {
    shl_ln728_224_fu_1662_p3 = esl_concat<16,5>(grp_load_fu_1085_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_225_fu_1728_p3() {
    shl_ln728_225_fu_1728_p3 = esl_concat<16,5>(grp_load_fu_1088_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_226_fu_1794_p3() {
    shl_ln728_226_fu_1794_p3 = esl_concat<16,5>(grp_load_fu_1091_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_227_fu_1860_p3() {
    shl_ln728_227_fu_1860_p3 = esl_concat<16,5>(grp_load_fu_1094_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_228_fu_1926_p3() {
    shl_ln728_228_fu_1926_p3 = esl_concat<16,5>(grp_load_fu_1097_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_229_fu_1992_p3() {
    shl_ln728_229_fu_1992_p3 = esl_concat<16,5>(grp_load_fu_1100_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_230_fu_2058_p3() {
    shl_ln728_230_fu_2058_p3 = esl_concat<16,5>(grp_load_fu_1103_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_231_fu_2124_p3() {
    shl_ln728_231_fu_2124_p3 = esl_concat<16,5>(grp_load_fu_1106_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_232_fu_2190_p3() {
    shl_ln728_232_fu_2190_p3 = esl_concat<16,5>(grp_load_fu_1109_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_233_fu_2256_p3() {
    shl_ln728_233_fu_2256_p3 = esl_concat<16,5>(grp_load_fu_1112_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_234_fu_2322_p3() {
    shl_ln728_234_fu_2322_p3 = esl_concat<16,5>(grp_load_fu_1115_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_235_fu_2388_p3() {
    shl_ln728_235_fu_2388_p3 = esl_concat<16,5>(grp_load_fu_1118_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_236_fu_2454_p3() {
    shl_ln728_236_fu_2454_p3 = esl_concat<16,5>(grp_load_fu_1121_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_237_fu_2520_p3() {
    shl_ln728_237_fu_2520_p3 = esl_concat<16,5>(grp_load_fu_1124_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_238_fu_2586_p3() {
    shl_ln728_238_fu_2586_p3 = esl_concat<16,5>(grp_load_fu_1127_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_239_fu_2652_p3() {
    shl_ln728_239_fu_2652_p3 = esl_concat<16,5>(grp_load_fu_1130_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_240_fu_2718_p3() {
    shl_ln728_240_fu_2718_p3 = esl_concat<16,5>(grp_load_fu_1133_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_241_fu_2784_p3() {
    shl_ln728_241_fu_2784_p3 = esl_concat<16,5>(grp_load_fu_1136_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_242_fu_2850_p3() {
    shl_ln728_242_fu_2850_p3 = esl_concat<16,5>(grp_load_fu_1139_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_243_fu_2916_p3() {
    shl_ln728_243_fu_2916_p3 = esl_concat<16,5>(grp_load_fu_1142_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_244_fu_2982_p3() {
    shl_ln728_244_fu_2982_p3 = esl_concat<16,5>(grp_load_fu_1145_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_245_fu_3048_p3() {
    shl_ln728_245_fu_3048_p3 = esl_concat<16,5>(grp_load_fu_1148_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_246_fu_3114_p3() {
    shl_ln728_246_fu_3114_p3 = esl_concat<16,5>(grp_load_fu_1151_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_247_fu_3180_p3() {
    shl_ln728_247_fu_3180_p3 = esl_concat<16,5>(grp_load_fu_1154_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_248_fu_3246_p3() {
    shl_ln728_248_fu_3246_p3 = esl_concat<16,5>(grp_load_fu_1157_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_249_fu_3312_p3() {
    shl_ln728_249_fu_3312_p3 = esl_concat<16,5>(grp_load_fu_1160_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_250_fu_3378_p3() {
    shl_ln728_250_fu_3378_p3 = esl_concat<16,5>(grp_load_fu_1163_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_251_fu_3444_p3() {
    shl_ln728_251_fu_3444_p3 = esl_concat<16,5>(grp_load_fu_1166_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_252_fu_3510_p3() {
    shl_ln728_252_fu_3510_p3 = esl_concat<16,5>(grp_load_fu_1169_p1.read(), ap_const_lv5_0);
}

void avgpool::thread_shl_ln728_s_fu_9153_p3() {
    shl_ln728_s_fu_9153_p3 = esl_concat<16,7>(grp_load_fu_1079_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_shl_ln731_127_fu_12681_p2() {
    shl_ln731_127_fu_12681_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_1_reg_16668.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_128_fu_12759_p2() {
    shl_ln731_128_fu_12759_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_2_reg_16695.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_129_fu_12837_p2() {
    shl_ln731_129_fu_12837_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_3_reg_16722.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_130_fu_12915_p2() {
    shl_ln731_130_fu_12915_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_4_reg_16749.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_131_fu_12993_p2() {
    shl_ln731_131_fu_12993_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_5_reg_16776.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_132_fu_13071_p2() {
    shl_ln731_132_fu_13071_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_6_reg_16803.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_133_fu_13149_p2() {
    shl_ln731_133_fu_13149_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_7_reg_16830.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_134_fu_13227_p2() {
    shl_ln731_134_fu_13227_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_8_reg_16857.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_135_fu_13305_p2() {
    shl_ln731_135_fu_13305_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_9_reg_16884.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_136_fu_13383_p2() {
    shl_ln731_136_fu_13383_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_10_reg_16911.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_137_fu_13461_p2() {
    shl_ln731_137_fu_13461_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_11_reg_16938.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_138_fu_13539_p2() {
    shl_ln731_138_fu_13539_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_12_reg_16965.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_139_fu_13617_p2() {
    shl_ln731_139_fu_13617_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_13_reg_16992.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_140_fu_13695_p2() {
    shl_ln731_140_fu_13695_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_14_reg_17019.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_141_fu_13773_p2() {
    shl_ln731_141_fu_13773_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_15_reg_17046.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_142_fu_13851_p2() {
    shl_ln731_142_fu_13851_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_16_reg_17073.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_143_fu_13929_p2() {
    shl_ln731_143_fu_13929_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_17_reg_17100.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_144_fu_14007_p2() {
    shl_ln731_144_fu_14007_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_18_reg_17127.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_145_fu_14085_p2() {
    shl_ln731_145_fu_14085_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_19_reg_17154.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_146_fu_14163_p2() {
    shl_ln731_146_fu_14163_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_20_reg_17181.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_147_fu_14241_p2() {
    shl_ln731_147_fu_14241_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_21_reg_17208.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_148_fu_14319_p2() {
    shl_ln731_148_fu_14319_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_22_reg_17235.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_149_fu_14397_p2() {
    shl_ln731_149_fu_14397_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_23_reg_17262.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_150_fu_14475_p2() {
    shl_ln731_150_fu_14475_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_24_reg_17289.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_151_fu_14553_p2() {
    shl_ln731_151_fu_14553_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_25_reg_17316.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_152_fu_14631_p2() {
    shl_ln731_152_fu_14631_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_26_reg_17343.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_153_fu_14709_p2() {
    shl_ln731_153_fu_14709_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_27_reg_17370.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_154_fu_14787_p2() {
    shl_ln731_154_fu_14787_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_28_reg_17397.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_155_fu_14865_p2() {
    shl_ln731_155_fu_14865_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_29_reg_17424.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_156_fu_14943_p2() {
    shl_ln731_156_fu_14943_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_30_reg_17451.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_157_fu_15021_p2() {
    shl_ln731_157_fu_15021_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_31_reg_17478.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln731_fu_12603_p2() {
    shl_ln731_fu_12603_p2 = (!ap_const_lv16_5.is_01())? sc_lv<16>(): select_ln1148_reg_16641.read() << (unsigned short)ap_const_lv16_5.to_uint();
}

void avgpool::thread_shl_ln_fu_9043_p3() {
    shl_ln_fu_9043_p3 = esl_concat<16,7>(grp_load_fu_1076_p1.read(), ap_const_lv7_0);
}

void avgpool::thread_sub_ln1148_10_fu_9613_p2() {
    sub_ln1148_10_fu_9613_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_10_fu_9601_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_10_fu_9601_p1.read()));
}

void avgpool::thread_sub_ln1148_11_fu_9633_p2() {
    sub_ln1148_11_fu_9633_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_37_fu_9629_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_37_fu_9629_p1.read()));
}

void avgpool::thread_sub_ln1148_12_fu_9723_p2() {
    sub_ln1148_12_fu_9723_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_12_fu_9711_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_12_fu_9711_p1.read()));
}

void avgpool::thread_sub_ln1148_13_fu_9743_p2() {
    sub_ln1148_13_fu_9743_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_38_fu_9739_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_38_fu_9739_p1.read()));
}

void avgpool::thread_sub_ln1148_14_fu_9833_p2() {
    sub_ln1148_14_fu_9833_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_14_fu_9821_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_14_fu_9821_p1.read()));
}

void avgpool::thread_sub_ln1148_15_fu_9853_p2() {
    sub_ln1148_15_fu_9853_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_39_fu_9849_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_39_fu_9849_p1.read()));
}

void avgpool::thread_sub_ln1148_16_fu_9943_p2() {
    sub_ln1148_16_fu_9943_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_16_fu_9931_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_16_fu_9931_p1.read()));
}

void avgpool::thread_sub_ln1148_17_fu_9963_p2() {
    sub_ln1148_17_fu_9963_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_40_fu_9959_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_40_fu_9959_p1.read()));
}

void avgpool::thread_sub_ln1148_18_fu_10053_p2() {
    sub_ln1148_18_fu_10053_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_18_fu_10041_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_18_fu_10041_p1.read()));
}

void avgpool::thread_sub_ln1148_19_fu_10073_p2() {
    sub_ln1148_19_fu_10073_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_41_fu_10069_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_41_fu_10069_p1.read()));
}

void avgpool::thread_sub_ln1148_1_fu_9083_p2() {
    sub_ln1148_1_fu_9083_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_32_fu_9079_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_32_fu_9079_p1.read()));
}

void avgpool::thread_sub_ln1148_20_fu_10163_p2() {
    sub_ln1148_20_fu_10163_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_20_fu_10151_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_20_fu_10151_p1.read()));
}

void avgpool::thread_sub_ln1148_21_fu_10183_p2() {
    sub_ln1148_21_fu_10183_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_42_fu_10179_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_42_fu_10179_p1.read()));
}

void avgpool::thread_sub_ln1148_22_fu_10273_p2() {
    sub_ln1148_22_fu_10273_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_22_fu_10261_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_22_fu_10261_p1.read()));
}

void avgpool::thread_sub_ln1148_23_fu_10293_p2() {
    sub_ln1148_23_fu_10293_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_43_fu_10289_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_43_fu_10289_p1.read()));
}

void avgpool::thread_sub_ln1148_24_fu_10383_p2() {
    sub_ln1148_24_fu_10383_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_24_fu_10371_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_24_fu_10371_p1.read()));
}

void avgpool::thread_sub_ln1148_25_fu_10403_p2() {
    sub_ln1148_25_fu_10403_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_44_fu_10399_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_44_fu_10399_p1.read()));
}

void avgpool::thread_sub_ln1148_26_fu_10493_p2() {
    sub_ln1148_26_fu_10493_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_26_fu_10481_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_26_fu_10481_p1.read()));
}

void avgpool::thread_sub_ln1148_27_fu_10513_p2() {
    sub_ln1148_27_fu_10513_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_45_fu_10509_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_45_fu_10509_p1.read()));
}

void avgpool::thread_sub_ln1148_28_fu_10603_p2() {
    sub_ln1148_28_fu_10603_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_28_fu_10591_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_28_fu_10591_p1.read()));
}

void avgpool::thread_sub_ln1148_29_fu_10623_p2() {
    sub_ln1148_29_fu_10623_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_46_fu_10619_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_46_fu_10619_p1.read()));
}

void avgpool::thread_sub_ln1148_2_fu_9173_p2() {
    sub_ln1148_2_fu_9173_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_2_fu_9161_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_2_fu_9161_p1.read()));
}

void avgpool::thread_sub_ln1148_30_fu_10713_p2() {
    sub_ln1148_30_fu_10713_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_30_fu_10701_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_30_fu_10701_p1.read()));
}

void avgpool::thread_sub_ln1148_31_fu_10733_p2() {
    sub_ln1148_31_fu_10733_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_47_fu_10729_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_47_fu_10729_p1.read()));
}

void avgpool::thread_sub_ln1148_32_fu_10823_p2() {
    sub_ln1148_32_fu_10823_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_32_fu_10811_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_32_fu_10811_p1.read()));
}

void avgpool::thread_sub_ln1148_33_fu_10843_p2() {
    sub_ln1148_33_fu_10843_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_48_fu_10839_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_48_fu_10839_p1.read()));
}

void avgpool::thread_sub_ln1148_34_fu_10933_p2() {
    sub_ln1148_34_fu_10933_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_34_fu_10921_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_34_fu_10921_p1.read()));
}

void avgpool::thread_sub_ln1148_35_fu_10953_p2() {
    sub_ln1148_35_fu_10953_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_49_fu_10949_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_49_fu_10949_p1.read()));
}

void avgpool::thread_sub_ln1148_36_fu_11043_p2() {
    sub_ln1148_36_fu_11043_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_36_fu_11031_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_36_fu_11031_p1.read()));
}

void avgpool::thread_sub_ln1148_37_fu_11063_p2() {
    sub_ln1148_37_fu_11063_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_50_fu_11059_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_50_fu_11059_p1.read()));
}

void avgpool::thread_sub_ln1148_38_fu_11153_p2() {
    sub_ln1148_38_fu_11153_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_38_fu_11141_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_38_fu_11141_p1.read()));
}

void avgpool::thread_sub_ln1148_39_fu_11173_p2() {
    sub_ln1148_39_fu_11173_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_51_fu_11169_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_51_fu_11169_p1.read()));
}

void avgpool::thread_sub_ln1148_3_fu_9193_p2() {
    sub_ln1148_3_fu_9193_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_33_fu_9189_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_33_fu_9189_p1.read()));
}

void avgpool::thread_sub_ln1148_40_fu_11263_p2() {
    sub_ln1148_40_fu_11263_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_40_fu_11251_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_40_fu_11251_p1.read()));
}

void avgpool::thread_sub_ln1148_41_fu_11283_p2() {
    sub_ln1148_41_fu_11283_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_52_fu_11279_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_52_fu_11279_p1.read()));
}

void avgpool::thread_sub_ln1148_42_fu_11373_p2() {
    sub_ln1148_42_fu_11373_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_42_fu_11361_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_42_fu_11361_p1.read()));
}

void avgpool::thread_sub_ln1148_43_fu_11393_p2() {
    sub_ln1148_43_fu_11393_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_53_fu_11389_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_53_fu_11389_p1.read()));
}

void avgpool::thread_sub_ln1148_44_fu_11483_p2() {
    sub_ln1148_44_fu_11483_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_44_fu_11471_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_44_fu_11471_p1.read()));
}

void avgpool::thread_sub_ln1148_45_fu_11503_p2() {
    sub_ln1148_45_fu_11503_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_54_fu_11499_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_54_fu_11499_p1.read()));
}

void avgpool::thread_sub_ln1148_46_fu_11593_p2() {
    sub_ln1148_46_fu_11593_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_46_fu_11581_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_46_fu_11581_p1.read()));
}

void avgpool::thread_sub_ln1148_47_fu_11613_p2() {
    sub_ln1148_47_fu_11613_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_55_fu_11609_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_55_fu_11609_p1.read()));
}

void avgpool::thread_sub_ln1148_48_fu_11703_p2() {
    sub_ln1148_48_fu_11703_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_48_fu_11691_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_48_fu_11691_p1.read()));
}

void avgpool::thread_sub_ln1148_49_fu_11723_p2() {
    sub_ln1148_49_fu_11723_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_56_fu_11719_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_56_fu_11719_p1.read()));
}

void avgpool::thread_sub_ln1148_4_fu_9283_p2() {
    sub_ln1148_4_fu_9283_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_4_fu_9271_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_4_fu_9271_p1.read()));
}

void avgpool::thread_sub_ln1148_50_fu_11813_p2() {
    sub_ln1148_50_fu_11813_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_50_fu_11801_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_50_fu_11801_p1.read()));
}

void avgpool::thread_sub_ln1148_51_fu_11833_p2() {
    sub_ln1148_51_fu_11833_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_57_fu_11829_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_57_fu_11829_p1.read()));
}

void avgpool::thread_sub_ln1148_52_fu_11923_p2() {
    sub_ln1148_52_fu_11923_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_52_fu_11911_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_52_fu_11911_p1.read()));
}

void avgpool::thread_sub_ln1148_53_fu_11943_p2() {
    sub_ln1148_53_fu_11943_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_58_fu_11939_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_58_fu_11939_p1.read()));
}

void avgpool::thread_sub_ln1148_54_fu_12033_p2() {
    sub_ln1148_54_fu_12033_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_54_fu_12021_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_54_fu_12021_p1.read()));
}

void avgpool::thread_sub_ln1148_55_fu_12053_p2() {
    sub_ln1148_55_fu_12053_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_59_fu_12049_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_59_fu_12049_p1.read()));
}

void avgpool::thread_sub_ln1148_56_fu_12143_p2() {
    sub_ln1148_56_fu_12143_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_56_fu_12131_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_56_fu_12131_p1.read()));
}

void avgpool::thread_sub_ln1148_57_fu_12163_p2() {
    sub_ln1148_57_fu_12163_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_60_fu_12159_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_60_fu_12159_p1.read()));
}

void avgpool::thread_sub_ln1148_58_fu_12253_p2() {
    sub_ln1148_58_fu_12253_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_58_fu_12241_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_58_fu_12241_p1.read()));
}

void avgpool::thread_sub_ln1148_59_fu_12273_p2() {
    sub_ln1148_59_fu_12273_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_61_fu_12269_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_61_fu_12269_p1.read()));
}

void avgpool::thread_sub_ln1148_5_fu_9303_p2() {
    sub_ln1148_5_fu_9303_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_34_fu_9299_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_34_fu_9299_p1.read()));
}

void avgpool::thread_sub_ln1148_60_fu_12363_p2() {
    sub_ln1148_60_fu_12363_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_60_fu_12351_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_60_fu_12351_p1.read()));
}

void avgpool::thread_sub_ln1148_61_fu_12383_p2() {
    sub_ln1148_61_fu_12383_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_62_fu_12379_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_62_fu_12379_p1.read()));
}

void avgpool::thread_sub_ln1148_62_fu_12473_p2() {
    sub_ln1148_62_fu_12473_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_62_fu_12461_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_62_fu_12461_p1.read()));
}

void avgpool::thread_sub_ln1148_63_fu_12493_p2() {
    sub_ln1148_63_fu_12493_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_63_fu_12489_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_63_fu_12489_p1.read()));
}

void avgpool::thread_sub_ln1148_6_fu_9393_p2() {
    sub_ln1148_6_fu_9393_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_6_fu_9381_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_6_fu_9381_p1.read()));
}

void avgpool::thread_sub_ln1148_7_fu_9413_p2() {
    sub_ln1148_7_fu_9413_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_35_fu_9409_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_35_fu_9409_p1.read()));
}

void avgpool::thread_sub_ln1148_8_fu_9503_p2() {
    sub_ln1148_8_fu_9503_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_8_fu_9491_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_8_fu_9491_p1.read()));
}

void avgpool::thread_sub_ln1148_9_fu_9523_p2() {
    sub_ln1148_9_fu_9523_p2 = (!ap_const_lv16_0.is_01() || !zext_ln1148_36_fu_9519_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(zext_ln1148_36_fu_9519_p1.read()));
}

void avgpool::thread_sub_ln1148_fu_9063_p2() {
    sub_ln1148_fu_9063_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1148_fu_9051_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1148_fu_9051_p1.read()));
}

void avgpool::thread_sub_ln507_fu_1196_p2() {
    sub_ln507_fu_1196_p2 = (!ap_const_lv3_0.is_01() || !tmp_2376_fu_1188_p3.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_0) - sc_biguint<3>(tmp_2376_fu_1188_p3.read()));
}

void avgpool::thread_sub_ln514_fu_1228_p2() {
    sub_ln514_fu_1228_p2 = (!ap_const_lv3_4.is_01() || !select_ln507_fu_1210_p3.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_4) - sc_biguint<3>(select_ln507_fu_1210_p3.read()));
}

void avgpool::thread_sub_ln525_fu_1374_p2() {
    sub_ln525_fu_1374_p2 = (!ap_const_lv2_0.is_01() || !select_ln521_fu_1340_p3.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_0) - sc_biguint<2>(select_ln521_fu_1340_p3.read()));
}

void avgpool::thread_tmp_0_V_6_fu_3584_p2() {
    tmp_0_V_6_fu_3584_p2 = (!zext_ln415_351_fu_3581_p1.read().is_01() || !trunc_ln708_s_reg_15603.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_351_fu_3581_p1.read()) + sc_biguint<16>(trunc_ln708_s_reg_15603.read()));
}

void avgpool::thread_tmp_0_V_7_fu_3695_p3() {
    tmp_0_V_7_fu_3695_p3 = (!and_ln786_680_fu_3664_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_680_fu_3664_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_0_V_6_fu_3584_p2.read());
}

void avgpool::thread_tmp_0_V_8_fu_3703_p3() {
    tmp_0_V_8_fu_3703_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_1_fu_3570_p1.read(): tmp_0_V_7_fu_3695_p3.read());
}

void avgpool::thread_tmp_0_V_9_fu_3721_p3() {
    tmp_0_V_9_fu_3721_p3 = (!and_ln340_fu_3715_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_fu_3715_p2.read()[0].to_bool())? select_ln340_452_fu_3687_p3.read(): tmp_0_V_8_fu_3703_p3.read());
}

void avgpool::thread_tmp_0_V_fu_3564_p2() {
    tmp_0_V_fu_3564_p2 = (!sext_ln415_fu_3558_p1.read().is_01() || !zext_ln415_fu_3561_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_fu_3558_p1.read()) + sc_biguint<12>(zext_ln415_fu_3561_p1.read()));
}

void avgpool::thread_tmp_10_V_6_fu_5249_p2() {
    tmp_10_V_6_fu_5249_p2 = (!zext_ln415_371_fu_5246_p1.read().is_01() || !trunc_ln708_368_reg_15933.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_371_fu_5246_p1.read()) + sc_biguint<16>(trunc_ln708_368_reg_15933.read()));
}

void avgpool::thread_tmp_10_V_7_fu_5360_p3() {
    tmp_10_V_7_fu_5360_p3 = (!and_ln786_700_fu_5329_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_700_fu_5329_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_10_V_6_fu_5249_p2.read());
}

void avgpool::thread_tmp_10_V_8_fu_5368_p3() {
    tmp_10_V_8_fu_5368_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_21_fu_5235_p1.read(): tmp_10_V_7_fu_5360_p3.read());
}

void avgpool::thread_tmp_10_V_9_fu_5381_p3() {
    tmp_10_V_9_fu_5381_p3 = (!and_ln340_105_fu_5375_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_105_fu_5375_p2.read()[0].to_bool())? select_ln340_462_fu_5352_p3.read(): tmp_10_V_8_fu_5368_p3.read());
}

void avgpool::thread_tmp_10_V_fu_5229_p2() {
    tmp_10_V_fu_5229_p2 = (!sext_ln415_20_fu_5223_p1.read().is_01() || !zext_ln415_370_fu_5226_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_20_fu_5223_p1.read()) + sc_biguint<12>(zext_ln415_370_fu_5226_p1.read()));
}

void avgpool::thread_tmp_11_V_6_fu_5415_p2() {
    tmp_11_V_6_fu_5415_p2 = (!zext_ln415_373_fu_5412_p1.read().is_01() || !trunc_ln708_370_reg_15966.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_373_fu_5412_p1.read()) + sc_biguint<16>(trunc_ln708_370_reg_15966.read()));
}

void avgpool::thread_tmp_11_V_7_fu_5526_p3() {
    tmp_11_V_7_fu_5526_p3 = (!and_ln786_702_fu_5495_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_702_fu_5495_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_11_V_6_fu_5415_p2.read());
}

void avgpool::thread_tmp_11_V_8_fu_5534_p3() {
    tmp_11_V_8_fu_5534_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_23_fu_5401_p1.read(): tmp_11_V_7_fu_5526_p3.read());
}

void avgpool::thread_tmp_11_V_9_fu_5547_p3() {
    tmp_11_V_9_fu_5547_p3 = (!and_ln340_106_fu_5541_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_106_fu_5541_p2.read()[0].to_bool())? select_ln340_463_fu_5518_p3.read(): tmp_11_V_8_fu_5534_p3.read());
}

void avgpool::thread_tmp_11_V_fu_5395_p2() {
    tmp_11_V_fu_5395_p2 = (!sext_ln415_22_fu_5389_p1.read().is_01() || !zext_ln415_372_fu_5392_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_22_fu_5389_p1.read()) + sc_biguint<12>(zext_ln415_372_fu_5392_p1.read()));
}

void avgpool::thread_tmp_12_V_6_fu_5581_p2() {
    tmp_12_V_6_fu_5581_p2 = (!zext_ln415_375_fu_5578_p1.read().is_01() || !trunc_ln708_372_reg_15999.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_375_fu_5578_p1.read()) + sc_biguint<16>(trunc_ln708_372_reg_15999.read()));
}

void avgpool::thread_tmp_12_V_7_fu_5692_p3() {
    tmp_12_V_7_fu_5692_p3 = (!and_ln786_704_fu_5661_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_704_fu_5661_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_12_V_6_fu_5581_p2.read());
}

void avgpool::thread_tmp_12_V_8_fu_5700_p3() {
    tmp_12_V_8_fu_5700_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_25_fu_5567_p1.read(): tmp_12_V_7_fu_5692_p3.read());
}

void avgpool::thread_tmp_12_V_9_fu_5713_p3() {
    tmp_12_V_9_fu_5713_p3 = (!and_ln340_107_fu_5707_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_107_fu_5707_p2.read()[0].to_bool())? select_ln340_464_fu_5684_p3.read(): tmp_12_V_8_fu_5700_p3.read());
}

void avgpool::thread_tmp_12_V_fu_5561_p2() {
    tmp_12_V_fu_5561_p2 = (!sext_ln415_24_fu_5555_p1.read().is_01() || !zext_ln415_374_fu_5558_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_24_fu_5555_p1.read()) + sc_biguint<12>(zext_ln415_374_fu_5558_p1.read()));
}

void avgpool::thread_tmp_13_V_6_fu_5747_p2() {
    tmp_13_V_6_fu_5747_p2 = (!zext_ln415_377_fu_5744_p1.read().is_01() || !trunc_ln708_374_reg_16032.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_377_fu_5744_p1.read()) + sc_biguint<16>(trunc_ln708_374_reg_16032.read()));
}

void avgpool::thread_tmp_13_V_7_fu_5858_p3() {
    tmp_13_V_7_fu_5858_p3 = (!and_ln786_706_fu_5827_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_706_fu_5827_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_13_V_6_fu_5747_p2.read());
}

void avgpool::thread_tmp_13_V_8_fu_5866_p3() {
    tmp_13_V_8_fu_5866_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_27_fu_5733_p1.read(): tmp_13_V_7_fu_5858_p3.read());
}

void avgpool::thread_tmp_13_V_9_fu_5879_p3() {
    tmp_13_V_9_fu_5879_p3 = (!and_ln340_108_fu_5873_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_108_fu_5873_p2.read()[0].to_bool())? select_ln340_465_fu_5850_p3.read(): tmp_13_V_8_fu_5866_p3.read());
}

void avgpool::thread_tmp_13_V_fu_5727_p2() {
    tmp_13_V_fu_5727_p2 = (!sext_ln415_26_fu_5721_p1.read().is_01() || !zext_ln415_376_fu_5724_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_26_fu_5721_p1.read()) + sc_biguint<12>(zext_ln415_376_fu_5724_p1.read()));
}

void avgpool::thread_tmp_14_V_6_fu_5913_p2() {
    tmp_14_V_6_fu_5913_p2 = (!zext_ln415_379_fu_5910_p1.read().is_01() || !trunc_ln708_376_reg_16065.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_379_fu_5910_p1.read()) + sc_biguint<16>(trunc_ln708_376_reg_16065.read()));
}

void avgpool::thread_tmp_14_V_7_fu_6024_p3() {
    tmp_14_V_7_fu_6024_p3 = (!and_ln786_708_fu_5993_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_708_fu_5993_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_14_V_6_fu_5913_p2.read());
}

void avgpool::thread_tmp_14_V_8_fu_6032_p3() {
    tmp_14_V_8_fu_6032_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_29_fu_5899_p1.read(): tmp_14_V_7_fu_6024_p3.read());
}

void avgpool::thread_tmp_14_V_9_fu_6045_p3() {
    tmp_14_V_9_fu_6045_p3 = (!and_ln340_109_fu_6039_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_109_fu_6039_p2.read()[0].to_bool())? select_ln340_466_fu_6016_p3.read(): tmp_14_V_8_fu_6032_p3.read());
}

void avgpool::thread_tmp_14_V_fu_5893_p2() {
    tmp_14_V_fu_5893_p2 = (!sext_ln415_28_fu_5887_p1.read().is_01() || !zext_ln415_378_fu_5890_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_28_fu_5887_p1.read()) + sc_biguint<12>(zext_ln415_378_fu_5890_p1.read()));
}

void avgpool::thread_tmp_15_V_6_fu_6079_p2() {
    tmp_15_V_6_fu_6079_p2 = (!zext_ln415_381_fu_6076_p1.read().is_01() || !trunc_ln708_378_reg_16098.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_381_fu_6076_p1.read()) + sc_biguint<16>(trunc_ln708_378_reg_16098.read()));
}

void avgpool::thread_tmp_15_V_7_fu_6190_p3() {
    tmp_15_V_7_fu_6190_p3 = (!and_ln786_710_fu_6159_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_710_fu_6159_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_15_V_6_fu_6079_p2.read());
}

void avgpool::thread_tmp_15_V_8_fu_6198_p3() {
    tmp_15_V_8_fu_6198_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_31_fu_6065_p1.read(): tmp_15_V_7_fu_6190_p3.read());
}

void avgpool::thread_tmp_15_V_9_fu_6211_p3() {
    tmp_15_V_9_fu_6211_p3 = (!and_ln340_110_fu_6205_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_110_fu_6205_p2.read()[0].to_bool())? select_ln340_467_fu_6182_p3.read(): tmp_15_V_8_fu_6198_p3.read());
}

void avgpool::thread_tmp_15_V_fu_6059_p2() {
    tmp_15_V_fu_6059_p2 = (!sext_ln415_30_fu_6053_p1.read().is_01() || !zext_ln415_380_fu_6056_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_30_fu_6053_p1.read()) + sc_biguint<12>(zext_ln415_380_fu_6056_p1.read()));
}

void avgpool::thread_tmp_16_V_6_fu_6245_p2() {
    tmp_16_V_6_fu_6245_p2 = (!zext_ln415_383_fu_6242_p1.read().is_01() || !trunc_ln708_380_reg_16131.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_383_fu_6242_p1.read()) + sc_biguint<16>(trunc_ln708_380_reg_16131.read()));
}

void avgpool::thread_tmp_16_V_7_fu_6356_p3() {
    tmp_16_V_7_fu_6356_p3 = (!and_ln786_712_fu_6325_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_712_fu_6325_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_16_V_6_fu_6245_p2.read());
}

void avgpool::thread_tmp_16_V_8_fu_6364_p3() {
    tmp_16_V_8_fu_6364_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_33_fu_6231_p1.read(): tmp_16_V_7_fu_6356_p3.read());
}

void avgpool::thread_tmp_16_V_9_fu_6377_p3() {
    tmp_16_V_9_fu_6377_p3 = (!and_ln340_111_fu_6371_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_111_fu_6371_p2.read()[0].to_bool())? select_ln340_468_fu_6348_p3.read(): tmp_16_V_8_fu_6364_p3.read());
}

void avgpool::thread_tmp_16_V_fu_6225_p2() {
    tmp_16_V_fu_6225_p2 = (!sext_ln415_32_fu_6219_p1.read().is_01() || !zext_ln415_382_fu_6222_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_32_fu_6219_p1.read()) + sc_biguint<12>(zext_ln415_382_fu_6222_p1.read()));
}

void avgpool::thread_tmp_17_V_6_fu_6411_p2() {
    tmp_17_V_6_fu_6411_p2 = (!zext_ln415_385_fu_6408_p1.read().is_01() || !trunc_ln708_382_reg_16164.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_385_fu_6408_p1.read()) + sc_biguint<16>(trunc_ln708_382_reg_16164.read()));
}

void avgpool::thread_tmp_17_V_7_fu_6522_p3() {
    tmp_17_V_7_fu_6522_p3 = (!and_ln786_714_fu_6491_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_714_fu_6491_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_17_V_6_fu_6411_p2.read());
}

void avgpool::thread_tmp_17_V_8_fu_6530_p3() {
    tmp_17_V_8_fu_6530_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_35_fu_6397_p1.read(): tmp_17_V_7_fu_6522_p3.read());
}

void avgpool::thread_tmp_17_V_9_fu_6543_p3() {
    tmp_17_V_9_fu_6543_p3 = (!and_ln340_112_fu_6537_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_112_fu_6537_p2.read()[0].to_bool())? select_ln340_469_fu_6514_p3.read(): tmp_17_V_8_fu_6530_p3.read());
}

void avgpool::thread_tmp_17_V_fu_6391_p2() {
    tmp_17_V_fu_6391_p2 = (!sext_ln415_34_fu_6385_p1.read().is_01() || !zext_ln415_384_fu_6388_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_34_fu_6385_p1.read()) + sc_biguint<12>(zext_ln415_384_fu_6388_p1.read()));
}

void avgpool::thread_tmp_18_V_6_fu_6577_p2() {
    tmp_18_V_6_fu_6577_p2 = (!zext_ln415_387_fu_6574_p1.read().is_01() || !trunc_ln708_384_reg_16197.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_387_fu_6574_p1.read()) + sc_biguint<16>(trunc_ln708_384_reg_16197.read()));
}

void avgpool::thread_tmp_18_V_7_fu_6688_p3() {
    tmp_18_V_7_fu_6688_p3 = (!and_ln786_716_fu_6657_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_716_fu_6657_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_18_V_6_fu_6577_p2.read());
}

void avgpool::thread_tmp_18_V_8_fu_6696_p3() {
    tmp_18_V_8_fu_6696_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_37_fu_6563_p1.read(): tmp_18_V_7_fu_6688_p3.read());
}

void avgpool::thread_tmp_18_V_9_fu_6709_p3() {
    tmp_18_V_9_fu_6709_p3 = (!and_ln340_113_fu_6703_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_113_fu_6703_p2.read()[0].to_bool())? select_ln340_470_fu_6680_p3.read(): tmp_18_V_8_fu_6696_p3.read());
}

void avgpool::thread_tmp_18_V_fu_6557_p2() {
    tmp_18_V_fu_6557_p2 = (!sext_ln415_36_fu_6551_p1.read().is_01() || !zext_ln415_386_fu_6554_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_36_fu_6551_p1.read()) + sc_biguint<12>(zext_ln415_386_fu_6554_p1.read()));
}

void avgpool::thread_tmp_19_V_6_fu_6743_p2() {
    tmp_19_V_6_fu_6743_p2 = (!zext_ln415_389_fu_6740_p1.read().is_01() || !trunc_ln708_386_reg_16230.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_389_fu_6740_p1.read()) + sc_biguint<16>(trunc_ln708_386_reg_16230.read()));
}

void avgpool::thread_tmp_19_V_7_fu_6854_p3() {
    tmp_19_V_7_fu_6854_p3 = (!and_ln786_718_fu_6823_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_718_fu_6823_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_19_V_6_fu_6743_p2.read());
}

void avgpool::thread_tmp_19_V_8_fu_6862_p3() {
    tmp_19_V_8_fu_6862_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_39_fu_6729_p1.read(): tmp_19_V_7_fu_6854_p3.read());
}

void avgpool::thread_tmp_19_V_9_fu_6875_p3() {
    tmp_19_V_9_fu_6875_p3 = (!and_ln340_114_fu_6869_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_114_fu_6869_p2.read()[0].to_bool())? select_ln340_471_fu_6846_p3.read(): tmp_19_V_8_fu_6862_p3.read());
}

void avgpool::thread_tmp_19_V_fu_6723_p2() {
    tmp_19_V_fu_6723_p2 = (!sext_ln415_38_fu_6717_p1.read().is_01() || !zext_ln415_388_fu_6720_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_38_fu_6717_p1.read()) + sc_biguint<12>(zext_ln415_388_fu_6720_p1.read()));
}

void avgpool::thread_tmp_1_V_6_fu_3755_p2() {
    tmp_1_V_6_fu_3755_p2 = (!zext_ln415_353_fu_3752_p1.read().is_01() || !trunc_ln708_350_reg_15636.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_353_fu_3752_p1.read()) + sc_biguint<16>(trunc_ln708_350_reg_15636.read()));
}

void avgpool::thread_tmp_1_V_7_fu_3866_p3() {
    tmp_1_V_7_fu_3866_p3 = (!and_ln786_682_fu_3835_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_682_fu_3835_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_1_V_6_fu_3755_p2.read());
}

void avgpool::thread_tmp_1_V_8_fu_3874_p3() {
    tmp_1_V_8_fu_3874_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_3_fu_3741_p1.read(): tmp_1_V_7_fu_3866_p3.read());
}

void avgpool::thread_tmp_1_V_9_fu_3887_p3() {
    tmp_1_V_9_fu_3887_p3 = (!and_ln340_96_fu_3881_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_96_fu_3881_p2.read()[0].to_bool())? select_ln340_453_fu_3858_p3.read(): tmp_1_V_8_fu_3874_p3.read());
}

void avgpool::thread_tmp_1_V_fu_3735_p2() {
    tmp_1_V_fu_3735_p2 = (!sext_ln415_2_fu_3729_p1.read().is_01() || !zext_ln415_352_fu_3732_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_2_fu_3729_p1.read()) + sc_biguint<12>(zext_ln415_352_fu_3732_p1.read()));
}

void avgpool::thread_tmp_20_V_6_fu_6909_p2() {
    tmp_20_V_6_fu_6909_p2 = (!zext_ln415_391_fu_6906_p1.read().is_01() || !trunc_ln708_388_reg_16263.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_391_fu_6906_p1.read()) + sc_biguint<16>(trunc_ln708_388_reg_16263.read()));
}

void avgpool::thread_tmp_20_V_7_fu_7020_p3() {
    tmp_20_V_7_fu_7020_p3 = (!and_ln786_720_fu_6989_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_720_fu_6989_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_20_V_6_fu_6909_p2.read());
}

void avgpool::thread_tmp_20_V_8_fu_7028_p3() {
    tmp_20_V_8_fu_7028_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_41_fu_6895_p1.read(): tmp_20_V_7_fu_7020_p3.read());
}

void avgpool::thread_tmp_20_V_9_fu_7041_p3() {
    tmp_20_V_9_fu_7041_p3 = (!and_ln340_115_fu_7035_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_115_fu_7035_p2.read()[0].to_bool())? select_ln340_472_fu_7012_p3.read(): tmp_20_V_8_fu_7028_p3.read());
}

void avgpool::thread_tmp_20_V_fu_6889_p2() {
    tmp_20_V_fu_6889_p2 = (!sext_ln415_40_fu_6883_p1.read().is_01() || !zext_ln415_390_fu_6886_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_40_fu_6883_p1.read()) + sc_biguint<12>(zext_ln415_390_fu_6886_p1.read()));
}

void avgpool::thread_tmp_21_V_6_fu_7075_p2() {
    tmp_21_V_6_fu_7075_p2 = (!zext_ln415_393_fu_7072_p1.read().is_01() || !trunc_ln708_390_reg_16296.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_393_fu_7072_p1.read()) + sc_biguint<16>(trunc_ln708_390_reg_16296.read()));
}

void avgpool::thread_tmp_21_V_7_fu_7186_p3() {
    tmp_21_V_7_fu_7186_p3 = (!and_ln786_722_fu_7155_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_722_fu_7155_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_21_V_6_fu_7075_p2.read());
}

void avgpool::thread_tmp_21_V_8_fu_7194_p3() {
    tmp_21_V_8_fu_7194_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_43_fu_7061_p1.read(): tmp_21_V_7_fu_7186_p3.read());
}

void avgpool::thread_tmp_21_V_9_fu_7207_p3() {
    tmp_21_V_9_fu_7207_p3 = (!and_ln340_116_fu_7201_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_116_fu_7201_p2.read()[0].to_bool())? select_ln340_473_fu_7178_p3.read(): tmp_21_V_8_fu_7194_p3.read());
}

void avgpool::thread_tmp_21_V_fu_7055_p2() {
    tmp_21_V_fu_7055_p2 = (!sext_ln415_42_fu_7049_p1.read().is_01() || !zext_ln415_392_fu_7052_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_42_fu_7049_p1.read()) + sc_biguint<12>(zext_ln415_392_fu_7052_p1.read()));
}

void avgpool::thread_tmp_22_V_6_fu_7241_p2() {
    tmp_22_V_6_fu_7241_p2 = (!zext_ln415_395_fu_7238_p1.read().is_01() || !trunc_ln708_392_reg_16329.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_395_fu_7238_p1.read()) + sc_biguint<16>(trunc_ln708_392_reg_16329.read()));
}

void avgpool::thread_tmp_22_V_7_fu_7352_p3() {
    tmp_22_V_7_fu_7352_p3 = (!and_ln786_724_fu_7321_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_724_fu_7321_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_22_V_6_fu_7241_p2.read());
}

void avgpool::thread_tmp_22_V_8_fu_7360_p3() {
    tmp_22_V_8_fu_7360_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_45_fu_7227_p1.read(): tmp_22_V_7_fu_7352_p3.read());
}

void avgpool::thread_tmp_22_V_9_fu_7373_p3() {
    tmp_22_V_9_fu_7373_p3 = (!and_ln340_117_fu_7367_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_117_fu_7367_p2.read()[0].to_bool())? select_ln340_474_fu_7344_p3.read(): tmp_22_V_8_fu_7360_p3.read());
}

void avgpool::thread_tmp_22_V_fu_7221_p2() {
    tmp_22_V_fu_7221_p2 = (!sext_ln415_44_fu_7215_p1.read().is_01() || !zext_ln415_394_fu_7218_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_44_fu_7215_p1.read()) + sc_biguint<12>(zext_ln415_394_fu_7218_p1.read()));
}

void avgpool::thread_tmp_2375_fu_1172_p3() {
    tmp_2375_fu_1172_p3 = row_tile_start.read().range(31, 31);
}

void avgpool::thread_tmp_2376_fu_1188_p3() {
    tmp_2376_fu_1188_p3 = esl_concat<2,1>(ap_const_lv2_0, trunc_ln507_1_fu_1184_p1.read());
}

void avgpool::thread_tmp_2377_fu_9055_p3() {
    tmp_2377_fu_9055_p3 = grp_load_fu_1076_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2380_fu_9165_p3() {
    tmp_2380_fu_9165_p3 = grp_load_fu_1079_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2383_fu_9275_p3() {
    tmp_2383_fu_9275_p3 = grp_load_fu_1082_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2386_fu_9385_p3() {
    tmp_2386_fu_9385_p3 = grp_load_fu_1085_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2389_fu_9495_p3() {
    tmp_2389_fu_9495_p3 = grp_load_fu_1088_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2392_fu_9605_p3() {
    tmp_2392_fu_9605_p3 = grp_load_fu_1091_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2395_fu_9715_p3() {
    tmp_2395_fu_9715_p3 = grp_load_fu_1094_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2398_fu_9825_p3() {
    tmp_2398_fu_9825_p3 = grp_load_fu_1097_p1.read().range(15, 15);
}

void avgpool::thread_tmp_23_V_6_fu_7407_p2() {
    tmp_23_V_6_fu_7407_p2 = (!zext_ln415_397_fu_7404_p1.read().is_01() || !trunc_ln708_394_reg_16362.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_397_fu_7404_p1.read()) + sc_biguint<16>(trunc_ln708_394_reg_16362.read()));
}

void avgpool::thread_tmp_23_V_7_fu_7518_p3() {
    tmp_23_V_7_fu_7518_p3 = (!and_ln786_726_fu_7487_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_726_fu_7487_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_23_V_6_fu_7407_p2.read());
}

void avgpool::thread_tmp_23_V_8_fu_7526_p3() {
    tmp_23_V_8_fu_7526_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_47_fu_7393_p1.read(): tmp_23_V_7_fu_7518_p3.read());
}

void avgpool::thread_tmp_23_V_9_fu_7539_p3() {
    tmp_23_V_9_fu_7539_p3 = (!and_ln340_118_fu_7533_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_118_fu_7533_p2.read()[0].to_bool())? select_ln340_475_fu_7510_p3.read(): tmp_23_V_8_fu_7526_p3.read());
}

void avgpool::thread_tmp_23_V_fu_7387_p2() {
    tmp_23_V_fu_7387_p2 = (!sext_ln415_46_fu_7381_p1.read().is_01() || !zext_ln415_396_fu_7384_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_46_fu_7381_p1.read()) + sc_biguint<12>(zext_ln415_396_fu_7384_p1.read()));
}

void avgpool::thread_tmp_2401_fu_9935_p3() {
    tmp_2401_fu_9935_p3 = grp_load_fu_1100_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2404_fu_10045_p3() {
    tmp_2404_fu_10045_p3 = grp_load_fu_1103_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2407_fu_10155_p3() {
    tmp_2407_fu_10155_p3 = grp_load_fu_1106_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2410_fu_10265_p3() {
    tmp_2410_fu_10265_p3 = grp_load_fu_1109_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2413_fu_10375_p3() {
    tmp_2413_fu_10375_p3 = grp_load_fu_1112_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2416_fu_10485_p3() {
    tmp_2416_fu_10485_p3 = grp_load_fu_1115_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2419_fu_10595_p3() {
    tmp_2419_fu_10595_p3 = grp_load_fu_1118_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2422_fu_10705_p3() {
    tmp_2422_fu_10705_p3 = grp_load_fu_1121_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2425_fu_10815_p3() {
    tmp_2425_fu_10815_p3 = grp_load_fu_1124_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2428_fu_10925_p3() {
    tmp_2428_fu_10925_p3 = grp_load_fu_1127_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2431_fu_11035_p3() {
    tmp_2431_fu_11035_p3 = grp_load_fu_1130_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2434_fu_11145_p3() {
    tmp_2434_fu_11145_p3 = grp_load_fu_1133_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2437_fu_11255_p3() {
    tmp_2437_fu_11255_p3 = grp_load_fu_1136_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2440_fu_11365_p3() {
    tmp_2440_fu_11365_p3 = grp_load_fu_1139_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2443_fu_11475_p3() {
    tmp_2443_fu_11475_p3 = grp_load_fu_1142_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2446_fu_11585_p3() {
    tmp_2446_fu_11585_p3 = grp_load_fu_1145_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2449_fu_11695_p3() {
    tmp_2449_fu_11695_p3 = grp_load_fu_1148_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2452_fu_11805_p3() {
    tmp_2452_fu_11805_p3 = grp_load_fu_1151_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2455_fu_11915_p3() {
    tmp_2455_fu_11915_p3 = grp_load_fu_1154_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2458_fu_12025_p3() {
    tmp_2458_fu_12025_p3 = grp_load_fu_1157_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2461_fu_12135_p3() {
    tmp_2461_fu_12135_p3 = grp_load_fu_1160_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2464_fu_12245_p3() {
    tmp_2464_fu_12245_p3 = grp_load_fu_1163_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2467_fu_12355_p3() {
    tmp_2467_fu_12355_p3 = grp_load_fu_1166_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2470_fu_12465_p3() {
    tmp_2470_fu_12465_p3 = grp_load_fu_1169_p1.read().range(15, 15);
}

void avgpool::thread_tmp_2473_fu_1456_p1() {
    tmp_2473_fu_1456_p1 = out_buf_sc_V_0_q0.read();
}

void avgpool::thread_tmp_2475_fu_3574_p3() {
    tmp_2475_fu_3574_p3 = add_ln1192_reg_15590.read().range(20, 20);
}

void avgpool::thread_tmp_2477_fu_3589_p3() {
    tmp_2477_fu_3589_p3 = tmp_0_V_6_fu_3584_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2478_fu_3609_p3() {
    tmp_2478_fu_3609_p3 = tmp_0_V_6_fu_3584_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2479_fu_1522_p1() {
    tmp_2479_fu_1522_p1 = out_buf_sc_V_1_q0.read();
}

void avgpool::thread_tmp_2481_fu_3745_p3() {
    tmp_2481_fu_3745_p3 = add_ln1192_287_reg_15623.read().range(20, 20);
}

void avgpool::thread_tmp_2483_fu_3760_p3() {
    tmp_2483_fu_3760_p3 = tmp_1_V_6_fu_3755_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2484_fu_3780_p3() {
    tmp_2484_fu_3780_p3 = tmp_1_V_6_fu_3755_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2485_fu_1588_p1() {
    tmp_2485_fu_1588_p1 = out_buf_sc_V_2_q0.read();
}

void avgpool::thread_tmp_2487_fu_3911_p3() {
    tmp_2487_fu_3911_p3 = add_ln1192_288_reg_15656.read().range(20, 20);
}

void avgpool::thread_tmp_2489_fu_3926_p3() {
    tmp_2489_fu_3926_p3 = tmp_2_V_6_fu_3921_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2490_fu_3946_p3() {
    tmp_2490_fu_3946_p3 = tmp_2_V_6_fu_3921_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2491_fu_1654_p1() {
    tmp_2491_fu_1654_p1 = out_buf_sc_V_3_q0.read();
}

void avgpool::thread_tmp_2493_fu_4077_p3() {
    tmp_2493_fu_4077_p3 = add_ln1192_289_reg_15689.read().range(20, 20);
}

void avgpool::thread_tmp_2495_fu_4092_p3() {
    tmp_2495_fu_4092_p3 = tmp_3_V_6_fu_4087_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2496_fu_4112_p3() {
    tmp_2496_fu_4112_p3 = tmp_3_V_6_fu_4087_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2497_fu_1720_p1() {
    tmp_2497_fu_1720_p1 = out_buf_sc_V_4_q0.read();
}

void avgpool::thread_tmp_2499_fu_4243_p3() {
    tmp_2499_fu_4243_p3 = add_ln1192_290_reg_15722.read().range(20, 20);
}

void avgpool::thread_tmp_24_V_6_fu_7573_p2() {
    tmp_24_V_6_fu_7573_p2 = (!zext_ln415_399_fu_7570_p1.read().is_01() || !trunc_ln708_396_reg_16395.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_399_fu_7570_p1.read()) + sc_biguint<16>(trunc_ln708_396_reg_16395.read()));
}

void avgpool::thread_tmp_24_V_7_fu_7684_p3() {
    tmp_24_V_7_fu_7684_p3 = (!and_ln786_728_fu_7653_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_728_fu_7653_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_24_V_6_fu_7573_p2.read());
}

void avgpool::thread_tmp_24_V_8_fu_7692_p3() {
    tmp_24_V_8_fu_7692_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_49_fu_7559_p1.read(): tmp_24_V_7_fu_7684_p3.read());
}

void avgpool::thread_tmp_24_V_9_fu_7705_p3() {
    tmp_24_V_9_fu_7705_p3 = (!and_ln340_119_fu_7699_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_119_fu_7699_p2.read()[0].to_bool())? select_ln340_476_fu_7676_p3.read(): tmp_24_V_8_fu_7692_p3.read());
}

void avgpool::thread_tmp_24_V_fu_7553_p2() {
    tmp_24_V_fu_7553_p2 = (!sext_ln415_48_fu_7547_p1.read().is_01() || !zext_ln415_398_fu_7550_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_48_fu_7547_p1.read()) + sc_biguint<12>(zext_ln415_398_fu_7550_p1.read()));
}

void avgpool::thread_tmp_2501_fu_4258_p3() {
    tmp_2501_fu_4258_p3 = tmp_4_V_6_fu_4253_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2502_fu_4278_p3() {
    tmp_2502_fu_4278_p3 = tmp_4_V_6_fu_4253_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2503_fu_1786_p1() {
    tmp_2503_fu_1786_p1 = out_buf_sc_V_5_q0.read();
}

void avgpool::thread_tmp_2505_fu_4409_p3() {
    tmp_2505_fu_4409_p3 = add_ln1192_291_reg_15755.read().range(20, 20);
}

void avgpool::thread_tmp_2507_fu_4424_p3() {
    tmp_2507_fu_4424_p3 = tmp_5_V_6_fu_4419_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2508_fu_4444_p3() {
    tmp_2508_fu_4444_p3 = tmp_5_V_6_fu_4419_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2509_fu_1852_p1() {
    tmp_2509_fu_1852_p1 = out_buf_sc_V_6_q0.read();
}

void avgpool::thread_tmp_2511_fu_4575_p3() {
    tmp_2511_fu_4575_p3 = add_ln1192_292_reg_15788.read().range(20, 20);
}

void avgpool::thread_tmp_2513_fu_4590_p3() {
    tmp_2513_fu_4590_p3 = tmp_6_V_6_fu_4585_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2514_fu_4610_p3() {
    tmp_2514_fu_4610_p3 = tmp_6_V_6_fu_4585_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2515_fu_1918_p1() {
    tmp_2515_fu_1918_p1 = out_buf_sc_V_7_q0.read();
}

void avgpool::thread_tmp_2517_fu_4741_p3() {
    tmp_2517_fu_4741_p3 = add_ln1192_293_reg_15821.read().range(20, 20);
}

void avgpool::thread_tmp_2519_fu_4756_p3() {
    tmp_2519_fu_4756_p3 = tmp_7_V_6_fu_4751_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2520_fu_4776_p3() {
    tmp_2520_fu_4776_p3 = tmp_7_V_6_fu_4751_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2521_fu_1984_p1() {
    tmp_2521_fu_1984_p1 = out_buf_sc_V_8_q0.read();
}

void avgpool::thread_tmp_2523_fu_4907_p3() {
    tmp_2523_fu_4907_p3 = add_ln1192_294_reg_15854.read().range(20, 20);
}

void avgpool::thread_tmp_2525_fu_4922_p3() {
    tmp_2525_fu_4922_p3 = tmp_8_V_6_fu_4917_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2526_fu_4942_p3() {
    tmp_2526_fu_4942_p3 = tmp_8_V_6_fu_4917_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2527_fu_2050_p1() {
    tmp_2527_fu_2050_p1 = out_buf_sc_V_9_q0.read();
}

void avgpool::thread_tmp_2529_fu_5073_p3() {
    tmp_2529_fu_5073_p3 = add_ln1192_295_reg_15887.read().range(20, 20);
}

void avgpool::thread_tmp_2531_fu_5088_p3() {
    tmp_2531_fu_5088_p3 = tmp_9_V_6_fu_5083_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2532_fu_5108_p3() {
    tmp_2532_fu_5108_p3 = tmp_9_V_6_fu_5083_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2533_fu_2116_p1() {
    tmp_2533_fu_2116_p1 = out_buf_sc_V_10_q0.read();
}

void avgpool::thread_tmp_2535_fu_5239_p3() {
    tmp_2535_fu_5239_p3 = add_ln1192_296_reg_15920.read().range(20, 20);
}

void avgpool::thread_tmp_2537_fu_5254_p3() {
    tmp_2537_fu_5254_p3 = tmp_10_V_6_fu_5249_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2538_fu_5274_p3() {
    tmp_2538_fu_5274_p3 = tmp_10_V_6_fu_5249_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2539_fu_2182_p1() {
    tmp_2539_fu_2182_p1 = out_buf_sc_V_11_q0.read();
}

void avgpool::thread_tmp_2541_fu_5405_p3() {
    tmp_2541_fu_5405_p3 = add_ln1192_297_reg_15953.read().range(20, 20);
}

void avgpool::thread_tmp_2543_fu_5420_p3() {
    tmp_2543_fu_5420_p3 = tmp_11_V_6_fu_5415_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2544_fu_5440_p3() {
    tmp_2544_fu_5440_p3 = tmp_11_V_6_fu_5415_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2545_fu_2248_p1() {
    tmp_2545_fu_2248_p1 = out_buf_sc_V_12_q0.read();
}

void avgpool::thread_tmp_2547_fu_5571_p3() {
    tmp_2547_fu_5571_p3 = add_ln1192_298_reg_15986.read().range(20, 20);
}

void avgpool::thread_tmp_2549_fu_5586_p3() {
    tmp_2549_fu_5586_p3 = tmp_12_V_6_fu_5581_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2550_fu_5606_p3() {
    tmp_2550_fu_5606_p3 = tmp_12_V_6_fu_5581_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2551_fu_2314_p1() {
    tmp_2551_fu_2314_p1 = out_buf_sc_V_13_q0.read();
}

void avgpool::thread_tmp_2553_fu_5737_p3() {
    tmp_2553_fu_5737_p3 = add_ln1192_299_reg_16019.read().range(20, 20);
}

void avgpool::thread_tmp_2555_fu_5752_p3() {
    tmp_2555_fu_5752_p3 = tmp_13_V_6_fu_5747_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2556_fu_5772_p3() {
    tmp_2556_fu_5772_p3 = tmp_13_V_6_fu_5747_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2557_fu_2380_p1() {
    tmp_2557_fu_2380_p1 = out_buf_sc_V_14_q0.read();
}

void avgpool::thread_tmp_2559_fu_5903_p3() {
    tmp_2559_fu_5903_p3 = add_ln1192_300_reg_16052.read().range(20, 20);
}

void avgpool::thread_tmp_2561_fu_5918_p3() {
    tmp_2561_fu_5918_p3 = tmp_14_V_6_fu_5913_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2562_fu_5938_p3() {
    tmp_2562_fu_5938_p3 = tmp_14_V_6_fu_5913_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2563_fu_2446_p1() {
    tmp_2563_fu_2446_p1 = out_buf_sc_V_15_q0.read();
}

void avgpool::thread_tmp_2565_fu_6069_p3() {
    tmp_2565_fu_6069_p3 = add_ln1192_301_reg_16085.read().range(20, 20);
}

void avgpool::thread_tmp_2567_fu_6084_p3() {
    tmp_2567_fu_6084_p3 = tmp_15_V_6_fu_6079_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2568_fu_6104_p3() {
    tmp_2568_fu_6104_p3 = tmp_15_V_6_fu_6079_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2569_fu_2512_p1() {
    tmp_2569_fu_2512_p1 = out_buf_sc_V_16_q0.read();
}

void avgpool::thread_tmp_2571_fu_6235_p3() {
    tmp_2571_fu_6235_p3 = add_ln1192_302_reg_16118.read().range(20, 20);
}

void avgpool::thread_tmp_2573_fu_6250_p3() {
    tmp_2573_fu_6250_p3 = tmp_16_V_6_fu_6245_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2574_fu_6270_p3() {
    tmp_2574_fu_6270_p3 = tmp_16_V_6_fu_6245_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2575_fu_2578_p1() {
    tmp_2575_fu_2578_p1 = out_buf_sc_V_17_q0.read();
}

void avgpool::thread_tmp_2577_fu_6401_p3() {
    tmp_2577_fu_6401_p3 = add_ln1192_303_reg_16151.read().range(20, 20);
}

void avgpool::thread_tmp_2579_fu_6416_p3() {
    tmp_2579_fu_6416_p3 = tmp_17_V_6_fu_6411_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2580_fu_6436_p3() {
    tmp_2580_fu_6436_p3 = tmp_17_V_6_fu_6411_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2581_fu_2644_p1() {
    tmp_2581_fu_2644_p1 = out_buf_sc_V_18_q0.read();
}

void avgpool::thread_tmp_2583_fu_6567_p3() {
    tmp_2583_fu_6567_p3 = add_ln1192_304_reg_16184.read().range(20, 20);
}

void avgpool::thread_tmp_2585_fu_6582_p3() {
    tmp_2585_fu_6582_p3 = tmp_18_V_6_fu_6577_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2586_fu_6602_p3() {
    tmp_2586_fu_6602_p3 = tmp_18_V_6_fu_6577_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2587_fu_2710_p1() {
    tmp_2587_fu_2710_p1 = out_buf_sc_V_19_q0.read();
}

void avgpool::thread_tmp_2589_fu_6733_p3() {
    tmp_2589_fu_6733_p3 = add_ln1192_305_reg_16217.read().range(20, 20);
}

void avgpool::thread_tmp_2591_fu_6748_p3() {
    tmp_2591_fu_6748_p3 = tmp_19_V_6_fu_6743_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2592_fu_6768_p3() {
    tmp_2592_fu_6768_p3 = tmp_19_V_6_fu_6743_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2593_fu_2776_p1() {
    tmp_2593_fu_2776_p1 = out_buf_sc_V_20_q0.read();
}

void avgpool::thread_tmp_2595_fu_6899_p3() {
    tmp_2595_fu_6899_p3 = add_ln1192_306_reg_16250.read().range(20, 20);
}

void avgpool::thread_tmp_2597_fu_6914_p3() {
    tmp_2597_fu_6914_p3 = tmp_20_V_6_fu_6909_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2598_fu_6934_p3() {
    tmp_2598_fu_6934_p3 = tmp_20_V_6_fu_6909_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2599_fu_2842_p1() {
    tmp_2599_fu_2842_p1 = out_buf_sc_V_21_q0.read();
}

void avgpool::thread_tmp_25_V_6_fu_7739_p2() {
    tmp_25_V_6_fu_7739_p2 = (!zext_ln415_401_fu_7736_p1.read().is_01() || !trunc_ln708_398_reg_16428.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_401_fu_7736_p1.read()) + sc_biguint<16>(trunc_ln708_398_reg_16428.read()));
}

void avgpool::thread_tmp_25_V_7_fu_7850_p3() {
    tmp_25_V_7_fu_7850_p3 = (!and_ln786_730_fu_7819_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_730_fu_7819_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_25_V_6_fu_7739_p2.read());
}

void avgpool::thread_tmp_25_V_8_fu_7858_p3() {
    tmp_25_V_8_fu_7858_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_51_fu_7725_p1.read(): tmp_25_V_7_fu_7850_p3.read());
}

void avgpool::thread_tmp_25_V_9_fu_7871_p3() {
    tmp_25_V_9_fu_7871_p3 = (!and_ln340_120_fu_7865_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_120_fu_7865_p2.read()[0].to_bool())? select_ln340_477_fu_7842_p3.read(): tmp_25_V_8_fu_7858_p3.read());
}

void avgpool::thread_tmp_25_V_fu_7719_p2() {
    tmp_25_V_fu_7719_p2 = (!sext_ln415_50_fu_7713_p1.read().is_01() || !zext_ln415_400_fu_7716_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_50_fu_7713_p1.read()) + sc_biguint<12>(zext_ln415_400_fu_7716_p1.read()));
}

void avgpool::thread_tmp_2601_fu_7065_p3() {
    tmp_2601_fu_7065_p3 = add_ln1192_307_reg_16283.read().range(20, 20);
}

void avgpool::thread_tmp_2603_fu_7080_p3() {
    tmp_2603_fu_7080_p3 = tmp_21_V_6_fu_7075_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2604_fu_7100_p3() {
    tmp_2604_fu_7100_p3 = tmp_21_V_6_fu_7075_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2605_fu_2908_p1() {
    tmp_2605_fu_2908_p1 = out_buf_sc_V_22_q0.read();
}

void avgpool::thread_tmp_2607_fu_7231_p3() {
    tmp_2607_fu_7231_p3 = add_ln1192_308_reg_16316.read().range(20, 20);
}

void avgpool::thread_tmp_2609_fu_7246_p3() {
    tmp_2609_fu_7246_p3 = tmp_22_V_6_fu_7241_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2610_fu_7266_p3() {
    tmp_2610_fu_7266_p3 = tmp_22_V_6_fu_7241_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2611_fu_2974_p1() {
    tmp_2611_fu_2974_p1 = out_buf_sc_V_23_q0.read();
}

void avgpool::thread_tmp_2613_fu_7397_p3() {
    tmp_2613_fu_7397_p3 = add_ln1192_309_reg_16349.read().range(20, 20);
}

void avgpool::thread_tmp_2615_fu_7412_p3() {
    tmp_2615_fu_7412_p3 = tmp_23_V_6_fu_7407_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2616_fu_7432_p3() {
    tmp_2616_fu_7432_p3 = tmp_23_V_6_fu_7407_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2617_fu_3040_p1() {
    tmp_2617_fu_3040_p1 = out_buf_sc_V_24_q0.read();
}

void avgpool::thread_tmp_2619_fu_7563_p3() {
    tmp_2619_fu_7563_p3 = add_ln1192_310_reg_16382.read().range(20, 20);
}

void avgpool::thread_tmp_2621_fu_7578_p3() {
    tmp_2621_fu_7578_p3 = tmp_24_V_6_fu_7573_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2622_fu_7598_p3() {
    tmp_2622_fu_7598_p3 = tmp_24_V_6_fu_7573_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2623_fu_3106_p1() {
    tmp_2623_fu_3106_p1 = out_buf_sc_V_25_q0.read();
}

void avgpool::thread_tmp_2625_fu_7729_p3() {
    tmp_2625_fu_7729_p3 = add_ln1192_311_reg_16415.read().range(20, 20);
}

void avgpool::thread_tmp_2627_fu_7744_p3() {
    tmp_2627_fu_7744_p3 = tmp_25_V_6_fu_7739_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2628_fu_7764_p3() {
    tmp_2628_fu_7764_p3 = tmp_25_V_6_fu_7739_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2629_fu_3172_p1() {
    tmp_2629_fu_3172_p1 = out_buf_sc_V_26_q0.read();
}

void avgpool::thread_tmp_2631_fu_7895_p3() {
    tmp_2631_fu_7895_p3 = add_ln1192_312_reg_16448.read().range(20, 20);
}

void avgpool::thread_tmp_2633_fu_7910_p3() {
    tmp_2633_fu_7910_p3 = tmp_26_V_6_fu_7905_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2634_fu_7930_p3() {
    tmp_2634_fu_7930_p3 = tmp_26_V_6_fu_7905_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2635_fu_3238_p1() {
    tmp_2635_fu_3238_p1 = out_buf_sc_V_27_q0.read();
}

void avgpool::thread_tmp_2637_fu_8061_p3() {
    tmp_2637_fu_8061_p3 = add_ln1192_313_reg_16481.read().range(20, 20);
}

void avgpool::thread_tmp_2639_fu_8076_p3() {
    tmp_2639_fu_8076_p3 = tmp_27_V_6_fu_8071_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2640_fu_8096_p3() {
    tmp_2640_fu_8096_p3 = tmp_27_V_6_fu_8071_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2641_fu_3304_p1() {
    tmp_2641_fu_3304_p1 = out_buf_sc_V_28_q0.read();
}

void avgpool::thread_tmp_2643_fu_8227_p3() {
    tmp_2643_fu_8227_p3 = add_ln1192_314_reg_16514.read().range(20, 20);
}

void avgpool::thread_tmp_2645_fu_8242_p3() {
    tmp_2645_fu_8242_p3 = tmp_28_V_6_fu_8237_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2646_fu_8262_p3() {
    tmp_2646_fu_8262_p3 = tmp_28_V_6_fu_8237_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2647_fu_3370_p1() {
    tmp_2647_fu_3370_p1 = out_buf_sc_V_29_q0.read();
}

void avgpool::thread_tmp_2649_fu_8393_p3() {
    tmp_2649_fu_8393_p3 = add_ln1192_315_reg_16547.read().range(20, 20);
}

void avgpool::thread_tmp_2651_fu_8408_p3() {
    tmp_2651_fu_8408_p3 = tmp_29_V_6_fu_8403_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2652_fu_8428_p3() {
    tmp_2652_fu_8428_p3 = tmp_29_V_6_fu_8403_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2653_fu_3436_p1() {
    tmp_2653_fu_3436_p1 = out_buf_sc_V_30_q0.read();
}

void avgpool::thread_tmp_2655_fu_8559_p3() {
    tmp_2655_fu_8559_p3 = add_ln1192_316_reg_16580.read().range(20, 20);
}

void avgpool::thread_tmp_2657_fu_8574_p3() {
    tmp_2657_fu_8574_p3 = tmp_30_V_6_fu_8569_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2658_fu_8594_p3() {
    tmp_2658_fu_8594_p3 = tmp_30_V_6_fu_8569_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2659_fu_3502_p1() {
    tmp_2659_fu_3502_p1 = out_buf_sc_V_31_q0.read();
}

void avgpool::thread_tmp_2661_fu_8725_p3() {
    tmp_2661_fu_8725_p3 = add_ln1192_317_reg_16613.read().range(20, 20);
}

void avgpool::thread_tmp_2663_fu_8740_p3() {
    tmp_2663_fu_8740_p3 = tmp_31_V_6_fu_8735_p2.read().range(15, 15);
}

void avgpool::thread_tmp_2664_fu_8760_p3() {
    tmp_2664_fu_8760_p3 = tmp_31_V_6_fu_8735_p2.read().range(15, 15);
}

void avgpool::thread_tmp_26_V_6_fu_7905_p2() {
    tmp_26_V_6_fu_7905_p2 = (!zext_ln415_403_fu_7902_p1.read().is_01() || !trunc_ln708_400_reg_16461.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_403_fu_7902_p1.read()) + sc_biguint<16>(trunc_ln708_400_reg_16461.read()));
}

void avgpool::thread_tmp_26_V_7_fu_8016_p3() {
    tmp_26_V_7_fu_8016_p3 = (!and_ln786_732_fu_7985_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_732_fu_7985_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_26_V_6_fu_7905_p2.read());
}

void avgpool::thread_tmp_26_V_8_fu_8024_p3() {
    tmp_26_V_8_fu_8024_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_53_fu_7891_p1.read(): tmp_26_V_7_fu_8016_p3.read());
}

void avgpool::thread_tmp_26_V_9_fu_8037_p3() {
    tmp_26_V_9_fu_8037_p3 = (!and_ln340_121_fu_8031_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_121_fu_8031_p2.read()[0].to_bool())? select_ln340_478_fu_8008_p3.read(): tmp_26_V_8_fu_8024_p3.read());
}

void avgpool::thread_tmp_26_V_fu_7885_p2() {
    tmp_26_V_fu_7885_p2 = (!sext_ln415_52_fu_7879_p1.read().is_01() || !zext_ln415_402_fu_7882_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_52_fu_7879_p1.read()) + sc_biguint<12>(zext_ln415_402_fu_7882_p1.read()));
}

void avgpool::thread_tmp_27_V_6_fu_8071_p2() {
    tmp_27_V_6_fu_8071_p2 = (!zext_ln415_405_fu_8068_p1.read().is_01() || !trunc_ln708_402_reg_16494.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_405_fu_8068_p1.read()) + sc_biguint<16>(trunc_ln708_402_reg_16494.read()));
}

void avgpool::thread_tmp_27_V_7_fu_8182_p3() {
    tmp_27_V_7_fu_8182_p3 = (!and_ln786_734_fu_8151_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_734_fu_8151_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_27_V_6_fu_8071_p2.read());
}

void avgpool::thread_tmp_27_V_8_fu_8190_p3() {
    tmp_27_V_8_fu_8190_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_55_fu_8057_p1.read(): tmp_27_V_7_fu_8182_p3.read());
}

void avgpool::thread_tmp_27_V_9_fu_8203_p3() {
    tmp_27_V_9_fu_8203_p3 = (!and_ln340_122_fu_8197_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_122_fu_8197_p2.read()[0].to_bool())? select_ln340_479_fu_8174_p3.read(): tmp_27_V_8_fu_8190_p3.read());
}

void avgpool::thread_tmp_27_V_fu_8051_p2() {
    tmp_27_V_fu_8051_p2 = (!sext_ln415_54_fu_8045_p1.read().is_01() || !zext_ln415_404_fu_8048_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_54_fu_8045_p1.read()) + sc_biguint<12>(zext_ln415_404_fu_8048_p1.read()));
}

void avgpool::thread_tmp_28_V_6_fu_8237_p2() {
    tmp_28_V_6_fu_8237_p2 = (!zext_ln415_407_fu_8234_p1.read().is_01() || !trunc_ln708_404_reg_16527.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_407_fu_8234_p1.read()) + sc_biguint<16>(trunc_ln708_404_reg_16527.read()));
}

void avgpool::thread_tmp_28_V_7_fu_8348_p3() {
    tmp_28_V_7_fu_8348_p3 = (!and_ln786_736_fu_8317_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_736_fu_8317_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_28_V_6_fu_8237_p2.read());
}

void avgpool::thread_tmp_28_V_8_fu_8356_p3() {
    tmp_28_V_8_fu_8356_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_57_fu_8223_p1.read(): tmp_28_V_7_fu_8348_p3.read());
}

void avgpool::thread_tmp_28_V_9_fu_8369_p3() {
    tmp_28_V_9_fu_8369_p3 = (!and_ln340_123_fu_8363_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_123_fu_8363_p2.read()[0].to_bool())? select_ln340_480_fu_8340_p3.read(): tmp_28_V_8_fu_8356_p3.read());
}

void avgpool::thread_tmp_28_V_fu_8217_p2() {
    tmp_28_V_fu_8217_p2 = (!sext_ln415_56_fu_8211_p1.read().is_01() || !zext_ln415_406_fu_8214_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_56_fu_8211_p1.read()) + sc_biguint<12>(zext_ln415_406_fu_8214_p1.read()));
}

void avgpool::thread_tmp_29_V_6_fu_8403_p2() {
    tmp_29_V_6_fu_8403_p2 = (!zext_ln415_409_fu_8400_p1.read().is_01() || !trunc_ln708_406_reg_16560.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_409_fu_8400_p1.read()) + sc_biguint<16>(trunc_ln708_406_reg_16560.read()));
}

void avgpool::thread_tmp_29_V_7_fu_8514_p3() {
    tmp_29_V_7_fu_8514_p3 = (!and_ln786_738_fu_8483_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_738_fu_8483_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_29_V_6_fu_8403_p2.read());
}

void avgpool::thread_tmp_29_V_8_fu_8522_p3() {
    tmp_29_V_8_fu_8522_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_59_fu_8389_p1.read(): tmp_29_V_7_fu_8514_p3.read());
}

void avgpool::thread_tmp_29_V_9_fu_8535_p3() {
    tmp_29_V_9_fu_8535_p3 = (!and_ln340_124_fu_8529_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_124_fu_8529_p2.read()[0].to_bool())? select_ln340_481_fu_8506_p3.read(): tmp_29_V_8_fu_8522_p3.read());
}

void avgpool::thread_tmp_29_V_fu_8383_p2() {
    tmp_29_V_fu_8383_p2 = (!sext_ln415_58_fu_8377_p1.read().is_01() || !zext_ln415_408_fu_8380_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_58_fu_8377_p1.read()) + sc_biguint<12>(zext_ln415_408_fu_8380_p1.read()));
}

void avgpool::thread_tmp_2_V_6_fu_3921_p2() {
    tmp_2_V_6_fu_3921_p2 = (!zext_ln415_355_fu_3918_p1.read().is_01() || !trunc_ln708_352_reg_15669.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_355_fu_3918_p1.read()) + sc_biguint<16>(trunc_ln708_352_reg_15669.read()));
}

void avgpool::thread_tmp_2_V_7_fu_4032_p3() {
    tmp_2_V_7_fu_4032_p3 = (!and_ln786_684_fu_4001_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_684_fu_4001_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_2_V_6_fu_3921_p2.read());
}

void avgpool::thread_tmp_2_V_8_fu_4040_p3() {
    tmp_2_V_8_fu_4040_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_5_fu_3907_p1.read(): tmp_2_V_7_fu_4032_p3.read());
}

void avgpool::thread_tmp_2_V_9_fu_4053_p3() {
    tmp_2_V_9_fu_4053_p3 = (!and_ln340_97_fu_4047_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_97_fu_4047_p2.read()[0].to_bool())? select_ln340_454_fu_4024_p3.read(): tmp_2_V_8_fu_4040_p3.read());
}

void avgpool::thread_tmp_2_V_fu_3901_p2() {
    tmp_2_V_fu_3901_p2 = (!sext_ln415_4_fu_3895_p1.read().is_01() || !zext_ln415_354_fu_3898_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_4_fu_3895_p1.read()) + sc_biguint<12>(zext_ln415_354_fu_3898_p1.read()));
}

void avgpool::thread_tmp_30_V_6_fu_8569_p2() {
    tmp_30_V_6_fu_8569_p2 = (!zext_ln415_411_fu_8566_p1.read().is_01() || !trunc_ln708_408_reg_16593.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_411_fu_8566_p1.read()) + sc_biguint<16>(trunc_ln708_408_reg_16593.read()));
}

void avgpool::thread_tmp_30_V_7_fu_8680_p3() {
    tmp_30_V_7_fu_8680_p3 = (!and_ln786_740_fu_8649_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_740_fu_8649_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_30_V_6_fu_8569_p2.read());
}

void avgpool::thread_tmp_30_V_8_fu_8688_p3() {
    tmp_30_V_8_fu_8688_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_61_fu_8555_p1.read(): tmp_30_V_7_fu_8680_p3.read());
}

void avgpool::thread_tmp_30_V_9_fu_8701_p3() {
    tmp_30_V_9_fu_8701_p3 = (!and_ln340_125_fu_8695_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_125_fu_8695_p2.read()[0].to_bool())? select_ln340_482_fu_8672_p3.read(): tmp_30_V_8_fu_8688_p3.read());
}

void avgpool::thread_tmp_30_V_fu_8549_p2() {
    tmp_30_V_fu_8549_p2 = (!sext_ln415_60_fu_8543_p1.read().is_01() || !zext_ln415_410_fu_8546_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_60_fu_8543_p1.read()) + sc_biguint<12>(zext_ln415_410_fu_8546_p1.read()));
}

void avgpool::thread_tmp_31_V_6_fu_8735_p2() {
    tmp_31_V_6_fu_8735_p2 = (!zext_ln415_413_fu_8732_p1.read().is_01() || !trunc_ln708_410_reg_16626.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_413_fu_8732_p1.read()) + sc_biguint<16>(trunc_ln708_410_reg_16626.read()));
}

void avgpool::thread_tmp_31_V_7_fu_8846_p3() {
    tmp_31_V_7_fu_8846_p3 = (!and_ln786_742_fu_8815_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_742_fu_8815_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_31_V_6_fu_8735_p2.read());
}

void avgpool::thread_tmp_31_V_8_fu_8854_p3() {
    tmp_31_V_8_fu_8854_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_63_fu_8721_p1.read(): tmp_31_V_7_fu_8846_p3.read());
}

void avgpool::thread_tmp_31_V_9_fu_8867_p3() {
    tmp_31_V_9_fu_8867_p3 = (!and_ln340_126_fu_8861_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_126_fu_8861_p2.read()[0].to_bool())? select_ln340_483_fu_8838_p3.read(): tmp_31_V_8_fu_8854_p3.read());
}

void avgpool::thread_tmp_31_V_fu_8715_p2() {
    tmp_31_V_fu_8715_p2 = (!sext_ln415_62_fu_8709_p1.read().is_01() || !zext_ln415_412_fu_8712_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_62_fu_8709_p1.read()) + sc_biguint<12>(zext_ln415_412_fu_8712_p1.read()));
}

void avgpool::thread_tmp_321_fu_1202_p3() {
    tmp_321_fu_1202_p3 = esl_concat<2,1>(ap_const_lv2_0, trunc_ln507_fu_1180_p1.read());
}

void avgpool::thread_tmp_322_fu_9069_p4() {
    tmp_322_fu_9069_p4 = sub_ln1148_fu_9063_p2.read().range(23, 9);
}

void avgpool::thread_tmp_323_fu_9179_p4() {
    tmp_323_fu_9179_p4 = sub_ln1148_2_fu_9173_p2.read().range(23, 9);
}

void avgpool::thread_tmp_324_fu_9241_p4() {
    tmp_324_fu_9241_p4 = select_ln1148_1_fu_9217_p3.read().range(15, 11);
}

void avgpool::thread_tmp_325_fu_9289_p4() {
    tmp_325_fu_9289_p4 = sub_ln1148_4_fu_9283_p2.read().range(23, 9);
}

void avgpool::thread_tmp_326_fu_9351_p4() {
    tmp_326_fu_9351_p4 = select_ln1148_2_fu_9327_p3.read().range(15, 11);
}

void avgpool::thread_tmp_327_fu_9399_p4() {
    tmp_327_fu_9399_p4 = sub_ln1148_6_fu_9393_p2.read().range(23, 9);
}

void avgpool::thread_tmp_328_fu_9461_p4() {
    tmp_328_fu_9461_p4 = select_ln1148_3_fu_9437_p3.read().range(15, 11);
}

void avgpool::thread_tmp_329_fu_9509_p4() {
    tmp_329_fu_9509_p4 = sub_ln1148_8_fu_9503_p2.read().range(23, 9);
}

void avgpool::thread_tmp_330_fu_9571_p4() {
    tmp_330_fu_9571_p4 = select_ln1148_4_fu_9547_p3.read().range(15, 11);
}

void avgpool::thread_tmp_331_fu_9619_p4() {
    tmp_331_fu_9619_p4 = sub_ln1148_10_fu_9613_p2.read().range(23, 9);
}

void avgpool::thread_tmp_332_fu_9681_p4() {
    tmp_332_fu_9681_p4 = select_ln1148_5_fu_9657_p3.read().range(15, 11);
}

void avgpool::thread_tmp_333_fu_9729_p4() {
    tmp_333_fu_9729_p4 = sub_ln1148_12_fu_9723_p2.read().range(23, 9);
}

void avgpool::thread_tmp_334_fu_9791_p4() {
    tmp_334_fu_9791_p4 = select_ln1148_6_fu_9767_p3.read().range(15, 11);
}

void avgpool::thread_tmp_335_fu_9839_p4() {
    tmp_335_fu_9839_p4 = sub_ln1148_14_fu_9833_p2.read().range(23, 9);
}

void avgpool::thread_tmp_336_fu_9901_p4() {
    tmp_336_fu_9901_p4 = select_ln1148_7_fu_9877_p3.read().range(15, 11);
}

void avgpool::thread_tmp_337_fu_9949_p4() {
    tmp_337_fu_9949_p4 = sub_ln1148_16_fu_9943_p2.read().range(23, 9);
}

void avgpool::thread_tmp_338_fu_10011_p4() {
    tmp_338_fu_10011_p4 = select_ln1148_8_fu_9987_p3.read().range(15, 11);
}

void avgpool::thread_tmp_339_fu_10059_p4() {
    tmp_339_fu_10059_p4 = sub_ln1148_18_fu_10053_p2.read().range(23, 9);
}

void avgpool::thread_tmp_340_fu_10121_p4() {
    tmp_340_fu_10121_p4 = select_ln1148_9_fu_10097_p3.read().range(15, 11);
}

void avgpool::thread_tmp_341_fu_10169_p4() {
    tmp_341_fu_10169_p4 = sub_ln1148_20_fu_10163_p2.read().range(23, 9);
}

void avgpool::thread_tmp_342_fu_10231_p4() {
    tmp_342_fu_10231_p4 = select_ln1148_10_fu_10207_p3.read().range(15, 11);
}

void avgpool::thread_tmp_343_fu_10279_p4() {
    tmp_343_fu_10279_p4 = sub_ln1148_22_fu_10273_p2.read().range(23, 9);
}

void avgpool::thread_tmp_344_fu_10341_p4() {
    tmp_344_fu_10341_p4 = select_ln1148_11_fu_10317_p3.read().range(15, 11);
}

void avgpool::thread_tmp_345_fu_10389_p4() {
    tmp_345_fu_10389_p4 = sub_ln1148_24_fu_10383_p2.read().range(23, 9);
}

void avgpool::thread_tmp_346_fu_10451_p4() {
    tmp_346_fu_10451_p4 = select_ln1148_12_fu_10427_p3.read().range(15, 11);
}

void avgpool::thread_tmp_347_fu_10499_p4() {
    tmp_347_fu_10499_p4 = sub_ln1148_26_fu_10493_p2.read().range(23, 9);
}

void avgpool::thread_tmp_348_fu_10561_p4() {
    tmp_348_fu_10561_p4 = select_ln1148_13_fu_10537_p3.read().range(15, 11);
}

void avgpool::thread_tmp_349_fu_10609_p4() {
    tmp_349_fu_10609_p4 = sub_ln1148_28_fu_10603_p2.read().range(23, 9);
}

void avgpool::thread_tmp_350_fu_10671_p4() {
    tmp_350_fu_10671_p4 = select_ln1148_14_fu_10647_p3.read().range(15, 11);
}

void avgpool::thread_tmp_351_fu_10719_p4() {
    tmp_351_fu_10719_p4 = sub_ln1148_30_fu_10713_p2.read().range(23, 9);
}

void avgpool::thread_tmp_352_fu_10781_p4() {
    tmp_352_fu_10781_p4 = select_ln1148_15_fu_10757_p3.read().range(15, 11);
}

void avgpool::thread_tmp_353_fu_10829_p4() {
    tmp_353_fu_10829_p4 = sub_ln1148_32_fu_10823_p2.read().range(23, 9);
}

void avgpool::thread_tmp_354_fu_10891_p4() {
    tmp_354_fu_10891_p4 = select_ln1148_16_fu_10867_p3.read().range(15, 11);
}

void avgpool::thread_tmp_355_fu_10939_p4() {
    tmp_355_fu_10939_p4 = sub_ln1148_34_fu_10933_p2.read().range(23, 9);
}

void avgpool::thread_tmp_356_fu_11001_p4() {
    tmp_356_fu_11001_p4 = select_ln1148_17_fu_10977_p3.read().range(15, 11);
}

void avgpool::thread_tmp_357_fu_11049_p4() {
    tmp_357_fu_11049_p4 = sub_ln1148_36_fu_11043_p2.read().range(23, 9);
}

void avgpool::thread_tmp_358_fu_11111_p4() {
    tmp_358_fu_11111_p4 = select_ln1148_18_fu_11087_p3.read().range(15, 11);
}

void avgpool::thread_tmp_359_fu_11159_p4() {
    tmp_359_fu_11159_p4 = sub_ln1148_38_fu_11153_p2.read().range(23, 9);
}

void avgpool::thread_tmp_360_fu_11221_p4() {
    tmp_360_fu_11221_p4 = select_ln1148_19_fu_11197_p3.read().range(15, 11);
}

void avgpool::thread_tmp_361_fu_11269_p4() {
    tmp_361_fu_11269_p4 = sub_ln1148_40_fu_11263_p2.read().range(23, 9);
}

void avgpool::thread_tmp_362_fu_11331_p4() {
    tmp_362_fu_11331_p4 = select_ln1148_20_fu_11307_p3.read().range(15, 11);
}

void avgpool::thread_tmp_363_fu_11379_p4() {
    tmp_363_fu_11379_p4 = sub_ln1148_42_fu_11373_p2.read().range(23, 9);
}

void avgpool::thread_tmp_364_fu_11441_p4() {
    tmp_364_fu_11441_p4 = select_ln1148_21_fu_11417_p3.read().range(15, 11);
}

void avgpool::thread_tmp_365_fu_11489_p4() {
    tmp_365_fu_11489_p4 = sub_ln1148_44_fu_11483_p2.read().range(23, 9);
}

void avgpool::thread_tmp_366_fu_11551_p4() {
    tmp_366_fu_11551_p4 = select_ln1148_22_fu_11527_p3.read().range(15, 11);
}

void avgpool::thread_tmp_367_fu_11599_p4() {
    tmp_367_fu_11599_p4 = sub_ln1148_46_fu_11593_p2.read().range(23, 9);
}

void avgpool::thread_tmp_368_fu_11661_p4() {
    tmp_368_fu_11661_p4 = select_ln1148_23_fu_11637_p3.read().range(15, 11);
}

void avgpool::thread_tmp_369_fu_11709_p4() {
    tmp_369_fu_11709_p4 = sub_ln1148_48_fu_11703_p2.read().range(23, 9);
}

void avgpool::thread_tmp_370_fu_11771_p4() {
    tmp_370_fu_11771_p4 = select_ln1148_24_fu_11747_p3.read().range(15, 11);
}

void avgpool::thread_tmp_371_fu_11819_p4() {
    tmp_371_fu_11819_p4 = sub_ln1148_50_fu_11813_p2.read().range(23, 9);
}

void avgpool::thread_tmp_372_fu_11881_p4() {
    tmp_372_fu_11881_p4 = select_ln1148_25_fu_11857_p3.read().range(15, 11);
}

void avgpool::thread_tmp_373_fu_11929_p4() {
    tmp_373_fu_11929_p4 = sub_ln1148_52_fu_11923_p2.read().range(23, 9);
}

void avgpool::thread_tmp_374_fu_11991_p4() {
    tmp_374_fu_11991_p4 = select_ln1148_26_fu_11967_p3.read().range(15, 11);
}

void avgpool::thread_tmp_375_fu_12039_p4() {
    tmp_375_fu_12039_p4 = sub_ln1148_54_fu_12033_p2.read().range(23, 9);
}

void avgpool::thread_tmp_376_fu_12101_p4() {
    tmp_376_fu_12101_p4 = select_ln1148_27_fu_12077_p3.read().range(15, 11);
}

void avgpool::thread_tmp_377_fu_12149_p4() {
    tmp_377_fu_12149_p4 = sub_ln1148_56_fu_12143_p2.read().range(23, 9);
}

void avgpool::thread_tmp_378_fu_12211_p4() {
    tmp_378_fu_12211_p4 = select_ln1148_28_fu_12187_p3.read().range(15, 11);
}

void avgpool::thread_tmp_379_fu_12259_p4() {
    tmp_379_fu_12259_p4 = sub_ln1148_58_fu_12253_p2.read().range(23, 9);
}

void avgpool::thread_tmp_380_fu_12321_p4() {
    tmp_380_fu_12321_p4 = select_ln1148_29_fu_12297_p3.read().range(15, 11);
}

void avgpool::thread_tmp_381_fu_12369_p4() {
    tmp_381_fu_12369_p4 = sub_ln1148_60_fu_12363_p2.read().range(23, 9);
}

void avgpool::thread_tmp_382_fu_12431_p4() {
    tmp_382_fu_12431_p4 = select_ln1148_30_fu_12407_p3.read().range(15, 11);
}

void avgpool::thread_tmp_383_fu_12479_p4() {
    tmp_383_fu_12479_p4 = sub_ln1148_62_fu_12473_p2.read().range(23, 9);
}

void avgpool::thread_tmp_384_fu_12541_p4() {
    tmp_384_fu_12541_p4 = select_ln1148_31_fu_12517_p3.read().range(15, 11);
}

void avgpool::thread_tmp_3_V_6_fu_4087_p2() {
    tmp_3_V_6_fu_4087_p2 = (!zext_ln415_357_fu_4084_p1.read().is_01() || !trunc_ln708_354_reg_15702.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_357_fu_4084_p1.read()) + sc_biguint<16>(trunc_ln708_354_reg_15702.read()));
}

void avgpool::thread_tmp_3_V_7_fu_4198_p3() {
    tmp_3_V_7_fu_4198_p3 = (!and_ln786_686_fu_4167_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_686_fu_4167_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_3_V_6_fu_4087_p2.read());
}

void avgpool::thread_tmp_3_V_8_fu_4206_p3() {
    tmp_3_V_8_fu_4206_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_7_fu_4073_p1.read(): tmp_3_V_7_fu_4198_p3.read());
}

void avgpool::thread_tmp_3_V_9_fu_4219_p3() {
    tmp_3_V_9_fu_4219_p3 = (!and_ln340_98_fu_4213_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_98_fu_4213_p2.read()[0].to_bool())? select_ln340_455_fu_4190_p3.read(): tmp_3_V_8_fu_4206_p3.read());
}

void avgpool::thread_tmp_3_V_fu_4067_p2() {
    tmp_3_V_fu_4067_p2 = (!sext_ln415_6_fu_4061_p1.read().is_01() || !zext_ln415_356_fu_4064_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_6_fu_4061_p1.read()) + sc_biguint<12>(zext_ln415_356_fu_4064_p1.read()));
}

void avgpool::thread_tmp_4_V_6_fu_4253_p2() {
    tmp_4_V_6_fu_4253_p2 = (!zext_ln415_359_fu_4250_p1.read().is_01() || !trunc_ln708_356_reg_15735.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_359_fu_4250_p1.read()) + sc_biguint<16>(trunc_ln708_356_reg_15735.read()));
}

void avgpool::thread_tmp_4_V_7_fu_4364_p3() {
    tmp_4_V_7_fu_4364_p3 = (!and_ln786_688_fu_4333_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_688_fu_4333_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_4_V_6_fu_4253_p2.read());
}

void avgpool::thread_tmp_4_V_8_fu_4372_p3() {
    tmp_4_V_8_fu_4372_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_9_fu_4239_p1.read(): tmp_4_V_7_fu_4364_p3.read());
}

void avgpool::thread_tmp_4_V_9_fu_4385_p3() {
    tmp_4_V_9_fu_4385_p3 = (!and_ln340_99_fu_4379_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_99_fu_4379_p2.read()[0].to_bool())? select_ln340_456_fu_4356_p3.read(): tmp_4_V_8_fu_4372_p3.read());
}

void avgpool::thread_tmp_4_V_fu_4233_p2() {
    tmp_4_V_fu_4233_p2 = (!sext_ln415_8_fu_4227_p1.read().is_01() || !zext_ln415_358_fu_4230_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_8_fu_4227_p1.read()) + sc_biguint<12>(zext_ln415_358_fu_4230_p1.read()));
}

void avgpool::thread_tmp_5_V_6_fu_4419_p2() {
    tmp_5_V_6_fu_4419_p2 = (!zext_ln415_361_fu_4416_p1.read().is_01() || !trunc_ln708_358_reg_15768.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_361_fu_4416_p1.read()) + sc_biguint<16>(trunc_ln708_358_reg_15768.read()));
}

void avgpool::thread_tmp_5_V_7_fu_4530_p3() {
    tmp_5_V_7_fu_4530_p3 = (!and_ln786_690_fu_4499_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_690_fu_4499_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_5_V_6_fu_4419_p2.read());
}

void avgpool::thread_tmp_5_V_8_fu_4538_p3() {
    tmp_5_V_8_fu_4538_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_11_fu_4405_p1.read(): tmp_5_V_7_fu_4530_p3.read());
}

void avgpool::thread_tmp_5_V_9_fu_4551_p3() {
    tmp_5_V_9_fu_4551_p3 = (!and_ln340_100_fu_4545_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_100_fu_4545_p2.read()[0].to_bool())? select_ln340_457_fu_4522_p3.read(): tmp_5_V_8_fu_4538_p3.read());
}

void avgpool::thread_tmp_5_V_fu_4399_p2() {
    tmp_5_V_fu_4399_p2 = (!sext_ln415_10_fu_4393_p1.read().is_01() || !zext_ln415_360_fu_4396_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_10_fu_4393_p1.read()) + sc_biguint<12>(zext_ln415_360_fu_4396_p1.read()));
}

void avgpool::thread_tmp_6_V_6_fu_4585_p2() {
    tmp_6_V_6_fu_4585_p2 = (!zext_ln415_363_fu_4582_p1.read().is_01() || !trunc_ln708_360_reg_15801.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_363_fu_4582_p1.read()) + sc_biguint<16>(trunc_ln708_360_reg_15801.read()));
}

void avgpool::thread_tmp_6_V_7_fu_4696_p3() {
    tmp_6_V_7_fu_4696_p3 = (!and_ln786_692_fu_4665_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_692_fu_4665_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_6_V_6_fu_4585_p2.read());
}

void avgpool::thread_tmp_6_V_8_fu_4704_p3() {
    tmp_6_V_8_fu_4704_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_13_fu_4571_p1.read(): tmp_6_V_7_fu_4696_p3.read());
}

void avgpool::thread_tmp_6_V_9_fu_4717_p3() {
    tmp_6_V_9_fu_4717_p3 = (!and_ln340_101_fu_4711_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_101_fu_4711_p2.read()[0].to_bool())? select_ln340_458_fu_4688_p3.read(): tmp_6_V_8_fu_4704_p3.read());
}

void avgpool::thread_tmp_6_V_fu_4565_p2() {
    tmp_6_V_fu_4565_p2 = (!sext_ln415_12_fu_4559_p1.read().is_01() || !zext_ln415_362_fu_4562_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_12_fu_4559_p1.read()) + sc_biguint<12>(zext_ln415_362_fu_4562_p1.read()));
}

void avgpool::thread_tmp_7_V_6_fu_4751_p2() {
    tmp_7_V_6_fu_4751_p2 = (!zext_ln415_365_fu_4748_p1.read().is_01() || !trunc_ln708_362_reg_15834.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_365_fu_4748_p1.read()) + sc_biguint<16>(trunc_ln708_362_reg_15834.read()));
}

void avgpool::thread_tmp_7_V_7_fu_4862_p3() {
    tmp_7_V_7_fu_4862_p3 = (!and_ln786_694_fu_4831_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_694_fu_4831_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_7_V_6_fu_4751_p2.read());
}

void avgpool::thread_tmp_7_V_8_fu_4870_p3() {
    tmp_7_V_8_fu_4870_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_15_fu_4737_p1.read(): tmp_7_V_7_fu_4862_p3.read());
}

void avgpool::thread_tmp_7_V_9_fu_4883_p3() {
    tmp_7_V_9_fu_4883_p3 = (!and_ln340_102_fu_4877_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_102_fu_4877_p2.read()[0].to_bool())? select_ln340_459_fu_4854_p3.read(): tmp_7_V_8_fu_4870_p3.read());
}

void avgpool::thread_tmp_7_V_fu_4731_p2() {
    tmp_7_V_fu_4731_p2 = (!sext_ln415_14_fu_4725_p1.read().is_01() || !zext_ln415_364_fu_4728_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_14_fu_4725_p1.read()) + sc_biguint<12>(zext_ln415_364_fu_4728_p1.read()));
}

void avgpool::thread_tmp_8_V_6_fu_4917_p2() {
    tmp_8_V_6_fu_4917_p2 = (!zext_ln415_367_fu_4914_p1.read().is_01() || !trunc_ln708_364_reg_15867.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_367_fu_4914_p1.read()) + sc_biguint<16>(trunc_ln708_364_reg_15867.read()));
}

void avgpool::thread_tmp_8_V_7_fu_5028_p3() {
    tmp_8_V_7_fu_5028_p3 = (!and_ln786_696_fu_4997_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_696_fu_4997_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_8_V_6_fu_4917_p2.read());
}

void avgpool::thread_tmp_8_V_8_fu_5036_p3() {
    tmp_8_V_8_fu_5036_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_17_fu_4903_p1.read(): tmp_8_V_7_fu_5028_p3.read());
}

void avgpool::thread_tmp_8_V_9_fu_5049_p3() {
    tmp_8_V_9_fu_5049_p3 = (!and_ln340_103_fu_5043_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_103_fu_5043_p2.read()[0].to_bool())? select_ln340_460_fu_5020_p3.read(): tmp_8_V_8_fu_5036_p3.read());
}

void avgpool::thread_tmp_8_V_fu_4897_p2() {
    tmp_8_V_fu_4897_p2 = (!sext_ln415_16_fu_4891_p1.read().is_01() || !zext_ln415_366_fu_4894_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_16_fu_4891_p1.read()) + sc_biguint<12>(zext_ln415_366_fu_4894_p1.read()));
}

void avgpool::thread_tmp_9_V_6_fu_5083_p2() {
    tmp_9_V_6_fu_5083_p2 = (!zext_ln415_369_fu_5080_p1.read().is_01() || !trunc_ln708_366_reg_15900.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_369_fu_5080_p1.read()) + sc_biguint<16>(trunc_ln708_366_reg_15900.read()));
}

void avgpool::thread_tmp_9_V_7_fu_5194_p3() {
    tmp_9_V_7_fu_5194_p3 = (!and_ln786_698_fu_5163_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_698_fu_5163_p2.read()[0].to_bool())? ap_const_lv16_8000: tmp_9_V_6_fu_5083_p2.read());
}

void avgpool::thread_tmp_9_V_8_fu_5202_p3() {
    tmp_9_V_8_fu_5202_p3 = (!icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln525_reg_15373_pp0_iter3_reg.read()[0].to_bool())? sext_ln415_19_fu_5069_p1.read(): tmp_9_V_7_fu_5194_p3.read());
}

void avgpool::thread_tmp_9_V_9_fu_5215_p3() {
    tmp_9_V_9_fu_5215_p3 = (!and_ln340_104_fu_5209_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln340_104_fu_5209_p2.read()[0].to_bool())? select_ln340_461_fu_5186_p3.read(): tmp_9_V_8_fu_5202_p3.read());
}

void avgpool::thread_tmp_9_V_fu_5063_p2() {
    tmp_9_V_fu_5063_p2 = (!sext_ln415_18_fu_5057_p1.read().is_01() || !zext_ln415_368_fu_5060_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln415_18_fu_5057_p1.read()) + sc_biguint<12>(zext_ln415_368_fu_5060_p1.read()));
}

void avgpool::thread_tmp_s_fu_9131_p4() {
    tmp_s_fu_9131_p4 = select_ln1148_fu_9107_p3.read().range(15, 11);
}

void avgpool::thread_trunc_ln1148_10_fu_10189_p4() {
    trunc_ln1148_10_fu_10189_p4 = grp_load_fu_1106_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_11_fu_10299_p4() {
    trunc_ln1148_11_fu_10299_p4 = grp_load_fu_1109_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_12_fu_10409_p4() {
    trunc_ln1148_12_fu_10409_p4 = grp_load_fu_1112_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_13_fu_10519_p4() {
    trunc_ln1148_13_fu_10519_p4 = grp_load_fu_1115_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_14_fu_10629_p4() {
    trunc_ln1148_14_fu_10629_p4 = grp_load_fu_1118_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_15_fu_10739_p4() {
    trunc_ln1148_15_fu_10739_p4 = grp_load_fu_1121_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_16_fu_10849_p4() {
    trunc_ln1148_16_fu_10849_p4 = grp_load_fu_1124_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_17_fu_10959_p4() {
    trunc_ln1148_17_fu_10959_p4 = grp_load_fu_1127_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_18_fu_11069_p4() {
    trunc_ln1148_18_fu_11069_p4 = grp_load_fu_1130_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_19_fu_11179_p4() {
    trunc_ln1148_19_fu_11179_p4 = grp_load_fu_1133_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_1_fu_9089_p4() {
    trunc_ln1148_1_fu_9089_p4 = grp_load_fu_1076_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_20_fu_11289_p4() {
    trunc_ln1148_20_fu_11289_p4 = grp_load_fu_1136_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_21_fu_11399_p4() {
    trunc_ln1148_21_fu_11399_p4 = grp_load_fu_1139_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_22_fu_11509_p4() {
    trunc_ln1148_22_fu_11509_p4 = grp_load_fu_1142_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_23_fu_11619_p4() {
    trunc_ln1148_23_fu_11619_p4 = grp_load_fu_1145_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_24_fu_11729_p4() {
    trunc_ln1148_24_fu_11729_p4 = grp_load_fu_1148_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_25_fu_11839_p4() {
    trunc_ln1148_25_fu_11839_p4 = grp_load_fu_1151_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_26_fu_11949_p4() {
    trunc_ln1148_26_fu_11949_p4 = grp_load_fu_1154_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_27_fu_12059_p4() {
    trunc_ln1148_27_fu_12059_p4 = grp_load_fu_1157_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_28_fu_12169_p4() {
    trunc_ln1148_28_fu_12169_p4 = grp_load_fu_1160_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_29_fu_12279_p4() {
    trunc_ln1148_29_fu_12279_p4 = grp_load_fu_1163_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_2_fu_9749_p4() {
    trunc_ln1148_2_fu_9749_p4 = grp_load_fu_1094_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_30_fu_12389_p4() {
    trunc_ln1148_30_fu_12389_p4 = grp_load_fu_1166_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_31_fu_12499_p4() {
    trunc_ln1148_31_fu_12499_p4 = grp_load_fu_1169_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_3_fu_9199_p4() {
    trunc_ln1148_3_fu_9199_p4 = grp_load_fu_1079_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_4_fu_9859_p4() {
    trunc_ln1148_4_fu_9859_p4 = grp_load_fu_1097_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_5_fu_9309_p4() {
    trunc_ln1148_5_fu_9309_p4 = grp_load_fu_1082_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_6_fu_9969_p4() {
    trunc_ln1148_6_fu_9969_p4 = grp_load_fu_1100_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_7_fu_9419_p4() {
    trunc_ln1148_7_fu_9419_p4 = grp_load_fu_1085_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_8_fu_10079_p4() {
    trunc_ln1148_8_fu_10079_p4 = grp_load_fu_1103_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_9_fu_9529_p4() {
    trunc_ln1148_9_fu_9529_p4 = grp_load_fu_1088_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln1148_s_fu_9639_p4() {
    trunc_ln1148_s_fu_9639_p4 = grp_load_fu_1091_p1.read().range(15, 2);
}

void avgpool::thread_trunc_ln507_1_fu_1184_p1() {
    trunc_ln507_1_fu_1184_p1 = row_tile_start.read().range(1-1, 0);
}

void avgpool::thread_trunc_ln507_fu_1180_p1() {
    trunc_ln507_fu_1180_p1 = row_tile_start.read().range(1-1, 0);
}

void avgpool::thread_trunc_ln515_3_fu_1218_p4() {
    trunc_ln515_3_fu_1218_p4 = H_fmap.read().range(6, 1);
}

void avgpool::thread_trunc_ln708_349_fu_1512_p1() {
    trunc_ln708_349_fu_1512_p1 = out_buf_sc_V_1_q0.read();
}

void avgpool::thread_trunc_ln708_351_fu_1578_p1() {
    trunc_ln708_351_fu_1578_p1 = out_buf_sc_V_2_q0.read();
}

void avgpool::thread_trunc_ln708_353_fu_1644_p1() {
    trunc_ln708_353_fu_1644_p1 = out_buf_sc_V_3_q0.read();
}

void avgpool::thread_trunc_ln708_355_fu_1710_p1() {
    trunc_ln708_355_fu_1710_p1 = out_buf_sc_V_4_q0.read();
}

void avgpool::thread_trunc_ln708_357_fu_1776_p1() {
    trunc_ln708_357_fu_1776_p1 = out_buf_sc_V_5_q0.read();
}

void avgpool::thread_trunc_ln708_359_fu_1842_p1() {
    trunc_ln708_359_fu_1842_p1 = out_buf_sc_V_6_q0.read();
}

void avgpool::thread_trunc_ln708_361_fu_1908_p1() {
    trunc_ln708_361_fu_1908_p1 = out_buf_sc_V_7_q0.read();
}

void avgpool::thread_trunc_ln708_363_fu_1974_p1() {
    trunc_ln708_363_fu_1974_p1 = out_buf_sc_V_8_q0.read();
}

void avgpool::thread_trunc_ln708_365_fu_2040_p1() {
    trunc_ln708_365_fu_2040_p1 = out_buf_sc_V_9_q0.read();
}

void avgpool::thread_trunc_ln708_367_fu_2106_p1() {
    trunc_ln708_367_fu_2106_p1 = out_buf_sc_V_10_q0.read();
}

void avgpool::thread_trunc_ln708_369_fu_2172_p1() {
    trunc_ln708_369_fu_2172_p1 = out_buf_sc_V_11_q0.read();
}

void avgpool::thread_trunc_ln708_371_fu_2238_p1() {
    trunc_ln708_371_fu_2238_p1 = out_buf_sc_V_12_q0.read();
}

void avgpool::thread_trunc_ln708_373_fu_2304_p1() {
    trunc_ln708_373_fu_2304_p1 = out_buf_sc_V_13_q0.read();
}

void avgpool::thread_trunc_ln708_375_fu_2370_p1() {
    trunc_ln708_375_fu_2370_p1 = out_buf_sc_V_14_q0.read();
}

void avgpool::thread_trunc_ln708_377_fu_2436_p1() {
    trunc_ln708_377_fu_2436_p1 = out_buf_sc_V_15_q0.read();
}

void avgpool::thread_trunc_ln708_379_fu_2502_p1() {
    trunc_ln708_379_fu_2502_p1 = out_buf_sc_V_16_q0.read();
}

void avgpool::thread_trunc_ln708_381_fu_2568_p1() {
    trunc_ln708_381_fu_2568_p1 = out_buf_sc_V_17_q0.read();
}

void avgpool::thread_trunc_ln708_383_fu_2634_p1() {
    trunc_ln708_383_fu_2634_p1 = out_buf_sc_V_18_q0.read();
}

void avgpool::thread_trunc_ln708_385_fu_2700_p1() {
    trunc_ln708_385_fu_2700_p1 = out_buf_sc_V_19_q0.read();
}

void avgpool::thread_trunc_ln708_387_fu_2766_p1() {
    trunc_ln708_387_fu_2766_p1 = out_buf_sc_V_20_q0.read();
}

void avgpool::thread_trunc_ln708_389_fu_2832_p1() {
    trunc_ln708_389_fu_2832_p1 = out_buf_sc_V_21_q0.read();
}

void avgpool::thread_trunc_ln708_391_fu_2898_p1() {
    trunc_ln708_391_fu_2898_p1 = out_buf_sc_V_22_q0.read();
}

void avgpool::thread_trunc_ln708_393_fu_2964_p1() {
    trunc_ln708_393_fu_2964_p1 = out_buf_sc_V_23_q0.read();
}

void avgpool::thread_trunc_ln708_395_fu_3030_p1() {
    trunc_ln708_395_fu_3030_p1 = out_buf_sc_V_24_q0.read();
}

void avgpool::thread_trunc_ln708_397_fu_3096_p1() {
    trunc_ln708_397_fu_3096_p1 = out_buf_sc_V_25_q0.read();
}

void avgpool::thread_trunc_ln708_399_fu_3162_p1() {
    trunc_ln708_399_fu_3162_p1 = out_buf_sc_V_26_q0.read();
}

void avgpool::thread_trunc_ln708_401_fu_3228_p1() {
    trunc_ln708_401_fu_3228_p1 = out_buf_sc_V_27_q0.read();
}

void avgpool::thread_trunc_ln708_403_fu_3294_p1() {
    trunc_ln708_403_fu_3294_p1 = out_buf_sc_V_28_q0.read();
}

void avgpool::thread_trunc_ln708_405_fu_3360_p1() {
    trunc_ln708_405_fu_3360_p1 = out_buf_sc_V_29_q0.read();
}

void avgpool::thread_trunc_ln708_407_fu_3426_p1() {
    trunc_ln708_407_fu_3426_p1 = out_buf_sc_V_30_q0.read();
}

void avgpool::thread_trunc_ln708_409_fu_3492_p1() {
    trunc_ln708_409_fu_3492_p1 = out_buf_sc_V_31_q0.read();
}

void avgpool::thread_trunc_ln_fu_1446_p1() {
    trunc_ln_fu_1446_p1 = out_buf_sc_V_0_q0.read();
}

void avgpool::thread_xor_ln340_10_fu_13424_p2() {
    xor_ln340_10_fu_13424_p2 = (and_ln786_699_fu_13413_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_11_fu_13502_p2() {
    xor_ln340_11_fu_13502_p2 = (and_ln786_701_fu_13491_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_12_fu_13580_p2() {
    xor_ln340_12_fu_13580_p2 = (and_ln786_703_fu_13569_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_13_fu_13658_p2() {
    xor_ln340_13_fu_13658_p2 = (and_ln786_705_fu_13647_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_14_fu_13736_p2() {
    xor_ln340_14_fu_13736_p2 = (and_ln786_707_fu_13725_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_15_fu_13814_p2() {
    xor_ln340_15_fu_13814_p2 = (and_ln786_709_fu_13803_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_16_fu_13892_p2() {
    xor_ln340_16_fu_13892_p2 = (and_ln786_711_fu_13881_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_17_fu_13970_p2() {
    xor_ln340_17_fu_13970_p2 = (and_ln786_713_fu_13959_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_18_fu_14048_p2() {
    xor_ln340_18_fu_14048_p2 = (and_ln786_715_fu_14037_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_19_fu_14126_p2() {
    xor_ln340_19_fu_14126_p2 = (and_ln786_717_fu_14115_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_1_fu_12722_p2() {
    xor_ln340_1_fu_12722_p2 = (and_ln786_681_fu_12711_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_20_fu_14204_p2() {
    xor_ln340_20_fu_14204_p2 = (and_ln786_719_fu_14193_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_21_fu_14282_p2() {
    xor_ln340_21_fu_14282_p2 = (and_ln786_721_fu_14271_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_22_fu_14360_p2() {
    xor_ln340_22_fu_14360_p2 = (and_ln786_723_fu_14349_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_23_fu_14438_p2() {
    xor_ln340_23_fu_14438_p2 = (and_ln786_725_fu_14427_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_24_fu_14516_p2() {
    xor_ln340_24_fu_14516_p2 = (and_ln786_727_fu_14505_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_25_fu_14594_p2() {
    xor_ln340_25_fu_14594_p2 = (and_ln786_729_fu_14583_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_26_fu_14672_p2() {
    xor_ln340_26_fu_14672_p2 = (and_ln786_731_fu_14661_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_27_fu_14750_p2() {
    xor_ln340_27_fu_14750_p2 = (and_ln786_733_fu_14739_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_28_fu_14828_p2() {
    xor_ln340_28_fu_14828_p2 = (and_ln786_735_fu_14817_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_29_fu_14906_p2() {
    xor_ln340_29_fu_14906_p2 = (and_ln786_737_fu_14895_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_2_fu_12800_p2() {
    xor_ln340_2_fu_12800_p2 = (and_ln786_683_fu_12789_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_30_fu_14984_p2() {
    xor_ln340_30_fu_14984_p2 = (and_ln786_739_fu_14973_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_31_fu_15062_p2() {
    xor_ln340_31_fu_15062_p2 = (and_ln786_741_fu_15051_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_3_fu_12878_p2() {
    xor_ln340_3_fu_12878_p2 = (and_ln786_685_fu_12867_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_4_fu_12956_p2() {
    xor_ln340_4_fu_12956_p2 = (and_ln786_687_fu_12945_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_5_fu_13034_p2() {
    xor_ln340_5_fu_13034_p2 = (and_ln786_689_fu_13023_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_6_fu_13112_p2() {
    xor_ln340_6_fu_13112_p2 = (and_ln786_691_fu_13101_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_7_fu_13190_p2() {
    xor_ln340_7_fu_13190_p2 = (and_ln786_693_fu_13179_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_8_fu_13268_p2() {
    xor_ln340_8_fu_13268_p2 = (and_ln786_695_fu_13257_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_9_fu_13346_p2() {
    xor_ln340_9_fu_13346_p2 = (and_ln786_697_fu_13335_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln340_fu_12644_p2() {
    xor_ln340_fu_12644_p2 = (and_ln786_fu_12633_p2.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_383_fu_3768_p2() {
    xor_ln416_383_fu_3768_p2 = (tmp_2483_fu_3760_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_384_fu_3934_p2() {
    xor_ln416_384_fu_3934_p2 = (tmp_2489_fu_3926_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_385_fu_4100_p2() {
    xor_ln416_385_fu_4100_p2 = (tmp_2495_fu_4092_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_386_fu_4266_p2() {
    xor_ln416_386_fu_4266_p2 = (tmp_2501_fu_4258_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_387_fu_4432_p2() {
    xor_ln416_387_fu_4432_p2 = (tmp_2507_fu_4424_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_388_fu_4598_p2() {
    xor_ln416_388_fu_4598_p2 = (tmp_2513_fu_4590_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_389_fu_4764_p2() {
    xor_ln416_389_fu_4764_p2 = (tmp_2519_fu_4756_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_390_fu_4930_p2() {
    xor_ln416_390_fu_4930_p2 = (tmp_2525_fu_4922_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_391_fu_5096_p2() {
    xor_ln416_391_fu_5096_p2 = (tmp_2531_fu_5088_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_392_fu_5262_p2() {
    xor_ln416_392_fu_5262_p2 = (tmp_2537_fu_5254_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_393_fu_5428_p2() {
    xor_ln416_393_fu_5428_p2 = (tmp_2543_fu_5420_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_394_fu_5594_p2() {
    xor_ln416_394_fu_5594_p2 = (tmp_2549_fu_5586_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_395_fu_5760_p2() {
    xor_ln416_395_fu_5760_p2 = (tmp_2555_fu_5752_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_396_fu_5926_p2() {
    xor_ln416_396_fu_5926_p2 = (tmp_2561_fu_5918_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_397_fu_6092_p2() {
    xor_ln416_397_fu_6092_p2 = (tmp_2567_fu_6084_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_398_fu_6258_p2() {
    xor_ln416_398_fu_6258_p2 = (tmp_2573_fu_6250_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_399_fu_6424_p2() {
    xor_ln416_399_fu_6424_p2 = (tmp_2579_fu_6416_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_400_fu_6590_p2() {
    xor_ln416_400_fu_6590_p2 = (tmp_2585_fu_6582_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_401_fu_6756_p2() {
    xor_ln416_401_fu_6756_p2 = (tmp_2591_fu_6748_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_402_fu_6922_p2() {
    xor_ln416_402_fu_6922_p2 = (tmp_2597_fu_6914_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_403_fu_7088_p2() {
    xor_ln416_403_fu_7088_p2 = (tmp_2603_fu_7080_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_404_fu_7254_p2() {
    xor_ln416_404_fu_7254_p2 = (tmp_2609_fu_7246_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_405_fu_7420_p2() {
    xor_ln416_405_fu_7420_p2 = (tmp_2615_fu_7412_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_406_fu_7586_p2() {
    xor_ln416_406_fu_7586_p2 = (tmp_2621_fu_7578_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_407_fu_7752_p2() {
    xor_ln416_407_fu_7752_p2 = (tmp_2627_fu_7744_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_408_fu_7918_p2() {
    xor_ln416_408_fu_7918_p2 = (tmp_2633_fu_7910_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_409_fu_8084_p2() {
    xor_ln416_409_fu_8084_p2 = (tmp_2639_fu_8076_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_410_fu_8250_p2() {
    xor_ln416_410_fu_8250_p2 = (tmp_2645_fu_8242_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_411_fu_8416_p2() {
    xor_ln416_411_fu_8416_p2 = (tmp_2651_fu_8408_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_412_fu_8582_p2() {
    xor_ln416_412_fu_8582_p2 = (tmp_2657_fu_8574_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_413_fu_8748_p2() {
    xor_ln416_413_fu_8748_p2 = (tmp_2663_fu_8740_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln416_fu_3597_p2() {
    xor_ln416_fu_3597_p2 = (tmp_2477_fu_3589_p3.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln525_fu_3710_p2() {
    xor_ln525_fu_3710_p2 = (icmp_ln525_reg_15373_pp0_iter3_reg.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_10_fu_5282_p2() {
    xor_ln779_10_fu_5282_p2 = (tmp_2534_reg_15925.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_11_fu_5448_p2() {
    xor_ln779_11_fu_5448_p2 = (tmp_2540_reg_15958.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_12_fu_5614_p2() {
    xor_ln779_12_fu_5614_p2 = (tmp_2546_reg_15991.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_13_fu_5780_p2() {
    xor_ln779_13_fu_5780_p2 = (tmp_2552_reg_16024.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_14_fu_5946_p2() {
    xor_ln779_14_fu_5946_p2 = (tmp_2558_reg_16057.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_15_fu_6112_p2() {
    xor_ln779_15_fu_6112_p2 = (tmp_2564_reg_16090.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_16_fu_6278_p2() {
    xor_ln779_16_fu_6278_p2 = (tmp_2570_reg_16123.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_17_fu_6444_p2() {
    xor_ln779_17_fu_6444_p2 = (tmp_2576_reg_16156.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_18_fu_6610_p2() {
    xor_ln779_18_fu_6610_p2 = (tmp_2582_reg_16189.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_19_fu_6776_p2() {
    xor_ln779_19_fu_6776_p2 = (tmp_2588_reg_16222.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_1_fu_3788_p2() {
    xor_ln779_1_fu_3788_p2 = (tmp_2480_reg_15628.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_20_fu_6942_p2() {
    xor_ln779_20_fu_6942_p2 = (tmp_2594_reg_16255.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_21_fu_7108_p2() {
    xor_ln779_21_fu_7108_p2 = (tmp_2600_reg_16288.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_22_fu_7274_p2() {
    xor_ln779_22_fu_7274_p2 = (tmp_2606_reg_16321.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_23_fu_7440_p2() {
    xor_ln779_23_fu_7440_p2 = (tmp_2612_reg_16354.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_24_fu_7606_p2() {
    xor_ln779_24_fu_7606_p2 = (tmp_2618_reg_16387.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_25_fu_7772_p2() {
    xor_ln779_25_fu_7772_p2 = (tmp_2624_reg_16420.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_26_fu_7938_p2() {
    xor_ln779_26_fu_7938_p2 = (tmp_2630_reg_16453.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_27_fu_8104_p2() {
    xor_ln779_27_fu_8104_p2 = (tmp_2636_reg_16486.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_28_fu_8270_p2() {
    xor_ln779_28_fu_8270_p2 = (tmp_2642_reg_16519.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_29_fu_8436_p2() {
    xor_ln779_29_fu_8436_p2 = (tmp_2648_reg_16552.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_2_fu_3954_p2() {
    xor_ln779_2_fu_3954_p2 = (tmp_2486_reg_15661.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_30_fu_8602_p2() {
    xor_ln779_30_fu_8602_p2 = (tmp_2654_reg_16585.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_31_fu_8768_p2() {
    xor_ln779_31_fu_8768_p2 = (tmp_2660_reg_16618.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_3_fu_4120_p2() {
    xor_ln779_3_fu_4120_p2 = (tmp_2492_reg_15694.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_4_fu_4286_p2() {
    xor_ln779_4_fu_4286_p2 = (tmp_2498_reg_15727.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_5_fu_4452_p2() {
    xor_ln779_5_fu_4452_p2 = (tmp_2504_reg_15760.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_6_fu_4618_p2() {
    xor_ln779_6_fu_4618_p2 = (tmp_2510_reg_15793.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_7_fu_4784_p2() {
    xor_ln779_7_fu_4784_p2 = (tmp_2516_reg_15826.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_8_fu_4950_p2() {
    xor_ln779_8_fu_4950_p2 = (tmp_2522_reg_15859.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_9_fu_5116_p2() {
    xor_ln779_9_fu_5116_p2 = (tmp_2528_reg_15892.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln779_fu_3617_p2() {
    xor_ln779_fu_3617_p2 = (tmp_2474_reg_15595.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_10_fu_13392_p2() {
    xor_ln785_10_fu_13392_p2 = (tmp_2408_reg_16916.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_11_fu_13470_p2() {
    xor_ln785_11_fu_13470_p2 = (tmp_2411_reg_16943.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_12_fu_13548_p2() {
    xor_ln785_12_fu_13548_p2 = (tmp_2414_reg_16970.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_13_fu_13626_p2() {
    xor_ln785_13_fu_13626_p2 = (tmp_2417_reg_16997.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_14_fu_13704_p2() {
    xor_ln785_14_fu_13704_p2 = (tmp_2420_reg_17024.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_15_fu_13782_p2() {
    xor_ln785_15_fu_13782_p2 = (tmp_2423_reg_17051.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_16_fu_13860_p2() {
    xor_ln785_16_fu_13860_p2 = (tmp_2426_reg_17078.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_17_fu_13938_p2() {
    xor_ln785_17_fu_13938_p2 = (tmp_2429_reg_17105.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_18_fu_14016_p2() {
    xor_ln785_18_fu_14016_p2 = (tmp_2432_reg_17132.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_19_fu_14094_p2() {
    xor_ln785_19_fu_14094_p2 = (tmp_2435_reg_17159.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_1_fu_12690_p2() {
    xor_ln785_1_fu_12690_p2 = (tmp_2381_reg_16673.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_20_fu_14172_p2() {
    xor_ln785_20_fu_14172_p2 = (tmp_2438_reg_17186.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_21_fu_14250_p2() {
    xor_ln785_21_fu_14250_p2 = (tmp_2441_reg_17213.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_22_fu_14328_p2() {
    xor_ln785_22_fu_14328_p2 = (tmp_2444_reg_17240.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_23_fu_14406_p2() {
    xor_ln785_23_fu_14406_p2 = (tmp_2447_reg_17267.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_24_fu_14484_p2() {
    xor_ln785_24_fu_14484_p2 = (tmp_2450_reg_17294.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_25_fu_14562_p2() {
    xor_ln785_25_fu_14562_p2 = (tmp_2453_reg_17321.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_26_fu_14640_p2() {
    xor_ln785_26_fu_14640_p2 = (tmp_2456_reg_17348.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_27_fu_14718_p2() {
    xor_ln785_27_fu_14718_p2 = (tmp_2459_reg_17375.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_28_fu_14796_p2() {
    xor_ln785_28_fu_14796_p2 = (tmp_2462_reg_17402.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_29_fu_14874_p2() {
    xor_ln785_29_fu_14874_p2 = (tmp_2465_reg_17429.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_2_fu_12768_p2() {
    xor_ln785_2_fu_12768_p2 = (tmp_2384_reg_16700.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_30_fu_14952_p2() {
    xor_ln785_30_fu_14952_p2 = (tmp_2468_reg_17456.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_31_fu_15030_p2() {
    xor_ln785_31_fu_15030_p2 = (tmp_2471_reg_17483.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_3_fu_12846_p2() {
    xor_ln785_3_fu_12846_p2 = (tmp_2387_reg_16727.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_4_fu_12924_p2() {
    xor_ln785_4_fu_12924_p2 = (tmp_2390_reg_16754.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_5_fu_13002_p2() {
    xor_ln785_5_fu_13002_p2 = (tmp_2393_reg_16781.read() ^ ap_const_lv1_1);
}

void avgpool::thread_xor_ln785_654_fu_3629_p2() {
    xor_ln785_654_fu_3629_p2 = (tmp_2474_reg_15595.read() ^ and_ln416_fu_3603_p2.read());
}

void avgpool::thread_xor_ln785_655_fu_3800_p2() {
    xor_ln785_655_fu_3800_p2 = (tmp_2480_reg_15628.read() ^ and_ln416_351_fu_3774_p2.read());
}

void avgpool::thread_xor_ln785_656_fu_3966_p2() {
    xor_ln785_656_fu_3966_p2 = (tmp_2486_reg_15661.read() ^ and_ln416_352_fu_3940_p2.read());
}

void avgpool::thread_xor_ln785_657_fu_4132_p2() {
    xor_ln785_657_fu_4132_p2 = (tmp_2492_reg_15694.read() ^ and_ln416_353_fu_4106_p2.read());
}

void avgpool::thread_xor_ln785_658_fu_4298_p2() {
    xor_ln785_658_fu_4298_p2 = (tmp_2498_reg_15727.read() ^ and_ln416_354_fu_4272_p2.read());
}

void avgpool::thread_xor_ln785_659_fu_4464_p2() {
    xor_ln785_659_fu_4464_p2 = (tmp_2504_reg_15760.read() ^ and_ln416_355_fu_4438_p2.read());
}

void avgpool::thread_xor_ln785_660_fu_4630_p2() {
    xor_ln785_660_fu_4630_p2 = (tmp_2510_reg_15793.read() ^ and_ln416_356_fu_4604_p2.read());
}

void avgpool::thread_xor_ln785_661_fu_4796_p2() {
    xor_ln785_661_fu_4796_p2 = (tmp_2516_reg_15826.read() ^ and_ln416_357_fu_4770_p2.read());
}

void avgpool::thread_xor_ln785_662_fu_4962_p2() {
    xor_ln785_662_fu_4962_p2 = (tmp_2522_reg_15859.read() ^ and_ln416_358_fu_4936_p2.read());
}

void avgpool::thread_xor_ln785_663_fu_5128_p2() {
    xor_ln785_663_fu_5128_p2 = (tmp_2528_reg_15892.read() ^ and_ln416_359_fu_5102_p2.read());
}

void avgpool::thread_xor_ln785_664_fu_5294_p2() {
    xor_ln785_664_fu_5294_p2 = (tmp_2534_reg_15925.read() ^ and_ln416_360_fu_5268_p2.read());
}

void avgpool::thread_xor_ln785_665_fu_5460_p2() {
    xor_ln785_665_fu_5460_p2 = (tmp_2540_reg_15958.read() ^ and_ln416_361_fu_5434_p2.read());
}

void avgpool::thread_xor_ln785_666_fu_5626_p2() {
    xor_ln785_666_fu_5626_p2 = (tmp_2546_reg_15991.read() ^ and_ln416_362_fu_5600_p2.read());
}

void avgpool::thread_xor_ln785_667_fu_5792_p2() {
    xor_ln785_667_fu_5792_p2 = (tmp_2552_reg_16024.read() ^ and_ln416_363_fu_5766_p2.read());
}

void avgpool::thread_xor_ln785_668_fu_5958_p2() {
    xor_ln785_668_fu_5958_p2 = (tmp_2558_reg_16057.read() ^ and_ln416_364_fu_5932_p2.read());
}

void avgpool::thread_xor_ln785_669_fu_6124_p2() {
    xor_ln785_669_fu_6124_p2 = (tmp_2564_reg_16090.read() ^ and_ln416_365_fu_6098_p2.read());
}

void avgpool::thread_xor_ln785_670_fu_6290_p2() {
    xor_ln785_670_fu_6290_p2 = (tmp_2570_reg_16123.read() ^ and_ln416_366_fu_6264_p2.read());
}

void avgpool::thread_xor_ln785_671_fu_6456_p2() {
    xor_ln785_671_fu_6456_p2 = (tmp_2576_reg_16156.read() ^ and_ln416_367_fu_6430_p2.read());
}

void avgpool::thread_xor_ln785_672_fu_6622_p2() {
    xor_ln785_672_fu_6622_p2 = (tmp_2582_reg_16189.read() ^ and_ln416_368_fu_6596_p2.read());
}

void avgpool::thread_xor_ln785_673_fu_6788_p2() {
    xor_ln785_673_fu_6788_p2 = (tmp_2588_reg_16222.read() ^ and_ln416_369_fu_6762_p2.read());
}

}


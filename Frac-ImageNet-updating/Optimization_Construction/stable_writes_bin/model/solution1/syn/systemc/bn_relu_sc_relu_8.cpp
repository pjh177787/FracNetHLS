#include "bn_relu_sc_relu.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void bn_relu_sc_relu::thread_out_feature_t1_16_V_2_fu_14275_p3() {
    out_feature_t1_16_V_2_fu_14275_p3 = (!and_ln786_214_fu_14244_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_214_fu_14244_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_16_V_1_fu_14132_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_16_V_3_fu_20956_p2() {
    out_feature_t1_16_V_3_fu_20956_p2 = (!trunc_ln708_94_fu_20935_p4.read().is_01() || !zext_ln415_96_fu_20953_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_94_fu_20935_p4.read()) + sc_biguint<16>(zext_ln415_96_fu_20953_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_16_V_4_fu_25223_p3() {
    out_feature_t1_16_V_4_fu_25223_p3 = (!and_ln786_216_reg_83321.read()[0].is_01())? sc_lv<16>(): ((and_ln786_216_reg_83321.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_16_V_3_reg_83315.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_16_V_5_fu_36031_p2() {
    out_feature_t1_16_V_5_fu_36031_p2 = (!zext_ln415_207_fu_36027_p1.read().is_01() || !trunc_ln708_205_fu_36001_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_207_fu_36027_p1.read()) + sc_biguint<16>(trunc_ln708_205_fu_36001_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_16_V_6_fu_39594_p3() {
    out_feature_t1_16_V_6_fu_39594_p3 = (!and_ln786_424_reg_86018.read()[0].is_01())? sc_lv<16>(): ((and_ln786_424_reg_86018.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_16_V_5_reg_85998.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_16_V_7_fu_43707_p2() {
    out_feature_t1_16_V_7_fu_43707_p2 = (!trunc_ln708_206_reg_87205.read().is_01() || !zext_ln415_208_fu_43704_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_206_reg_87205.read()) + sc_biguint<16>(zext_ln415_208_fu_43704_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_16_V_8_fu_48900_p2() {
    out_feature_t1_16_V_8_fu_48900_p2 = (!trunc_ln708_207_fu_48870_p4.read().is_01() || !zext_ln415_209_fu_48896_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_207_fu_48870_p4.read()) + sc_biguint<16>(zext_ln415_209_fu_48896_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_16_V_9_fu_53874_p2() {
    out_feature_t1_16_V_9_fu_53874_p2 = (!zext_ln415_271_fu_53870_p1.read().is_01() || !trunc_ln708_269_fu_53844_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_271_fu_53870_p1.read()) + sc_biguint<16>(trunc_ln708_269_fu_53844_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_16_V_fu_8163_p3() {
    out_feature_t1_16_V_fu_8163_p3 = (!or_ln340_281_fu_8141_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_281_fu_8141_p2.read()[0].to_bool())? select_ln340_16_fu_8147_p3.read(): select_ln388_16_fu_8155_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_17_V_10_fu_57160_p3() {
    out_feature_t1_17_V_10_fu_57160_p3 = (!and_ln786_554_fu_57131_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_554_fu_57131_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_17_V_9_reg_90263.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_17_V_11_fu_65322_p3() {
    out_feature_t1_17_V_11_fu_65322_p3 = (!or_ln340_836_fu_65304_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_836_fu_65304_p2.read()[0].to_bool())? select_ln340_373_fu_65309_p3.read(): select_ln388_340_fu_65316_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_17_V_1_fu_14310_p2() {
    out_feature_t1_17_V_1_fu_14310_p2 = (!zext_ln415_97_fu_14307_p1.read().is_01() || !trunc_ln708_95_reg_81723.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_97_fu_14307_p1.read()) + sc_biguint<16>(trunc_ln708_95_reg_81723.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_17_V_2_fu_14453_p3() {
    out_feature_t1_17_V_2_fu_14453_p3 = (!and_ln786_218_fu_14422_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_218_fu_14422_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_17_V_1_fu_14310_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_17_V_3_fu_21201_p2() {
    out_feature_t1_17_V_3_fu_21201_p2 = (!trunc_ln708_96_fu_21180_p4.read().is_01() || !zext_ln415_98_fu_21198_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_96_fu_21180_p4.read()) + sc_biguint<16>(zext_ln415_98_fu_21198_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_17_V_4_fu_25248_p3() {
    out_feature_t1_17_V_4_fu_25248_p3 = (!and_ln786_220_reg_83347.read()[0].is_01())? sc_lv<16>(): ((and_ln786_220_reg_83347.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_17_V_3_reg_83341.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_17_V_5_fu_36181_p2() {
    out_feature_t1_17_V_5_fu_36181_p2 = (!zext_ln415_210_fu_36177_p1.read().is_01() || !trunc_ln708_208_fu_36151_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_210_fu_36177_p1.read()) + sc_biguint<16>(trunc_ln708_208_fu_36151_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_17_V_6_fu_39669_p3() {
    out_feature_t1_17_V_6_fu_39669_p3 = (!and_ln786_430_reg_86048.read()[0].is_01())? sc_lv<16>(): ((and_ln786_430_reg_86048.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_17_V_5_reg_86028.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_17_V_7_fu_43889_p2() {
    out_feature_t1_17_V_7_fu_43889_p2 = (!trunc_ln708_209_reg_87249.read().is_01() || !zext_ln415_211_fu_43886_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_209_reg_87249.read()) + sc_biguint<16>(zext_ln415_211_fu_43886_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_17_V_8_fu_49039_p2() {
    out_feature_t1_17_V_8_fu_49039_p2 = (!trunc_ln708_210_fu_49009_p4.read().is_01() || !zext_ln415_212_fu_49035_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_210_fu_49009_p4.read()) + sc_biguint<16>(zext_ln415_212_fu_49035_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_17_V_9_fu_53988_p2() {
    out_feature_t1_17_V_9_fu_53988_p2 = (!zext_ln415_272_fu_53984_p1.read().is_01() || !trunc_ln708_270_fu_53958_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_272_fu_53984_p1.read()) + sc_biguint<16>(trunc_ln708_270_fu_53958_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_17_V_fu_8285_p3() {
    out_feature_t1_17_V_fu_8285_p3 = (!or_ln340_283_fu_8263_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_283_fu_8263_p2.read()[0].to_bool())? select_ln340_17_fu_8269_p3.read(): select_ln388_17_fu_8277_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_18_V_10_fu_57246_p3() {
    out_feature_t1_18_V_10_fu_57246_p3 = (!and_ln786_556_fu_57217_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_556_fu_57217_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_18_V_9_reg_90291.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_18_V_11_fu_65378_p3() {
    out_feature_t1_18_V_11_fu_65378_p3 = (!or_ln340_839_fu_65360_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_839_fu_65360_p2.read()[0].to_bool())? select_ln340_374_fu_65365_p3.read(): select_ln388_341_fu_65372_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_18_V_1_fu_14488_p2() {
    out_feature_t1_18_V_1_fu_14488_p2 = (!zext_ln415_99_fu_14485_p1.read().is_01() || !trunc_ln708_97_reg_81757.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_99_fu_14485_p1.read()) + sc_biguint<16>(trunc_ln708_97_reg_81757.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_18_V_2_fu_14631_p3() {
    out_feature_t1_18_V_2_fu_14631_p3 = (!and_ln786_221_fu_14600_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_221_fu_14600_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_18_V_1_fu_14488_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_18_V_3_fu_21446_p2() {
    out_feature_t1_18_V_3_fu_21446_p2 = (!trunc_ln708_98_fu_21425_p4.read().is_01() || !zext_ln415_100_fu_21443_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_98_fu_21425_p4.read()) + sc_biguint<16>(zext_ln415_100_fu_21443_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_18_V_4_fu_25273_p3() {
    out_feature_t1_18_V_4_fu_25273_p3 = (!and_ln786_223_reg_83373.read()[0].is_01())? sc_lv<16>(): ((and_ln786_223_reg_83373.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_18_V_3_reg_83367.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_18_V_5_fu_36331_p2() {
    out_feature_t1_18_V_5_fu_36331_p2 = (!zext_ln415_213_fu_36327_p1.read().is_01() || !trunc_ln708_211_fu_36301_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_213_fu_36327_p1.read()) + sc_biguint<16>(trunc_ln708_211_fu_36301_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_18_V_6_fu_39744_p3() {
    out_feature_t1_18_V_6_fu_39744_p3 = (!and_ln786_436_reg_86078.read()[0].is_01())? sc_lv<16>(): ((and_ln786_436_reg_86078.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_18_V_5_reg_86058.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_18_V_7_fu_44071_p2() {
    out_feature_t1_18_V_7_fu_44071_p2 = (!trunc_ln708_212_reg_87293.read().is_01() || !zext_ln415_214_fu_44068_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_212_reg_87293.read()) + sc_biguint<16>(zext_ln415_214_fu_44068_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_18_V_8_fu_49178_p2() {
    out_feature_t1_18_V_8_fu_49178_p2 = (!trunc_ln708_213_fu_49148_p4.read().is_01() || !zext_ln415_215_fu_49174_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_213_fu_49148_p4.read()) + sc_biguint<16>(zext_ln415_215_fu_49174_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_18_V_9_fu_54102_p2() {
    out_feature_t1_18_V_9_fu_54102_p2 = (!zext_ln415_273_fu_54098_p1.read().is_01() || !trunc_ln708_271_fu_54072_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_273_fu_54098_p1.read()) + sc_biguint<16>(trunc_ln708_271_fu_54072_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_18_V_fu_8407_p3() {
    out_feature_t1_18_V_fu_8407_p3 = (!or_ln340_285_fu_8385_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_285_fu_8385_p2.read()[0].to_bool())? select_ln340_18_fu_8391_p3.read(): select_ln388_18_fu_8399_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_19_V_10_fu_57332_p3() {
    out_feature_t1_19_V_10_fu_57332_p3 = (!and_ln786_558_fu_57303_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_558_fu_57303_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_19_V_9_reg_90319.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_19_V_11_fu_65434_p3() {
    out_feature_t1_19_V_11_fu_65434_p3 = (!or_ln340_842_fu_65416_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_842_fu_65416_p2.read()[0].to_bool())? select_ln340_375_fu_65421_p3.read(): select_ln388_342_fu_65428_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_19_V_1_fu_14666_p2() {
    out_feature_t1_19_V_1_fu_14666_p2 = (!zext_ln415_101_fu_14663_p1.read().is_01() || !trunc_ln708_99_reg_81791.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_101_fu_14663_p1.read()) + sc_biguint<16>(trunc_ln708_99_reg_81791.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_19_V_2_fu_14809_p3() {
    out_feature_t1_19_V_2_fu_14809_p3 = (!and_ln786_224_fu_14778_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_224_fu_14778_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_19_V_1_fu_14666_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_19_V_3_fu_21691_p2() {
    out_feature_t1_19_V_3_fu_21691_p2 = (!trunc_ln708_100_fu_21670_p4.read().is_01() || !zext_ln415_102_fu_21688_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_100_fu_21670_p4.read()) + sc_biguint<16>(zext_ln415_102_fu_21688_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_19_V_4_fu_25298_p3() {
    out_feature_t1_19_V_4_fu_25298_p3 = (!and_ln786_226_reg_83399.read()[0].is_01())? sc_lv<16>(): ((and_ln786_226_reg_83399.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_19_V_3_reg_83393.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_19_V_5_fu_36481_p2() {
    out_feature_t1_19_V_5_fu_36481_p2 = (!zext_ln415_216_fu_36477_p1.read().is_01() || !trunc_ln708_214_fu_36451_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_216_fu_36477_p1.read()) + sc_biguint<16>(trunc_ln708_214_fu_36451_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_19_V_6_fu_39819_p3() {
    out_feature_t1_19_V_6_fu_39819_p3 = (!and_ln786_442_reg_86108.read()[0].is_01())? sc_lv<16>(): ((and_ln786_442_reg_86108.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_19_V_5_reg_86088.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_19_V_7_fu_44253_p2() {
    out_feature_t1_19_V_7_fu_44253_p2 = (!trunc_ln708_215_reg_87337.read().is_01() || !zext_ln415_217_fu_44250_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_215_reg_87337.read()) + sc_biguint<16>(zext_ln415_217_fu_44250_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_19_V_8_fu_49317_p2() {
    out_feature_t1_19_V_8_fu_49317_p2 = (!trunc_ln708_216_fu_49287_p4.read().is_01() || !zext_ln415_218_fu_49313_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_216_fu_49287_p4.read()) + sc_biguint<16>(zext_ln415_218_fu_49313_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_19_V_9_fu_54216_p2() {
    out_feature_t1_19_V_9_fu_54216_p2 = (!zext_ln415_274_fu_54212_p1.read().is_01() || !trunc_ln708_272_fu_54186_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_274_fu_54212_p1.read()) + sc_biguint<16>(trunc_ln708_272_fu_54186_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_19_V_fu_8529_p3() {
    out_feature_t1_19_V_fu_8529_p3 = (!or_ln340_287_fu_8507_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_287_fu_8507_p2.read()[0].to_bool())? select_ln340_19_fu_8513_p3.read(): select_ln388_19_fu_8521_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_1_V_10_fu_55784_p3() {
    out_feature_t1_1_V_10_fu_55784_p3 = (!and_ln786_522_fu_55755_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_522_fu_55755_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_1_V_9_reg_89815.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_1_V_11_fu_64426_p3() {
    out_feature_t1_1_V_11_fu_64426_p3 = (!or_ln340_788_fu_64408_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_788_fu_64408_p2.read()[0].to_bool())? select_ln340_357_fu_64413_p3.read(): select_ln388_324_fu_64420_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_1_V_1_fu_11462_p2() {
    out_feature_t1_1_V_1_fu_11462_p2 = (!zext_ln415_65_fu_11459_p1.read().is_01() || !trunc_ln708_63_reg_81179.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_65_fu_11459_p1.read()) + sc_biguint<16>(trunc_ln708_63_reg_81179.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_1_V_2_fu_11605_p3() {
    out_feature_t1_1_V_2_fu_11605_p3 = (!and_ln786_163_fu_11574_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_163_fu_11574_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_1_V_1_fu_11462_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_1_V_3_fu_17281_p2() {
    out_feature_t1_1_V_3_fu_17281_p2 = (!trunc_ln708_64_fu_17260_p4.read().is_01() || !zext_ln415_66_fu_17278_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_64_fu_17260_p4.read()) + sc_biguint<16>(zext_ln415_66_fu_17278_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_1_V_4_fu_24848_p3() {
    out_feature_t1_1_V_4_fu_24848_p3 = (!and_ln786_165_reg_82931.read()[0].is_01())? sc_lv<16>(): ((and_ln786_165_reg_82931.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_1_V_3_reg_82925.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_1_V_5_fu_33781_p2() {
    out_feature_t1_1_V_5_fu_33781_p2 = (!zext_ln415_162_fu_33777_p1.read().is_01() || !trunc_ln708_160_fu_33751_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_162_fu_33777_p1.read()) + sc_biguint<16>(trunc_ln708_160_fu_33751_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_1_V_6_fu_38469_p3() {
    out_feature_t1_1_V_6_fu_38469_p3 = (!and_ln786_334_reg_85568.read()[0].is_01())? sc_lv<16>(): ((and_ln786_334_reg_85568.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_1_V_5_reg_85548.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_1_V_7_fu_40977_p2() {
    out_feature_t1_1_V_7_fu_40977_p2 = (!trunc_ln708_161_reg_86545.read().is_01() || !zext_ln415_163_fu_40974_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_161_reg_86545.read()) + sc_biguint<16>(zext_ln415_163_fu_40974_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_1_V_8_fu_46815_p2() {
    out_feature_t1_1_V_8_fu_46815_p2 = (!trunc_ln708_162_fu_46785_p4.read().is_01() || !zext_ln415_164_fu_46811_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_162_fu_46785_p4.read()) + sc_biguint<16>(zext_ln415_164_fu_46811_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_1_V_9_fu_52164_p2() {
    out_feature_t1_1_V_9_fu_52164_p2 = (!zext_ln415_256_fu_52160_p1.read().is_01() || !trunc_ln708_254_fu_52134_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_256_fu_52160_p1.read()) + sc_biguint<16>(trunc_ln708_254_fu_52134_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_1_V_fu_6333_p3() {
    out_feature_t1_1_V_fu_6333_p3 = (!or_ln340_257_fu_6311_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_257_fu_6311_p2.read()[0].to_bool())? select_ln340_1_fu_6317_p3.read(): select_ln388_1_fu_6325_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_20_V_10_fu_57418_p3() {
    out_feature_t1_20_V_10_fu_57418_p3 = (!and_ln786_560_fu_57389_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_560_fu_57389_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_20_V_9_reg_90347.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_20_V_11_fu_65490_p3() {
    out_feature_t1_20_V_11_fu_65490_p3 = (!or_ln340_845_fu_65472_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_845_fu_65472_p2.read()[0].to_bool())? select_ln340_376_fu_65477_p3.read(): select_ln388_343_fu_65484_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_20_V_1_fu_14844_p2() {
    out_feature_t1_20_V_1_fu_14844_p2 = (!zext_ln415_103_fu_14841_p1.read().is_01() || !trunc_ln708_101_reg_81825.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_103_fu_14841_p1.read()) + sc_biguint<16>(trunc_ln708_101_reg_81825.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_20_V_2_fu_14987_p3() {
    out_feature_t1_20_V_2_fu_14987_p3 = (!and_ln786_227_fu_14956_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_227_fu_14956_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_20_V_1_fu_14844_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_20_V_3_fu_21936_p2() {
    out_feature_t1_20_V_3_fu_21936_p2 = (!trunc_ln708_102_fu_21915_p4.read().is_01() || !zext_ln415_104_fu_21933_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_102_fu_21915_p4.read()) + sc_biguint<16>(zext_ln415_104_fu_21933_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_20_V_4_fu_25323_p3() {
    out_feature_t1_20_V_4_fu_25323_p3 = (!and_ln786_229_reg_83425.read()[0].is_01())? sc_lv<16>(): ((and_ln786_229_reg_83425.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_20_V_3_reg_83419.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_20_V_5_fu_36631_p2() {
    out_feature_t1_20_V_5_fu_36631_p2 = (!zext_ln415_219_fu_36627_p1.read().is_01() || !trunc_ln708_217_fu_36601_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_219_fu_36627_p1.read()) + sc_biguint<16>(trunc_ln708_217_fu_36601_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_20_V_6_fu_39894_p3() {
    out_feature_t1_20_V_6_fu_39894_p3 = (!and_ln786_448_reg_86138.read()[0].is_01())? sc_lv<16>(): ((and_ln786_448_reg_86138.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_20_V_5_reg_86118.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_20_V_7_fu_44435_p2() {
    out_feature_t1_20_V_7_fu_44435_p2 = (!trunc_ln708_218_reg_87381.read().is_01() || !zext_ln415_220_fu_44432_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_218_reg_87381.read()) + sc_biguint<16>(zext_ln415_220_fu_44432_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_20_V_8_fu_49456_p2() {
    out_feature_t1_20_V_8_fu_49456_p2 = (!trunc_ln708_219_fu_49426_p4.read().is_01() || !zext_ln415_221_fu_49452_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_219_fu_49426_p4.read()) + sc_biguint<16>(zext_ln415_221_fu_49452_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_20_V_9_fu_54330_p2() {
    out_feature_t1_20_V_9_fu_54330_p2 = (!zext_ln415_275_fu_54326_p1.read().is_01() || !trunc_ln708_273_fu_54300_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_275_fu_54326_p1.read()) + sc_biguint<16>(trunc_ln708_273_fu_54300_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_20_V_fu_8651_p3() {
    out_feature_t1_20_V_fu_8651_p3 = (!or_ln340_289_fu_8629_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_289_fu_8629_p2.read()[0].to_bool())? select_ln340_20_fu_8635_p3.read(): select_ln388_20_fu_8643_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_21_V_10_fu_57504_p3() {
    out_feature_t1_21_V_10_fu_57504_p3 = (!and_ln786_562_fu_57475_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_562_fu_57475_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_21_V_9_reg_90375.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_21_V_11_fu_65546_p3() {
    out_feature_t1_21_V_11_fu_65546_p3 = (!or_ln340_848_fu_65528_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_848_fu_65528_p2.read()[0].to_bool())? select_ln340_377_fu_65533_p3.read(): select_ln388_344_fu_65540_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_21_V_1_fu_15022_p2() {
    out_feature_t1_21_V_1_fu_15022_p2 = (!zext_ln415_105_fu_15019_p1.read().is_01() || !trunc_ln708_103_reg_81859.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_105_fu_15019_p1.read()) + sc_biguint<16>(trunc_ln708_103_reg_81859.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_21_V_2_fu_15165_p3() {
    out_feature_t1_21_V_2_fu_15165_p3 = (!and_ln786_230_fu_15134_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_230_fu_15134_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_21_V_1_fu_15022_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_21_V_3_fu_22181_p2() {
    out_feature_t1_21_V_3_fu_22181_p2 = (!trunc_ln708_104_fu_22160_p4.read().is_01() || !zext_ln415_106_fu_22178_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_104_fu_22160_p4.read()) + sc_biguint<16>(zext_ln415_106_fu_22178_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_21_V_4_fu_25348_p3() {
    out_feature_t1_21_V_4_fu_25348_p3 = (!and_ln786_232_reg_83451.read()[0].is_01())? sc_lv<16>(): ((and_ln786_232_reg_83451.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_21_V_3_reg_83445.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_21_V_5_fu_36781_p2() {
    out_feature_t1_21_V_5_fu_36781_p2 = (!zext_ln415_222_fu_36777_p1.read().is_01() || !trunc_ln708_220_fu_36751_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_222_fu_36777_p1.read()) + sc_biguint<16>(trunc_ln708_220_fu_36751_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_21_V_6_fu_39969_p3() {
    out_feature_t1_21_V_6_fu_39969_p3 = (!and_ln786_454_reg_86168.read()[0].is_01())? sc_lv<16>(): ((and_ln786_454_reg_86168.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_21_V_5_reg_86148.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_21_V_7_fu_44617_p2() {
    out_feature_t1_21_V_7_fu_44617_p2 = (!trunc_ln708_221_reg_87425.read().is_01() || !zext_ln415_223_fu_44614_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_221_reg_87425.read()) + sc_biguint<16>(zext_ln415_223_fu_44614_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_21_V_8_fu_49595_p2() {
    out_feature_t1_21_V_8_fu_49595_p2 = (!trunc_ln708_222_fu_49565_p4.read().is_01() || !zext_ln415_224_fu_49591_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_222_fu_49565_p4.read()) + sc_biguint<16>(zext_ln415_224_fu_49591_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_21_V_9_fu_54444_p2() {
    out_feature_t1_21_V_9_fu_54444_p2 = (!zext_ln415_276_fu_54440_p1.read().is_01() || !trunc_ln708_274_fu_54414_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_276_fu_54440_p1.read()) + sc_biguint<16>(trunc_ln708_274_fu_54414_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_21_V_fu_8773_p3() {
    out_feature_t1_21_V_fu_8773_p3 = (!or_ln340_291_fu_8751_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_291_fu_8751_p2.read()[0].to_bool())? select_ln340_21_fu_8757_p3.read(): select_ln388_21_fu_8765_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_22_V_10_fu_57590_p3() {
    out_feature_t1_22_V_10_fu_57590_p3 = (!and_ln786_564_fu_57561_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_564_fu_57561_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_22_V_9_reg_90403.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_22_V_11_fu_65602_p3() {
    out_feature_t1_22_V_11_fu_65602_p3 = (!or_ln340_851_fu_65584_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_851_fu_65584_p2.read()[0].to_bool())? select_ln340_378_fu_65589_p3.read(): select_ln388_345_fu_65596_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_22_V_1_fu_15200_p2() {
    out_feature_t1_22_V_1_fu_15200_p2 = (!zext_ln415_107_fu_15197_p1.read().is_01() || !trunc_ln708_105_reg_81893.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_107_fu_15197_p1.read()) + sc_biguint<16>(trunc_ln708_105_reg_81893.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_22_V_2_fu_15343_p3() {
    out_feature_t1_22_V_2_fu_15343_p3 = (!and_ln786_233_fu_15312_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_233_fu_15312_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_22_V_1_fu_15200_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_22_V_3_fu_22426_p2() {
    out_feature_t1_22_V_3_fu_22426_p2 = (!trunc_ln708_106_fu_22405_p4.read().is_01() || !zext_ln415_108_fu_22423_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_106_fu_22405_p4.read()) + sc_biguint<16>(zext_ln415_108_fu_22423_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_22_V_4_fu_25373_p3() {
    out_feature_t1_22_V_4_fu_25373_p3 = (!and_ln786_235_reg_83477.read()[0].is_01())? sc_lv<16>(): ((and_ln786_235_reg_83477.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_22_V_3_reg_83471.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_22_V_5_fu_36931_p2() {
    out_feature_t1_22_V_5_fu_36931_p2 = (!zext_ln415_225_fu_36927_p1.read().is_01() || !trunc_ln708_223_fu_36901_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_225_fu_36927_p1.read()) + sc_biguint<16>(trunc_ln708_223_fu_36901_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_22_V_6_fu_40044_p3() {
    out_feature_t1_22_V_6_fu_40044_p3 = (!and_ln786_460_reg_86198.read()[0].is_01())? sc_lv<16>(): ((and_ln786_460_reg_86198.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_22_V_5_reg_86178.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_22_V_7_fu_44799_p2() {
    out_feature_t1_22_V_7_fu_44799_p2 = (!trunc_ln708_224_reg_87469.read().is_01() || !zext_ln415_226_fu_44796_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_224_reg_87469.read()) + sc_biguint<16>(zext_ln415_226_fu_44796_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_22_V_8_fu_49734_p2() {
    out_feature_t1_22_V_8_fu_49734_p2 = (!trunc_ln708_225_fu_49704_p4.read().is_01() || !zext_ln415_227_fu_49730_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_225_fu_49704_p4.read()) + sc_biguint<16>(zext_ln415_227_fu_49730_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_22_V_9_fu_54558_p2() {
    out_feature_t1_22_V_9_fu_54558_p2 = (!zext_ln415_277_fu_54554_p1.read().is_01() || !trunc_ln708_275_fu_54528_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_277_fu_54554_p1.read()) + sc_biguint<16>(trunc_ln708_275_fu_54528_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_22_V_fu_8895_p3() {
    out_feature_t1_22_V_fu_8895_p3 = (!or_ln340_293_fu_8873_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_293_fu_8873_p2.read()[0].to_bool())? select_ln340_22_fu_8879_p3.read(): select_ln388_22_fu_8887_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_23_V_10_fu_57676_p3() {
    out_feature_t1_23_V_10_fu_57676_p3 = (!and_ln786_566_fu_57647_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_566_fu_57647_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_23_V_9_reg_90431.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_23_V_11_fu_65658_p3() {
    out_feature_t1_23_V_11_fu_65658_p3 = (!or_ln340_854_fu_65640_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_854_fu_65640_p2.read()[0].to_bool())? select_ln340_379_fu_65645_p3.read(): select_ln388_346_fu_65652_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_23_V_1_fu_15378_p2() {
    out_feature_t1_23_V_1_fu_15378_p2 = (!zext_ln415_109_fu_15375_p1.read().is_01() || !trunc_ln708_107_reg_81927.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_109_fu_15375_p1.read()) + sc_biguint<16>(trunc_ln708_107_reg_81927.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_23_V_2_fu_15521_p3() {
    out_feature_t1_23_V_2_fu_15521_p3 = (!and_ln786_236_fu_15490_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_236_fu_15490_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_23_V_1_fu_15378_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_23_V_3_fu_22671_p2() {
    out_feature_t1_23_V_3_fu_22671_p2 = (!trunc_ln708_108_fu_22650_p4.read().is_01() || !zext_ln415_110_fu_22668_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_108_fu_22650_p4.read()) + sc_biguint<16>(zext_ln415_110_fu_22668_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_23_V_4_fu_25398_p3() {
    out_feature_t1_23_V_4_fu_25398_p3 = (!and_ln786_238_reg_83503.read()[0].is_01())? sc_lv<16>(): ((and_ln786_238_reg_83503.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_23_V_3_reg_83497.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_23_V_5_fu_37081_p2() {
    out_feature_t1_23_V_5_fu_37081_p2 = (!zext_ln415_228_fu_37077_p1.read().is_01() || !trunc_ln708_226_fu_37051_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_228_fu_37077_p1.read()) + sc_biguint<16>(trunc_ln708_226_fu_37051_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_23_V_6_fu_40119_p3() {
    out_feature_t1_23_V_6_fu_40119_p3 = (!and_ln786_466_reg_86228.read()[0].is_01())? sc_lv<16>(): ((and_ln786_466_reg_86228.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_23_V_5_reg_86208.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_23_V_7_fu_44981_p2() {
    out_feature_t1_23_V_7_fu_44981_p2 = (!trunc_ln708_227_reg_87513.read().is_01() || !zext_ln415_229_fu_44978_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_227_reg_87513.read()) + sc_biguint<16>(zext_ln415_229_fu_44978_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_23_V_8_fu_49873_p2() {
    out_feature_t1_23_V_8_fu_49873_p2 = (!trunc_ln708_228_fu_49843_p4.read().is_01() || !zext_ln415_230_fu_49869_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_228_fu_49843_p4.read()) + sc_biguint<16>(zext_ln415_230_fu_49869_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_23_V_9_fu_54672_p2() {
    out_feature_t1_23_V_9_fu_54672_p2 = (!zext_ln415_278_fu_54668_p1.read().is_01() || !trunc_ln708_276_fu_54642_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_278_fu_54668_p1.read()) + sc_biguint<16>(trunc_ln708_276_fu_54642_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_23_V_fu_9017_p3() {
    out_feature_t1_23_V_fu_9017_p3 = (!or_ln340_295_fu_8995_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_295_fu_8995_p2.read()[0].to_bool())? select_ln340_23_fu_9001_p3.read(): select_ln388_23_fu_9009_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_24_V_10_fu_57762_p3() {
    out_feature_t1_24_V_10_fu_57762_p3 = (!and_ln786_568_fu_57733_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_568_fu_57733_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_24_V_9_reg_90459.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_24_V_11_fu_65714_p3() {
    out_feature_t1_24_V_11_fu_65714_p3 = (!or_ln340_857_fu_65696_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_857_fu_65696_p2.read()[0].to_bool())? select_ln340_380_fu_65701_p3.read(): select_ln388_347_fu_65708_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_24_V_1_fu_15556_p2() {
    out_feature_t1_24_V_1_fu_15556_p2 = (!zext_ln415_111_fu_15553_p1.read().is_01() || !trunc_ln708_109_reg_81961.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_111_fu_15553_p1.read()) + sc_biguint<16>(trunc_ln708_109_reg_81961.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_24_V_2_fu_15699_p3() {
    out_feature_t1_24_V_2_fu_15699_p3 = (!and_ln786_239_fu_15668_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_239_fu_15668_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_24_V_1_fu_15556_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_24_V_3_fu_22916_p2() {
    out_feature_t1_24_V_3_fu_22916_p2 = (!trunc_ln708_110_fu_22895_p4.read().is_01() || !zext_ln415_112_fu_22913_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_110_fu_22895_p4.read()) + sc_biguint<16>(zext_ln415_112_fu_22913_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_24_V_4_fu_25423_p3() {
    out_feature_t1_24_V_4_fu_25423_p3 = (!and_ln786_241_reg_83529.read()[0].is_01())? sc_lv<16>(): ((and_ln786_241_reg_83529.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_24_V_3_reg_83523.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_24_V_5_fu_37231_p2() {
    out_feature_t1_24_V_5_fu_37231_p2 = (!zext_ln415_231_fu_37227_p1.read().is_01() || !trunc_ln708_229_fu_37201_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_231_fu_37227_p1.read()) + sc_biguint<16>(trunc_ln708_229_fu_37201_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_24_V_6_fu_40194_p3() {
    out_feature_t1_24_V_6_fu_40194_p3 = (!and_ln786_472_reg_86258.read()[0].is_01())? sc_lv<16>(): ((and_ln786_472_reg_86258.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_24_V_5_reg_86238.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_24_V_7_fu_45163_p2() {
    out_feature_t1_24_V_7_fu_45163_p2 = (!trunc_ln708_230_reg_87557.read().is_01() || !zext_ln415_232_fu_45160_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_230_reg_87557.read()) + sc_biguint<16>(zext_ln415_232_fu_45160_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_24_V_8_fu_50012_p2() {
    out_feature_t1_24_V_8_fu_50012_p2 = (!trunc_ln708_231_fu_49982_p4.read().is_01() || !zext_ln415_233_fu_50008_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_231_fu_49982_p4.read()) + sc_biguint<16>(zext_ln415_233_fu_50008_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_24_V_9_fu_54786_p2() {
    out_feature_t1_24_V_9_fu_54786_p2 = (!zext_ln415_279_fu_54782_p1.read().is_01() || !trunc_ln708_277_fu_54756_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_279_fu_54782_p1.read()) + sc_biguint<16>(trunc_ln708_277_fu_54756_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_24_V_fu_9139_p3() {
    out_feature_t1_24_V_fu_9139_p3 = (!or_ln340_296_fu_9117_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_296_fu_9117_p2.read()[0].to_bool())? select_ln340_24_fu_9123_p3.read(): select_ln388_24_fu_9131_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_25_V_10_fu_57848_p3() {
    out_feature_t1_25_V_10_fu_57848_p3 = (!and_ln786_570_fu_57819_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_570_fu_57819_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_25_V_9_reg_90487.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_25_V_11_fu_65770_p3() {
    out_feature_t1_25_V_11_fu_65770_p3 = (!or_ln340_860_fu_65752_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_860_fu_65752_p2.read()[0].to_bool())? select_ln340_381_fu_65757_p3.read(): select_ln388_348_fu_65764_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_25_V_1_fu_15734_p2() {
    out_feature_t1_25_V_1_fu_15734_p2 = (!zext_ln415_113_fu_15731_p1.read().is_01() || !trunc_ln708_111_reg_81995.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_113_fu_15731_p1.read()) + sc_biguint<16>(trunc_ln708_111_reg_81995.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_25_V_2_fu_15877_p3() {
    out_feature_t1_25_V_2_fu_15877_p3 = (!and_ln786_242_fu_15846_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_242_fu_15846_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_25_V_1_fu_15734_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_25_V_3_fu_23161_p2() {
    out_feature_t1_25_V_3_fu_23161_p2 = (!trunc_ln708_112_fu_23140_p4.read().is_01() || !zext_ln415_114_fu_23158_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_112_fu_23140_p4.read()) + sc_biguint<16>(zext_ln415_114_fu_23158_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_25_V_4_fu_25448_p3() {
    out_feature_t1_25_V_4_fu_25448_p3 = (!and_ln786_244_reg_83555.read()[0].is_01())? sc_lv<16>(): ((and_ln786_244_reg_83555.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_25_V_3_reg_83549.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_25_V_5_fu_37381_p2() {
    out_feature_t1_25_V_5_fu_37381_p2 = (!zext_ln415_234_fu_37377_p1.read().is_01() || !trunc_ln708_232_fu_37351_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_234_fu_37377_p1.read()) + sc_biguint<16>(trunc_ln708_232_fu_37351_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_25_V_6_fu_40269_p3() {
    out_feature_t1_25_V_6_fu_40269_p3 = (!and_ln786_478_reg_86288.read()[0].is_01())? sc_lv<16>(): ((and_ln786_478_reg_86288.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_25_V_5_reg_86268.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_25_V_7_fu_45345_p2() {
    out_feature_t1_25_V_7_fu_45345_p2 = (!trunc_ln708_233_reg_87601.read().is_01() || !zext_ln415_235_fu_45342_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_233_reg_87601.read()) + sc_biguint<16>(zext_ln415_235_fu_45342_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_25_V_8_fu_50151_p2() {
    out_feature_t1_25_V_8_fu_50151_p2 = (!trunc_ln708_234_fu_50121_p4.read().is_01() || !zext_ln415_236_fu_50147_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_234_fu_50121_p4.read()) + sc_biguint<16>(zext_ln415_236_fu_50147_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_25_V_9_fu_54900_p2() {
    out_feature_t1_25_V_9_fu_54900_p2 = (!zext_ln415_280_fu_54896_p1.read().is_01() || !trunc_ln708_278_fu_54870_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_280_fu_54896_p1.read()) + sc_biguint<16>(trunc_ln708_278_fu_54870_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_25_V_fu_9261_p3() {
    out_feature_t1_25_V_fu_9261_p3 = (!or_ln340_297_fu_9239_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_297_fu_9239_p2.read()[0].to_bool())? select_ln340_25_fu_9245_p3.read(): select_ln388_25_fu_9253_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_26_V_10_fu_57934_p3() {
    out_feature_t1_26_V_10_fu_57934_p3 = (!and_ln786_572_fu_57905_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_572_fu_57905_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_26_V_9_reg_90515.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_26_V_11_fu_65826_p3() {
    out_feature_t1_26_V_11_fu_65826_p3 = (!or_ln340_863_fu_65808_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_863_fu_65808_p2.read()[0].to_bool())? select_ln340_382_fu_65813_p3.read(): select_ln388_349_fu_65820_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_26_V_1_fu_15912_p2() {
    out_feature_t1_26_V_1_fu_15912_p2 = (!zext_ln415_115_fu_15909_p1.read().is_01() || !trunc_ln708_113_reg_82029.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_115_fu_15909_p1.read()) + sc_biguint<16>(trunc_ln708_113_reg_82029.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_26_V_2_fu_16055_p3() {
    out_feature_t1_26_V_2_fu_16055_p3 = (!and_ln786_245_fu_16024_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_245_fu_16024_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_26_V_1_fu_15912_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_26_V_3_fu_23406_p2() {
    out_feature_t1_26_V_3_fu_23406_p2 = (!trunc_ln708_114_fu_23385_p4.read().is_01() || !zext_ln415_116_fu_23403_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_114_fu_23385_p4.read()) + sc_biguint<16>(zext_ln415_116_fu_23403_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_26_V_4_fu_25473_p3() {
    out_feature_t1_26_V_4_fu_25473_p3 = (!and_ln786_247_reg_83581.read()[0].is_01())? sc_lv<16>(): ((and_ln786_247_reg_83581.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_26_V_3_reg_83575.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_26_V_5_fu_37531_p2() {
    out_feature_t1_26_V_5_fu_37531_p2 = (!zext_ln415_237_fu_37527_p1.read().is_01() || !trunc_ln708_235_fu_37501_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_237_fu_37527_p1.read()) + sc_biguint<16>(trunc_ln708_235_fu_37501_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_26_V_6_fu_40344_p3() {
    out_feature_t1_26_V_6_fu_40344_p3 = (!and_ln786_484_reg_86318.read()[0].is_01())? sc_lv<16>(): ((and_ln786_484_reg_86318.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_26_V_5_reg_86298.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_26_V_7_fu_45527_p2() {
    out_feature_t1_26_V_7_fu_45527_p2 = (!trunc_ln708_236_reg_87645.read().is_01() || !zext_ln415_238_fu_45524_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_236_reg_87645.read()) + sc_biguint<16>(zext_ln415_238_fu_45524_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_26_V_8_fu_50290_p2() {
    out_feature_t1_26_V_8_fu_50290_p2 = (!trunc_ln708_237_fu_50260_p4.read().is_01() || !zext_ln415_239_fu_50286_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_237_fu_50260_p4.read()) + sc_biguint<16>(zext_ln415_239_fu_50286_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_26_V_9_fu_55014_p2() {
    out_feature_t1_26_V_9_fu_55014_p2 = (!zext_ln415_281_fu_55010_p1.read().is_01() || !trunc_ln708_279_fu_54984_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_281_fu_55010_p1.read()) + sc_biguint<16>(trunc_ln708_279_fu_54984_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_26_V_fu_9383_p3() {
    out_feature_t1_26_V_fu_9383_p3 = (!or_ln340_298_fu_9361_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_298_fu_9361_p2.read()[0].to_bool())? select_ln340_26_fu_9367_p3.read(): select_ln388_26_fu_9375_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_27_V_10_fu_58020_p3() {
    out_feature_t1_27_V_10_fu_58020_p3 = (!and_ln786_574_fu_57991_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_574_fu_57991_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_27_V_9_reg_90543.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_27_V_11_fu_65882_p3() {
    out_feature_t1_27_V_11_fu_65882_p3 = (!or_ln340_866_fu_65864_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_866_fu_65864_p2.read()[0].to_bool())? select_ln340_383_fu_65869_p3.read(): select_ln388_350_fu_65876_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_27_V_1_fu_16090_p2() {
    out_feature_t1_27_V_1_fu_16090_p2 = (!zext_ln415_117_fu_16087_p1.read().is_01() || !trunc_ln708_115_reg_82063.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_117_fu_16087_p1.read()) + sc_biguint<16>(trunc_ln708_115_reg_82063.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_27_V_2_fu_16233_p3() {
    out_feature_t1_27_V_2_fu_16233_p3 = (!and_ln786_248_fu_16202_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_248_fu_16202_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_27_V_1_fu_16090_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_27_V_3_fu_23651_p2() {
    out_feature_t1_27_V_3_fu_23651_p2 = (!trunc_ln708_116_fu_23630_p4.read().is_01() || !zext_ln415_118_fu_23648_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_116_fu_23630_p4.read()) + sc_biguint<16>(zext_ln415_118_fu_23648_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_27_V_4_fu_25498_p3() {
    out_feature_t1_27_V_4_fu_25498_p3 = (!and_ln786_250_reg_83607.read()[0].is_01())? sc_lv<16>(): ((and_ln786_250_reg_83607.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_27_V_3_reg_83601.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_27_V_5_fu_37681_p2() {
    out_feature_t1_27_V_5_fu_37681_p2 = (!zext_ln415_240_fu_37677_p1.read().is_01() || !trunc_ln708_238_fu_37651_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_240_fu_37677_p1.read()) + sc_biguint<16>(trunc_ln708_238_fu_37651_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_27_V_6_fu_40419_p3() {
    out_feature_t1_27_V_6_fu_40419_p3 = (!and_ln786_490_reg_86348.read()[0].is_01())? sc_lv<16>(): ((and_ln786_490_reg_86348.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_27_V_5_reg_86328.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_27_V_7_fu_45709_p2() {
    out_feature_t1_27_V_7_fu_45709_p2 = (!trunc_ln708_239_reg_87689.read().is_01() || !zext_ln415_241_fu_45706_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_239_reg_87689.read()) + sc_biguint<16>(zext_ln415_241_fu_45706_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_27_V_8_fu_50429_p2() {
    out_feature_t1_27_V_8_fu_50429_p2 = (!trunc_ln708_240_fu_50399_p4.read().is_01() || !zext_ln415_242_fu_50425_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_240_fu_50399_p4.read()) + sc_biguint<16>(zext_ln415_242_fu_50425_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_27_V_9_fu_55128_p2() {
    out_feature_t1_27_V_9_fu_55128_p2 = (!zext_ln415_282_fu_55124_p1.read().is_01() || !trunc_ln708_280_fu_55098_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_282_fu_55124_p1.read()) + sc_biguint<16>(trunc_ln708_280_fu_55098_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_27_V_fu_9505_p3() {
    out_feature_t1_27_V_fu_9505_p3 = (!or_ln340_299_fu_9483_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_299_fu_9483_p2.read()[0].to_bool())? select_ln340_27_fu_9489_p3.read(): select_ln388_27_fu_9497_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_28_V_10_fu_58106_p3() {
    out_feature_t1_28_V_10_fu_58106_p3 = (!and_ln786_576_fu_58077_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_576_fu_58077_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_28_V_9_reg_90571.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_28_V_11_fu_65938_p3() {
    out_feature_t1_28_V_11_fu_65938_p3 = (!or_ln340_869_fu_65920_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_869_fu_65920_p2.read()[0].to_bool())? select_ln340_384_fu_65925_p3.read(): select_ln388_351_fu_65932_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_28_V_1_fu_16268_p2() {
    out_feature_t1_28_V_1_fu_16268_p2 = (!zext_ln415_119_fu_16265_p1.read().is_01() || !trunc_ln708_117_reg_82097.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_119_fu_16265_p1.read()) + sc_biguint<16>(trunc_ln708_117_reg_82097.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_28_V_2_fu_16411_p3() {
    out_feature_t1_28_V_2_fu_16411_p3 = (!and_ln786_251_fu_16380_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_251_fu_16380_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_28_V_1_fu_16268_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_28_V_3_fu_23896_p2() {
    out_feature_t1_28_V_3_fu_23896_p2 = (!trunc_ln708_118_fu_23875_p4.read().is_01() || !zext_ln415_120_fu_23893_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_118_fu_23875_p4.read()) + sc_biguint<16>(zext_ln415_120_fu_23893_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_28_V_4_fu_25523_p3() {
    out_feature_t1_28_V_4_fu_25523_p3 = (!and_ln786_253_reg_83633.read()[0].is_01())? sc_lv<16>(): ((and_ln786_253_reg_83633.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_28_V_3_reg_83627.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_28_V_5_fu_37831_p2() {
    out_feature_t1_28_V_5_fu_37831_p2 = (!zext_ln415_243_fu_37827_p1.read().is_01() || !trunc_ln708_241_fu_37801_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_243_fu_37827_p1.read()) + sc_biguint<16>(trunc_ln708_241_fu_37801_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_28_V_6_fu_40494_p3() {
    out_feature_t1_28_V_6_fu_40494_p3 = (!and_ln786_496_reg_86378.read()[0].is_01())? sc_lv<16>(): ((and_ln786_496_reg_86378.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_28_V_5_reg_86358.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_28_V_7_fu_45891_p2() {
    out_feature_t1_28_V_7_fu_45891_p2 = (!trunc_ln708_242_reg_87733.read().is_01() || !zext_ln415_244_fu_45888_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_242_reg_87733.read()) + sc_biguint<16>(zext_ln415_244_fu_45888_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_28_V_8_fu_50568_p2() {
    out_feature_t1_28_V_8_fu_50568_p2 = (!trunc_ln708_243_fu_50538_p4.read().is_01() || !zext_ln415_245_fu_50564_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_243_fu_50538_p4.read()) + sc_biguint<16>(zext_ln415_245_fu_50564_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_28_V_9_fu_55242_p2() {
    out_feature_t1_28_V_9_fu_55242_p2 = (!zext_ln415_283_fu_55238_p1.read().is_01() || !trunc_ln708_281_fu_55212_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_283_fu_55238_p1.read()) + sc_biguint<16>(trunc_ln708_281_fu_55212_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_28_V_fu_9627_p3() {
    out_feature_t1_28_V_fu_9627_p3 = (!or_ln340_300_fu_9605_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_300_fu_9605_p2.read()[0].to_bool())? select_ln340_28_fu_9611_p3.read(): select_ln388_28_fu_9619_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_29_V_10_fu_58192_p3() {
    out_feature_t1_29_V_10_fu_58192_p3 = (!and_ln786_578_fu_58163_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_578_fu_58163_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_29_V_9_reg_90599.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_29_V_11_fu_65994_p3() {
    out_feature_t1_29_V_11_fu_65994_p3 = (!or_ln340_872_fu_65976_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_872_fu_65976_p2.read()[0].to_bool())? select_ln340_385_fu_65981_p3.read(): select_ln388_352_fu_65988_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_29_V_1_fu_16446_p2() {
    out_feature_t1_29_V_1_fu_16446_p2 = (!zext_ln415_121_fu_16443_p1.read().is_01() || !trunc_ln708_119_reg_82131.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_121_fu_16443_p1.read()) + sc_biguint<16>(trunc_ln708_119_reg_82131.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_29_V_2_fu_16589_p3() {
    out_feature_t1_29_V_2_fu_16589_p3 = (!and_ln786_254_fu_16558_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_254_fu_16558_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_29_V_1_fu_16446_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_29_V_3_fu_24141_p2() {
    out_feature_t1_29_V_3_fu_24141_p2 = (!trunc_ln708_120_fu_24120_p4.read().is_01() || !zext_ln415_122_fu_24138_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_120_fu_24120_p4.read()) + sc_biguint<16>(zext_ln415_122_fu_24138_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_29_V_4_fu_25548_p3() {
    out_feature_t1_29_V_4_fu_25548_p3 = (!and_ln786_256_reg_83659.read()[0].is_01())? sc_lv<16>(): ((and_ln786_256_reg_83659.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_29_V_3_reg_83653.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_29_V_5_fu_37981_p2() {
    out_feature_t1_29_V_5_fu_37981_p2 = (!zext_ln415_246_fu_37977_p1.read().is_01() || !trunc_ln708_244_fu_37951_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_246_fu_37977_p1.read()) + sc_biguint<16>(trunc_ln708_244_fu_37951_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_29_V_6_fu_40569_p3() {
    out_feature_t1_29_V_6_fu_40569_p3 = (!and_ln786_502_reg_86408.read()[0].is_01())? sc_lv<16>(): ((and_ln786_502_reg_86408.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_29_V_5_reg_86388.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_29_V_7_fu_46073_p2() {
    out_feature_t1_29_V_7_fu_46073_p2 = (!trunc_ln708_245_reg_87777.read().is_01() || !zext_ln415_247_fu_46070_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_245_reg_87777.read()) + sc_biguint<16>(zext_ln415_247_fu_46070_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_29_V_8_fu_50707_p2() {
    out_feature_t1_29_V_8_fu_50707_p2 = (!trunc_ln708_246_fu_50677_p4.read().is_01() || !zext_ln415_248_fu_50703_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_246_fu_50677_p4.read()) + sc_biguint<16>(zext_ln415_248_fu_50703_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_29_V_9_fu_55356_p2() {
    out_feature_t1_29_V_9_fu_55356_p2 = (!zext_ln415_284_fu_55352_p1.read().is_01() || !trunc_ln708_282_fu_55326_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_284_fu_55352_p1.read()) + sc_biguint<16>(trunc_ln708_282_fu_55326_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_29_V_fu_9749_p3() {
    out_feature_t1_29_V_fu_9749_p3 = (!or_ln340_301_fu_9727_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_301_fu_9727_p2.read()[0].to_bool())? select_ln340_29_fu_9733_p3.read(): select_ln388_29_fu_9741_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_2_V_10_fu_55870_p3() {
    out_feature_t1_2_V_10_fu_55870_p3 = (!and_ln786_524_fu_55841_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_524_fu_55841_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_2_V_9_reg_89843.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_2_V_11_fu_64482_p3() {
    out_feature_t1_2_V_11_fu_64482_p3 = (!or_ln340_791_fu_64464_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_791_fu_64464_p2.read()[0].to_bool())? select_ln340_358_fu_64469_p3.read(): select_ln388_325_fu_64476_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_2_V_1_fu_11640_p2() {
    out_feature_t1_2_V_1_fu_11640_p2 = (!zext_ln415_67_fu_11637_p1.read().is_01() || !trunc_ln708_65_reg_81213.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_67_fu_11637_p1.read()) + sc_biguint<16>(trunc_ln708_65_reg_81213.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_2_V_2_fu_11783_p3() {
    out_feature_t1_2_V_2_fu_11783_p3 = (!and_ln786_166_fu_11752_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_166_fu_11752_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_2_V_1_fu_11640_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_2_V_3_fu_17526_p2() {
    out_feature_t1_2_V_3_fu_17526_p2 = (!trunc_ln708_66_fu_17505_p4.read().is_01() || !zext_ln415_68_fu_17523_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_66_fu_17505_p4.read()) + sc_biguint<16>(zext_ln415_68_fu_17523_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_2_V_4_fu_24873_p3() {
    out_feature_t1_2_V_4_fu_24873_p3 = (!and_ln786_168_reg_82957.read()[0].is_01())? sc_lv<16>(): ((and_ln786_168_reg_82957.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_2_V_3_reg_82951.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_2_V_5_fu_33931_p2() {
    out_feature_t1_2_V_5_fu_33931_p2 = (!zext_ln415_165_fu_33927_p1.read().is_01() || !trunc_ln708_163_fu_33901_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_165_fu_33927_p1.read()) + sc_biguint<16>(trunc_ln708_163_fu_33901_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_2_V_6_fu_38544_p3() {
    out_feature_t1_2_V_6_fu_38544_p3 = (!and_ln786_340_reg_85598.read()[0].is_01())? sc_lv<16>(): ((and_ln786_340_reg_85598.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_2_V_5_reg_85578.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_2_V_7_fu_41159_p2() {
    out_feature_t1_2_V_7_fu_41159_p2 = (!trunc_ln708_164_reg_86589.read().is_01() || !zext_ln415_166_fu_41156_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_164_reg_86589.read()) + sc_biguint<16>(zext_ln415_166_fu_41156_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_2_V_8_fu_46954_p2() {
    out_feature_t1_2_V_8_fu_46954_p2 = (!trunc_ln708_165_fu_46924_p4.read().is_01() || !zext_ln415_167_fu_46950_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_165_fu_46924_p4.read()) + sc_biguint<16>(zext_ln415_167_fu_46950_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_2_V_9_fu_52278_p2() {
    out_feature_t1_2_V_9_fu_52278_p2 = (!zext_ln415_257_fu_52274_p1.read().is_01() || !trunc_ln708_255_fu_52248_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_257_fu_52274_p1.read()) + sc_biguint<16>(trunc_ln708_255_fu_52248_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_2_V_fu_6455_p3() {
    out_feature_t1_2_V_fu_6455_p3 = (!or_ln340_258_fu_6433_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_258_fu_6433_p2.read()[0].to_bool())? select_ln340_2_fu_6439_p3.read(): select_ln388_2_fu_6447_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_30_V_10_fu_58278_p3() {
    out_feature_t1_30_V_10_fu_58278_p3 = (!and_ln786_580_fu_58249_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_580_fu_58249_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_30_V_9_reg_90627.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_30_V_11_fu_66050_p3() {
    out_feature_t1_30_V_11_fu_66050_p3 = (!or_ln340_875_fu_66032_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_875_fu_66032_p2.read()[0].to_bool())? select_ln340_386_fu_66037_p3.read(): select_ln388_353_fu_66044_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_30_V_1_fu_16624_p2() {
    out_feature_t1_30_V_1_fu_16624_p2 = (!zext_ln415_123_fu_16621_p1.read().is_01() || !trunc_ln708_121_reg_82165.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_123_fu_16621_p1.read()) + sc_biguint<16>(trunc_ln708_121_reg_82165.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_30_V_2_fu_16767_p3() {
    out_feature_t1_30_V_2_fu_16767_p3 = (!and_ln786_257_fu_16736_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_257_fu_16736_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_30_V_1_fu_16624_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_30_V_3_fu_24386_p2() {
    out_feature_t1_30_V_3_fu_24386_p2 = (!trunc_ln708_122_fu_24365_p4.read().is_01() || !zext_ln415_124_fu_24383_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_122_fu_24365_p4.read()) + sc_biguint<16>(zext_ln415_124_fu_24383_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_30_V_4_fu_25573_p3() {
    out_feature_t1_30_V_4_fu_25573_p3 = (!and_ln786_259_reg_83685.read()[0].is_01())? sc_lv<16>(): ((and_ln786_259_reg_83685.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_30_V_3_reg_83679.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_30_V_5_fu_38131_p2() {
    out_feature_t1_30_V_5_fu_38131_p2 = (!zext_ln415_249_fu_38127_p1.read().is_01() || !trunc_ln708_247_fu_38101_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_249_fu_38127_p1.read()) + sc_biguint<16>(trunc_ln708_247_fu_38101_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_30_V_6_fu_40644_p3() {
    out_feature_t1_30_V_6_fu_40644_p3 = (!and_ln786_508_reg_86438.read()[0].is_01())? sc_lv<16>(): ((and_ln786_508_reg_86438.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_30_V_5_reg_86418.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_30_V_7_fu_46255_p2() {
    out_feature_t1_30_V_7_fu_46255_p2 = (!trunc_ln708_248_reg_87821.read().is_01() || !zext_ln415_250_fu_46252_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_248_reg_87821.read()) + sc_biguint<16>(zext_ln415_250_fu_46252_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_30_V_8_fu_50846_p2() {
    out_feature_t1_30_V_8_fu_50846_p2 = (!trunc_ln708_249_fu_50816_p4.read().is_01() || !zext_ln415_251_fu_50842_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_249_fu_50816_p4.read()) + sc_biguint<16>(zext_ln415_251_fu_50842_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_30_V_9_fu_55470_p2() {
    out_feature_t1_30_V_9_fu_55470_p2 = (!zext_ln415_285_fu_55466_p1.read().is_01() || !trunc_ln708_283_fu_55440_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_285_fu_55466_p1.read()) + sc_biguint<16>(trunc_ln708_283_fu_55440_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_30_V_fu_9871_p3() {
    out_feature_t1_30_V_fu_9871_p3 = (!or_ln340_302_fu_9849_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_302_fu_9849_p2.read()[0].to_bool())? select_ln340_30_fu_9855_p3.read(): select_ln388_30_fu_9863_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_31_V_10_fu_58364_p3() {
    out_feature_t1_31_V_10_fu_58364_p3 = (!and_ln786_582_fu_58335_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_582_fu_58335_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_31_V_9_reg_90655.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_31_V_11_fu_66106_p3() {
    out_feature_t1_31_V_11_fu_66106_p3 = (!or_ln340_878_fu_66088_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_878_fu_66088_p2.read()[0].to_bool())? select_ln340_387_fu_66093_p3.read(): select_ln388_354_fu_66100_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_31_V_1_fu_16802_p2() {
    out_feature_t1_31_V_1_fu_16802_p2 = (!zext_ln415_125_fu_16799_p1.read().is_01() || !trunc_ln708_123_reg_82199.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_125_fu_16799_p1.read()) + sc_biguint<16>(trunc_ln708_123_reg_82199.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_31_V_2_fu_16945_p3() {
    out_feature_t1_31_V_2_fu_16945_p3 = (!and_ln786_260_fu_16914_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_260_fu_16914_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_31_V_1_fu_16802_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_31_V_3_fu_24631_p2() {
    out_feature_t1_31_V_3_fu_24631_p2 = (!trunc_ln708_124_fu_24610_p4.read().is_01() || !zext_ln415_126_fu_24628_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_124_fu_24610_p4.read()) + sc_biguint<16>(zext_ln415_126_fu_24628_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_31_V_4_fu_25598_p3() {
    out_feature_t1_31_V_4_fu_25598_p3 = (!and_ln786_262_reg_83711.read()[0].is_01())? sc_lv<16>(): ((and_ln786_262_reg_83711.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_31_V_3_reg_83705.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_31_V_5_fu_38281_p2() {
    out_feature_t1_31_V_5_fu_38281_p2 = (!zext_ln415_252_fu_38277_p1.read().is_01() || !trunc_ln708_250_fu_38251_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_252_fu_38277_p1.read()) + sc_biguint<16>(trunc_ln708_250_fu_38251_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_31_V_6_fu_40719_p3() {
    out_feature_t1_31_V_6_fu_40719_p3 = (!and_ln786_514_reg_86468.read()[0].is_01())? sc_lv<16>(): ((and_ln786_514_reg_86468.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_31_V_5_reg_86448.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_31_V_7_fu_46437_p2() {
    out_feature_t1_31_V_7_fu_46437_p2 = (!trunc_ln708_251_reg_87865.read().is_01() || !zext_ln415_253_fu_46434_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_251_reg_87865.read()) + sc_biguint<16>(zext_ln415_253_fu_46434_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_31_V_8_fu_50985_p2() {
    out_feature_t1_31_V_8_fu_50985_p2 = (!trunc_ln708_252_fu_50955_p4.read().is_01() || !zext_ln415_254_fu_50981_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_252_fu_50955_p4.read()) + sc_biguint<16>(zext_ln415_254_fu_50981_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_31_V_9_fu_55584_p2() {
    out_feature_t1_31_V_9_fu_55584_p2 = (!zext_ln415_286_fu_55580_p1.read().is_01() || !trunc_ln708_284_fu_55554_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_286_fu_55580_p1.read()) + sc_biguint<16>(trunc_ln708_284_fu_55554_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_31_V_fu_9993_p3() {
    out_feature_t1_31_V_fu_9993_p3 = (!or_ln340_303_fu_9971_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_303_fu_9971_p2.read()[0].to_bool())? select_ln340_31_fu_9977_p3.read(): select_ln388_31_fu_9985_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_3_V_10_fu_55956_p3() {
    out_feature_t1_3_V_10_fu_55956_p3 = (!and_ln786_526_fu_55927_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_526_fu_55927_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_3_V_9_reg_89871.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_3_V_11_fu_64538_p3() {
    out_feature_t1_3_V_11_fu_64538_p3 = (!or_ln340_794_fu_64520_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_794_fu_64520_p2.read()[0].to_bool())? select_ln340_359_fu_64525_p3.read(): select_ln388_326_fu_64532_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_3_V_1_fu_11818_p2() {
    out_feature_t1_3_V_1_fu_11818_p2 = (!zext_ln415_69_fu_11815_p1.read().is_01() || !trunc_ln708_67_reg_81247.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_69_fu_11815_p1.read()) + sc_biguint<16>(trunc_ln708_67_reg_81247.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_3_V_2_fu_11961_p3() {
    out_feature_t1_3_V_2_fu_11961_p3 = (!and_ln786_169_fu_11930_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_169_fu_11930_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_3_V_1_fu_11818_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_3_V_3_fu_17771_p2() {
    out_feature_t1_3_V_3_fu_17771_p2 = (!trunc_ln708_68_fu_17750_p4.read().is_01() || !zext_ln415_70_fu_17768_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_68_fu_17750_p4.read()) + sc_biguint<16>(zext_ln415_70_fu_17768_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_3_V_4_fu_24898_p3() {
    out_feature_t1_3_V_4_fu_24898_p3 = (!and_ln786_171_reg_82983.read()[0].is_01())? sc_lv<16>(): ((and_ln786_171_reg_82983.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_3_V_3_reg_82977.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_3_V_5_fu_34081_p2() {
    out_feature_t1_3_V_5_fu_34081_p2 = (!zext_ln415_168_fu_34077_p1.read().is_01() || !trunc_ln708_166_fu_34051_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_168_fu_34077_p1.read()) + sc_biguint<16>(trunc_ln708_166_fu_34051_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_3_V_6_fu_38619_p3() {
    out_feature_t1_3_V_6_fu_38619_p3 = (!and_ln786_346_reg_85628.read()[0].is_01())? sc_lv<16>(): ((and_ln786_346_reg_85628.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_3_V_5_reg_85608.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_3_V_7_fu_41341_p2() {
    out_feature_t1_3_V_7_fu_41341_p2 = (!trunc_ln708_167_reg_86633.read().is_01() || !zext_ln415_169_fu_41338_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_167_reg_86633.read()) + sc_biguint<16>(zext_ln415_169_fu_41338_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_3_V_8_fu_47093_p2() {
    out_feature_t1_3_V_8_fu_47093_p2 = (!trunc_ln708_168_fu_47063_p4.read().is_01() || !zext_ln415_170_fu_47089_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_168_fu_47063_p4.read()) + sc_biguint<16>(zext_ln415_170_fu_47089_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_3_V_9_fu_52392_p2() {
    out_feature_t1_3_V_9_fu_52392_p2 = (!zext_ln415_258_fu_52388_p1.read().is_01() || !trunc_ln708_256_fu_52362_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_258_fu_52388_p1.read()) + sc_biguint<16>(trunc_ln708_256_fu_52362_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_3_V_fu_6577_p3() {
    out_feature_t1_3_V_fu_6577_p3 = (!or_ln340_259_fu_6555_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_259_fu_6555_p2.read()[0].to_bool())? select_ln340_3_fu_6561_p3.read(): select_ln388_96_fu_6569_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_4_V_10_fu_56042_p3() {
    out_feature_t1_4_V_10_fu_56042_p3 = (!and_ln786_528_fu_56013_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_528_fu_56013_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_4_V_9_reg_89899.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_4_V_11_fu_64594_p3() {
    out_feature_t1_4_V_11_fu_64594_p3 = (!or_ln340_797_fu_64576_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_797_fu_64576_p2.read()[0].to_bool())? select_ln340_360_fu_64581_p3.read(): select_ln388_327_fu_64588_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_4_V_1_fu_11996_p2() {
    out_feature_t1_4_V_1_fu_11996_p2 = (!zext_ln415_71_fu_11993_p1.read().is_01() || !trunc_ln708_69_reg_81281.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_71_fu_11993_p1.read()) + sc_biguint<16>(trunc_ln708_69_reg_81281.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_4_V_2_fu_12139_p3() {
    out_feature_t1_4_V_2_fu_12139_p3 = (!and_ln786_173_fu_12108_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_173_fu_12108_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_4_V_1_fu_11996_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_4_V_3_fu_18016_p2() {
    out_feature_t1_4_V_3_fu_18016_p2 = (!trunc_ln708_70_fu_17995_p4.read().is_01() || !zext_ln415_72_fu_18013_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_70_fu_17995_p4.read()) + sc_biguint<16>(zext_ln415_72_fu_18013_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_4_V_4_fu_24923_p3() {
    out_feature_t1_4_V_4_fu_24923_p3 = (!and_ln786_175_reg_83009.read()[0].is_01())? sc_lv<16>(): ((and_ln786_175_reg_83009.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_4_V_3_reg_83003.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_4_V_5_fu_34231_p2() {
    out_feature_t1_4_V_5_fu_34231_p2 = (!zext_ln415_171_fu_34227_p1.read().is_01() || !trunc_ln708_169_fu_34201_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_171_fu_34227_p1.read()) + sc_biguint<16>(trunc_ln708_169_fu_34201_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_4_V_6_fu_38694_p3() {
    out_feature_t1_4_V_6_fu_38694_p3 = (!and_ln786_352_reg_85658.read()[0].is_01())? sc_lv<16>(): ((and_ln786_352_reg_85658.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_4_V_5_reg_85638.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_4_V_7_fu_41523_p2() {
    out_feature_t1_4_V_7_fu_41523_p2 = (!trunc_ln708_170_reg_86677.read().is_01() || !zext_ln415_172_fu_41520_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_170_reg_86677.read()) + sc_biguint<16>(zext_ln415_172_fu_41520_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_4_V_8_fu_47232_p2() {
    out_feature_t1_4_V_8_fu_47232_p2 = (!trunc_ln708_171_fu_47202_p4.read().is_01() || !zext_ln415_173_fu_47228_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_171_fu_47202_p4.read()) + sc_biguint<16>(zext_ln415_173_fu_47228_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_4_V_9_fu_52506_p2() {
    out_feature_t1_4_V_9_fu_52506_p2 = (!zext_ln415_259_fu_52502_p1.read().is_01() || !trunc_ln708_257_fu_52476_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_259_fu_52502_p1.read()) + sc_biguint<16>(trunc_ln708_257_fu_52476_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_4_V_fu_6699_p3() {
    out_feature_t1_4_V_fu_6699_p3 = (!or_ln340_260_fu_6677_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_260_fu_6677_p2.read()[0].to_bool())? select_ln340_128_fu_6683_p3.read(): select_ln388_97_fu_6691_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_5_V_10_fu_56128_p3() {
    out_feature_t1_5_V_10_fu_56128_p3 = (!and_ln786_530_fu_56099_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_530_fu_56099_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_5_V_9_reg_89927.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_5_V_11_fu_64650_p3() {
    out_feature_t1_5_V_11_fu_64650_p3 = (!or_ln340_800_fu_64632_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_800_fu_64632_p2.read()[0].to_bool())? select_ln340_361_fu_64637_p3.read(): select_ln388_328_fu_64644_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_5_V_1_fu_12174_p2() {
    out_feature_t1_5_V_1_fu_12174_p2 = (!zext_ln415_73_fu_12171_p1.read().is_01() || !trunc_ln708_71_reg_81315.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_73_fu_12171_p1.read()) + sc_biguint<16>(trunc_ln708_71_reg_81315.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_5_V_2_fu_12317_p3() {
    out_feature_t1_5_V_2_fu_12317_p3 = (!and_ln786_176_fu_12286_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_176_fu_12286_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_5_V_1_fu_12174_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_5_V_3_fu_18261_p2() {
    out_feature_t1_5_V_3_fu_18261_p2 = (!trunc_ln708_72_fu_18240_p4.read().is_01() || !zext_ln415_74_fu_18258_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_72_fu_18240_p4.read()) + sc_biguint<16>(zext_ln415_74_fu_18258_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_5_V_4_fu_24948_p3() {
    out_feature_t1_5_V_4_fu_24948_p3 = (!and_ln786_178_reg_83035.read()[0].is_01())? sc_lv<16>(): ((and_ln786_178_reg_83035.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_5_V_3_reg_83029.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_5_V_5_fu_34381_p2() {
    out_feature_t1_5_V_5_fu_34381_p2 = (!zext_ln415_174_fu_34377_p1.read().is_01() || !trunc_ln708_172_fu_34351_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_174_fu_34377_p1.read()) + sc_biguint<16>(trunc_ln708_172_fu_34351_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_5_V_6_fu_38769_p3() {
    out_feature_t1_5_V_6_fu_38769_p3 = (!and_ln786_358_reg_85688.read()[0].is_01())? sc_lv<16>(): ((and_ln786_358_reg_85688.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_5_V_5_reg_85668.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_5_V_7_fu_41705_p2() {
    out_feature_t1_5_V_7_fu_41705_p2 = (!trunc_ln708_173_reg_86721.read().is_01() || !zext_ln415_175_fu_41702_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_173_reg_86721.read()) + sc_biguint<16>(zext_ln415_175_fu_41702_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_5_V_8_fu_47371_p2() {
    out_feature_t1_5_V_8_fu_47371_p2 = (!trunc_ln708_174_fu_47341_p4.read().is_01() || !zext_ln415_176_fu_47367_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_174_fu_47341_p4.read()) + sc_biguint<16>(zext_ln415_176_fu_47367_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_5_V_9_fu_52620_p2() {
    out_feature_t1_5_V_9_fu_52620_p2 = (!zext_ln415_260_fu_52616_p1.read().is_01() || !trunc_ln708_258_fu_52590_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_260_fu_52616_p1.read()) + sc_biguint<16>(trunc_ln708_258_fu_52590_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_5_V_fu_6821_p3() {
    out_feature_t1_5_V_fu_6821_p3 = (!or_ln340_261_fu_6799_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_261_fu_6799_p2.read()[0].to_bool())? select_ln340_129_fu_6805_p3.read(): select_ln388_98_fu_6813_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_6_V_10_fu_56214_p3() {
    out_feature_t1_6_V_10_fu_56214_p3 = (!and_ln786_532_fu_56185_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_532_fu_56185_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_6_V_9_reg_89955.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_6_V_11_fu_64706_p3() {
    out_feature_t1_6_V_11_fu_64706_p3 = (!or_ln340_803_fu_64688_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_803_fu_64688_p2.read()[0].to_bool())? select_ln340_362_fu_64693_p3.read(): select_ln388_329_fu_64700_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_6_V_1_fu_12352_p2() {
    out_feature_t1_6_V_1_fu_12352_p2 = (!zext_ln415_75_fu_12349_p1.read().is_01() || !trunc_ln708_73_reg_81349.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_75_fu_12349_p1.read()) + sc_biguint<16>(trunc_ln708_73_reg_81349.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_6_V_2_fu_12495_p3() {
    out_feature_t1_6_V_2_fu_12495_p3 = (!and_ln786_180_fu_12464_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_180_fu_12464_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_6_V_1_fu_12352_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_6_V_3_fu_18506_p2() {
    out_feature_t1_6_V_3_fu_18506_p2 = (!trunc_ln708_74_fu_18485_p4.read().is_01() || !zext_ln415_76_fu_18503_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_74_fu_18485_p4.read()) + sc_biguint<16>(zext_ln415_76_fu_18503_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_6_V_4_fu_24973_p3() {
    out_feature_t1_6_V_4_fu_24973_p3 = (!and_ln786_182_reg_83061.read()[0].is_01())? sc_lv<16>(): ((and_ln786_182_reg_83061.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_6_V_3_reg_83055.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_6_V_5_fu_34531_p2() {
    out_feature_t1_6_V_5_fu_34531_p2 = (!zext_ln415_177_fu_34527_p1.read().is_01() || !trunc_ln708_175_fu_34501_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_177_fu_34527_p1.read()) + sc_biguint<16>(trunc_ln708_175_fu_34501_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_6_V_6_fu_38844_p3() {
    out_feature_t1_6_V_6_fu_38844_p3 = (!and_ln786_364_reg_85718.read()[0].is_01())? sc_lv<16>(): ((and_ln786_364_reg_85718.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_6_V_5_reg_85698.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_6_V_7_fu_41887_p2() {
    out_feature_t1_6_V_7_fu_41887_p2 = (!trunc_ln708_176_reg_86765.read().is_01() || !zext_ln415_178_fu_41884_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_176_reg_86765.read()) + sc_biguint<16>(zext_ln415_178_fu_41884_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_6_V_8_fu_47510_p2() {
    out_feature_t1_6_V_8_fu_47510_p2 = (!trunc_ln708_177_fu_47480_p4.read().is_01() || !zext_ln415_179_fu_47506_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_177_fu_47480_p4.read()) + sc_biguint<16>(zext_ln415_179_fu_47506_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_6_V_9_fu_52734_p2() {
    out_feature_t1_6_V_9_fu_52734_p2 = (!zext_ln415_261_fu_52730_p1.read().is_01() || !trunc_ln708_259_fu_52704_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_261_fu_52730_p1.read()) + sc_biguint<16>(trunc_ln708_259_fu_52704_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_6_V_fu_6943_p3() {
    out_feature_t1_6_V_fu_6943_p3 = (!or_ln340_262_fu_6921_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_262_fu_6921_p2.read()[0].to_bool())? select_ln340_130_fu_6927_p3.read(): select_ln388_6_fu_6935_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_7_V_10_fu_56300_p3() {
    out_feature_t1_7_V_10_fu_56300_p3 = (!and_ln786_534_fu_56271_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_534_fu_56271_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_7_V_9_reg_89983.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_7_V_11_fu_64762_p3() {
    out_feature_t1_7_V_11_fu_64762_p3 = (!or_ln340_806_fu_64744_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_806_fu_64744_p2.read()[0].to_bool())? select_ln340_363_fu_64749_p3.read(): select_ln388_330_fu_64756_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_7_V_1_fu_12530_p2() {
    out_feature_t1_7_V_1_fu_12530_p2 = (!zext_ln415_77_fu_12527_p1.read().is_01() || !trunc_ln708_75_reg_81383.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_77_fu_12527_p1.read()) + sc_biguint<16>(trunc_ln708_75_reg_81383.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_7_V_2_fu_12673_p3() {
    out_feature_t1_7_V_2_fu_12673_p3 = (!and_ln786_183_fu_12642_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_183_fu_12642_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_7_V_1_fu_12530_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_7_V_3_fu_18751_p2() {
    out_feature_t1_7_V_3_fu_18751_p2 = (!trunc_ln708_76_fu_18730_p4.read().is_01() || !zext_ln415_78_fu_18748_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_76_fu_18730_p4.read()) + sc_biguint<16>(zext_ln415_78_fu_18748_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_7_V_4_fu_24998_p3() {
    out_feature_t1_7_V_4_fu_24998_p3 = (!and_ln786_185_reg_83087.read()[0].is_01())? sc_lv<16>(): ((and_ln786_185_reg_83087.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_7_V_3_reg_83081.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_7_V_5_fu_34681_p2() {
    out_feature_t1_7_V_5_fu_34681_p2 = (!zext_ln415_180_fu_34677_p1.read().is_01() || !trunc_ln708_178_fu_34651_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_180_fu_34677_p1.read()) + sc_biguint<16>(trunc_ln708_178_fu_34651_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_7_V_6_fu_38919_p3() {
    out_feature_t1_7_V_6_fu_38919_p3 = (!and_ln786_370_reg_85748.read()[0].is_01())? sc_lv<16>(): ((and_ln786_370_reg_85748.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_7_V_5_reg_85728.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_7_V_7_fu_42069_p2() {
    out_feature_t1_7_V_7_fu_42069_p2 = (!trunc_ln708_179_reg_86809.read().is_01() || !zext_ln415_181_fu_42066_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_179_reg_86809.read()) + sc_biguint<16>(zext_ln415_181_fu_42066_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_7_V_8_fu_47649_p2() {
    out_feature_t1_7_V_8_fu_47649_p2 = (!trunc_ln708_180_fu_47619_p4.read().is_01() || !zext_ln415_182_fu_47645_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_180_fu_47619_p4.read()) + sc_biguint<16>(zext_ln415_182_fu_47645_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_7_V_9_fu_52848_p2() {
    out_feature_t1_7_V_9_fu_52848_p2 = (!zext_ln415_262_fu_52844_p1.read().is_01() || !trunc_ln708_260_fu_52818_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_262_fu_52844_p1.read()) + sc_biguint<16>(trunc_ln708_260_fu_52818_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_7_V_fu_7065_p3() {
    out_feature_t1_7_V_fu_7065_p3 = (!or_ln340_263_fu_7043_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_263_fu_7043_p2.read()[0].to_bool())? select_ln340_131_fu_7049_p3.read(): select_ln388_7_fu_7057_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_8_V_10_fu_56386_p3() {
    out_feature_t1_8_V_10_fu_56386_p3 = (!and_ln786_536_fu_56357_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_536_fu_56357_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_8_V_9_reg_90011.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_8_V_11_fu_64818_p3() {
    out_feature_t1_8_V_11_fu_64818_p3 = (!or_ln340_809_fu_64800_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_809_fu_64800_p2.read()[0].to_bool())? select_ln340_364_fu_64805_p3.read(): select_ln388_331_fu_64812_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_8_V_1_fu_12708_p2() {
    out_feature_t1_8_V_1_fu_12708_p2 = (!zext_ln415_79_fu_12705_p1.read().is_01() || !trunc_ln708_77_reg_81417.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_79_fu_12705_p1.read()) + sc_biguint<16>(trunc_ln708_77_reg_81417.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_8_V_2_fu_12851_p3() {
    out_feature_t1_8_V_2_fu_12851_p3 = (!and_ln786_187_fu_12820_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_187_fu_12820_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_8_V_1_fu_12708_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_8_V_3_fu_18996_p2() {
    out_feature_t1_8_V_3_fu_18996_p2 = (!trunc_ln708_78_fu_18975_p4.read().is_01() || !zext_ln415_80_fu_18993_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_78_fu_18975_p4.read()) + sc_biguint<16>(zext_ln415_80_fu_18993_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_8_V_4_fu_25023_p3() {
    out_feature_t1_8_V_4_fu_25023_p3 = (!and_ln786_189_reg_83113.read()[0].is_01())? sc_lv<16>(): ((and_ln786_189_reg_83113.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_8_V_3_reg_83107.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_8_V_5_fu_34831_p2() {
    out_feature_t1_8_V_5_fu_34831_p2 = (!zext_ln415_183_fu_34827_p1.read().is_01() || !trunc_ln708_181_fu_34801_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_183_fu_34827_p1.read()) + sc_biguint<16>(trunc_ln708_181_fu_34801_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_8_V_6_fu_38994_p3() {
    out_feature_t1_8_V_6_fu_38994_p3 = (!and_ln786_376_reg_85778.read()[0].is_01())? sc_lv<16>(): ((and_ln786_376_reg_85778.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_8_V_5_reg_85758.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_8_V_7_fu_42251_p2() {
    out_feature_t1_8_V_7_fu_42251_p2 = (!trunc_ln708_182_reg_86853.read().is_01() || !zext_ln415_184_fu_42248_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_182_reg_86853.read()) + sc_biguint<16>(zext_ln415_184_fu_42248_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_8_V_8_fu_47788_p2() {
    out_feature_t1_8_V_8_fu_47788_p2 = (!trunc_ln708_183_fu_47758_p4.read().is_01() || !zext_ln415_185_fu_47784_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_183_fu_47758_p4.read()) + sc_biguint<16>(zext_ln415_185_fu_47784_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_8_V_9_fu_52962_p2() {
    out_feature_t1_8_V_9_fu_52962_p2 = (!zext_ln415_263_fu_52958_p1.read().is_01() || !trunc_ln708_261_fu_52932_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_263_fu_52958_p1.read()) + sc_biguint<16>(trunc_ln708_261_fu_52932_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_8_V_fu_7187_p3() {
    out_feature_t1_8_V_fu_7187_p3 = (!or_ln340_265_fu_7165_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_265_fu_7165_p2.read()[0].to_bool())? select_ln340_8_fu_7171_p3.read(): select_ln388_8_fu_7179_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_9_V_10_fu_56472_p3() {
    out_feature_t1_9_V_10_fu_56472_p3 = (!and_ln786_538_fu_56443_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_538_fu_56443_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_9_V_9_reg_90039.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_9_V_11_fu_64874_p3() {
    out_feature_t1_9_V_11_fu_64874_p3 = (!or_ln340_812_fu_64856_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_812_fu_64856_p2.read()[0].to_bool())? select_ln340_365_fu_64861_p3.read(): select_ln388_332_fu_64868_p3.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_9_V_1_fu_12886_p2() {
    out_feature_t1_9_V_1_fu_12886_p2 = (!zext_ln415_81_fu_12883_p1.read().is_01() || !trunc_ln708_79_reg_81451.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_81_fu_12883_p1.read()) + sc_biguint<16>(trunc_ln708_79_reg_81451.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_9_V_2_fu_13029_p3() {
    out_feature_t1_9_V_2_fu_13029_p3 = (!and_ln786_190_fu_12998_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln786_190_fu_12998_p2.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_9_V_1_fu_12886_p2.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_9_V_3_fu_19241_p2() {
    out_feature_t1_9_V_3_fu_19241_p2 = (!trunc_ln708_80_fu_19220_p4.read().is_01() || !zext_ln415_82_fu_19238_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_80_fu_19220_p4.read()) + sc_biguint<16>(zext_ln415_82_fu_19238_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_9_V_4_fu_25048_p3() {
    out_feature_t1_9_V_4_fu_25048_p3 = (!and_ln786_192_reg_83139.read()[0].is_01())? sc_lv<16>(): ((and_ln786_192_reg_83139.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_9_V_3_reg_83133.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_9_V_5_fu_34981_p2() {
    out_feature_t1_9_V_5_fu_34981_p2 = (!zext_ln415_186_fu_34977_p1.read().is_01() || !trunc_ln708_184_fu_34951_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_186_fu_34977_p1.read()) + sc_biguint<16>(trunc_ln708_184_fu_34951_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_9_V_6_fu_39069_p3() {
    out_feature_t1_9_V_6_fu_39069_p3 = (!and_ln786_382_reg_85808.read()[0].is_01())? sc_lv<16>(): ((and_ln786_382_reg_85808.read()[0].to_bool())? ap_const_lv16_8000: out_feature_t1_9_V_5_reg_85788.read());
}

void bn_relu_sc_relu::thread_out_feature_t1_9_V_7_fu_42433_p2() {
    out_feature_t1_9_V_7_fu_42433_p2 = (!trunc_ln708_185_reg_86897.read().is_01() || !zext_ln415_187_fu_42430_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_185_reg_86897.read()) + sc_biguint<16>(zext_ln415_187_fu_42430_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_9_V_8_fu_47927_p2() {
    out_feature_t1_9_V_8_fu_47927_p2 = (!trunc_ln708_186_fu_47897_p4.read().is_01() || !zext_ln415_188_fu_47923_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln708_186_fu_47897_p4.read()) + sc_biguint<16>(zext_ln415_188_fu_47923_p1.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_9_V_9_fu_53076_p2() {
    out_feature_t1_9_V_9_fu_53076_p2 = (!zext_ln415_264_fu_53072_p1.read().is_01() || !trunc_ln708_262_fu_53046_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln415_264_fu_53072_p1.read()) + sc_biguint<16>(trunc_ln708_262_fu_53046_p4.read()));
}

void bn_relu_sc_relu::thread_out_feature_t1_9_V_fu_7309_p3() {
    out_feature_t1_9_V_fu_7309_p3 = (!or_ln340_267_fu_7287_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_267_fu_7287_p2.read()[0].to_bool())? select_ln340_9_fu_7293_p3.read(): select_ln388_9_fu_7301_p3.read());
}

void bn_relu_sc_relu::thread_p_Result_174_10_fu_7461_p4() {
    p_Result_174_10_fu_7461_p4 = out_buf_all_11_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_11_fu_7583_p4() {
    p_Result_174_11_fu_7583_p4 = out_buf_all_12_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_12_fu_7705_p4() {
    p_Result_174_12_fu_7705_p4 = out_buf_all_13_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_13_fu_7827_p4() {
    p_Result_174_13_fu_7827_p4 = out_buf_all_14_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_14_fu_7949_p4() {
    p_Result_174_14_fu_7949_p4 = out_buf_all_15_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_15_fu_8071_p4() {
    p_Result_174_15_fu_8071_p4 = out_buf_all_16_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_16_fu_8193_p4() {
    p_Result_174_16_fu_8193_p4 = out_buf_all_17_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_17_fu_8315_p4() {
    p_Result_174_17_fu_8315_p4 = out_buf_all_18_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_18_fu_8437_p4() {
    p_Result_174_18_fu_8437_p4 = out_buf_all_19_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_19_fu_8559_p4() {
    p_Result_174_19_fu_8559_p4 = out_buf_all_20_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_1_fu_6241_p4() {
    p_Result_174_1_fu_6241_p4 = out_buf_all_1_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_20_fu_8681_p4() {
    p_Result_174_20_fu_8681_p4 = out_buf_all_21_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_21_fu_8803_p4() {
    p_Result_174_21_fu_8803_p4 = out_buf_all_22_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_22_fu_8925_p4() {
    p_Result_174_22_fu_8925_p4 = out_buf_all_23_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_23_fu_9047_p4() {
    p_Result_174_23_fu_9047_p4 = out_buf_all_24_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_24_fu_9169_p4() {
    p_Result_174_24_fu_9169_p4 = out_buf_all_25_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_25_fu_9291_p4() {
    p_Result_174_25_fu_9291_p4 = out_buf_all_26_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_26_fu_9413_p4() {
    p_Result_174_26_fu_9413_p4 = out_buf_all_27_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_27_fu_9535_p4() {
    p_Result_174_27_fu_9535_p4 = out_buf_all_28_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_28_fu_9657_p4() {
    p_Result_174_28_fu_9657_p4 = out_buf_all_29_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_29_fu_9779_p4() {
    p_Result_174_29_fu_9779_p4 = out_buf_all_30_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_2_fu_6363_p4() {
    p_Result_174_2_fu_6363_p4 = out_buf_all_2_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_30_fu_9901_p4() {
    p_Result_174_30_fu_9901_p4 = out_buf_all_31_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_3_fu_6485_p4() {
    p_Result_174_3_fu_6485_p4 = out_buf_all_3_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_4_fu_6607_p4() {
    p_Result_174_4_fu_6607_p4 = out_buf_all_4_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_5_fu_6729_p4() {
    p_Result_174_5_fu_6729_p4 = out_buf_all_5_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_6_fu_6851_p4() {
    p_Result_174_6_fu_6851_p4 = out_buf_all_6_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_7_fu_6973_p4() {
    p_Result_174_7_fu_6973_p4 = out_buf_all_7_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_8_fu_7095_p4() {
    p_Result_174_8_fu_7095_p4 = out_buf_all_8_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_9_fu_7217_p4() {
    p_Result_174_9_fu_7217_p4 = out_buf_all_9_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_174_s_fu_7339_p4() {
    p_Result_174_s_fu_7339_p4 = out_buf_all_10_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_p_Result_211_10_fu_67478_p4() {
    p_Result_211_10_fu_67478_p4 = out_feature_t1_11_V_11_fu_64986_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_11_fu_67600_p4() {
    p_Result_211_11_fu_67600_p4 = out_feature_t1_12_V_11_fu_65042_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_12_fu_67722_p4() {
    p_Result_211_12_fu_67722_p4 = out_feature_t1_13_V_11_fu_65098_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_13_fu_67844_p4() {
    p_Result_211_13_fu_67844_p4 = out_feature_t1_14_V_11_fu_65154_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_14_fu_67966_p4() {
    p_Result_211_14_fu_67966_p4 = out_feature_t1_15_V_11_fu_65210_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_15_fu_68088_p4() {
    p_Result_211_15_fu_68088_p4 = out_feature_t1_16_V_11_fu_65266_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_16_fu_68210_p4() {
    p_Result_211_16_fu_68210_p4 = out_feature_t1_17_V_11_fu_65322_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_17_fu_68332_p4() {
    p_Result_211_17_fu_68332_p4 = out_feature_t1_18_V_11_fu_65378_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_18_fu_68454_p4() {
    p_Result_211_18_fu_68454_p4 = out_feature_t1_19_V_11_fu_65434_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_19_fu_68576_p4() {
    p_Result_211_19_fu_68576_p4 = out_feature_t1_20_V_11_fu_65490_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_1_fu_66258_p4() {
    p_Result_211_1_fu_66258_p4 = out_feature_t1_1_V_11_fu_64426_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_20_fu_68698_p4() {
    p_Result_211_20_fu_68698_p4 = out_feature_t1_21_V_11_fu_65546_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_21_fu_68820_p4() {
    p_Result_211_21_fu_68820_p4 = out_feature_t1_22_V_11_fu_65602_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_22_fu_68942_p4() {
    p_Result_211_22_fu_68942_p4 = out_feature_t1_23_V_11_fu_65658_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_23_fu_69064_p4() {
    p_Result_211_23_fu_69064_p4 = out_feature_t1_24_V_11_fu_65714_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_24_fu_69186_p4() {
    p_Result_211_24_fu_69186_p4 = out_feature_t1_25_V_11_fu_65770_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_25_fu_69308_p4() {
    p_Result_211_25_fu_69308_p4 = out_feature_t1_26_V_11_fu_65826_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_26_fu_69430_p4() {
    p_Result_211_26_fu_69430_p4 = out_feature_t1_27_V_11_fu_65882_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_27_fu_69552_p4() {
    p_Result_211_27_fu_69552_p4 = out_feature_t1_28_V_11_fu_65938_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_28_fu_69674_p4() {
    p_Result_211_28_fu_69674_p4 = out_feature_t1_29_V_11_fu_65994_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_29_fu_69796_p4() {
    p_Result_211_29_fu_69796_p4 = out_feature_t1_30_V_11_fu_66050_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_2_fu_66380_p4() {
    p_Result_211_2_fu_66380_p4 = out_feature_t1_2_V_11_fu_64482_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_30_fu_69918_p4() {
    p_Result_211_30_fu_69918_p4 = out_feature_t1_31_V_11_fu_66106_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_3_fu_66502_p4() {
    p_Result_211_3_fu_66502_p4 = out_feature_t1_3_V_11_fu_64538_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_4_fu_66624_p4() {
    p_Result_211_4_fu_66624_p4 = out_feature_t1_4_V_11_fu_64594_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_5_fu_66746_p4() {
    p_Result_211_5_fu_66746_p4 = out_feature_t1_5_V_11_fu_64650_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_6_fu_66868_p4() {
    p_Result_211_6_fu_66868_p4 = out_feature_t1_6_V_11_fu_64706_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_7_fu_66990_p4() {
    p_Result_211_7_fu_66990_p4 = out_feature_t1_7_V_11_fu_64762_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_8_fu_67112_p4() {
    p_Result_211_8_fu_67112_p4 = out_feature_t1_8_V_11_fu_64818_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_9_fu_67234_p4() {
    p_Result_211_9_fu_67234_p4 = out_feature_t1_9_V_11_fu_64874_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_211_s_fu_67356_p4() {
    p_Result_211_s_fu_67356_p4 = out_feature_t1_10_V_11_fu_64930_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_3_fu_66136_p4() {
    p_Result_3_fu_66136_p4 = out_feature_t1_0_V_11_fu_64370_p3.read().range(15, 11);
}

void bn_relu_sc_relu::thread_p_Result_6_fu_6119_p4() {
    p_Result_6_fu_6119_p4 = out_buf_all_0_V_q0.read().range(15, 9);
}

void bn_relu_sc_relu::thread_row_fu_5818_p2() {
    row_fu_5818_p2 = (!ap_phi_mux_row_0_phi_fu_3747_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_row_0_phi_fu_3747_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void bn_relu_sc_relu::thread_row_tile_offset_fu_3886_p2() {
    row_tile_offset_fu_3886_p2 = (!sext_ln358_fu_3883_p1.read().is_01() || !grp_fu_3789_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln358_fu_3883_p1.read()) + sc_biguint<32>(grp_fu_3789_p2.read()));
}

void bn_relu_sc_relu::thread_select_ln1494_10_fu_25079_p3() {
    select_ln1494_10_fu_25079_p3 = (!icmp_ln1494_10_reg_83154.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_10_reg_83154.read()[0].to_bool())? out_feature_t1_10_V_4_fu_25073_p3.read(): select_ln340_458_reg_82432_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_11_fu_25104_p3() {
    select_ln1494_11_fu_25104_p3 = (!icmp_ln1494_11_reg_83180.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_11_reg_83180.read()[0].to_bool())? out_feature_t1_11_V_4_fu_25098_p3.read(): select_ln340_460_reg_82453_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_12_fu_25129_p3() {
    select_ln1494_12_fu_25129_p3 = (!icmp_ln1494_12_reg_83206.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_12_reg_83206.read()[0].to_bool())? out_feature_t1_12_V_4_fu_25123_p3.read(): select_ln340_462_reg_82474_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_13_fu_25154_p3() {
    select_ln1494_13_fu_25154_p3 = (!icmp_ln1494_13_reg_83232.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_13_reg_83232.read()[0].to_bool())? out_feature_t1_13_V_4_fu_25148_p3.read(): select_ln340_464_reg_82495_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_14_fu_25179_p3() {
    select_ln1494_14_fu_25179_p3 = (!icmp_ln1494_14_reg_83258.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_14_reg_83258.read()[0].to_bool())? out_feature_t1_14_V_4_fu_25173_p3.read(): select_ln340_466_reg_82516_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_15_fu_25204_p3() {
    select_ln1494_15_fu_25204_p3 = (!icmp_ln1494_15_reg_83284.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_15_reg_83284.read()[0].to_bool())? out_feature_t1_15_V_4_fu_25198_p3.read(): select_ln340_468_reg_82537_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_16_fu_25229_p3() {
    select_ln1494_16_fu_25229_p3 = (!icmp_ln1494_16_reg_83310.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_16_reg_83310.read()[0].to_bool())? out_feature_t1_16_V_4_fu_25223_p3.read(): select_ln340_470_reg_82558_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_17_fu_25254_p3() {
    select_ln1494_17_fu_25254_p3 = (!icmp_ln1494_17_reg_83336.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_17_reg_83336.read()[0].to_bool())? out_feature_t1_17_V_4_fu_25248_p3.read(): select_ln340_472_reg_82579_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_18_fu_25279_p3() {
    select_ln1494_18_fu_25279_p3 = (!icmp_ln1494_18_reg_83362.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_18_reg_83362.read()[0].to_bool())? out_feature_t1_18_V_4_fu_25273_p3.read(): select_ln340_474_reg_82600_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_19_fu_25304_p3() {
    select_ln1494_19_fu_25304_p3 = (!icmp_ln1494_19_reg_83388.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_19_reg_83388.read()[0].to_bool())? out_feature_t1_19_V_4_fu_25298_p3.read(): select_ln340_476_reg_82621_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_1_fu_24854_p3() {
    select_ln1494_1_fu_24854_p3 = (!icmp_ln1494_1_reg_82920.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_1_reg_82920.read()[0].to_bool())? out_feature_t1_1_V_4_fu_24848_p3.read(): select_ln340_307_reg_82243_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_20_fu_25329_p3() {
    select_ln1494_20_fu_25329_p3 = (!icmp_ln1494_20_reg_83414.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_20_reg_83414.read()[0].to_bool())? out_feature_t1_20_V_4_fu_25323_p3.read(): select_ln340_478_reg_82642_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_21_fu_25354_p3() {
    select_ln1494_21_fu_25354_p3 = (!icmp_ln1494_21_reg_83440.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_21_reg_83440.read()[0].to_bool())? out_feature_t1_21_V_4_fu_25348_p3.read(): select_ln340_480_reg_82663_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_22_fu_25379_p3() {
    select_ln1494_22_fu_25379_p3 = (!icmp_ln1494_22_reg_83466.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_22_reg_83466.read()[0].to_bool())? out_feature_t1_22_V_4_fu_25373_p3.read(): select_ln340_482_reg_82684_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_23_fu_25404_p3() {
    select_ln1494_23_fu_25404_p3 = (!icmp_ln1494_23_reg_83492.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_23_reg_83492.read()[0].to_bool())? out_feature_t1_23_V_4_fu_25398_p3.read(): select_ln340_484_reg_82705_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_24_fu_25429_p3() {
    select_ln1494_24_fu_25429_p3 = (!icmp_ln1494_24_reg_83518.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_24_reg_83518.read()[0].to_bool())? out_feature_t1_24_V_4_fu_25423_p3.read(): select_ln340_486_reg_82726_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_25_fu_25454_p3() {
    select_ln1494_25_fu_25454_p3 = (!icmp_ln1494_25_reg_83544.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_25_reg_83544.read()[0].to_bool())? out_feature_t1_25_V_4_fu_25448_p3.read(): select_ln340_488_reg_82747_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_26_fu_25479_p3() {
    select_ln1494_26_fu_25479_p3 = (!icmp_ln1494_26_reg_83570.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_26_reg_83570.read()[0].to_bool())? out_feature_t1_26_V_4_fu_25473_p3.read(): select_ln340_490_reg_82768_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_27_fu_25504_p3() {
    select_ln1494_27_fu_25504_p3 = (!icmp_ln1494_27_reg_83596.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_27_reg_83596.read()[0].to_bool())? out_feature_t1_27_V_4_fu_25498_p3.read(): select_ln340_492_reg_82789_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_28_fu_25529_p3() {
    select_ln1494_28_fu_25529_p3 = (!icmp_ln1494_28_reg_83622.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_28_reg_83622.read()[0].to_bool())? out_feature_t1_28_V_4_fu_25523_p3.read(): select_ln340_494_reg_82810_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_29_fu_25554_p3() {
    select_ln1494_29_fu_25554_p3 = (!icmp_ln1494_29_reg_83648.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_29_reg_83648.read()[0].to_bool())? out_feature_t1_29_V_4_fu_25548_p3.read(): select_ln340_496_reg_82831_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_2_fu_24879_p3() {
    select_ln1494_2_fu_24879_p3 = (!icmp_ln1494_2_reg_82946.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_2_reg_82946.read()[0].to_bool())? out_feature_t1_2_V_4_fu_24873_p3.read(): select_ln340_310_reg_82264_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_30_fu_25579_p3() {
    select_ln1494_30_fu_25579_p3 = (!icmp_ln1494_30_reg_83674.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_30_reg_83674.read()[0].to_bool())? out_feature_t1_30_V_4_fu_25573_p3.read(): select_ln340_498_reg_82852_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_31_fu_25604_p3() {
    select_ln1494_31_fu_25604_p3 = (!icmp_ln1494_31_reg_83700.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_31_reg_83700.read()[0].to_bool())? out_feature_t1_31_V_4_fu_25598_p3.read(): select_ln340_500_reg_82873_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_3_fu_24904_p3() {
    select_ln1494_3_fu_24904_p3 = (!icmp_ln1494_3_reg_82972.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_3_reg_82972.read()[0].to_bool())? out_feature_t1_3_V_4_fu_24898_p3.read(): select_ln340_313_reg_82285_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_4_fu_24929_p3() {
    select_ln1494_4_fu_24929_p3 = (!icmp_ln1494_4_reg_82998.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_4_reg_82998.read()[0].to_bool())? out_feature_t1_4_V_4_fu_24923_p3.read(): select_ln340_316_reg_82306_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_5_fu_24954_p3() {
    select_ln1494_5_fu_24954_p3 = (!icmp_ln1494_5_reg_83024.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_5_reg_83024.read()[0].to_bool())? out_feature_t1_5_V_4_fu_24948_p3.read(): select_ln340_319_reg_82327_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_6_fu_24979_p3() {
    select_ln1494_6_fu_24979_p3 = (!icmp_ln1494_6_reg_83050.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_6_reg_83050.read()[0].to_bool())? out_feature_t1_6_V_4_fu_24973_p3.read(): select_ln340_322_reg_82348_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_7_fu_25004_p3() {
    select_ln1494_7_fu_25004_p3 = (!icmp_ln1494_7_reg_83076.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_7_reg_83076.read()[0].to_bool())? out_feature_t1_7_V_4_fu_24998_p3.read(): select_ln340_452_reg_82369_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_8_fu_25029_p3() {
    select_ln1494_8_fu_25029_p3 = (!icmp_ln1494_8_reg_83102.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_8_reg_83102.read()[0].to_bool())? out_feature_t1_8_V_4_fu_25023_p3.read(): select_ln340_454_reg_82390_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_9_fu_25054_p3() {
    select_ln1494_9_fu_25054_p3 = (!icmp_ln1494_9_reg_83128.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_9_reg_83128.read()[0].to_bool())? out_feature_t1_9_V_4_fu_25048_p3.read(): select_ln340_456_reg_82411_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1494_fu_24829_p3() {
    select_ln1494_fu_24829_p3 = (!icmp_ln1494_reg_82894.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_reg_82894.read()[0].to_bool())? out_feature_t1_0_V_4_fu_24823_p3.read(): select_ln340_304_reg_82222_pp0_iter8_reg.read());
}

void bn_relu_sc_relu::thread_select_ln1495_10_fu_42781_p3() {
    select_ln1495_10_fu_42781_p3 = (!tmp_1430_reg_86923.read()[0].is_01())? sc_lv<16>(): ((tmp_1430_reg_86923.read()[0].to_bool())? select_ln388_195_fu_42773_p3.read(): select_ln340_554_reg_86918.read());
}

void bn_relu_sc_relu::thread_select_ln1495_11_fu_42963_p3() {
    select_ln1495_11_fu_42963_p3 = (!tmp_1447_reg_86967.read()[0].is_01())? sc_lv<16>(): ((tmp_1447_reg_86967.read()[0].to_bool())? select_ln388_198_fu_42955_p3.read(): select_ln340_559_reg_86962.read());
}

void bn_relu_sc_relu::thread_select_ln1495_12_fu_43145_p3() {
    select_ln1495_12_fu_43145_p3 = (!tmp_1464_reg_87011.read()[0].is_01())? sc_lv<16>(): ((tmp_1464_reg_87011.read()[0].to_bool())? select_ln388_201_fu_43137_p3.read(): select_ln340_564_reg_87006.read());
}

void bn_relu_sc_relu::thread_select_ln1495_13_fu_43327_p3() {
    select_ln1495_13_fu_43327_p3 = (!tmp_1481_reg_87055.read()[0].is_01())? sc_lv<16>(): ((tmp_1481_reg_87055.read()[0].to_bool())? select_ln388_204_fu_43319_p3.read(): select_ln340_569_reg_87050.read());
}

void bn_relu_sc_relu::thread_select_ln1495_14_fu_43509_p3() {
    select_ln1495_14_fu_43509_p3 = (!tmp_1498_reg_87099.read()[0].is_01())? sc_lv<16>(): ((tmp_1498_reg_87099.read()[0].to_bool())? select_ln388_207_fu_43501_p3.read(): select_ln340_574_reg_87094.read());
}

void bn_relu_sc_relu::thread_select_ln1495_15_fu_43691_p3() {
    select_ln1495_15_fu_43691_p3 = (!tmp_1515_reg_87143.read()[0].is_01())? sc_lv<16>(): ((tmp_1515_reg_87143.read()[0].to_bool())? select_ln388_210_fu_43683_p3.read(): select_ln340_579_reg_87138.read());
}

void bn_relu_sc_relu::thread_select_ln1495_16_fu_43873_p3() {
    select_ln1495_16_fu_43873_p3 = (!tmp_1532_reg_87187.read()[0].is_01())? sc_lv<16>(): ((tmp_1532_reg_87187.read()[0].to_bool())? select_ln388_213_fu_43865_p3.read(): select_ln340_584_reg_87182.read());
}

void bn_relu_sc_relu::thread_select_ln1495_17_fu_44055_p3() {
    select_ln1495_17_fu_44055_p3 = (!tmp_1549_reg_87231.read()[0].is_01())? sc_lv<16>(): ((tmp_1549_reg_87231.read()[0].to_bool())? select_ln388_216_fu_44047_p3.read(): select_ln340_589_reg_87226.read());
}

void bn_relu_sc_relu::thread_select_ln1495_18_fu_44237_p3() {
    select_ln1495_18_fu_44237_p3 = (!tmp_1566_reg_87275.read()[0].is_01())? sc_lv<16>(): ((tmp_1566_reg_87275.read()[0].to_bool())? select_ln388_219_fu_44229_p3.read(): select_ln340_594_reg_87270.read());
}

void bn_relu_sc_relu::thread_select_ln1495_19_fu_44419_p3() {
    select_ln1495_19_fu_44419_p3 = (!tmp_1583_reg_87319.read()[0].is_01())? sc_lv<16>(): ((tmp_1583_reg_87319.read()[0].to_bool())? select_ln388_222_fu_44411_p3.read(): select_ln340_599_reg_87314.read());
}

void bn_relu_sc_relu::thread_select_ln1495_1_fu_41143_p3() {
    select_ln1495_1_fu_41143_p3 = (!tmp_1277_reg_86527.read()[0].is_01())? sc_lv<16>(): ((tmp_1277_reg_86527.read()[0].to_bool())? select_ln388_168_fu_41135_p3.read(): select_ln340_509_reg_86522.read());
}

void bn_relu_sc_relu::thread_select_ln1495_20_fu_44601_p3() {
    select_ln1495_20_fu_44601_p3 = (!tmp_1600_reg_87363.read()[0].is_01())? sc_lv<16>(): ((tmp_1600_reg_87363.read()[0].to_bool())? select_ln388_225_fu_44593_p3.read(): select_ln340_604_reg_87358.read());
}

void bn_relu_sc_relu::thread_select_ln1495_21_fu_44783_p3() {
    select_ln1495_21_fu_44783_p3 = (!tmp_1617_reg_87407.read()[0].is_01())? sc_lv<16>(): ((tmp_1617_reg_87407.read()[0].to_bool())? select_ln388_228_fu_44775_p3.read(): select_ln340_609_reg_87402.read());
}

void bn_relu_sc_relu::thread_select_ln1495_22_fu_44965_p3() {
    select_ln1495_22_fu_44965_p3 = (!tmp_1634_reg_87451.read()[0].is_01())? sc_lv<16>(): ((tmp_1634_reg_87451.read()[0].to_bool())? select_ln388_231_fu_44957_p3.read(): select_ln340_614_reg_87446.read());
}

void bn_relu_sc_relu::thread_select_ln1495_23_fu_45147_p3() {
    select_ln1495_23_fu_45147_p3 = (!tmp_1651_reg_87495.read()[0].is_01())? sc_lv<16>(): ((tmp_1651_reg_87495.read()[0].to_bool())? select_ln388_234_fu_45139_p3.read(): select_ln340_619_reg_87490.read());
}

void bn_relu_sc_relu::thread_select_ln1495_24_fu_45329_p3() {
    select_ln1495_24_fu_45329_p3 = (!tmp_1668_reg_87539.read()[0].is_01())? sc_lv<16>(): ((tmp_1668_reg_87539.read()[0].to_bool())? select_ln388_237_fu_45321_p3.read(): select_ln340_624_reg_87534.read());
}

void bn_relu_sc_relu::thread_select_ln1495_25_fu_45511_p3() {
    select_ln1495_25_fu_45511_p3 = (!tmp_1685_reg_87583.read()[0].is_01())? sc_lv<16>(): ((tmp_1685_reg_87583.read()[0].to_bool())? select_ln388_240_fu_45503_p3.read(): select_ln340_629_reg_87578.read());
}

void bn_relu_sc_relu::thread_select_ln1495_26_fu_45693_p3() {
    select_ln1495_26_fu_45693_p3 = (!tmp_1702_reg_87627.read()[0].is_01())? sc_lv<16>(): ((tmp_1702_reg_87627.read()[0].to_bool())? select_ln388_243_fu_45685_p3.read(): select_ln340_634_reg_87622.read());
}

void bn_relu_sc_relu::thread_select_ln1495_27_fu_45875_p3() {
    select_ln1495_27_fu_45875_p3 = (!tmp_1719_reg_87671.read()[0].is_01())? sc_lv<16>(): ((tmp_1719_reg_87671.read()[0].to_bool())? select_ln388_246_fu_45867_p3.read(): select_ln340_639_reg_87666.read());
}

void bn_relu_sc_relu::thread_select_ln1495_28_fu_46057_p3() {
    select_ln1495_28_fu_46057_p3 = (!tmp_1736_reg_87715.read()[0].is_01())? sc_lv<16>(): ((tmp_1736_reg_87715.read()[0].to_bool())? select_ln388_249_fu_46049_p3.read(): select_ln340_644_reg_87710.read());
}

void bn_relu_sc_relu::thread_select_ln1495_29_fu_46239_p3() {
    select_ln1495_29_fu_46239_p3 = (!tmp_1753_reg_87759.read()[0].is_01())? sc_lv<16>(): ((tmp_1753_reg_87759.read()[0].to_bool())? select_ln388_252_fu_46231_p3.read(): select_ln340_649_reg_87754.read());
}

void bn_relu_sc_relu::thread_select_ln1495_2_fu_41325_p3() {
    select_ln1495_2_fu_41325_p3 = (!tmp_1294_reg_86571.read()[0].is_01())? sc_lv<16>(): ((tmp_1294_reg_86571.read()[0].to_bool())? select_ln388_171_fu_41317_p3.read(): select_ln340_514_reg_86566.read());
}

void bn_relu_sc_relu::thread_select_ln1495_30_fu_46421_p3() {
    select_ln1495_30_fu_46421_p3 = (!tmp_1770_reg_87803.read()[0].is_01())? sc_lv<16>(): ((tmp_1770_reg_87803.read()[0].to_bool())? select_ln388_255_fu_46413_p3.read(): select_ln340_654_reg_87798.read());
}

void bn_relu_sc_relu::thread_select_ln1495_31_fu_46603_p3() {
    select_ln1495_31_fu_46603_p3 = (!tmp_1787_reg_87847.read()[0].is_01())? sc_lv<16>(): ((tmp_1787_reg_87847.read()[0].to_bool())? select_ln388_258_fu_46595_p3.read(): select_ln340_659_reg_87842.read());
}

void bn_relu_sc_relu::thread_select_ln1495_3_fu_41507_p3() {
    select_ln1495_3_fu_41507_p3 = (!tmp_1311_reg_86615.read()[0].is_01())? sc_lv<16>(): ((tmp_1311_reg_86615.read()[0].to_bool())? select_ln388_174_fu_41499_p3.read(): select_ln340_519_reg_86610.read());
}

void bn_relu_sc_relu::thread_select_ln1495_4_fu_41689_p3() {
    select_ln1495_4_fu_41689_p3 = (!tmp_1328_reg_86659.read()[0].is_01())? sc_lv<16>(): ((tmp_1328_reg_86659.read()[0].to_bool())? select_ln388_177_fu_41681_p3.read(): select_ln340_524_reg_86654.read());
}

void bn_relu_sc_relu::thread_select_ln1495_5_fu_41871_p3() {
    select_ln1495_5_fu_41871_p3 = (!tmp_1345_reg_86703.read()[0].is_01())? sc_lv<16>(): ((tmp_1345_reg_86703.read()[0].to_bool())? select_ln388_180_fu_41863_p3.read(): select_ln340_529_reg_86698.read());
}

void bn_relu_sc_relu::thread_select_ln1495_6_fu_42053_p3() {
    select_ln1495_6_fu_42053_p3 = (!tmp_1362_reg_86747.read()[0].is_01())? sc_lv<16>(): ((tmp_1362_reg_86747.read()[0].to_bool())? select_ln388_183_fu_42045_p3.read(): select_ln340_534_reg_86742.read());
}

void bn_relu_sc_relu::thread_select_ln1495_7_fu_42235_p3() {
    select_ln1495_7_fu_42235_p3 = (!tmp_1379_reg_86791.read()[0].is_01())? sc_lv<16>(): ((tmp_1379_reg_86791.read()[0].to_bool())? select_ln388_186_fu_42227_p3.read(): select_ln340_539_reg_86786.read());
}

void bn_relu_sc_relu::thread_select_ln1495_8_fu_42417_p3() {
    select_ln1495_8_fu_42417_p3 = (!tmp_1396_reg_86835.read()[0].is_01())? sc_lv<16>(): ((tmp_1396_reg_86835.read()[0].to_bool())? select_ln388_189_fu_42409_p3.read(): select_ln340_544_reg_86830.read());
}

void bn_relu_sc_relu::thread_select_ln1495_9_fu_42599_p3() {
    select_ln1495_9_fu_42599_p3 = (!tmp_1413_reg_86879.read()[0].is_01())? sc_lv<16>(): ((tmp_1413_reg_86879.read()[0].to_bool())? select_ln388_192_fu_42591_p3.read(): select_ln340_549_reg_86874.read());
}

void bn_relu_sc_relu::thread_select_ln1495_fu_40961_p3() {
    select_ln1495_fu_40961_p3 = (!tmp_1260_reg_86483.read()[0].is_01())? sc_lv<16>(): ((tmp_1260_reg_86483.read()[0].to_bool())? select_ln388_165_fu_40953_p3.read(): select_ln340_504_reg_86478.read());
}

void bn_relu_sc_relu::thread_select_ln340_10_fu_7415_p3() {
    select_ln340_10_fu_7415_p3 = (!or_ln340_268_fu_7397_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_268_fu_7397_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_73_fu_7325_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_11_fu_7537_p3() {
    select_ln340_11_fu_7537_p3 = (!or_ln340_270_fu_7519_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_270_fu_7519_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_74_fu_7447_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_128_fu_6683_p3() {
    select_ln340_128_fu_6683_p3 = (!or_ln340_4_fu_6665_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_4_fu_6665_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_67_fu_6593_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_129_fu_6805_p3() {
    select_ln340_129_fu_6805_p3 = (!or_ln340_5_fu_6787_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_5_fu_6787_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_68_fu_6715_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_12_fu_7659_p3() {
    select_ln340_12_fu_7659_p3 = (!or_ln340_272_fu_7641_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_272_fu_7641_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_75_fu_7569_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_130_fu_6927_p3() {
    select_ln340_130_fu_6927_p3 = (!or_ln340_6_fu_6909_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_6_fu_6909_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_69_fu_6837_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_131_fu_7049_p3() {
    select_ln340_131_fu_7049_p3 = (!or_ln340_7_fu_7031_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_7_fu_7031_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_70_fu_6959_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_132_fu_11419_p3() {
    select_ln340_132_fu_11419_p3 = (!or_ln340_304_fu_11401_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_304_fu_11401_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_0_V_1_fu_11284_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_133_fu_24817_p3() {
    select_ln340_133_fu_24817_p3 = (!or_ln340_306_reg_82910.read()[0].is_01())? sc_lv<16>(): ((or_ln340_306_reg_82910.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_0_V_3_reg_82899.read());
}

void bn_relu_sc_relu::thread_select_ln340_134_fu_11597_p3() {
    select_ln340_134_fu_11597_p3 = (!or_ln340_308_fu_11579_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_308_fu_11579_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_1_V_1_fu_11462_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_135_fu_24842_p3() {
    select_ln340_135_fu_24842_p3 = (!or_ln340_310_reg_82936.read()[0].is_01())? sc_lv<16>(): ((or_ln340_310_reg_82936.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_1_V_3_reg_82925.read());
}

void bn_relu_sc_relu::thread_select_ln340_136_fu_11775_p3() {
    select_ln340_136_fu_11775_p3 = (!or_ln340_312_fu_11757_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_312_fu_11757_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_2_V_1_fu_11640_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_137_fu_24867_p3() {
    select_ln340_137_fu_24867_p3 = (!or_ln340_314_reg_82962.read()[0].is_01())? sc_lv<16>(): ((or_ln340_314_reg_82962.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_2_V_3_reg_82951.read());
}

void bn_relu_sc_relu::thread_select_ln340_138_fu_11953_p3() {
    select_ln340_138_fu_11953_p3 = (!or_ln340_316_fu_11935_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_316_fu_11935_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_3_V_1_fu_11818_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_139_fu_24892_p3() {
    select_ln340_139_fu_24892_p3 = (!or_ln340_318_reg_82988.read()[0].is_01())? sc_lv<16>(): ((or_ln340_318_reg_82988.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_3_V_3_reg_82977.read());
}

void bn_relu_sc_relu::thread_select_ln340_13_fu_7781_p3() {
    select_ln340_13_fu_7781_p3 = (!or_ln340_274_fu_7763_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_274_fu_7763_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_76_fu_7691_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_140_fu_12131_p3() {
    select_ln340_140_fu_12131_p3 = (!or_ln340_320_fu_12113_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_320_fu_12113_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_4_V_1_fu_11996_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_141_fu_24917_p3() {
    select_ln340_141_fu_24917_p3 = (!or_ln340_322_reg_83014.read()[0].is_01())? sc_lv<16>(): ((or_ln340_322_reg_83014.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_4_V_3_reg_83003.read());
}

void bn_relu_sc_relu::thread_select_ln340_142_fu_12309_p3() {
    select_ln340_142_fu_12309_p3 = (!or_ln340_324_fu_12291_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_324_fu_12291_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_5_V_1_fu_12174_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_143_fu_24942_p3() {
    select_ln340_143_fu_24942_p3 = (!or_ln340_326_reg_83040.read()[0].is_01())? sc_lv<16>(): ((or_ln340_326_reg_83040.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_5_V_3_reg_83029.read());
}

void bn_relu_sc_relu::thread_select_ln340_144_fu_12487_p3() {
    select_ln340_144_fu_12487_p3 = (!or_ln340_328_fu_12469_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_328_fu_12469_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_6_V_1_fu_12352_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_145_fu_24967_p3() {
    select_ln340_145_fu_24967_p3 = (!or_ln340_330_reg_83066.read()[0].is_01())? sc_lv<16>(): ((or_ln340_330_reg_83066.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_6_V_3_reg_83055.read());
}

void bn_relu_sc_relu::thread_select_ln340_146_fu_12665_p3() {
    select_ln340_146_fu_12665_p3 = (!or_ln340_332_fu_12647_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_332_fu_12647_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_7_V_1_fu_12530_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_147_fu_24992_p3() {
    select_ln340_147_fu_24992_p3 = (!or_ln340_334_reg_83092.read()[0].is_01())? sc_lv<16>(): ((or_ln340_334_reg_83092.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_7_V_3_reg_83081.read());
}

void bn_relu_sc_relu::thread_select_ln340_148_fu_12843_p3() {
    select_ln340_148_fu_12843_p3 = (!or_ln340_336_fu_12825_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_336_fu_12825_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_8_V_1_fu_12708_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_149_fu_25017_p3() {
    select_ln340_149_fu_25017_p3 = (!or_ln340_338_reg_83118.read()[0].is_01())? sc_lv<16>(): ((or_ln340_338_reg_83118.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_8_V_3_reg_83107.read());
}

void bn_relu_sc_relu::thread_select_ln340_14_fu_7903_p3() {
    select_ln340_14_fu_7903_p3 = (!or_ln340_276_fu_7885_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_276_fu_7885_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_77_fu_7813_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_150_fu_13021_p3() {
    select_ln340_150_fu_13021_p3 = (!or_ln340_340_fu_13003_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_340_fu_13003_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_9_V_1_fu_12886_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_151_fu_25042_p3() {
    select_ln340_151_fu_25042_p3 = (!or_ln340_342_reg_83144.read()[0].is_01())? sc_lv<16>(): ((or_ln340_342_reg_83144.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_9_V_3_reg_83133.read());
}

void bn_relu_sc_relu::thread_select_ln340_152_fu_13199_p3() {
    select_ln340_152_fu_13199_p3 = (!or_ln340_344_fu_13181_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_344_fu_13181_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_10_V_1_fu_13064_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_153_fu_25067_p3() {
    select_ln340_153_fu_25067_p3 = (!or_ln340_346_reg_83170.read()[0].is_01())? sc_lv<16>(): ((or_ln340_346_reg_83170.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_10_V_3_reg_83159.read());
}

void bn_relu_sc_relu::thread_select_ln340_154_fu_13377_p3() {
    select_ln340_154_fu_13377_p3 = (!or_ln340_348_fu_13359_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_348_fu_13359_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_11_V_1_fu_13242_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_155_fu_25092_p3() {
    select_ln340_155_fu_25092_p3 = (!or_ln340_350_reg_83196.read()[0].is_01())? sc_lv<16>(): ((or_ln340_350_reg_83196.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_11_V_3_reg_83185.read());
}

void bn_relu_sc_relu::thread_select_ln340_156_fu_13555_p3() {
    select_ln340_156_fu_13555_p3 = (!or_ln340_352_fu_13537_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_352_fu_13537_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_12_V_1_fu_13420_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_157_fu_25117_p3() {
    select_ln340_157_fu_25117_p3 = (!or_ln340_354_reg_83222.read()[0].is_01())? sc_lv<16>(): ((or_ln340_354_reg_83222.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_12_V_3_reg_83211.read());
}

void bn_relu_sc_relu::thread_select_ln340_158_fu_13733_p3() {
    select_ln340_158_fu_13733_p3 = (!or_ln340_356_fu_13715_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_356_fu_13715_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_13_V_1_fu_13598_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_159_fu_25142_p3() {
    select_ln340_159_fu_25142_p3 = (!or_ln340_358_reg_83248.read()[0].is_01())? sc_lv<16>(): ((or_ln340_358_reg_83248.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_13_V_3_reg_83237.read());
}

void bn_relu_sc_relu::thread_select_ln340_15_fu_8025_p3() {
    select_ln340_15_fu_8025_p3 = (!or_ln340_278_fu_8007_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_278_fu_8007_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_78_fu_7935_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_160_fu_13911_p3() {
    select_ln340_160_fu_13911_p3 = (!or_ln340_360_fu_13893_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_360_fu_13893_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_14_V_1_fu_13776_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_161_fu_25167_p3() {
    select_ln340_161_fu_25167_p3 = (!or_ln340_362_reg_83274.read()[0].is_01())? sc_lv<16>(): ((or_ln340_362_reg_83274.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_14_V_3_reg_83263.read());
}

void bn_relu_sc_relu::thread_select_ln340_162_fu_14089_p3() {
    select_ln340_162_fu_14089_p3 = (!or_ln340_364_fu_14071_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_364_fu_14071_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_15_V_1_fu_13954_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_163_fu_25192_p3() {
    select_ln340_163_fu_25192_p3 = (!or_ln340_366_reg_83300.read()[0].is_01())? sc_lv<16>(): ((or_ln340_366_reg_83300.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_15_V_3_reg_83289.read());
}

void bn_relu_sc_relu::thread_select_ln340_164_fu_14267_p3() {
    select_ln340_164_fu_14267_p3 = (!or_ln340_368_fu_14249_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_368_fu_14249_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_16_V_1_fu_14132_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_165_fu_25217_p3() {
    select_ln340_165_fu_25217_p3 = (!or_ln340_370_reg_83326.read()[0].is_01())? sc_lv<16>(): ((or_ln340_370_reg_83326.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_16_V_3_reg_83315.read());
}

void bn_relu_sc_relu::thread_select_ln340_166_fu_14445_p3() {
    select_ln340_166_fu_14445_p3 = (!or_ln340_372_fu_14427_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_372_fu_14427_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_17_V_1_fu_14310_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_167_fu_25242_p3() {
    select_ln340_167_fu_25242_p3 = (!or_ln340_374_reg_83352.read()[0].is_01())? sc_lv<16>(): ((or_ln340_374_reg_83352.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_17_V_3_reg_83341.read());
}

void bn_relu_sc_relu::thread_select_ln340_168_fu_14623_p3() {
    select_ln340_168_fu_14623_p3 = (!or_ln340_376_fu_14605_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_376_fu_14605_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_18_V_1_fu_14488_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_169_fu_25267_p3() {
    select_ln340_169_fu_25267_p3 = (!or_ln340_378_reg_83378.read()[0].is_01())? sc_lv<16>(): ((or_ln340_378_reg_83378.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_18_V_3_reg_83367.read());
}

void bn_relu_sc_relu::thread_select_ln340_16_fu_8147_p3() {
    select_ln340_16_fu_8147_p3 = (!or_ln340_280_fu_8129_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_280_fu_8129_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_79_fu_8057_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_170_fu_14801_p3() {
    select_ln340_170_fu_14801_p3 = (!or_ln340_380_fu_14783_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_380_fu_14783_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_19_V_1_fu_14666_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_171_fu_25292_p3() {
    select_ln340_171_fu_25292_p3 = (!or_ln340_382_reg_83404.read()[0].is_01())? sc_lv<16>(): ((or_ln340_382_reg_83404.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_19_V_3_reg_83393.read());
}

void bn_relu_sc_relu::thread_select_ln340_172_fu_14979_p3() {
    select_ln340_172_fu_14979_p3 = (!or_ln340_384_fu_14961_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_384_fu_14961_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_20_V_1_fu_14844_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_173_fu_25317_p3() {
    select_ln340_173_fu_25317_p3 = (!or_ln340_386_reg_83430.read()[0].is_01())? sc_lv<16>(): ((or_ln340_386_reg_83430.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_20_V_3_reg_83419.read());
}

void bn_relu_sc_relu::thread_select_ln340_174_fu_15157_p3() {
    select_ln340_174_fu_15157_p3 = (!or_ln340_388_fu_15139_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_388_fu_15139_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_21_V_1_fu_15022_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_175_fu_25342_p3() {
    select_ln340_175_fu_25342_p3 = (!or_ln340_390_reg_83456.read()[0].is_01())? sc_lv<16>(): ((or_ln340_390_reg_83456.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_21_V_3_reg_83445.read());
}

void bn_relu_sc_relu::thread_select_ln340_176_fu_15335_p3() {
    select_ln340_176_fu_15335_p3 = (!or_ln340_392_fu_15317_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_392_fu_15317_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_22_V_1_fu_15200_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_177_fu_25367_p3() {
    select_ln340_177_fu_25367_p3 = (!or_ln340_394_reg_83482.read()[0].is_01())? sc_lv<16>(): ((or_ln340_394_reg_83482.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_22_V_3_reg_83471.read());
}

void bn_relu_sc_relu::thread_select_ln340_178_fu_15513_p3() {
    select_ln340_178_fu_15513_p3 = (!or_ln340_396_fu_15495_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_396_fu_15495_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_23_V_1_fu_15378_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_179_fu_25392_p3() {
    select_ln340_179_fu_25392_p3 = (!or_ln340_398_reg_83508.read()[0].is_01())? sc_lv<16>(): ((or_ln340_398_reg_83508.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_23_V_3_reg_83497.read());
}

void bn_relu_sc_relu::thread_select_ln340_17_fu_8269_p3() {
    select_ln340_17_fu_8269_p3 = (!or_ln340_282_fu_8251_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_282_fu_8251_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_80_fu_8179_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_180_fu_15691_p3() {
    select_ln340_180_fu_15691_p3 = (!or_ln340_400_fu_15673_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_400_fu_15673_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_24_V_1_fu_15556_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_181_fu_25417_p3() {
    select_ln340_181_fu_25417_p3 = (!or_ln340_402_reg_83534.read()[0].is_01())? sc_lv<16>(): ((or_ln340_402_reg_83534.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_24_V_3_reg_83523.read());
}

void bn_relu_sc_relu::thread_select_ln340_182_fu_15869_p3() {
    select_ln340_182_fu_15869_p3 = (!or_ln340_404_fu_15851_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_404_fu_15851_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_25_V_1_fu_15734_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_183_fu_25442_p3() {
    select_ln340_183_fu_25442_p3 = (!or_ln340_406_reg_83560.read()[0].is_01())? sc_lv<16>(): ((or_ln340_406_reg_83560.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_25_V_3_reg_83549.read());
}

void bn_relu_sc_relu::thread_select_ln340_184_fu_16047_p3() {
    select_ln340_184_fu_16047_p3 = (!or_ln340_408_fu_16029_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_408_fu_16029_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_26_V_1_fu_15912_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_185_fu_25467_p3() {
    select_ln340_185_fu_25467_p3 = (!or_ln340_410_reg_83586.read()[0].is_01())? sc_lv<16>(): ((or_ln340_410_reg_83586.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_26_V_3_reg_83575.read());
}

void bn_relu_sc_relu::thread_select_ln340_186_fu_16225_p3() {
    select_ln340_186_fu_16225_p3 = (!or_ln340_412_fu_16207_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_412_fu_16207_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_27_V_1_fu_16090_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_187_fu_25492_p3() {
    select_ln340_187_fu_25492_p3 = (!or_ln340_414_reg_83612.read()[0].is_01())? sc_lv<16>(): ((or_ln340_414_reg_83612.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_27_V_3_reg_83601.read());
}

void bn_relu_sc_relu::thread_select_ln340_188_fu_16403_p3() {
    select_ln340_188_fu_16403_p3 = (!or_ln340_416_fu_16385_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_416_fu_16385_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_28_V_1_fu_16268_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_189_fu_25517_p3() {
    select_ln340_189_fu_25517_p3 = (!or_ln340_418_reg_83638.read()[0].is_01())? sc_lv<16>(): ((or_ln340_418_reg_83638.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_28_V_3_reg_83627.read());
}

void bn_relu_sc_relu::thread_select_ln340_18_fu_8391_p3() {
    select_ln340_18_fu_8391_p3 = (!or_ln340_284_fu_8373_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_284_fu_8373_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_81_fu_8301_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_190_fu_16581_p3() {
    select_ln340_190_fu_16581_p3 = (!or_ln340_420_fu_16563_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_420_fu_16563_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_29_V_1_fu_16446_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_191_fu_25542_p3() {
    select_ln340_191_fu_25542_p3 = (!or_ln340_422_reg_83664.read()[0].is_01())? sc_lv<16>(): ((or_ln340_422_reg_83664.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_29_V_3_reg_83653.read());
}

void bn_relu_sc_relu::thread_select_ln340_192_fu_16759_p3() {
    select_ln340_192_fu_16759_p3 = (!or_ln340_424_fu_16741_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_424_fu_16741_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_30_V_1_fu_16624_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_193_fu_25567_p3() {
    select_ln340_193_fu_25567_p3 = (!or_ln340_426_reg_83690.read()[0].is_01())? sc_lv<16>(): ((or_ln340_426_reg_83690.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_30_V_3_reg_83679.read());
}

void bn_relu_sc_relu::thread_select_ln340_194_fu_16937_p3() {
    select_ln340_194_fu_16937_p3 = (!or_ln340_428_fu_16919_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_428_fu_16919_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_31_V_1_fu_16802_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_195_fu_25592_p3() {
    select_ln340_195_fu_25592_p3 = (!or_ln340_430_reg_83716.read()[0].is_01())? sc_lv<16>(): ((or_ln340_430_reg_83716.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_31_V_3_reg_83705.read());
}

void bn_relu_sc_relu::thread_select_ln340_19_fu_8513_p3() {
    select_ln340_19_fu_8513_p3 = (!or_ln340_286_fu_8495_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_286_fu_8495_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_82_fu_8423_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_1_fu_6317_p3() {
    select_ln340_1_fu_6317_p3 = (!or_ln340_1_fu_6299_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1_fu_6299_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_64_fu_6227_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_20_fu_8635_p3() {
    select_ln340_20_fu_8635_p3 = (!or_ln340_288_fu_8617_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_288_fu_8617_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_83_fu_8545_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_21_fu_8757_p3() {
    select_ln340_21_fu_8757_p3 = (!or_ln340_290_fu_8739_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_290_fu_8739_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_84_fu_8667_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_228_fu_33727_p3() {
    select_ln340_228_fu_33727_p3 = (!or_ln340_528_fu_33721_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_528_fu_33721_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_0_V_5_fu_33631_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_22_fu_8879_p3() {
    select_ln340_22_fu_8879_p3 = (!or_ln340_292_fu_8861_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_292_fu_8861_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_85_fu_8789_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_231_fu_33877_p3() {
    select_ln340_231_fu_33877_p3 = (!or_ln340_534_fu_33871_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_534_fu_33871_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_1_V_5_fu_33781_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_234_fu_34027_p3() {
    select_ln340_234_fu_34027_p3 = (!or_ln340_540_fu_34021_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_540_fu_34021_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_2_V_5_fu_33931_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_237_fu_34177_p3() {
    select_ln340_237_fu_34177_p3 = (!or_ln340_546_fu_34171_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_546_fu_34171_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_3_V_5_fu_34081_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_23_fu_9001_p3() {
    select_ln340_23_fu_9001_p3 = (!or_ln340_294_fu_8983_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_294_fu_8983_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_86_fu_8911_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_240_fu_34327_p3() {
    select_ln340_240_fu_34327_p3 = (!or_ln340_552_fu_34321_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_552_fu_34321_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_4_V_5_fu_34231_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_243_fu_34477_p3() {
    select_ln340_243_fu_34477_p3 = (!or_ln340_558_fu_34471_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_558_fu_34471_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_5_V_5_fu_34381_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_246_fu_34627_p3() {
    select_ln340_246_fu_34627_p3 = (!or_ln340_564_fu_34621_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_564_fu_34621_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_6_V_5_fu_34531_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_249_fu_34777_p3() {
    select_ln340_249_fu_34777_p3 = (!or_ln340_570_fu_34771_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_570_fu_34771_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_7_V_5_fu_34681_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_24_fu_9123_p3() {
    select_ln340_24_fu_9123_p3 = (!or_ln340_24_fu_9105_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_24_fu_9105_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_87_fu_9033_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_252_fu_34927_p3() {
    select_ln340_252_fu_34927_p3 = (!or_ln340_576_fu_34921_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_576_fu_34921_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_8_V_5_fu_34831_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_255_fu_35077_p3() {
    select_ln340_255_fu_35077_p3 = (!or_ln340_582_fu_35071_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_582_fu_35071_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_9_V_5_fu_34981_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_258_fu_35227_p3() {
    select_ln340_258_fu_35227_p3 = (!or_ln340_588_fu_35221_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_588_fu_35221_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_10_V_5_fu_35131_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_25_fu_9245_p3() {
    select_ln340_25_fu_9245_p3 = (!or_ln340_25_fu_9227_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_25_fu_9227_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_88_fu_9155_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_261_fu_35377_p3() {
    select_ln340_261_fu_35377_p3 = (!or_ln340_594_fu_35371_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_594_fu_35371_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_11_V_5_fu_35281_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_264_fu_35527_p3() {
    select_ln340_264_fu_35527_p3 = (!or_ln340_600_fu_35521_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_600_fu_35521_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_12_V_5_fu_35431_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_267_fu_35677_p3() {
    select_ln340_267_fu_35677_p3 = (!or_ln340_606_fu_35671_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_606_fu_35671_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_13_V_5_fu_35581_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_26_fu_9367_p3() {
    select_ln340_26_fu_9367_p3 = (!or_ln340_26_fu_9349_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_26_fu_9349_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_89_fu_9277_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_270_fu_35827_p3() {
    select_ln340_270_fu_35827_p3 = (!or_ln340_612_fu_35821_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_612_fu_35821_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_14_V_5_fu_35731_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_273_fu_35977_p3() {
    select_ln340_273_fu_35977_p3 = (!or_ln340_618_fu_35971_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_618_fu_35971_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_15_V_5_fu_35881_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_276_fu_36127_p3() {
    select_ln340_276_fu_36127_p3 = (!or_ln340_624_fu_36121_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_624_fu_36121_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_16_V_5_fu_36031_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_279_fu_36277_p3() {
    select_ln340_279_fu_36277_p3 = (!or_ln340_630_fu_36271_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_630_fu_36271_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_17_V_5_fu_36181_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_27_fu_9489_p3() {
    select_ln340_27_fu_9489_p3 = (!or_ln340_27_fu_9471_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_27_fu_9471_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_90_fu_9399_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_282_fu_36427_p3() {
    select_ln340_282_fu_36427_p3 = (!or_ln340_636_fu_36421_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_636_fu_36421_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_18_V_5_fu_36331_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_285_fu_36577_p3() {
    select_ln340_285_fu_36577_p3 = (!or_ln340_642_fu_36571_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_642_fu_36571_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_19_V_5_fu_36481_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_288_fu_36727_p3() {
    select_ln340_288_fu_36727_p3 = (!or_ln340_648_fu_36721_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_648_fu_36721_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_20_V_5_fu_36631_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_28_fu_9611_p3() {
    select_ln340_28_fu_9611_p3 = (!or_ln340_28_fu_9593_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_28_fu_9593_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_91_fu_9521_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_291_fu_36877_p3() {
    select_ln340_291_fu_36877_p3 = (!or_ln340_654_fu_36871_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_654_fu_36871_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_21_V_5_fu_36781_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_294_fu_37027_p3() {
    select_ln340_294_fu_37027_p3 = (!or_ln340_660_fu_37021_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_660_fu_37021_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_22_V_5_fu_36931_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_297_fu_37177_p3() {
    select_ln340_297_fu_37177_p3 = (!or_ln340_666_fu_37171_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_666_fu_37171_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_23_V_5_fu_37081_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_29_fu_9733_p3() {
    select_ln340_29_fu_9733_p3 = (!or_ln340_29_fu_9715_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_29_fu_9715_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_92_fu_9643_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_2_fu_6439_p3() {
    select_ln340_2_fu_6439_p3 = (!or_ln340_2_fu_6421_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_2_fu_6421_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_65_fu_6349_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_300_fu_37327_p3() {
    select_ln340_300_fu_37327_p3 = (!or_ln340_672_fu_37321_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_672_fu_37321_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_24_V_5_fu_37231_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_303_fu_37477_p3() {
    select_ln340_303_fu_37477_p3 = (!or_ln340_678_fu_37471_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_678_fu_37471_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_25_V_5_fu_37381_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_304_fu_11435_p3() {
    select_ln340_304_fu_11435_p3 = (!or_ln340_307_fu_11413_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_307_fu_11413_p2.read()[0].to_bool())? select_ln340_132_fu_11419_p3.read(): out_feature_t1_0_V_2_fu_11427_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_305_fu_24835_p3() {
    select_ln340_305_fu_24835_p3 = (!and_ln340_32_reg_82915.read()[0].is_01())? sc_lv<16>(): ((and_ln340_32_reg_82915.read()[0].to_bool())? select_ln340_133_fu_24817_p3.read(): select_ln1494_fu_24829_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_306_fu_37627_p3() {
    select_ln340_306_fu_37627_p3 = (!or_ln340_684_fu_37621_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_684_fu_37621_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_26_V_5_fu_37531_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_307_fu_11613_p3() {
    select_ln340_307_fu_11613_p3 = (!or_ln340_315_fu_11591_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_315_fu_11591_p2.read()[0].to_bool())? select_ln340_134_fu_11597_p3.read(): out_feature_t1_1_V_2_fu_11605_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_308_fu_24860_p3() {
    select_ln340_308_fu_24860_p3 = (!and_ln340_33_reg_82941.read()[0].is_01())? sc_lv<16>(): ((and_ln340_33_reg_82941.read()[0].to_bool())? select_ln340_135_fu_24842_p3.read(): select_ln1494_1_fu_24854_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_309_fu_37777_p3() {
    select_ln340_309_fu_37777_p3 = (!or_ln340_690_fu_37771_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_690_fu_37771_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_27_V_5_fu_37681_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_30_fu_9855_p3() {
    select_ln340_30_fu_9855_p3 = (!or_ln340_30_fu_9837_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_30_fu_9837_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_93_fu_9765_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_310_fu_11791_p3() {
    select_ln340_310_fu_11791_p3 = (!or_ln340_323_fu_11769_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_323_fu_11769_p2.read()[0].to_bool())? select_ln340_136_fu_11775_p3.read(): out_feature_t1_2_V_2_fu_11783_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_311_fu_24885_p3() {
    select_ln340_311_fu_24885_p3 = (!and_ln340_34_reg_82967.read()[0].is_01())? sc_lv<16>(): ((and_ln340_34_reg_82967.read()[0].to_bool())? select_ln340_137_fu_24867_p3.read(): select_ln1494_2_fu_24879_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_312_fu_37927_p3() {
    select_ln340_312_fu_37927_p3 = (!or_ln340_696_fu_37921_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_696_fu_37921_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_28_V_5_fu_37831_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_313_fu_11969_p3() {
    select_ln340_313_fu_11969_p3 = (!or_ln340_331_fu_11947_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_331_fu_11947_p2.read()[0].to_bool())? select_ln340_138_fu_11953_p3.read(): out_feature_t1_3_V_2_fu_11961_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_314_fu_24910_p3() {
    select_ln340_314_fu_24910_p3 = (!and_ln340_35_reg_82993.read()[0].is_01())? sc_lv<16>(): ((and_ln340_35_reg_82993.read()[0].to_bool())? select_ln340_139_fu_24892_p3.read(): select_ln1494_3_fu_24904_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_315_fu_38077_p3() {
    select_ln340_315_fu_38077_p3 = (!or_ln340_702_fu_38071_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_702_fu_38071_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_29_V_5_fu_37981_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_316_fu_12147_p3() {
    select_ln340_316_fu_12147_p3 = (!or_ln340_339_fu_12125_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_339_fu_12125_p2.read()[0].to_bool())? select_ln340_140_fu_12131_p3.read(): out_feature_t1_4_V_2_fu_12139_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_317_fu_24935_p3() {
    select_ln340_317_fu_24935_p3 = (!and_ln340_36_reg_83019.read()[0].is_01())? sc_lv<16>(): ((and_ln340_36_reg_83019.read()[0].to_bool())? select_ln340_141_fu_24917_p3.read(): select_ln1494_4_fu_24929_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_318_fu_38227_p3() {
    select_ln340_318_fu_38227_p3 = (!or_ln340_708_fu_38221_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_708_fu_38221_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_30_V_5_fu_38131_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_319_fu_12325_p3() {
    select_ln340_319_fu_12325_p3 = (!or_ln340_347_fu_12303_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_347_fu_12303_p2.read()[0].to_bool())? select_ln340_142_fu_12309_p3.read(): out_feature_t1_5_V_2_fu_12317_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_31_fu_9977_p3() {
    select_ln340_31_fu_9977_p3 = (!or_ln340_31_fu_9959_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_31_fu_9959_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_94_fu_9887_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_320_fu_24960_p3() {
    select_ln340_320_fu_24960_p3 = (!and_ln340_37_reg_83045.read()[0].is_01())? sc_lv<16>(): ((and_ln340_37_reg_83045.read()[0].to_bool())? select_ln340_143_fu_24942_p3.read(): select_ln1494_5_fu_24954_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_321_fu_38377_p3() {
    select_ln340_321_fu_38377_p3 = (!or_ln340_714_fu_38371_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_714_fu_38371_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_31_V_5_fu_38281_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_322_fu_12503_p3() {
    select_ln340_322_fu_12503_p3 = (!or_ln340_355_fu_12481_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_355_fu_12481_p2.read()[0].to_bool())? select_ln340_144_fu_12487_p3.read(): out_feature_t1_6_V_2_fu_12495_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_323_fu_24985_p3() {
    select_ln340_323_fu_24985_p3 = (!and_ln340_38_reg_83071.read()[0].is_01())? sc_lv<16>(): ((and_ln340_38_reg_83071.read()[0].to_bool())? select_ln340_145_fu_24967_p3.read(): select_ln1494_6_fu_24979_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_324_fu_55691_p3() {
    select_ln340_324_fu_55691_p3 = (!or_ln340_720_fu_55674_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_720_fu_55674_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_0_V_9_reg_89787.read());
}

void bn_relu_sc_relu::thread_select_ln340_325_fu_55777_p3() {
    select_ln340_325_fu_55777_p3 = (!or_ln340_722_fu_55760_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_722_fu_55760_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_1_V_9_reg_89815.read());
}

void bn_relu_sc_relu::thread_select_ln340_326_fu_55863_p3() {
    select_ln340_326_fu_55863_p3 = (!or_ln340_724_fu_55846_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_724_fu_55846_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_2_V_9_reg_89843.read());
}

void bn_relu_sc_relu::thread_select_ln340_327_fu_55949_p3() {
    select_ln340_327_fu_55949_p3 = (!or_ln340_726_fu_55932_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_726_fu_55932_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_3_V_9_reg_89871.read());
}

void bn_relu_sc_relu::thread_select_ln340_328_fu_56035_p3() {
    select_ln340_328_fu_56035_p3 = (!or_ln340_728_fu_56018_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_728_fu_56018_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_4_V_9_reg_89899.read());
}

void bn_relu_sc_relu::thread_select_ln340_329_fu_56121_p3() {
    select_ln340_329_fu_56121_p3 = (!or_ln340_730_fu_56104_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_730_fu_56104_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_5_V_9_reg_89927.read());
}

void bn_relu_sc_relu::thread_select_ln340_330_fu_56207_p3() {
    select_ln340_330_fu_56207_p3 = (!or_ln340_732_fu_56190_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_732_fu_56190_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_6_V_9_reg_89955.read());
}

void bn_relu_sc_relu::thread_select_ln340_331_fu_56293_p3() {
    select_ln340_331_fu_56293_p3 = (!or_ln340_734_fu_56276_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_734_fu_56276_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_7_V_9_reg_89983.read());
}

void bn_relu_sc_relu::thread_select_ln340_332_fu_56379_p3() {
    select_ln340_332_fu_56379_p3 = (!or_ln340_736_fu_56362_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_736_fu_56362_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_8_V_9_reg_90011.read());
}

void bn_relu_sc_relu::thread_select_ln340_333_fu_56465_p3() {
    select_ln340_333_fu_56465_p3 = (!or_ln340_738_fu_56448_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_738_fu_56448_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_9_V_9_reg_90039.read());
}

void bn_relu_sc_relu::thread_select_ln340_334_fu_56551_p3() {
    select_ln340_334_fu_56551_p3 = (!or_ln340_740_fu_56534_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_740_fu_56534_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_10_V_9_reg_90067.read());
}

void bn_relu_sc_relu::thread_select_ln340_335_fu_56637_p3() {
    select_ln340_335_fu_56637_p3 = (!or_ln340_742_fu_56620_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_742_fu_56620_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_11_V_9_reg_90095.read());
}

void bn_relu_sc_relu::thread_select_ln340_336_fu_56723_p3() {
    select_ln340_336_fu_56723_p3 = (!or_ln340_744_fu_56706_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_744_fu_56706_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_12_V_9_reg_90123.read());
}

void bn_relu_sc_relu::thread_select_ln340_337_fu_56809_p3() {
    select_ln340_337_fu_56809_p3 = (!or_ln340_746_fu_56792_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_746_fu_56792_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_13_V_9_reg_90151.read());
}

void bn_relu_sc_relu::thread_select_ln340_338_fu_56895_p3() {
    select_ln340_338_fu_56895_p3 = (!or_ln340_748_fu_56878_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_748_fu_56878_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_14_V_9_reg_90179.read());
}

void bn_relu_sc_relu::thread_select_ln340_339_fu_56981_p3() {
    select_ln340_339_fu_56981_p3 = (!or_ln340_750_fu_56964_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_750_fu_56964_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_15_V_9_reg_90207.read());
}

void bn_relu_sc_relu::thread_select_ln340_340_fu_57067_p3() {
    select_ln340_340_fu_57067_p3 = (!or_ln340_752_fu_57050_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_752_fu_57050_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_16_V_9_reg_90235.read());
}

void bn_relu_sc_relu::thread_select_ln340_341_fu_57153_p3() {
    select_ln340_341_fu_57153_p3 = (!or_ln340_754_fu_57136_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_754_fu_57136_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_17_V_9_reg_90263.read());
}

void bn_relu_sc_relu::thread_select_ln340_342_fu_57239_p3() {
    select_ln340_342_fu_57239_p3 = (!or_ln340_756_fu_57222_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_756_fu_57222_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_18_V_9_reg_90291.read());
}

void bn_relu_sc_relu::thread_select_ln340_343_fu_57325_p3() {
    select_ln340_343_fu_57325_p3 = (!or_ln340_758_fu_57308_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_758_fu_57308_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_19_V_9_reg_90319.read());
}

void bn_relu_sc_relu::thread_select_ln340_344_fu_57411_p3() {
    select_ln340_344_fu_57411_p3 = (!or_ln340_760_fu_57394_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_760_fu_57394_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_20_V_9_reg_90347.read());
}

void bn_relu_sc_relu::thread_select_ln340_345_fu_57497_p3() {
    select_ln340_345_fu_57497_p3 = (!or_ln340_762_fu_57480_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_762_fu_57480_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_21_V_9_reg_90375.read());
}

void bn_relu_sc_relu::thread_select_ln340_346_fu_57583_p3() {
    select_ln340_346_fu_57583_p3 = (!or_ln340_764_fu_57566_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_764_fu_57566_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_22_V_9_reg_90403.read());
}

void bn_relu_sc_relu::thread_select_ln340_347_fu_57669_p3() {
    select_ln340_347_fu_57669_p3 = (!or_ln340_766_fu_57652_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_766_fu_57652_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_23_V_9_reg_90431.read());
}

void bn_relu_sc_relu::thread_select_ln340_348_fu_57755_p3() {
    select_ln340_348_fu_57755_p3 = (!or_ln340_768_fu_57738_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_768_fu_57738_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_24_V_9_reg_90459.read());
}

void bn_relu_sc_relu::thread_select_ln340_349_fu_57841_p3() {
    select_ln340_349_fu_57841_p3 = (!or_ln340_770_fu_57824_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_770_fu_57824_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_25_V_9_reg_90487.read());
}

void bn_relu_sc_relu::thread_select_ln340_350_fu_57927_p3() {
    select_ln340_350_fu_57927_p3 = (!or_ln340_772_fu_57910_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_772_fu_57910_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_26_V_9_reg_90515.read());
}

void bn_relu_sc_relu::thread_select_ln340_351_fu_58013_p3() {
    select_ln340_351_fu_58013_p3 = (!or_ln340_774_fu_57996_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_774_fu_57996_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_27_V_9_reg_90543.read());
}

void bn_relu_sc_relu::thread_select_ln340_352_fu_58099_p3() {
    select_ln340_352_fu_58099_p3 = (!or_ln340_776_fu_58082_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_776_fu_58082_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_28_V_9_reg_90571.read());
}

void bn_relu_sc_relu::thread_select_ln340_353_fu_58185_p3() {
    select_ln340_353_fu_58185_p3 = (!or_ln340_778_fu_58168_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_778_fu_58168_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_29_V_9_reg_90599.read());
}

void bn_relu_sc_relu::thread_select_ln340_354_fu_58271_p3() {
    select_ln340_354_fu_58271_p3 = (!or_ln340_780_fu_58254_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_780_fu_58254_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_30_V_9_reg_90627.read());
}

void bn_relu_sc_relu::thread_select_ln340_355_fu_58357_p3() {
    select_ln340_355_fu_58357_p3 = (!or_ln340_782_fu_58340_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_782_fu_58340_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_31_V_9_reg_90655.read());
}

void bn_relu_sc_relu::thread_select_ln340_356_fu_64357_p3() {
    select_ln340_356_fu_64357_p3 = (!or_ln340_784_fu_64343_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_784_fu_64343_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_223_reg_91042.read());
}

void bn_relu_sc_relu::thread_select_ln340_357_fu_64413_p3() {
    select_ln340_357_fu_64413_p3 = (!or_ln340_787_fu_64399_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_787_fu_64399_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_224_reg_91090.read());
}

void bn_relu_sc_relu::thread_select_ln340_358_fu_64469_p3() {
    select_ln340_358_fu_64469_p3 = (!or_ln340_790_fu_64455_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_790_fu_64455_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_225_reg_91138.read());
}

void bn_relu_sc_relu::thread_select_ln340_359_fu_64525_p3() {
    select_ln340_359_fu_64525_p3 = (!or_ln340_793_fu_64511_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_793_fu_64511_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_226_reg_91186.read());
}

void bn_relu_sc_relu::thread_select_ln340_360_fu_64581_p3() {
    select_ln340_360_fu_64581_p3 = (!or_ln340_796_fu_64567_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_796_fu_64567_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_227_reg_91234.read());
}

void bn_relu_sc_relu::thread_select_ln340_361_fu_64637_p3() {
    select_ln340_361_fu_64637_p3 = (!or_ln340_799_fu_64623_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_799_fu_64623_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_228_reg_91282.read());
}

void bn_relu_sc_relu::thread_select_ln340_362_fu_64693_p3() {
    select_ln340_362_fu_64693_p3 = (!or_ln340_802_fu_64679_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_802_fu_64679_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_229_reg_91330.read());
}

void bn_relu_sc_relu::thread_select_ln340_363_fu_64749_p3() {
    select_ln340_363_fu_64749_p3 = (!or_ln340_805_fu_64735_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_805_fu_64735_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_230_reg_91378.read());
}

void bn_relu_sc_relu::thread_select_ln340_364_fu_64805_p3() {
    select_ln340_364_fu_64805_p3 = (!or_ln340_808_fu_64791_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_808_fu_64791_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_231_reg_91426.read());
}

void bn_relu_sc_relu::thread_select_ln340_365_fu_64861_p3() {
    select_ln340_365_fu_64861_p3 = (!or_ln340_811_fu_64847_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_811_fu_64847_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_232_reg_91474.read());
}

void bn_relu_sc_relu::thread_select_ln340_366_fu_64917_p3() {
    select_ln340_366_fu_64917_p3 = (!or_ln340_814_fu_64903_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_814_fu_64903_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_233_reg_91522.read());
}

void bn_relu_sc_relu::thread_select_ln340_367_fu_64973_p3() {
    select_ln340_367_fu_64973_p3 = (!or_ln340_817_fu_64959_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_817_fu_64959_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_234_reg_91570.read());
}

void bn_relu_sc_relu::thread_select_ln340_368_fu_65029_p3() {
    select_ln340_368_fu_65029_p3 = (!or_ln340_820_fu_65015_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_820_fu_65015_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_235_reg_91618.read());
}

void bn_relu_sc_relu::thread_select_ln340_369_fu_65085_p3() {
    select_ln340_369_fu_65085_p3 = (!or_ln340_823_fu_65071_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_823_fu_65071_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_236_reg_91666.read());
}

void bn_relu_sc_relu::thread_select_ln340_370_fu_65141_p3() {
    select_ln340_370_fu_65141_p3 = (!or_ln340_826_fu_65127_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_826_fu_65127_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_237_reg_91714.read());
}

void bn_relu_sc_relu::thread_select_ln340_371_fu_65197_p3() {
    select_ln340_371_fu_65197_p3 = (!or_ln340_829_fu_65183_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_829_fu_65183_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_238_reg_91762.read());
}

void bn_relu_sc_relu::thread_select_ln340_372_fu_65253_p3() {
    select_ln340_372_fu_65253_p3 = (!or_ln340_832_fu_65239_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_832_fu_65239_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_239_reg_91810.read());
}

void bn_relu_sc_relu::thread_select_ln340_373_fu_65309_p3() {
    select_ln340_373_fu_65309_p3 = (!or_ln340_835_fu_65295_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_835_fu_65295_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_240_reg_91858.read());
}

void bn_relu_sc_relu::thread_select_ln340_374_fu_65365_p3() {
    select_ln340_374_fu_65365_p3 = (!or_ln340_838_fu_65351_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_838_fu_65351_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_241_reg_91906.read());
}

void bn_relu_sc_relu::thread_select_ln340_375_fu_65421_p3() {
    select_ln340_375_fu_65421_p3 = (!or_ln340_841_fu_65407_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_841_fu_65407_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_242_reg_91954.read());
}

void bn_relu_sc_relu::thread_select_ln340_376_fu_65477_p3() {
    select_ln340_376_fu_65477_p3 = (!or_ln340_844_fu_65463_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_844_fu_65463_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_243_reg_92002.read());
}

void bn_relu_sc_relu::thread_select_ln340_377_fu_65533_p3() {
    select_ln340_377_fu_65533_p3 = (!or_ln340_847_fu_65519_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_847_fu_65519_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_244_reg_92050.read());
}

void bn_relu_sc_relu::thread_select_ln340_378_fu_65589_p3() {
    select_ln340_378_fu_65589_p3 = (!or_ln340_850_fu_65575_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_850_fu_65575_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_245_reg_92098.read());
}

void bn_relu_sc_relu::thread_select_ln340_379_fu_65645_p3() {
    select_ln340_379_fu_65645_p3 = (!or_ln340_853_fu_65631_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_853_fu_65631_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_246_reg_92146.read());
}

void bn_relu_sc_relu::thread_select_ln340_380_fu_65701_p3() {
    select_ln340_380_fu_65701_p3 = (!or_ln340_856_fu_65687_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_856_fu_65687_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_247_reg_92194.read());
}

void bn_relu_sc_relu::thread_select_ln340_381_fu_65757_p3() {
    select_ln340_381_fu_65757_p3 = (!or_ln340_859_fu_65743_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_859_fu_65743_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_248_reg_92242.read());
}

void bn_relu_sc_relu::thread_select_ln340_382_fu_65813_p3() {
    select_ln340_382_fu_65813_p3 = (!or_ln340_862_fu_65799_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_862_fu_65799_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_249_reg_92290.read());
}

void bn_relu_sc_relu::thread_select_ln340_383_fu_65869_p3() {
    select_ln340_383_fu_65869_p3 = (!or_ln340_865_fu_65855_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_865_fu_65855_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_250_reg_92338.read());
}

void bn_relu_sc_relu::thread_select_ln340_384_fu_65925_p3() {
    select_ln340_384_fu_65925_p3 = (!or_ln340_868_fu_65911_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_868_fu_65911_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_251_reg_92386.read());
}

void bn_relu_sc_relu::thread_select_ln340_385_fu_65981_p3() {
    select_ln340_385_fu_65981_p3 = (!or_ln340_871_fu_65967_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_871_fu_65967_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_252_reg_92434.read());
}

void bn_relu_sc_relu::thread_select_ln340_386_fu_66037_p3() {
    select_ln340_386_fu_66037_p3 = (!or_ln340_874_fu_66023_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_874_fu_66023_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_253_reg_92482.read());
}

void bn_relu_sc_relu::thread_select_ln340_387_fu_66093_p3() {
    select_ln340_387_fu_66093_p3 = (!or_ln340_877_fu_66079_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_877_fu_66079_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_254_reg_92530.read());
}

void bn_relu_sc_relu::thread_select_ln340_388_fu_66212_p3() {
    select_ln340_388_fu_66212_p3 = (!or_ln340_880_fu_66194_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_880_fu_66194_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_95_fu_66122_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_389_fu_66334_p3() {
    select_ln340_389_fu_66334_p3 = (!or_ln340_882_fu_66316_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_882_fu_66316_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_96_fu_66244_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_390_fu_66456_p3() {
    select_ln340_390_fu_66456_p3 = (!or_ln340_884_fu_66438_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_884_fu_66438_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_97_fu_66366_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_391_fu_66578_p3() {
    select_ln340_391_fu_66578_p3 = (!or_ln340_886_fu_66560_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_886_fu_66560_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_98_fu_66488_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_392_fu_66700_p3() {
    select_ln340_392_fu_66700_p3 = (!or_ln340_888_fu_66682_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_888_fu_66682_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_99_fu_66610_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_393_fu_66822_p3() {
    select_ln340_393_fu_66822_p3 = (!or_ln340_890_fu_66804_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_890_fu_66804_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_100_fu_66732_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_394_fu_66944_p3() {
    select_ln340_394_fu_66944_p3 = (!or_ln340_892_fu_66926_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_892_fu_66926_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_101_fu_66854_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_395_fu_67066_p3() {
    select_ln340_395_fu_67066_p3 = (!or_ln340_894_fu_67048_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_894_fu_67048_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_102_fu_66976_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_396_fu_67188_p3() {
    select_ln340_396_fu_67188_p3 = (!or_ln340_896_fu_67170_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_896_fu_67170_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_103_fu_67098_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_397_fu_67310_p3() {
    select_ln340_397_fu_67310_p3 = (!or_ln340_898_fu_67292_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_898_fu_67292_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_104_fu_67220_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_398_fu_67432_p3() {
    select_ln340_398_fu_67432_p3 = (!or_ln340_900_fu_67414_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_900_fu_67414_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_105_fu_67342_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_399_fu_67554_p3() {
    select_ln340_399_fu_67554_p3 = (!or_ln340_902_fu_67536_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_902_fu_67536_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_106_fu_67464_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_3_fu_6561_p3() {
    select_ln340_3_fu_6561_p3 = (!or_ln340_3_fu_6543_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_3_fu_6543_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_66_fu_6471_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_400_fu_67676_p3() {
    select_ln340_400_fu_67676_p3 = (!or_ln340_904_fu_67658_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_904_fu_67658_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_107_fu_67586_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_401_fu_67798_p3() {
    select_ln340_401_fu_67798_p3 = (!or_ln340_906_fu_67780_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_906_fu_67780_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_108_fu_67708_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_402_fu_67920_p3() {
    select_ln340_402_fu_67920_p3 = (!or_ln340_908_fu_67902_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_908_fu_67902_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_109_fu_67830_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_403_fu_68042_p3() {
    select_ln340_403_fu_68042_p3 = (!or_ln340_910_fu_68024_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_910_fu_68024_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_110_fu_67952_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_404_fu_68164_p3() {
    select_ln340_404_fu_68164_p3 = (!or_ln340_912_fu_68146_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_912_fu_68146_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_111_fu_68074_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_405_fu_68286_p3() {
    select_ln340_405_fu_68286_p3 = (!or_ln340_914_fu_68268_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_914_fu_68268_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_112_fu_68196_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_406_fu_68408_p3() {
    select_ln340_406_fu_68408_p3 = (!or_ln340_916_fu_68390_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_916_fu_68390_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_113_fu_68318_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_407_fu_68530_p3() {
    select_ln340_407_fu_68530_p3 = (!or_ln340_918_fu_68512_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_918_fu_68512_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_114_fu_68440_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_408_fu_68652_p3() {
    select_ln340_408_fu_68652_p3 = (!or_ln340_920_fu_68634_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_920_fu_68634_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_115_fu_68562_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_409_fu_68774_p3() {
    select_ln340_409_fu_68774_p3 = (!or_ln340_922_fu_68756_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_922_fu_68756_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_116_fu_68684_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_410_fu_68896_p3() {
    select_ln340_410_fu_68896_p3 = (!or_ln340_924_fu_68878_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_924_fu_68878_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_117_fu_68806_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_411_fu_69018_p3() {
    select_ln340_411_fu_69018_p3 = (!or_ln340_926_fu_69000_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_926_fu_69000_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_118_fu_68928_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_412_fu_69140_p3() {
    select_ln340_412_fu_69140_p3 = (!or_ln340_928_fu_69122_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_928_fu_69122_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_119_fu_69050_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_413_fu_69262_p3() {
    select_ln340_413_fu_69262_p3 = (!or_ln340_930_fu_69244_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_930_fu_69244_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_120_fu_69172_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_414_fu_69384_p3() {
    select_ln340_414_fu_69384_p3 = (!or_ln340_932_fu_69366_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_932_fu_69366_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_121_fu_69294_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_415_fu_69506_p3() {
    select_ln340_415_fu_69506_p3 = (!or_ln340_934_fu_69488_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_934_fu_69488_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_122_fu_69416_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_416_fu_69628_p3() {
    select_ln340_416_fu_69628_p3 = (!or_ln340_936_fu_69610_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_936_fu_69610_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_123_fu_69538_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_417_fu_69750_p3() {
    select_ln340_417_fu_69750_p3 = (!or_ln340_938_fu_69732_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_938_fu_69732_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_124_fu_69660_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_418_fu_69872_p3() {
    select_ln340_418_fu_69872_p3 = (!or_ln340_940_fu_69854_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_940_fu_69854_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_125_fu_69782_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_419_fu_69994_p3() {
    select_ln340_419_fu_69994_p3 = (!or_ln340_942_fu_69976_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_942_fu_69976_p2.read()[0].to_bool())? ap_const_lv16_7FFF: shl_ln731_126_fu_69904_p2.read());
}

void bn_relu_sc_relu::thread_select_ln340_420_fu_72468_p3() {
    select_ln340_420_fu_72468_p3 = (!and_ln340_fu_72456_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_fu_72456_p2.read()[0].to_bool())? add_ln415_255_fu_72374_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_421_fu_72608_p3() {
    select_ln340_421_fu_72608_p3 = (!and_ln340_1_fu_72596_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_1_fu_72596_p2.read()[0].to_bool())? add_ln415_256_fu_72514_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_422_fu_72748_p3() {
    select_ln340_422_fu_72748_p3 = (!and_ln340_2_fu_72736_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_2_fu_72736_p2.read()[0].to_bool())? add_ln415_257_fu_72654_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_423_fu_72888_p3() {
    select_ln340_423_fu_72888_p3 = (!and_ln340_3_fu_72876_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_3_fu_72876_p2.read()[0].to_bool())? add_ln415_258_fu_72794_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_424_fu_73028_p3() {
    select_ln340_424_fu_73028_p3 = (!and_ln340_4_fu_73016_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_4_fu_73016_p2.read()[0].to_bool())? add_ln415_259_fu_72934_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_425_fu_73168_p3() {
    select_ln340_425_fu_73168_p3 = (!and_ln340_5_fu_73156_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_5_fu_73156_p2.read()[0].to_bool())? add_ln415_260_fu_73074_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_426_fu_73308_p3() {
    select_ln340_426_fu_73308_p3 = (!and_ln340_6_fu_73296_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_6_fu_73296_p2.read()[0].to_bool())? add_ln415_261_fu_73214_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_427_fu_73448_p3() {
    select_ln340_427_fu_73448_p3 = (!and_ln340_7_fu_73436_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_7_fu_73436_p2.read()[0].to_bool())? add_ln415_262_fu_73354_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_428_fu_73588_p3() {
    select_ln340_428_fu_73588_p3 = (!and_ln340_8_fu_73576_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_8_fu_73576_p2.read()[0].to_bool())? add_ln415_263_fu_73494_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_429_fu_73728_p3() {
    select_ln340_429_fu_73728_p3 = (!and_ln340_9_fu_73716_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_9_fu_73716_p2.read()[0].to_bool())? add_ln415_264_fu_73634_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_430_fu_73868_p3() {
    select_ln340_430_fu_73868_p3 = (!and_ln340_10_fu_73856_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_10_fu_73856_p2.read()[0].to_bool())? add_ln415_265_fu_73774_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_431_fu_74008_p3() {
    select_ln340_431_fu_74008_p3 = (!and_ln340_11_fu_73996_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_11_fu_73996_p2.read()[0].to_bool())? add_ln415_266_fu_73914_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_432_fu_74148_p3() {
    select_ln340_432_fu_74148_p3 = (!and_ln340_12_fu_74136_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_12_fu_74136_p2.read()[0].to_bool())? add_ln415_267_fu_74054_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_433_fu_74288_p3() {
    select_ln340_433_fu_74288_p3 = (!and_ln340_13_fu_74276_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_13_fu_74276_p2.read()[0].to_bool())? add_ln415_268_fu_74194_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_434_fu_74428_p3() {
    select_ln340_434_fu_74428_p3 = (!and_ln340_14_fu_74416_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_14_fu_74416_p2.read()[0].to_bool())? add_ln415_269_fu_74334_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_435_fu_74568_p3() {
    select_ln340_435_fu_74568_p3 = (!and_ln340_15_fu_74556_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_15_fu_74556_p2.read()[0].to_bool())? add_ln415_270_fu_74474_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_436_fu_74708_p3() {
    select_ln340_436_fu_74708_p3 = (!and_ln340_16_fu_74696_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_16_fu_74696_p2.read()[0].to_bool())? add_ln415_271_fu_74614_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_437_fu_74848_p3() {
    select_ln340_437_fu_74848_p3 = (!and_ln340_17_fu_74836_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_17_fu_74836_p2.read()[0].to_bool())? add_ln415_272_fu_74754_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_438_fu_74988_p3() {
    select_ln340_438_fu_74988_p3 = (!and_ln340_18_fu_74976_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_18_fu_74976_p2.read()[0].to_bool())? add_ln415_273_fu_74894_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_439_fu_75128_p3() {
    select_ln340_439_fu_75128_p3 = (!and_ln340_19_fu_75116_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_19_fu_75116_p2.read()[0].to_bool())? add_ln415_274_fu_75034_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_440_fu_75268_p3() {
    select_ln340_440_fu_75268_p3 = (!and_ln340_20_fu_75256_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_20_fu_75256_p2.read()[0].to_bool())? add_ln415_275_fu_75174_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_441_fu_75408_p3() {
    select_ln340_441_fu_75408_p3 = (!and_ln340_21_fu_75396_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_21_fu_75396_p2.read()[0].to_bool())? add_ln415_276_fu_75314_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_442_fu_75548_p3() {
    select_ln340_442_fu_75548_p3 = (!and_ln340_22_fu_75536_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_22_fu_75536_p2.read()[0].to_bool())? add_ln415_277_fu_75454_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_443_fu_75688_p3() {
    select_ln340_443_fu_75688_p3 = (!and_ln340_23_fu_75676_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_23_fu_75676_p2.read()[0].to_bool())? add_ln415_278_fu_75594_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_444_fu_75828_p3() {
    select_ln340_444_fu_75828_p3 = (!and_ln340_24_fu_75816_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_24_fu_75816_p2.read()[0].to_bool())? add_ln415_279_fu_75734_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_445_fu_75968_p3() {
    select_ln340_445_fu_75968_p3 = (!and_ln340_25_fu_75956_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_25_fu_75956_p2.read()[0].to_bool())? add_ln415_280_fu_75874_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_446_fu_76108_p3() {
    select_ln340_446_fu_76108_p3 = (!and_ln340_26_fu_76096_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_26_fu_76096_p2.read()[0].to_bool())? add_ln415_281_fu_76014_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_447_fu_76248_p3() {
    select_ln340_447_fu_76248_p3 = (!and_ln340_27_fu_76236_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_27_fu_76236_p2.read()[0].to_bool())? add_ln415_282_fu_76154_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_448_fu_76388_p3() {
    select_ln340_448_fu_76388_p3 = (!and_ln340_28_fu_76376_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_28_fu_76376_p2.read()[0].to_bool())? add_ln415_283_fu_76294_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_449_fu_76528_p3() {
    select_ln340_449_fu_76528_p3 = (!and_ln340_29_fu_76516_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_29_fu_76516_p2.read()[0].to_bool())? add_ln415_284_fu_76434_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_450_fu_76668_p3() {
    select_ln340_450_fu_76668_p3 = (!and_ln340_30_fu_76656_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_30_fu_76656_p2.read()[0].to_bool())? add_ln415_285_fu_76574_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_451_fu_76808_p3() {
    select_ln340_451_fu_76808_p3 = (!and_ln340_31_fu_76796_p2.read()[0].is_01())? sc_lv<2>(): ((and_ln340_31_fu_76796_p2.read()[0].to_bool())? add_ln415_286_fu_76714_p2.read(): ap_const_lv2_3);
}

void bn_relu_sc_relu::thread_select_ln340_452_fu_12681_p3() {
    select_ln340_452_fu_12681_p3 = (!or_ln340_363_fu_12659_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_363_fu_12659_p2.read()[0].to_bool())? select_ln340_146_fu_12665_p3.read(): out_feature_t1_7_V_2_fu_12673_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_453_fu_25010_p3() {
    select_ln340_453_fu_25010_p3 = (!and_ln340_39_reg_83097.read()[0].is_01())? sc_lv<16>(): ((and_ln340_39_reg_83097.read()[0].to_bool())? select_ln340_147_fu_24992_p3.read(): select_ln1494_7_fu_25004_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_454_fu_12859_p3() {
    select_ln340_454_fu_12859_p3 = (!or_ln340_371_fu_12837_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_371_fu_12837_p2.read()[0].to_bool())? select_ln340_148_fu_12843_p3.read(): out_feature_t1_8_V_2_fu_12851_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_455_fu_25035_p3() {
    select_ln340_455_fu_25035_p3 = (!and_ln340_40_reg_83123.read()[0].is_01())? sc_lv<16>(): ((and_ln340_40_reg_83123.read()[0].to_bool())? select_ln340_149_fu_25017_p3.read(): select_ln1494_8_fu_25029_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_456_fu_13037_p3() {
    select_ln340_456_fu_13037_p3 = (!or_ln340_379_fu_13015_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_379_fu_13015_p2.read()[0].to_bool())? select_ln340_150_fu_13021_p3.read(): out_feature_t1_9_V_2_fu_13029_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_457_fu_25060_p3() {
    select_ln340_457_fu_25060_p3 = (!and_ln340_41_reg_83149.read()[0].is_01())? sc_lv<16>(): ((and_ln340_41_reg_83149.read()[0].to_bool())? select_ln340_151_fu_25042_p3.read(): select_ln1494_9_fu_25054_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_458_fu_13215_p3() {
    select_ln340_458_fu_13215_p3 = (!or_ln340_387_fu_13193_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_387_fu_13193_p2.read()[0].to_bool())? select_ln340_152_fu_13199_p3.read(): out_feature_t1_10_V_2_fu_13207_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_459_fu_25085_p3() {
    select_ln340_459_fu_25085_p3 = (!and_ln340_42_reg_83175.read()[0].is_01())? sc_lv<16>(): ((and_ln340_42_reg_83175.read()[0].to_bool())? select_ln340_153_fu_25067_p3.read(): select_ln1494_10_fu_25079_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_460_fu_13393_p3() {
    select_ln340_460_fu_13393_p3 = (!or_ln340_395_fu_13371_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_395_fu_13371_p2.read()[0].to_bool())? select_ln340_154_fu_13377_p3.read(): out_feature_t1_11_V_2_fu_13385_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_461_fu_25110_p3() {
    select_ln340_461_fu_25110_p3 = (!and_ln340_43_reg_83201.read()[0].is_01())? sc_lv<16>(): ((and_ln340_43_reg_83201.read()[0].to_bool())? select_ln340_155_fu_25092_p3.read(): select_ln1494_11_fu_25104_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_462_fu_13571_p3() {
    select_ln340_462_fu_13571_p3 = (!or_ln340_403_fu_13549_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_403_fu_13549_p2.read()[0].to_bool())? select_ln340_156_fu_13555_p3.read(): out_feature_t1_12_V_2_fu_13563_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_463_fu_25135_p3() {
    select_ln340_463_fu_25135_p3 = (!and_ln340_44_reg_83227.read()[0].is_01())? sc_lv<16>(): ((and_ln340_44_reg_83227.read()[0].to_bool())? select_ln340_157_fu_25117_p3.read(): select_ln1494_12_fu_25129_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_464_fu_13749_p3() {
    select_ln340_464_fu_13749_p3 = (!or_ln340_411_fu_13727_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_411_fu_13727_p2.read()[0].to_bool())? select_ln340_158_fu_13733_p3.read(): out_feature_t1_13_V_2_fu_13741_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_465_fu_25160_p3() {
    select_ln340_465_fu_25160_p3 = (!and_ln340_45_reg_83253.read()[0].is_01())? sc_lv<16>(): ((and_ln340_45_reg_83253.read()[0].to_bool())? select_ln340_159_fu_25142_p3.read(): select_ln1494_13_fu_25154_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_466_fu_13927_p3() {
    select_ln340_466_fu_13927_p3 = (!or_ln340_419_fu_13905_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_419_fu_13905_p2.read()[0].to_bool())? select_ln340_160_fu_13911_p3.read(): out_feature_t1_14_V_2_fu_13919_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_467_fu_25185_p3() {
    select_ln340_467_fu_25185_p3 = (!and_ln340_46_reg_83279.read()[0].is_01())? sc_lv<16>(): ((and_ln340_46_reg_83279.read()[0].to_bool())? select_ln340_161_fu_25167_p3.read(): select_ln1494_14_fu_25179_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_468_fu_14105_p3() {
    select_ln340_468_fu_14105_p3 = (!or_ln340_427_fu_14083_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_427_fu_14083_p2.read()[0].to_bool())? select_ln340_162_fu_14089_p3.read(): out_feature_t1_15_V_2_fu_14097_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_469_fu_25210_p3() {
    select_ln340_469_fu_25210_p3 = (!and_ln340_47_reg_83305.read()[0].is_01())? sc_lv<16>(): ((and_ln340_47_reg_83305.read()[0].to_bool())? select_ln340_163_fu_25192_p3.read(): select_ln1494_15_fu_25204_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_470_fu_14283_p3() {
    select_ln340_470_fu_14283_p3 = (!or_ln340_437_fu_14261_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_437_fu_14261_p2.read()[0].to_bool())? select_ln340_164_fu_14267_p3.read(): out_feature_t1_16_V_2_fu_14275_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_471_fu_25235_p3() {
    select_ln340_471_fu_25235_p3 = (!and_ln340_48_reg_83331.read()[0].is_01())? sc_lv<16>(): ((and_ln340_48_reg_83331.read()[0].to_bool())? select_ln340_165_fu_25217_p3.read(): select_ln1494_16_fu_25229_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_472_fu_14461_p3() {
    select_ln340_472_fu_14461_p3 = (!or_ln340_449_fu_14439_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_449_fu_14439_p2.read()[0].to_bool())? select_ln340_166_fu_14445_p3.read(): out_feature_t1_17_V_2_fu_14453_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_473_fu_25260_p3() {
    select_ln340_473_fu_25260_p3 = (!and_ln340_49_reg_83357.read()[0].is_01())? sc_lv<16>(): ((and_ln340_49_reg_83357.read()[0].to_bool())? select_ln340_167_fu_25242_p3.read(): select_ln1494_17_fu_25254_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_474_fu_14639_p3() {
    select_ln340_474_fu_14639_p3 = (!or_ln340_461_fu_14617_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_461_fu_14617_p2.read()[0].to_bool())? select_ln340_168_fu_14623_p3.read(): out_feature_t1_18_V_2_fu_14631_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_475_fu_25285_p3() {
    select_ln340_475_fu_25285_p3 = (!and_ln340_50_reg_83383.read()[0].is_01())? sc_lv<16>(): ((and_ln340_50_reg_83383.read()[0].to_bool())? select_ln340_169_fu_25267_p3.read(): select_ln1494_18_fu_25279_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_476_fu_14817_p3() {
    select_ln340_476_fu_14817_p3 = (!or_ln340_473_fu_14795_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_473_fu_14795_p2.read()[0].to_bool())? select_ln340_170_fu_14801_p3.read(): out_feature_t1_19_V_2_fu_14809_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_477_fu_25310_p3() {
    select_ln340_477_fu_25310_p3 = (!and_ln340_51_reg_83409.read()[0].is_01())? sc_lv<16>(): ((and_ln340_51_reg_83409.read()[0].to_bool())? select_ln340_171_fu_25292_p3.read(): select_ln1494_19_fu_25304_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_478_fu_14995_p3() {
    select_ln340_478_fu_14995_p3 = (!or_ln340_485_fu_14973_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_485_fu_14973_p2.read()[0].to_bool())? select_ln340_172_fu_14979_p3.read(): out_feature_t1_20_V_2_fu_14987_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_479_fu_25335_p3() {
    select_ln340_479_fu_25335_p3 = (!and_ln340_52_reg_83435.read()[0].is_01())? sc_lv<16>(): ((and_ln340_52_reg_83435.read()[0].to_bool())? select_ln340_173_fu_25317_p3.read(): select_ln1494_20_fu_25329_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_480_fu_15173_p3() {
    select_ln340_480_fu_15173_p3 = (!or_ln340_497_fu_15151_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_497_fu_15151_p2.read()[0].to_bool())? select_ln340_174_fu_15157_p3.read(): out_feature_t1_21_V_2_fu_15165_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_481_fu_25360_p3() {
    select_ln340_481_fu_25360_p3 = (!and_ln340_53_reg_83461.read()[0].is_01())? sc_lv<16>(): ((and_ln340_53_reg_83461.read()[0].to_bool())? select_ln340_175_fu_25342_p3.read(): select_ln1494_21_fu_25354_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_482_fu_15351_p3() {
    select_ln340_482_fu_15351_p3 = (!or_ln340_509_fu_15329_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_509_fu_15329_p2.read()[0].to_bool())? select_ln340_176_fu_15335_p3.read(): out_feature_t1_22_V_2_fu_15343_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_483_fu_25385_p3() {
    select_ln340_483_fu_25385_p3 = (!and_ln340_54_reg_83487.read()[0].is_01())? sc_lv<16>(): ((and_ln340_54_reg_83487.read()[0].to_bool())? select_ln340_177_fu_25367_p3.read(): select_ln1494_22_fu_25379_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_484_fu_15529_p3() {
    select_ln340_484_fu_15529_p3 = (!or_ln340_521_fu_15507_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_521_fu_15507_p2.read()[0].to_bool())? select_ln340_178_fu_15513_p3.read(): out_feature_t1_23_V_2_fu_15521_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_485_fu_25410_p3() {
    select_ln340_485_fu_25410_p3 = (!and_ln340_55_reg_83513.read()[0].is_01())? sc_lv<16>(): ((and_ln340_55_reg_83513.read()[0].to_bool())? select_ln340_179_fu_25392_p3.read(): select_ln1494_23_fu_25404_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_486_fu_15707_p3() {
    select_ln340_486_fu_15707_p3 = (!or_ln340_531_fu_15685_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_531_fu_15685_p2.read()[0].to_bool())? select_ln340_180_fu_15691_p3.read(): out_feature_t1_24_V_2_fu_15699_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_487_fu_25435_p3() {
    select_ln340_487_fu_25435_p3 = (!and_ln340_56_reg_83539.read()[0].is_01())? sc_lv<16>(): ((and_ln340_56_reg_83539.read()[0].to_bool())? select_ln340_181_fu_25417_p3.read(): select_ln1494_24_fu_25429_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_488_fu_15885_p3() {
    select_ln340_488_fu_15885_p3 = (!or_ln340_539_fu_15863_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_539_fu_15863_p2.read()[0].to_bool())? select_ln340_182_fu_15869_p3.read(): out_feature_t1_25_V_2_fu_15877_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_489_fu_25460_p3() {
    select_ln340_489_fu_25460_p3 = (!and_ln340_57_reg_83565.read()[0].is_01())? sc_lv<16>(): ((and_ln340_57_reg_83565.read()[0].to_bool())? select_ln340_183_fu_25442_p3.read(): select_ln1494_25_fu_25454_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_490_fu_16063_p3() {
    select_ln340_490_fu_16063_p3 = (!or_ln340_547_fu_16041_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_547_fu_16041_p2.read()[0].to_bool())? select_ln340_184_fu_16047_p3.read(): out_feature_t1_26_V_2_fu_16055_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_491_fu_25485_p3() {
    select_ln340_491_fu_25485_p3 = (!and_ln340_58_reg_83591.read()[0].is_01())? sc_lv<16>(): ((and_ln340_58_reg_83591.read()[0].to_bool())? select_ln340_185_fu_25467_p3.read(): select_ln1494_26_fu_25479_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_492_fu_16241_p3() {
    select_ln340_492_fu_16241_p3 = (!or_ln340_555_fu_16219_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_555_fu_16219_p2.read()[0].to_bool())? select_ln340_186_fu_16225_p3.read(): out_feature_t1_27_V_2_fu_16233_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_493_fu_25510_p3() {
    select_ln340_493_fu_25510_p3 = (!and_ln340_59_reg_83617.read()[0].is_01())? sc_lv<16>(): ((and_ln340_59_reg_83617.read()[0].to_bool())? select_ln340_187_fu_25492_p3.read(): select_ln1494_27_fu_25504_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_494_fu_16419_p3() {
    select_ln340_494_fu_16419_p3 = (!or_ln340_563_fu_16397_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_563_fu_16397_p2.read()[0].to_bool())? select_ln340_188_fu_16403_p3.read(): out_feature_t1_28_V_2_fu_16411_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_495_fu_25535_p3() {
    select_ln340_495_fu_25535_p3 = (!and_ln340_60_reg_83643.read()[0].is_01())? sc_lv<16>(): ((and_ln340_60_reg_83643.read()[0].to_bool())? select_ln340_189_fu_25517_p3.read(): select_ln1494_28_fu_25529_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_496_fu_16597_p3() {
    select_ln340_496_fu_16597_p3 = (!or_ln340_571_fu_16575_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_571_fu_16575_p2.read()[0].to_bool())? select_ln340_190_fu_16581_p3.read(): out_feature_t1_29_V_2_fu_16589_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_497_fu_25560_p3() {
    select_ln340_497_fu_25560_p3 = (!and_ln340_61_reg_83669.read()[0].is_01())? sc_lv<16>(): ((and_ln340_61_reg_83669.read()[0].to_bool())? select_ln340_191_fu_25542_p3.read(): select_ln1494_29_fu_25554_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_498_fu_16775_p3() {
    select_ln340_498_fu_16775_p3 = (!or_ln340_579_fu_16753_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_579_fu_16753_p2.read()[0].to_bool())? select_ln340_192_fu_16759_p3.read(): out_feature_t1_30_V_2_fu_16767_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_499_fu_25585_p3() {
    select_ln340_499_fu_25585_p3 = (!and_ln340_62_reg_83695.read()[0].is_01())? sc_lv<16>(): ((and_ln340_62_reg_83695.read()[0].to_bool())? select_ln340_193_fu_25567_p3.read(): select_ln1494_30_fu_25579_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_500_fu_16953_p3() {
    select_ln340_500_fu_16953_p3 = (!or_ln340_587_fu_16931_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_587_fu_16931_p2.read()[0].to_bool())? select_ln340_194_fu_16937_p3.read(): out_feature_t1_31_V_2_fu_16945_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_501_fu_25610_p3() {
    select_ln340_501_fu_25610_p3 = (!and_ln340_63_reg_83721.read()[0].is_01())? sc_lv<16>(): ((and_ln340_63_reg_83721.read()[0].to_bool())? select_ln340_195_fu_25592_p3.read(): select_ln1494_31_fu_25604_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_502_fu_32625_p3() {
    select_ln340_502_fu_32625_p3 = (!or_ln340_432_fu_30624_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_432_fu_30624_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_reg_84084.read());
}

void bn_relu_sc_relu::thread_select_ln340_503_fu_32639_p3() {
    select_ln340_503_fu_32639_p3 = (!or_ln340_433_fu_30635_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_433_fu_30635_p2.read()[0].to_bool())? select_ln340_502_fu_32625_p3.read(): select_ln388_163_fu_32632_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_504_fu_38400_p3() {
    select_ln340_504_fu_38400_p3 = (!or_ln340_659_fu_38389_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_659_fu_38389_p2.read()[0].to_bool())? select_ln340_228_reg_85543.read(): out_feature_t1_0_V_6_fu_38394_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_505_fu_46609_p3() {
    select_ln340_505_fu_46609_p3 = (!or_ln340_530_reg_87891.read()[0].is_01())? sc_lv<16>(): ((or_ln340_530_reg_87891.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_0_V_7_reg_87886.read());
}

void bn_relu_sc_relu::thread_select_ln340_506_fu_46615_p3() {
    select_ln340_506_fu_46615_p3 = (!and_ln340_64_reg_87896.read()[0].is_01())? sc_lv<16>(): ((and_ln340_64_reg_87896.read()[0].to_bool())? select_ln340_505_fu_46609_p3.read(): select_ln1495_reg_87901.read());
}

void bn_relu_sc_relu::thread_select_ln340_507_fu_32655_p3() {
    select_ln340_507_fu_32655_p3 = (!or_ln340_435_fu_30688_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_435_fu_30688_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_64_reg_84124.read());
}

void bn_relu_sc_relu::thread_select_ln340_508_fu_32669_p3() {
    select_ln340_508_fu_32669_p3 = (!or_ln340_436_fu_30699_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_436_fu_30699_p2.read()[0].to_bool())? select_ln340_507_fu_32655_p3.read(): select_ln388_166_fu_32662_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_509_fu_38475_p3() {
    select_ln340_509_fu_38475_p3 = (!or_ln340_671_fu_38464_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_671_fu_38464_p2.read()[0].to_bool())? select_ln340_231_reg_85573.read(): out_feature_t1_1_V_6_fu_38469_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_510_fu_46748_p3() {
    select_ln340_510_fu_46748_p3 = (!or_ln340_536_reg_87911.read()[0].is_01())? sc_lv<16>(): ((or_ln340_536_reg_87911.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_1_V_7_reg_87906.read());
}

void bn_relu_sc_relu::thread_select_ln340_511_fu_46754_p3() {
    select_ln340_511_fu_46754_p3 = (!and_ln340_65_reg_87916.read()[0].is_01())? sc_lv<16>(): ((and_ln340_65_reg_87916.read()[0].to_bool())? select_ln340_510_fu_46748_p3.read(): select_ln1495_1_reg_87921.read());
}

void bn_relu_sc_relu::thread_select_ln340_512_fu_32685_p3() {
    select_ln340_512_fu_32685_p3 = (!or_ln340_438_fu_30752_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_438_fu_30752_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_65_reg_84164.read());
}

void bn_relu_sc_relu::thread_select_ln340_513_fu_32699_p3() {
    select_ln340_513_fu_32699_p3 = (!or_ln340_439_fu_30763_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_439_fu_30763_p2.read()[0].to_bool())? select_ln340_512_fu_32685_p3.read(): select_ln388_169_fu_32692_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_514_fu_38550_p3() {
    select_ln340_514_fu_38550_p3 = (!or_ln340_683_fu_38539_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_683_fu_38539_p2.read()[0].to_bool())? select_ln340_234_reg_85603.read(): out_feature_t1_2_V_6_fu_38544_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_515_fu_46887_p3() {
    select_ln340_515_fu_46887_p3 = (!or_ln340_542_reg_87931.read()[0].is_01())? sc_lv<16>(): ((or_ln340_542_reg_87931.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_2_V_7_reg_87926.read());
}

void bn_relu_sc_relu::thread_select_ln340_516_fu_46893_p3() {
    select_ln340_516_fu_46893_p3 = (!and_ln340_66_reg_87936.read()[0].is_01())? sc_lv<16>(): ((and_ln340_66_reg_87936.read()[0].to_bool())? select_ln340_515_fu_46887_p3.read(): select_ln1495_2_reg_87941.read());
}

void bn_relu_sc_relu::thread_select_ln340_517_fu_32715_p3() {
    select_ln340_517_fu_32715_p3 = (!or_ln340_441_fu_30816_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_441_fu_30816_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_66_reg_84204.read());
}

void bn_relu_sc_relu::thread_select_ln340_518_fu_32729_p3() {
    select_ln340_518_fu_32729_p3 = (!or_ln340_442_fu_30827_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_442_fu_30827_p2.read()[0].to_bool())? select_ln340_517_fu_32715_p3.read(): select_ln388_172_fu_32722_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_519_fu_38625_p3() {
    select_ln340_519_fu_38625_p3 = (!or_ln340_695_fu_38614_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_695_fu_38614_p2.read()[0].to_bool())? select_ln340_237_reg_85633.read(): out_feature_t1_3_V_6_fu_38619_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_520_fu_47026_p3() {
    select_ln340_520_fu_47026_p3 = (!or_ln340_548_reg_87951.read()[0].is_01())? sc_lv<16>(): ((or_ln340_548_reg_87951.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_3_V_7_reg_87946.read());
}

void bn_relu_sc_relu::thread_select_ln340_521_fu_47032_p3() {
    select_ln340_521_fu_47032_p3 = (!and_ln340_67_reg_87956.read()[0].is_01())? sc_lv<16>(): ((and_ln340_67_reg_87956.read()[0].to_bool())? select_ln340_520_fu_47026_p3.read(): select_ln1495_3_reg_87961.read());
}

void bn_relu_sc_relu::thread_select_ln340_522_fu_32745_p3() {
    select_ln340_522_fu_32745_p3 = (!or_ln340_444_fu_30880_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_444_fu_30880_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_67_reg_84244.read());
}

void bn_relu_sc_relu::thread_select_ln340_523_fu_32759_p3() {
    select_ln340_523_fu_32759_p3 = (!or_ln340_445_fu_30891_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_445_fu_30891_p2.read()[0].to_bool())? select_ln340_522_fu_32745_p3.read(): select_ln388_175_fu_32752_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_524_fu_38700_p3() {
    select_ln340_524_fu_38700_p3 = (!or_ln340_707_fu_38689_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_707_fu_38689_p2.read()[0].to_bool())? select_ln340_240_reg_85663.read(): out_feature_t1_4_V_6_fu_38694_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_525_fu_47165_p3() {
    select_ln340_525_fu_47165_p3 = (!or_ln340_554_reg_87971.read()[0].is_01())? sc_lv<16>(): ((or_ln340_554_reg_87971.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_4_V_7_reg_87966.read());
}

void bn_relu_sc_relu::thread_select_ln340_526_fu_47171_p3() {
    select_ln340_526_fu_47171_p3 = (!and_ln340_68_reg_87976.read()[0].is_01())? sc_lv<16>(): ((and_ln340_68_reg_87976.read()[0].to_bool())? select_ln340_525_fu_47165_p3.read(): select_ln1495_4_reg_87981.read());
}

void bn_relu_sc_relu::thread_select_ln340_527_fu_32775_p3() {
    select_ln340_527_fu_32775_p3 = (!or_ln340_447_fu_30944_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_447_fu_30944_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_68_reg_84284.read());
}

void bn_relu_sc_relu::thread_select_ln340_528_fu_32789_p3() {
    select_ln340_528_fu_32789_p3 = (!or_ln340_448_fu_30955_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_448_fu_30955_p2.read()[0].to_bool())? select_ln340_527_fu_32775_p3.read(): select_ln388_178_fu_32782_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_529_fu_38775_p3() {
    select_ln340_529_fu_38775_p3 = (!or_ln340_719_fu_38764_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_719_fu_38764_p2.read()[0].to_bool())? select_ln340_243_reg_85693.read(): out_feature_t1_5_V_6_fu_38769_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_530_fu_47304_p3() {
    select_ln340_530_fu_47304_p3 = (!or_ln340_560_reg_87991.read()[0].is_01())? sc_lv<16>(): ((or_ln340_560_reg_87991.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_5_V_7_reg_87986.read());
}

void bn_relu_sc_relu::thread_select_ln340_531_fu_47310_p3() {
    select_ln340_531_fu_47310_p3 = (!and_ln340_69_reg_87996.read()[0].is_01())? sc_lv<16>(): ((and_ln340_69_reg_87996.read()[0].to_bool())? select_ln340_530_fu_47304_p3.read(): select_ln1495_5_reg_88001.read());
}

void bn_relu_sc_relu::thread_select_ln340_532_fu_32805_p3() {
    select_ln340_532_fu_32805_p3 = (!or_ln340_450_fu_31008_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_450_fu_31008_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_69_reg_84324.read());
}

void bn_relu_sc_relu::thread_select_ln340_533_fu_32819_p3() {
    select_ln340_533_fu_32819_p3 = (!or_ln340_451_fu_31019_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_451_fu_31019_p2.read()[0].to_bool())? select_ln340_532_fu_32805_p3.read(): select_ln388_181_fu_32812_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_534_fu_38850_p3() {
    select_ln340_534_fu_38850_p3 = (!or_ln340_731_fu_38839_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_731_fu_38839_p2.read()[0].to_bool())? select_ln340_246_reg_85723.read(): out_feature_t1_6_V_6_fu_38844_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_535_fu_47443_p3() {
    select_ln340_535_fu_47443_p3 = (!or_ln340_566_reg_88011.read()[0].is_01())? sc_lv<16>(): ((or_ln340_566_reg_88011.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_6_V_7_reg_88006.read());
}

void bn_relu_sc_relu::thread_select_ln340_536_fu_47449_p3() {
    select_ln340_536_fu_47449_p3 = (!and_ln340_70_reg_88016.read()[0].is_01())? sc_lv<16>(): ((and_ln340_70_reg_88016.read()[0].to_bool())? select_ln340_535_fu_47443_p3.read(): select_ln1495_6_reg_88021.read());
}

void bn_relu_sc_relu::thread_select_ln340_537_fu_32835_p3() {
    select_ln340_537_fu_32835_p3 = (!or_ln340_453_fu_31072_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_453_fu_31072_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_70_reg_84364.read());
}

void bn_relu_sc_relu::thread_select_ln340_538_fu_32849_p3() {
    select_ln340_538_fu_32849_p3 = (!or_ln340_454_fu_31083_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_454_fu_31083_p2.read()[0].to_bool())? select_ln340_537_fu_32835_p3.read(): select_ln388_184_fu_32842_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_539_fu_38925_p3() {
    select_ln340_539_fu_38925_p3 = (!or_ln340_743_fu_38914_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_743_fu_38914_p2.read()[0].to_bool())? select_ln340_249_reg_85753.read(): out_feature_t1_7_V_6_fu_38919_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_540_fu_47582_p3() {
    select_ln340_540_fu_47582_p3 = (!or_ln340_572_reg_88031.read()[0].is_01())? sc_lv<16>(): ((or_ln340_572_reg_88031.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_7_V_7_reg_88026.read());
}

void bn_relu_sc_relu::thread_select_ln340_541_fu_47588_p3() {
    select_ln340_541_fu_47588_p3 = (!and_ln340_71_reg_88036.read()[0].is_01())? sc_lv<16>(): ((and_ln340_71_reg_88036.read()[0].to_bool())? select_ln340_540_fu_47582_p3.read(): select_ln1495_7_reg_88041.read());
}

void bn_relu_sc_relu::thread_select_ln340_542_fu_32865_p3() {
    select_ln340_542_fu_32865_p3 = (!or_ln340_456_fu_31136_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_456_fu_31136_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_71_reg_84404.read());
}

void bn_relu_sc_relu::thread_select_ln340_543_fu_32879_p3() {
    select_ln340_543_fu_32879_p3 = (!or_ln340_457_fu_31147_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_457_fu_31147_p2.read()[0].to_bool())? select_ln340_542_fu_32865_p3.read(): select_ln388_187_fu_32872_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_544_fu_39000_p3() {
    select_ln340_544_fu_39000_p3 = (!or_ln340_755_fu_38989_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_755_fu_38989_p2.read()[0].to_bool())? select_ln340_252_reg_85783.read(): out_feature_t1_8_V_6_fu_38994_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_545_fu_47721_p3() {
    select_ln340_545_fu_47721_p3 = (!or_ln340_578_reg_88051.read()[0].is_01())? sc_lv<16>(): ((or_ln340_578_reg_88051.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_8_V_7_reg_88046.read());
}

void bn_relu_sc_relu::thread_select_ln340_546_fu_47727_p3() {
    select_ln340_546_fu_47727_p3 = (!and_ln340_72_reg_88056.read()[0].is_01())? sc_lv<16>(): ((and_ln340_72_reg_88056.read()[0].to_bool())? select_ln340_545_fu_47721_p3.read(): select_ln1495_8_reg_88061.read());
}

void bn_relu_sc_relu::thread_select_ln340_547_fu_32895_p3() {
    select_ln340_547_fu_32895_p3 = (!or_ln340_459_fu_31200_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_459_fu_31200_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_72_reg_84444.read());
}

void bn_relu_sc_relu::thread_select_ln340_548_fu_32909_p3() {
    select_ln340_548_fu_32909_p3 = (!or_ln340_460_fu_31211_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_460_fu_31211_p2.read()[0].to_bool())? select_ln340_547_fu_32895_p3.read(): select_ln388_190_fu_32902_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_549_fu_39075_p3() {
    select_ln340_549_fu_39075_p3 = (!or_ln340_767_fu_39064_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_767_fu_39064_p2.read()[0].to_bool())? select_ln340_255_reg_85813.read(): out_feature_t1_9_V_6_fu_39069_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_550_fu_47860_p3() {
    select_ln340_550_fu_47860_p3 = (!or_ln340_584_reg_88071.read()[0].is_01())? sc_lv<16>(): ((or_ln340_584_reg_88071.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_9_V_7_reg_88066.read());
}

void bn_relu_sc_relu::thread_select_ln340_551_fu_47866_p3() {
    select_ln340_551_fu_47866_p3 = (!and_ln340_73_reg_88076.read()[0].is_01())? sc_lv<16>(): ((and_ln340_73_reg_88076.read()[0].to_bool())? select_ln340_550_fu_47860_p3.read(): select_ln1495_9_reg_88081.read());
}

void bn_relu_sc_relu::thread_select_ln340_552_fu_32925_p3() {
    select_ln340_552_fu_32925_p3 = (!or_ln340_462_fu_31264_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_462_fu_31264_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_73_reg_84484.read());
}

void bn_relu_sc_relu::thread_select_ln340_553_fu_32939_p3() {
    select_ln340_553_fu_32939_p3 = (!or_ln340_463_fu_31275_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_463_fu_31275_p2.read()[0].to_bool())? select_ln340_552_fu_32925_p3.read(): select_ln388_193_fu_32932_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_554_fu_39150_p3() {
    select_ln340_554_fu_39150_p3 = (!or_ln340_779_fu_39139_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_779_fu_39139_p2.read()[0].to_bool())? select_ln340_258_reg_85843.read(): out_feature_t1_10_V_6_fu_39144_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_555_fu_47999_p3() {
    select_ln340_555_fu_47999_p3 = (!or_ln340_590_reg_88091.read()[0].is_01())? sc_lv<16>(): ((or_ln340_590_reg_88091.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_10_V_7_reg_88086.read());
}

void bn_relu_sc_relu::thread_select_ln340_556_fu_48005_p3() {
    select_ln340_556_fu_48005_p3 = (!and_ln340_74_reg_88096.read()[0].is_01())? sc_lv<16>(): ((and_ln340_74_reg_88096.read()[0].to_bool())? select_ln340_555_fu_47999_p3.read(): select_ln1495_10_reg_88101.read());
}

void bn_relu_sc_relu::thread_select_ln340_557_fu_32955_p3() {
    select_ln340_557_fu_32955_p3 = (!or_ln340_465_fu_31328_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_465_fu_31328_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_74_reg_84524.read());
}

void bn_relu_sc_relu::thread_select_ln340_558_fu_32969_p3() {
    select_ln340_558_fu_32969_p3 = (!or_ln340_466_fu_31339_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_466_fu_31339_p2.read()[0].to_bool())? select_ln340_557_fu_32955_p3.read(): select_ln388_196_fu_32962_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_559_fu_39225_p3() {
    select_ln340_559_fu_39225_p3 = (!or_ln340_795_fu_39214_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_795_fu_39214_p2.read()[0].to_bool())? select_ln340_261_reg_85873.read(): out_feature_t1_11_V_6_fu_39219_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_560_fu_48138_p3() {
    select_ln340_560_fu_48138_p3 = (!or_ln340_596_reg_88111.read()[0].is_01())? sc_lv<16>(): ((or_ln340_596_reg_88111.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_11_V_7_reg_88106.read());
}

void bn_relu_sc_relu::thread_select_ln340_561_fu_48144_p3() {
    select_ln340_561_fu_48144_p3 = (!and_ln340_75_reg_88116.read()[0].is_01())? sc_lv<16>(): ((and_ln340_75_reg_88116.read()[0].to_bool())? select_ln340_560_fu_48138_p3.read(): select_ln1495_11_reg_88121.read());
}

void bn_relu_sc_relu::thread_select_ln340_562_fu_32985_p3() {
    select_ln340_562_fu_32985_p3 = (!or_ln340_468_fu_31392_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_468_fu_31392_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_75_reg_84564.read());
}

void bn_relu_sc_relu::thread_select_ln340_563_fu_32999_p3() {
    select_ln340_563_fu_32999_p3 = (!or_ln340_469_fu_31403_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_469_fu_31403_p2.read()[0].to_bool())? select_ln340_562_fu_32985_p3.read(): select_ln388_199_fu_32992_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_564_fu_39300_p3() {
    select_ln340_564_fu_39300_p3 = (!or_ln340_813_fu_39289_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_813_fu_39289_p2.read()[0].to_bool())? select_ln340_264_reg_85903.read(): out_feature_t1_12_V_6_fu_39294_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_565_fu_48277_p3() {
    select_ln340_565_fu_48277_p3 = (!or_ln340_602_reg_88131.read()[0].is_01())? sc_lv<16>(): ((or_ln340_602_reg_88131.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_12_V_7_reg_88126.read());
}

void bn_relu_sc_relu::thread_select_ln340_566_fu_48283_p3() {
    select_ln340_566_fu_48283_p3 = (!and_ln340_76_reg_88136.read()[0].is_01())? sc_lv<16>(): ((and_ln340_76_reg_88136.read()[0].to_bool())? select_ln340_565_fu_48277_p3.read(): select_ln1495_12_reg_88141.read());
}

void bn_relu_sc_relu::thread_select_ln340_567_fu_33015_p3() {
    select_ln340_567_fu_33015_p3 = (!or_ln340_471_fu_31456_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_471_fu_31456_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_76_reg_84604.read());
}

void bn_relu_sc_relu::thread_select_ln340_568_fu_33029_p3() {
    select_ln340_568_fu_33029_p3 = (!or_ln340_472_fu_31467_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_472_fu_31467_p2.read()[0].to_bool())? select_ln340_567_fu_33015_p3.read(): select_ln388_202_fu_33022_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_569_fu_39375_p3() {
    select_ln340_569_fu_39375_p3 = (!or_ln340_831_fu_39364_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_831_fu_39364_p2.read()[0].to_bool())? select_ln340_267_reg_85933.read(): out_feature_t1_13_V_6_fu_39369_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_570_fu_48416_p3() {
    select_ln340_570_fu_48416_p3 = (!or_ln340_608_reg_88151.read()[0].is_01())? sc_lv<16>(): ((or_ln340_608_reg_88151.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_13_V_7_reg_88146.read());
}

void bn_relu_sc_relu::thread_select_ln340_571_fu_48422_p3() {
    select_ln340_571_fu_48422_p3 = (!and_ln340_77_reg_88156.read()[0].is_01())? sc_lv<16>(): ((and_ln340_77_reg_88156.read()[0].to_bool())? select_ln340_570_fu_48416_p3.read(): select_ln1495_13_reg_88161.read());
}

void bn_relu_sc_relu::thread_select_ln340_572_fu_33045_p3() {
    select_ln340_572_fu_33045_p3 = (!or_ln340_474_fu_31520_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_474_fu_31520_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_77_reg_84644.read());
}

void bn_relu_sc_relu::thread_select_ln340_573_fu_33059_p3() {
    select_ln340_573_fu_33059_p3 = (!or_ln340_475_fu_31531_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_475_fu_31531_p2.read()[0].to_bool())? select_ln340_572_fu_33045_p3.read(): select_ln388_205_fu_33052_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_574_fu_39450_p3() {
    select_ln340_574_fu_39450_p3 = (!or_ln340_849_fu_39439_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_849_fu_39439_p2.read()[0].to_bool())? select_ln340_270_reg_85963.read(): out_feature_t1_14_V_6_fu_39444_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_575_fu_48555_p3() {
    select_ln340_575_fu_48555_p3 = (!or_ln340_614_reg_88171.read()[0].is_01())? sc_lv<16>(): ((or_ln340_614_reg_88171.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_14_V_7_reg_88166.read());
}

void bn_relu_sc_relu::thread_select_ln340_576_fu_48561_p3() {
    select_ln340_576_fu_48561_p3 = (!and_ln340_78_reg_88176.read()[0].is_01())? sc_lv<16>(): ((and_ln340_78_reg_88176.read()[0].to_bool())? select_ln340_575_fu_48555_p3.read(): select_ln1495_14_reg_88181.read());
}

void bn_relu_sc_relu::thread_select_ln340_577_fu_33075_p3() {
    select_ln340_577_fu_33075_p3 = (!or_ln340_477_fu_31584_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_477_fu_31584_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_78_reg_84684.read());
}

void bn_relu_sc_relu::thread_select_ln340_578_fu_33089_p3() {
    select_ln340_578_fu_33089_p3 = (!or_ln340_478_fu_31595_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_478_fu_31595_p2.read()[0].to_bool())? select_ln340_577_fu_33075_p3.read(): select_ln388_208_fu_33082_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_579_fu_39525_p3() {
    select_ln340_579_fu_39525_p3 = (!or_ln340_867_fu_39514_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_867_fu_39514_p2.read()[0].to_bool())? select_ln340_273_reg_85993.read(): out_feature_t1_15_V_6_fu_39519_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_580_fu_48694_p3() {
    select_ln340_580_fu_48694_p3 = (!or_ln340_620_reg_88191.read()[0].is_01())? sc_lv<16>(): ((or_ln340_620_reg_88191.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_15_V_7_reg_88186.read());
}

void bn_relu_sc_relu::thread_select_ln340_581_fu_48700_p3() {
    select_ln340_581_fu_48700_p3 = (!and_ln340_79_reg_88196.read()[0].is_01())? sc_lv<16>(): ((and_ln340_79_reg_88196.read()[0].to_bool())? select_ln340_580_fu_48694_p3.read(): select_ln1495_15_reg_88201.read());
}

void bn_relu_sc_relu::thread_select_ln340_582_fu_33105_p3() {
    select_ln340_582_fu_33105_p3 = (!or_ln340_480_fu_31648_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_480_fu_31648_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_79_reg_84724.read());
}

void bn_relu_sc_relu::thread_select_ln340_583_fu_33119_p3() {
    select_ln340_583_fu_33119_p3 = (!or_ln340_481_fu_31659_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_481_fu_31659_p2.read()[0].to_bool())? select_ln340_582_fu_33105_p3.read(): select_ln388_211_fu_33112_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_584_fu_39600_p3() {
    select_ln340_584_fu_39600_p3 = (!or_ln340_977_fu_39589_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_977_fu_39589_p2.read()[0].to_bool())? select_ln340_276_reg_86023.read(): out_feature_t1_16_V_6_fu_39594_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_585_fu_48833_p3() {
    select_ln340_585_fu_48833_p3 = (!or_ln340_626_reg_88211.read()[0].is_01())? sc_lv<16>(): ((or_ln340_626_reg_88211.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_16_V_7_reg_88206.read());
}

void bn_relu_sc_relu::thread_select_ln340_586_fu_48839_p3() {
    select_ln340_586_fu_48839_p3 = (!and_ln340_80_reg_88216.read()[0].is_01())? sc_lv<16>(): ((and_ln340_80_reg_88216.read()[0].to_bool())? select_ln340_585_fu_48833_p3.read(): select_ln1495_16_reg_88221.read());
}

void bn_relu_sc_relu::thread_select_ln340_587_fu_33135_p3() {
    select_ln340_587_fu_33135_p3 = (!or_ln340_483_fu_31712_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_483_fu_31712_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_80_reg_84764.read());
}

void bn_relu_sc_relu::thread_select_ln340_588_fu_33149_p3() {
    select_ln340_588_fu_33149_p3 = (!or_ln340_484_fu_31723_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_484_fu_31723_p2.read()[0].to_bool())? select_ln340_587_fu_33135_p3.read(): select_ln388_214_fu_33142_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_589_fu_39675_p3() {
    select_ln340_589_fu_39675_p3 = (!or_ln340_983_fu_39664_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_983_fu_39664_p2.read()[0].to_bool())? select_ln340_279_reg_86053.read(): out_feature_t1_17_V_6_fu_39669_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_590_fu_48972_p3() {
    select_ln340_590_fu_48972_p3 = (!or_ln340_632_reg_88231.read()[0].is_01())? sc_lv<16>(): ((or_ln340_632_reg_88231.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_17_V_7_reg_88226.read());
}

void bn_relu_sc_relu::thread_select_ln340_591_fu_48978_p3() {
    select_ln340_591_fu_48978_p3 = (!and_ln340_81_reg_88236.read()[0].is_01())? sc_lv<16>(): ((and_ln340_81_reg_88236.read()[0].to_bool())? select_ln340_590_fu_48972_p3.read(): select_ln1495_17_reg_88241.read());
}

void bn_relu_sc_relu::thread_select_ln340_592_fu_33165_p3() {
    select_ln340_592_fu_33165_p3 = (!or_ln340_486_fu_31776_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_486_fu_31776_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_81_reg_84804.read());
}

void bn_relu_sc_relu::thread_select_ln340_593_fu_33179_p3() {
    select_ln340_593_fu_33179_p3 = (!or_ln340_487_fu_31787_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_487_fu_31787_p2.read()[0].to_bool())? select_ln340_592_fu_33165_p3.read(): select_ln388_217_fu_33172_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_594_fu_39750_p3() {
    select_ln340_594_fu_39750_p3 = (!or_ln340_989_fu_39739_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_989_fu_39739_p2.read()[0].to_bool())? select_ln340_282_reg_86083.read(): out_feature_t1_18_V_6_fu_39744_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_595_fu_49111_p3() {
    select_ln340_595_fu_49111_p3 = (!or_ln340_638_reg_88251.read()[0].is_01())? sc_lv<16>(): ((or_ln340_638_reg_88251.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_18_V_7_reg_88246.read());
}

void bn_relu_sc_relu::thread_select_ln340_596_fu_49117_p3() {
    select_ln340_596_fu_49117_p3 = (!and_ln340_82_reg_88256.read()[0].is_01())? sc_lv<16>(): ((and_ln340_82_reg_88256.read()[0].to_bool())? select_ln340_595_fu_49111_p3.read(): select_ln1495_18_reg_88261.read());
}

void bn_relu_sc_relu::thread_select_ln340_597_fu_33195_p3() {
    select_ln340_597_fu_33195_p3 = (!or_ln340_489_fu_31840_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_489_fu_31840_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_82_reg_84844.read());
}

void bn_relu_sc_relu::thread_select_ln340_598_fu_33209_p3() {
    select_ln340_598_fu_33209_p3 = (!or_ln340_490_fu_31851_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_490_fu_31851_p2.read()[0].to_bool())? select_ln340_597_fu_33195_p3.read(): select_ln388_220_fu_33202_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_599_fu_39825_p3() {
    select_ln340_599_fu_39825_p3 = (!or_ln340_995_fu_39814_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_995_fu_39814_p2.read()[0].to_bool())? select_ln340_285_reg_86113.read(): out_feature_t1_19_V_6_fu_39819_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_600_fu_49250_p3() {
    select_ln340_600_fu_49250_p3 = (!or_ln340_644_reg_88271.read()[0].is_01())? sc_lv<16>(): ((or_ln340_644_reg_88271.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_19_V_7_reg_88266.read());
}

void bn_relu_sc_relu::thread_select_ln340_601_fu_49256_p3() {
    select_ln340_601_fu_49256_p3 = (!and_ln340_83_reg_88276.read()[0].is_01())? sc_lv<16>(): ((and_ln340_83_reg_88276.read()[0].to_bool())? select_ln340_600_fu_49250_p3.read(): select_ln1495_19_reg_88281.read());
}

void bn_relu_sc_relu::thread_select_ln340_602_fu_33225_p3() {
    select_ln340_602_fu_33225_p3 = (!or_ln340_492_fu_31904_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_492_fu_31904_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_83_reg_84884.read());
}

void bn_relu_sc_relu::thread_select_ln340_603_fu_33239_p3() {
    select_ln340_603_fu_33239_p3 = (!or_ln340_493_fu_31915_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_493_fu_31915_p2.read()[0].to_bool())? select_ln340_602_fu_33225_p3.read(): select_ln388_223_fu_33232_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_604_fu_39900_p3() {
    select_ln340_604_fu_39900_p3 = (!or_ln340_1001_fu_39889_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1001_fu_39889_p2.read()[0].to_bool())? select_ln340_288_reg_86143.read(): out_feature_t1_20_V_6_fu_39894_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_605_fu_49389_p3() {
    select_ln340_605_fu_49389_p3 = (!or_ln340_650_reg_88291.read()[0].is_01())? sc_lv<16>(): ((or_ln340_650_reg_88291.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_20_V_7_reg_88286.read());
}

void bn_relu_sc_relu::thread_select_ln340_606_fu_49395_p3() {
    select_ln340_606_fu_49395_p3 = (!and_ln340_84_reg_88296.read()[0].is_01())? sc_lv<16>(): ((and_ln340_84_reg_88296.read()[0].to_bool())? select_ln340_605_fu_49389_p3.read(): select_ln1495_20_reg_88301.read());
}

void bn_relu_sc_relu::thread_select_ln340_607_fu_33255_p3() {
    select_ln340_607_fu_33255_p3 = (!or_ln340_495_fu_31968_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_495_fu_31968_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_84_reg_84924.read());
}

void bn_relu_sc_relu::thread_select_ln340_608_fu_33269_p3() {
    select_ln340_608_fu_33269_p3 = (!or_ln340_496_fu_31979_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_496_fu_31979_p2.read()[0].to_bool())? select_ln340_607_fu_33255_p3.read(): select_ln388_226_fu_33262_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_609_fu_39975_p3() {
    select_ln340_609_fu_39975_p3 = (!or_ln340_1007_fu_39964_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1007_fu_39964_p2.read()[0].to_bool())? select_ln340_291_reg_86173.read(): out_feature_t1_21_V_6_fu_39969_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_610_fu_49528_p3() {
    select_ln340_610_fu_49528_p3 = (!or_ln340_656_reg_88311.read()[0].is_01())? sc_lv<16>(): ((or_ln340_656_reg_88311.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_21_V_7_reg_88306.read());
}

void bn_relu_sc_relu::thread_select_ln340_611_fu_49534_p3() {
    select_ln340_611_fu_49534_p3 = (!and_ln340_85_reg_88316.read()[0].is_01())? sc_lv<16>(): ((and_ln340_85_reg_88316.read()[0].to_bool())? select_ln340_610_fu_49528_p3.read(): select_ln1495_21_reg_88321.read());
}

void bn_relu_sc_relu::thread_select_ln340_612_fu_33285_p3() {
    select_ln340_612_fu_33285_p3 = (!or_ln340_498_fu_32032_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_498_fu_32032_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_85_reg_84964.read());
}

void bn_relu_sc_relu::thread_select_ln340_613_fu_33299_p3() {
    select_ln340_613_fu_33299_p3 = (!or_ln340_499_fu_32043_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_499_fu_32043_p2.read()[0].to_bool())? select_ln340_612_fu_33285_p3.read(): select_ln388_229_fu_33292_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_614_fu_40050_p3() {
    select_ln340_614_fu_40050_p3 = (!or_ln340_1013_fu_40039_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1013_fu_40039_p2.read()[0].to_bool())? select_ln340_294_reg_86203.read(): out_feature_t1_22_V_6_fu_40044_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_615_fu_49667_p3() {
    select_ln340_615_fu_49667_p3 = (!or_ln340_662_reg_88331.read()[0].is_01())? sc_lv<16>(): ((or_ln340_662_reg_88331.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_22_V_7_reg_88326.read());
}

void bn_relu_sc_relu::thread_select_ln340_616_fu_49673_p3() {
    select_ln340_616_fu_49673_p3 = (!and_ln340_86_reg_88336.read()[0].is_01())? sc_lv<16>(): ((and_ln340_86_reg_88336.read()[0].to_bool())? select_ln340_615_fu_49667_p3.read(): select_ln1495_22_reg_88341.read());
}

void bn_relu_sc_relu::thread_select_ln340_617_fu_33315_p3() {
    select_ln340_617_fu_33315_p3 = (!or_ln340_501_fu_32096_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_501_fu_32096_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_86_reg_85004.read());
}

void bn_relu_sc_relu::thread_select_ln340_618_fu_33329_p3() {
    select_ln340_618_fu_33329_p3 = (!or_ln340_502_fu_32107_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_502_fu_32107_p2.read()[0].to_bool())? select_ln340_617_fu_33315_p3.read(): select_ln388_232_fu_33322_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_619_fu_40125_p3() {
    select_ln340_619_fu_40125_p3 = (!or_ln340_1019_fu_40114_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1019_fu_40114_p2.read()[0].to_bool())? select_ln340_297_reg_86233.read(): out_feature_t1_23_V_6_fu_40119_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_620_fu_49806_p3() {
    select_ln340_620_fu_49806_p3 = (!or_ln340_668_reg_88351.read()[0].is_01())? sc_lv<16>(): ((or_ln340_668_reg_88351.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_23_V_7_reg_88346.read());
}

void bn_relu_sc_relu::thread_select_ln340_621_fu_49812_p3() {
    select_ln340_621_fu_49812_p3 = (!and_ln340_87_reg_88356.read()[0].is_01())? sc_lv<16>(): ((and_ln340_87_reg_88356.read()[0].to_bool())? select_ln340_620_fu_49806_p3.read(): select_ln1495_23_reg_88361.read());
}

void bn_relu_sc_relu::thread_select_ln340_622_fu_33345_p3() {
    select_ln340_622_fu_33345_p3 = (!or_ln340_504_fu_32160_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_504_fu_32160_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_87_reg_85044.read());
}

void bn_relu_sc_relu::thread_select_ln340_623_fu_33359_p3() {
    select_ln340_623_fu_33359_p3 = (!or_ln340_505_fu_32171_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_505_fu_32171_p2.read()[0].to_bool())? select_ln340_622_fu_33345_p3.read(): select_ln388_235_fu_33352_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_624_fu_40200_p3() {
    select_ln340_624_fu_40200_p3 = (!or_ln340_1025_fu_40189_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1025_fu_40189_p2.read()[0].to_bool())? select_ln340_300_reg_86263.read(): out_feature_t1_24_V_6_fu_40194_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_625_fu_49945_p3() {
    select_ln340_625_fu_49945_p3 = (!or_ln340_674_reg_88371.read()[0].is_01())? sc_lv<16>(): ((or_ln340_674_reg_88371.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_24_V_7_reg_88366.read());
}

void bn_relu_sc_relu::thread_select_ln340_626_fu_49951_p3() {
    select_ln340_626_fu_49951_p3 = (!and_ln340_88_reg_88376.read()[0].is_01())? sc_lv<16>(): ((and_ln340_88_reg_88376.read()[0].to_bool())? select_ln340_625_fu_49945_p3.read(): select_ln1495_24_reg_88381.read());
}

void bn_relu_sc_relu::thread_select_ln340_627_fu_33375_p3() {
    select_ln340_627_fu_33375_p3 = (!or_ln340_507_fu_32224_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_507_fu_32224_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_88_reg_85084.read());
}

void bn_relu_sc_relu::thread_select_ln340_628_fu_33389_p3() {
    select_ln340_628_fu_33389_p3 = (!or_ln340_508_fu_32235_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_508_fu_32235_p2.read()[0].to_bool())? select_ln340_627_fu_33375_p3.read(): select_ln388_238_fu_33382_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_629_fu_40275_p3() {
    select_ln340_629_fu_40275_p3 = (!or_ln340_1031_fu_40264_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1031_fu_40264_p2.read()[0].to_bool())? select_ln340_303_reg_86293.read(): out_feature_t1_25_V_6_fu_40269_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_630_fu_50084_p3() {
    select_ln340_630_fu_50084_p3 = (!or_ln340_680_reg_88391.read()[0].is_01())? sc_lv<16>(): ((or_ln340_680_reg_88391.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_25_V_7_reg_88386.read());
}

void bn_relu_sc_relu::thread_select_ln340_631_fu_50090_p3() {
    select_ln340_631_fu_50090_p3 = (!and_ln340_89_reg_88396.read()[0].is_01())? sc_lv<16>(): ((and_ln340_89_reg_88396.read()[0].to_bool())? select_ln340_630_fu_50084_p3.read(): select_ln1495_25_reg_88401.read());
}

void bn_relu_sc_relu::thread_select_ln340_632_fu_33405_p3() {
    select_ln340_632_fu_33405_p3 = (!or_ln340_510_fu_32288_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_510_fu_32288_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_89_reg_85124.read());
}

void bn_relu_sc_relu::thread_select_ln340_633_fu_33419_p3() {
    select_ln340_633_fu_33419_p3 = (!or_ln340_511_fu_32299_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_511_fu_32299_p2.read()[0].to_bool())? select_ln340_632_fu_33405_p3.read(): select_ln388_241_fu_33412_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_634_fu_40350_p3() {
    select_ln340_634_fu_40350_p3 = (!or_ln340_1037_fu_40339_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1037_fu_40339_p2.read()[0].to_bool())? select_ln340_306_reg_86323.read(): out_feature_t1_26_V_6_fu_40344_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_635_fu_50223_p3() {
    select_ln340_635_fu_50223_p3 = (!or_ln340_686_reg_88411.read()[0].is_01())? sc_lv<16>(): ((or_ln340_686_reg_88411.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_26_V_7_reg_88406.read());
}

void bn_relu_sc_relu::thread_select_ln340_636_fu_50229_p3() {
    select_ln340_636_fu_50229_p3 = (!and_ln340_90_reg_88416.read()[0].is_01())? sc_lv<16>(): ((and_ln340_90_reg_88416.read()[0].to_bool())? select_ln340_635_fu_50223_p3.read(): select_ln1495_26_reg_88421.read());
}

void bn_relu_sc_relu::thread_select_ln340_637_fu_33435_p3() {
    select_ln340_637_fu_33435_p3 = (!or_ln340_513_fu_32352_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_513_fu_32352_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_90_reg_85164.read());
}

void bn_relu_sc_relu::thread_select_ln340_638_fu_33449_p3() {
    select_ln340_638_fu_33449_p3 = (!or_ln340_514_fu_32363_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_514_fu_32363_p2.read()[0].to_bool())? select_ln340_637_fu_33435_p3.read(): select_ln388_244_fu_33442_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_639_fu_40425_p3() {
    select_ln340_639_fu_40425_p3 = (!or_ln340_1043_fu_40414_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1043_fu_40414_p2.read()[0].to_bool())? select_ln340_309_reg_86353.read(): out_feature_t1_27_V_6_fu_40419_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_640_fu_50362_p3() {
    select_ln340_640_fu_50362_p3 = (!or_ln340_692_reg_88431.read()[0].is_01())? sc_lv<16>(): ((or_ln340_692_reg_88431.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_27_V_7_reg_88426.read());
}

void bn_relu_sc_relu::thread_select_ln340_641_fu_50368_p3() {
    select_ln340_641_fu_50368_p3 = (!and_ln340_91_reg_88436.read()[0].is_01())? sc_lv<16>(): ((and_ln340_91_reg_88436.read()[0].to_bool())? select_ln340_640_fu_50362_p3.read(): select_ln1495_27_reg_88441.read());
}

void bn_relu_sc_relu::thread_select_ln340_642_fu_33465_p3() {
    select_ln340_642_fu_33465_p3 = (!or_ln340_516_fu_32416_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_516_fu_32416_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_91_reg_85204.read());
}

void bn_relu_sc_relu::thread_select_ln340_643_fu_33479_p3() {
    select_ln340_643_fu_33479_p3 = (!or_ln340_517_fu_32427_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_517_fu_32427_p2.read()[0].to_bool())? select_ln340_642_fu_33465_p3.read(): select_ln388_247_fu_33472_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_644_fu_40500_p3() {
    select_ln340_644_fu_40500_p3 = (!or_ln340_1049_fu_40489_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1049_fu_40489_p2.read()[0].to_bool())? select_ln340_312_reg_86383.read(): out_feature_t1_28_V_6_fu_40494_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_645_fu_50501_p3() {
    select_ln340_645_fu_50501_p3 = (!or_ln340_698_reg_88451.read()[0].is_01())? sc_lv<16>(): ((or_ln340_698_reg_88451.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_28_V_7_reg_88446.read());
}

void bn_relu_sc_relu::thread_select_ln340_646_fu_50507_p3() {
    select_ln340_646_fu_50507_p3 = (!and_ln340_92_reg_88456.read()[0].is_01())? sc_lv<16>(): ((and_ln340_92_reg_88456.read()[0].to_bool())? select_ln340_645_fu_50501_p3.read(): select_ln1495_28_reg_88461.read());
}

void bn_relu_sc_relu::thread_select_ln340_647_fu_33495_p3() {
    select_ln340_647_fu_33495_p3 = (!or_ln340_519_fu_32480_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_519_fu_32480_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_92_reg_85244.read());
}

void bn_relu_sc_relu::thread_select_ln340_648_fu_33509_p3() {
    select_ln340_648_fu_33509_p3 = (!or_ln340_520_fu_32491_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_520_fu_32491_p2.read()[0].to_bool())? select_ln340_647_fu_33495_p3.read(): select_ln388_250_fu_33502_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_649_fu_40575_p3() {
    select_ln340_649_fu_40575_p3 = (!or_ln340_1055_fu_40564_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1055_fu_40564_p2.read()[0].to_bool())? select_ln340_315_reg_86413.read(): out_feature_t1_29_V_6_fu_40569_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_650_fu_50640_p3() {
    select_ln340_650_fu_50640_p3 = (!or_ln340_704_reg_88471.read()[0].is_01())? sc_lv<16>(): ((or_ln340_704_reg_88471.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_29_V_7_reg_88466.read());
}

void bn_relu_sc_relu::thread_select_ln340_651_fu_50646_p3() {
    select_ln340_651_fu_50646_p3 = (!and_ln340_93_reg_88476.read()[0].is_01())? sc_lv<16>(): ((and_ln340_93_reg_88476.read()[0].to_bool())? select_ln340_650_fu_50640_p3.read(): select_ln1495_29_reg_88481.read());
}

void bn_relu_sc_relu::thread_select_ln340_652_fu_33525_p3() {
    select_ln340_652_fu_33525_p3 = (!or_ln340_522_fu_32544_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_522_fu_32544_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_93_reg_85284.read());
}

void bn_relu_sc_relu::thread_select_ln340_653_fu_33539_p3() {
    select_ln340_653_fu_33539_p3 = (!or_ln340_523_fu_32555_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_523_fu_32555_p2.read()[0].to_bool())? select_ln340_652_fu_33525_p3.read(): select_ln388_253_fu_33532_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_654_fu_40650_p3() {
    select_ln340_654_fu_40650_p3 = (!or_ln340_1061_fu_40639_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1061_fu_40639_p2.read()[0].to_bool())? select_ln340_318_reg_86443.read(): out_feature_t1_30_V_6_fu_40644_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_655_fu_50779_p3() {
    select_ln340_655_fu_50779_p3 = (!or_ln340_710_reg_88491.read()[0].is_01())? sc_lv<16>(): ((or_ln340_710_reg_88491.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_30_V_7_reg_88486.read());
}

void bn_relu_sc_relu::thread_select_ln340_656_fu_50785_p3() {
    select_ln340_656_fu_50785_p3 = (!and_ln340_94_reg_88496.read()[0].is_01())? sc_lv<16>(): ((and_ln340_94_reg_88496.read()[0].to_bool())? select_ln340_655_fu_50779_p3.read(): select_ln1495_30_reg_88501.read());
}

void bn_relu_sc_relu::thread_select_ln340_657_fu_33555_p3() {
    select_ln340_657_fu_33555_p3 = (!or_ln340_525_fu_32608_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_525_fu_32608_p2.read()[0].to_bool())? ap_const_lv16_7FFF: add_ln415_94_reg_85324.read());
}

void bn_relu_sc_relu::thread_select_ln340_658_fu_33569_p3() {
    select_ln340_658_fu_33569_p3 = (!or_ln340_526_fu_32619_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_526_fu_32619_p2.read()[0].to_bool())? select_ln340_657_fu_33555_p3.read(): select_ln388_256_fu_33562_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_659_fu_40725_p3() {
    select_ln340_659_fu_40725_p3 = (!or_ln340_1067_fu_40714_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1067_fu_40714_p2.read()[0].to_bool())? select_ln340_321_reg_86473.read(): out_feature_t1_31_V_6_fu_40719_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_660_fu_50918_p3() {
    select_ln340_660_fu_50918_p3 = (!or_ln340_716_reg_88511.read()[0].is_01())? sc_lv<16>(): ((or_ln340_716_reg_88511.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_31_V_7_reg_88506.read());
}

void bn_relu_sc_relu::thread_select_ln340_661_fu_50924_p3() {
    select_ln340_661_fu_50924_p3 = (!and_ln340_95_reg_88516.read()[0].is_01())? sc_lv<16>(): ((and_ln340_95_reg_88516.read()[0].to_bool())? select_ln340_660_fu_50918_p3.read(): select_ln1495_31_reg_88521.read());
}

void bn_relu_sc_relu::thread_select_ln340_662_fu_51970_p3() {
    select_ln340_662_fu_51970_p3 = (!or_ln340_532_fu_51088_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_532_fu_51088_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_0_V_8_reg_88531.read());
}

void bn_relu_sc_relu::thread_select_ln340_663_fu_51983_p3() {
    select_ln340_663_fu_51983_p3 = (!or_ln340_667_fu_51097_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_667_fu_51097_p2.read()[0].to_bool())? select_ln340_662_fu_51970_p3.read(): select_ln388_259_fu_51977_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_664_fu_55705_p3() {
    select_ln340_664_fu_55705_p3 = (!or_ln340_1073_fu_55686_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1073_fu_55686_p2.read()[0].to_bool())? select_ln340_324_fu_55691_p3.read(): out_feature_t1_0_V_10_fu_55698_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_665_fu_52084_p3() {
    select_ln340_665_fu_52084_p3 = (!or_ln340_538_fu_51116_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_538_fu_51116_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_1_V_8_reg_88570.read());
}

void bn_relu_sc_relu::thread_select_ln340_666_fu_52097_p3() {
    select_ln340_666_fu_52097_p3 = (!or_ln340_679_fu_51125_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_679_fu_51125_p2.read()[0].to_bool())? select_ln340_665_fu_52084_p3.read(): select_ln388_261_fu_52091_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_667_fu_55791_p3() {
    select_ln340_667_fu_55791_p3 = (!or_ln340_1075_fu_55772_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1075_fu_55772_p2.read()[0].to_bool())? select_ln340_325_fu_55777_p3.read(): out_feature_t1_1_V_10_fu_55784_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_668_fu_52198_p3() {
    select_ln340_668_fu_52198_p3 = (!or_ln340_544_fu_51144_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_544_fu_51144_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_2_V_8_reg_88609.read());
}

void bn_relu_sc_relu::thread_select_ln340_669_fu_52211_p3() {
    select_ln340_669_fu_52211_p3 = (!or_ln340_691_fu_51153_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_691_fu_51153_p2.read()[0].to_bool())? select_ln340_668_fu_52198_p3.read(): select_ln388_263_fu_52205_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_670_fu_55877_p3() {
    select_ln340_670_fu_55877_p3 = (!or_ln340_1077_fu_55858_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1077_fu_55858_p2.read()[0].to_bool())? select_ln340_326_fu_55863_p3.read(): out_feature_t1_2_V_10_fu_55870_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_671_fu_52312_p3() {
    select_ln340_671_fu_52312_p3 = (!or_ln340_550_fu_51172_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_550_fu_51172_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_3_V_8_reg_88648.read());
}

void bn_relu_sc_relu::thread_select_ln340_672_fu_52325_p3() {
    select_ln340_672_fu_52325_p3 = (!or_ln340_703_fu_51181_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_703_fu_51181_p2.read()[0].to_bool())? select_ln340_671_fu_52312_p3.read(): select_ln388_265_fu_52319_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_673_fu_55963_p3() {
    select_ln340_673_fu_55963_p3 = (!or_ln340_1079_fu_55944_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1079_fu_55944_p2.read()[0].to_bool())? select_ln340_327_fu_55949_p3.read(): out_feature_t1_3_V_10_fu_55956_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_674_fu_52426_p3() {
    select_ln340_674_fu_52426_p3 = (!or_ln340_556_fu_51200_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_556_fu_51200_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_4_V_8_reg_88687.read());
}

void bn_relu_sc_relu::thread_select_ln340_675_fu_52439_p3() {
    select_ln340_675_fu_52439_p3 = (!or_ln340_715_fu_51209_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_715_fu_51209_p2.read()[0].to_bool())? select_ln340_674_fu_52426_p3.read(): select_ln388_267_fu_52433_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_676_fu_56049_p3() {
    select_ln340_676_fu_56049_p3 = (!or_ln340_1081_fu_56030_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1081_fu_56030_p2.read()[0].to_bool())? select_ln340_328_fu_56035_p3.read(): out_feature_t1_4_V_10_fu_56042_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_677_fu_52540_p3() {
    select_ln340_677_fu_52540_p3 = (!or_ln340_562_fu_51228_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_562_fu_51228_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_5_V_8_reg_88726.read());
}

void bn_relu_sc_relu::thread_select_ln340_678_fu_52553_p3() {
    select_ln340_678_fu_52553_p3 = (!or_ln340_727_fu_51237_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_727_fu_51237_p2.read()[0].to_bool())? select_ln340_677_fu_52540_p3.read(): select_ln388_269_fu_52547_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_679_fu_56135_p3() {
    select_ln340_679_fu_56135_p3 = (!or_ln340_1083_fu_56116_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1083_fu_56116_p2.read()[0].to_bool())? select_ln340_329_fu_56121_p3.read(): out_feature_t1_5_V_10_fu_56128_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_680_fu_52654_p3() {
    select_ln340_680_fu_52654_p3 = (!or_ln340_568_fu_51256_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_568_fu_51256_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_6_V_8_reg_88765.read());
}

void bn_relu_sc_relu::thread_select_ln340_681_fu_52667_p3() {
    select_ln340_681_fu_52667_p3 = (!or_ln340_739_fu_51265_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_739_fu_51265_p2.read()[0].to_bool())? select_ln340_680_fu_52654_p3.read(): select_ln388_271_fu_52661_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_682_fu_56221_p3() {
    select_ln340_682_fu_56221_p3 = (!or_ln340_1085_fu_56202_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1085_fu_56202_p2.read()[0].to_bool())? select_ln340_330_fu_56207_p3.read(): out_feature_t1_6_V_10_fu_56214_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_683_fu_56307_p3() {
    select_ln340_683_fu_56307_p3 = (!or_ln340_1087_fu_56288_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1087_fu_56288_p2.read()[0].to_bool())? select_ln340_331_fu_56293_p3.read(): out_feature_t1_7_V_10_fu_56300_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_684_fu_56393_p3() {
    select_ln340_684_fu_56393_p3 = (!or_ln340_1089_fu_56374_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1089_fu_56374_p2.read()[0].to_bool())? select_ln340_332_fu_56379_p3.read(): out_feature_t1_8_V_10_fu_56386_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_685_fu_56479_p3() {
    select_ln340_685_fu_56479_p3 = (!or_ln340_1091_fu_56460_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1091_fu_56460_p2.read()[0].to_bool())? select_ln340_333_fu_56465_p3.read(): out_feature_t1_9_V_10_fu_56472_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_686_fu_56565_p3() {
    select_ln340_686_fu_56565_p3 = (!or_ln340_1093_fu_56546_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1093_fu_56546_p2.read()[0].to_bool())? select_ln340_334_fu_56551_p3.read(): out_feature_t1_10_V_10_fu_56558_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_687_fu_56651_p3() {
    select_ln340_687_fu_56651_p3 = (!or_ln340_1095_fu_56632_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1095_fu_56632_p2.read()[0].to_bool())? select_ln340_335_fu_56637_p3.read(): out_feature_t1_11_V_10_fu_56644_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_688_fu_56737_p3() {
    select_ln340_688_fu_56737_p3 = (!or_ln340_1097_fu_56718_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1097_fu_56718_p2.read()[0].to_bool())? select_ln340_336_fu_56723_p3.read(): out_feature_t1_12_V_10_fu_56730_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_689_fu_56823_p3() {
    select_ln340_689_fu_56823_p3 = (!or_ln340_1099_fu_56804_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1099_fu_56804_p2.read()[0].to_bool())? select_ln340_337_fu_56809_p3.read(): out_feature_t1_13_V_10_fu_56816_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_690_fu_56909_p3() {
    select_ln340_690_fu_56909_p3 = (!or_ln340_1101_fu_56890_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1101_fu_56890_p2.read()[0].to_bool())? select_ln340_338_fu_56895_p3.read(): out_feature_t1_14_V_10_fu_56902_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_691_fu_56995_p3() {
    select_ln340_691_fu_56995_p3 = (!or_ln340_1103_fu_56976_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1103_fu_56976_p2.read()[0].to_bool())? select_ln340_339_fu_56981_p3.read(): out_feature_t1_15_V_10_fu_56988_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_692_fu_57081_p3() {
    select_ln340_692_fu_57081_p3 = (!or_ln340_1105_fu_57062_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1105_fu_57062_p2.read()[0].to_bool())? select_ln340_340_fu_57067_p3.read(): out_feature_t1_16_V_10_fu_57074_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_693_fu_57167_p3() {
    select_ln340_693_fu_57167_p3 = (!or_ln340_1107_fu_57148_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1107_fu_57148_p2.read()[0].to_bool())? select_ln340_341_fu_57153_p3.read(): out_feature_t1_17_V_10_fu_57160_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_694_fu_57253_p3() {
    select_ln340_694_fu_57253_p3 = (!or_ln340_1109_fu_57234_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1109_fu_57234_p2.read()[0].to_bool())? select_ln340_342_fu_57239_p3.read(): out_feature_t1_18_V_10_fu_57246_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_695_fu_57339_p3() {
    select_ln340_695_fu_57339_p3 = (!or_ln340_1111_fu_57320_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1111_fu_57320_p2.read()[0].to_bool())? select_ln340_343_fu_57325_p3.read(): out_feature_t1_19_V_10_fu_57332_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_696_fu_57425_p3() {
    select_ln340_696_fu_57425_p3 = (!or_ln340_1113_fu_57406_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1113_fu_57406_p2.read()[0].to_bool())? select_ln340_344_fu_57411_p3.read(): out_feature_t1_20_V_10_fu_57418_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_697_fu_57511_p3() {
    select_ln340_697_fu_57511_p3 = (!or_ln340_1115_fu_57492_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1115_fu_57492_p2.read()[0].to_bool())? select_ln340_345_fu_57497_p3.read(): out_feature_t1_21_V_10_fu_57504_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_698_fu_57597_p3() {
    select_ln340_698_fu_57597_p3 = (!or_ln340_1117_fu_57578_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1117_fu_57578_p2.read()[0].to_bool())? select_ln340_346_fu_57583_p3.read(): out_feature_t1_22_V_10_fu_57590_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_699_fu_57683_p3() {
    select_ln340_699_fu_57683_p3 = (!or_ln340_1119_fu_57664_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1119_fu_57664_p2.read()[0].to_bool())? select_ln340_347_fu_57669_p3.read(): out_feature_t1_23_V_10_fu_57676_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_700_fu_57769_p3() {
    select_ln340_700_fu_57769_p3 = (!or_ln340_1121_fu_57750_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1121_fu_57750_p2.read()[0].to_bool())? select_ln340_348_fu_57755_p3.read(): out_feature_t1_24_V_10_fu_57762_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_701_fu_57855_p3() {
    select_ln340_701_fu_57855_p3 = (!or_ln340_1123_fu_57836_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1123_fu_57836_p2.read()[0].to_bool())? select_ln340_349_fu_57841_p3.read(): out_feature_t1_25_V_10_fu_57848_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_702_fu_57941_p3() {
    select_ln340_702_fu_57941_p3 = (!or_ln340_1125_fu_57922_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1125_fu_57922_p2.read()[0].to_bool())? select_ln340_350_fu_57927_p3.read(): out_feature_t1_26_V_10_fu_57934_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_703_fu_58027_p3() {
    select_ln340_703_fu_58027_p3 = (!or_ln340_1127_fu_58008_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1127_fu_58008_p2.read()[0].to_bool())? select_ln340_351_fu_58013_p3.read(): out_feature_t1_27_V_10_fu_58020_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_704_fu_58113_p3() {
    select_ln340_704_fu_58113_p3 = (!or_ln340_1129_fu_58094_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1129_fu_58094_p2.read()[0].to_bool())? select_ln340_352_fu_58099_p3.read(): out_feature_t1_28_V_10_fu_58106_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_705_fu_58199_p3() {
    select_ln340_705_fu_58199_p3 = (!or_ln340_1131_fu_58180_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1131_fu_58180_p2.read()[0].to_bool())? select_ln340_353_fu_58185_p3.read(): out_feature_t1_29_V_10_fu_58192_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_706_fu_58285_p3() {
    select_ln340_706_fu_58285_p3 = (!or_ln340_1133_fu_58266_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1133_fu_58266_p2.read()[0].to_bool())? select_ln340_354_fu_58271_p3.read(): out_feature_t1_30_V_10_fu_58278_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_707_fu_58371_p3() {
    select_ln340_707_fu_58371_p3 = (!or_ln340_1135_fu_58352_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1135_fu_58352_p2.read()[0].to_bool())? select_ln340_355_fu_58357_p3.read(): out_feature_t1_31_V_10_fu_58364_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_708_fu_52768_p3() {
    select_ln340_708_fu_52768_p3 = (!or_ln340_574_fu_51284_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_574_fu_51284_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_7_V_8_reg_88804.read());
}

void bn_relu_sc_relu::thread_select_ln340_709_fu_52781_p3() {
    select_ln340_709_fu_52781_p3 = (!or_ln340_751_fu_51293_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_751_fu_51293_p2.read()[0].to_bool())? select_ln340_708_fu_52768_p3.read(): select_ln388_273_fu_52775_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_710_fu_52882_p3() {
    select_ln340_710_fu_52882_p3 = (!or_ln340_580_fu_51312_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_580_fu_51312_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_8_V_8_reg_88843.read());
}

void bn_relu_sc_relu::thread_select_ln340_711_fu_52895_p3() {
    select_ln340_711_fu_52895_p3 = (!or_ln340_763_fu_51321_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_763_fu_51321_p2.read()[0].to_bool())? select_ln340_710_fu_52882_p3.read(): select_ln388_275_fu_52889_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_712_fu_52996_p3() {
    select_ln340_712_fu_52996_p3 = (!or_ln340_586_fu_51340_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_586_fu_51340_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_9_V_8_reg_88882.read());
}

void bn_relu_sc_relu::thread_select_ln340_713_fu_53009_p3() {
    select_ln340_713_fu_53009_p3 = (!or_ln340_775_fu_51349_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_775_fu_51349_p2.read()[0].to_bool())? select_ln340_712_fu_52996_p3.read(): select_ln388_277_fu_53003_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_714_fu_53110_p3() {
    select_ln340_714_fu_53110_p3 = (!or_ln340_592_fu_51368_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_592_fu_51368_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_10_V_8_reg_88921.read());
}

void bn_relu_sc_relu::thread_select_ln340_715_fu_53123_p3() {
    select_ln340_715_fu_53123_p3 = (!or_ln340_789_fu_51377_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_789_fu_51377_p2.read()[0].to_bool())? select_ln340_714_fu_53110_p3.read(): select_ln388_279_fu_53117_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_716_fu_53224_p3() {
    select_ln340_716_fu_53224_p3 = (!or_ln340_598_fu_51396_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_598_fu_51396_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_11_V_8_reg_88960.read());
}

void bn_relu_sc_relu::thread_select_ln340_717_fu_53237_p3() {
    select_ln340_717_fu_53237_p3 = (!or_ln340_807_fu_51405_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_807_fu_51405_p2.read()[0].to_bool())? select_ln340_716_fu_53224_p3.read(): select_ln388_281_fu_53231_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_718_fu_53338_p3() {
    select_ln340_718_fu_53338_p3 = (!or_ln340_604_fu_51424_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_604_fu_51424_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_12_V_8_reg_88999.read());
}

void bn_relu_sc_relu::thread_select_ln340_719_fu_53351_p3() {
    select_ln340_719_fu_53351_p3 = (!or_ln340_825_fu_51433_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_825_fu_51433_p2.read()[0].to_bool())? select_ln340_718_fu_53338_p3.read(): select_ln388_283_fu_53345_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_720_fu_53452_p3() {
    select_ln340_720_fu_53452_p3 = (!or_ln340_610_fu_51452_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_610_fu_51452_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_13_V_8_reg_89038.read());
}

void bn_relu_sc_relu::thread_select_ln340_721_fu_53465_p3() {
    select_ln340_721_fu_53465_p3 = (!or_ln340_843_fu_51461_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_843_fu_51461_p2.read()[0].to_bool())? select_ln340_720_fu_53452_p3.read(): select_ln388_285_fu_53459_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_722_fu_53566_p3() {
    select_ln340_722_fu_53566_p3 = (!or_ln340_616_fu_51480_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_616_fu_51480_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_14_V_8_reg_89077.read());
}

void bn_relu_sc_relu::thread_select_ln340_723_fu_53579_p3() {
    select_ln340_723_fu_53579_p3 = (!or_ln340_861_fu_51489_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_861_fu_51489_p2.read()[0].to_bool())? select_ln340_722_fu_53566_p3.read(): select_ln388_287_fu_53573_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_724_fu_53680_p3() {
    select_ln340_724_fu_53680_p3 = (!or_ln340_622_fu_51508_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_622_fu_51508_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_15_V_8_reg_89116.read());
}

void bn_relu_sc_relu::thread_select_ln340_725_fu_53693_p3() {
    select_ln340_725_fu_53693_p3 = (!or_ln340_879_fu_51517_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_879_fu_51517_p2.read()[0].to_bool())? select_ln340_724_fu_53680_p3.read(): select_ln388_289_fu_53687_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_726_fu_53794_p3() {
    select_ln340_726_fu_53794_p3 = (!or_ln340_628_fu_51536_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_628_fu_51536_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_16_V_8_reg_89155.read());
}

void bn_relu_sc_relu::thread_select_ln340_727_fu_53807_p3() {
    select_ln340_727_fu_53807_p3 = (!or_ln340_981_fu_51545_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_981_fu_51545_p2.read()[0].to_bool())? select_ln340_726_fu_53794_p3.read(): select_ln388_291_fu_53801_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_728_fu_53908_p3() {
    select_ln340_728_fu_53908_p3 = (!or_ln340_634_fu_51564_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_634_fu_51564_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_17_V_8_reg_89194.read());
}

void bn_relu_sc_relu::thread_select_ln340_729_fu_53921_p3() {
    select_ln340_729_fu_53921_p3 = (!or_ln340_987_fu_51573_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_987_fu_51573_p2.read()[0].to_bool())? select_ln340_728_fu_53908_p3.read(): select_ln388_293_fu_53915_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_730_fu_54022_p3() {
    select_ln340_730_fu_54022_p3 = (!or_ln340_640_fu_51592_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_640_fu_51592_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_18_V_8_reg_89233.read());
}

void bn_relu_sc_relu::thread_select_ln340_731_fu_54035_p3() {
    select_ln340_731_fu_54035_p3 = (!or_ln340_993_fu_51601_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_993_fu_51601_p2.read()[0].to_bool())? select_ln340_730_fu_54022_p3.read(): select_ln388_295_fu_54029_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_732_fu_54136_p3() {
    select_ln340_732_fu_54136_p3 = (!or_ln340_646_fu_51620_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_646_fu_51620_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_19_V_8_reg_89272.read());
}

void bn_relu_sc_relu::thread_select_ln340_733_fu_54149_p3() {
    select_ln340_733_fu_54149_p3 = (!or_ln340_999_fu_51629_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_999_fu_51629_p2.read()[0].to_bool())? select_ln340_732_fu_54136_p3.read(): select_ln388_297_fu_54143_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_734_fu_54250_p3() {
    select_ln340_734_fu_54250_p3 = (!or_ln340_652_fu_51648_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_652_fu_51648_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_20_V_8_reg_89311.read());
}

void bn_relu_sc_relu::thread_select_ln340_735_fu_54263_p3() {
    select_ln340_735_fu_54263_p3 = (!or_ln340_1005_fu_51657_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1005_fu_51657_p2.read()[0].to_bool())? select_ln340_734_fu_54250_p3.read(): select_ln388_299_fu_54257_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_736_fu_54364_p3() {
    select_ln340_736_fu_54364_p3 = (!or_ln340_658_fu_51676_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_658_fu_51676_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_21_V_8_reg_89350.read());
}

void bn_relu_sc_relu::thread_select_ln340_737_fu_54377_p3() {
    select_ln340_737_fu_54377_p3 = (!or_ln340_1011_fu_51685_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1011_fu_51685_p2.read()[0].to_bool())? select_ln340_736_fu_54364_p3.read(): select_ln388_301_fu_54371_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_738_fu_54478_p3() {
    select_ln340_738_fu_54478_p3 = (!or_ln340_664_fu_51704_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_664_fu_51704_p2.read()[0].to_bool())? ap_const_lv16_7FFF: out_feature_t1_22_V_8_reg_89389.read());
}

void bn_relu_sc_relu::thread_select_ln340_739_fu_54491_p3() {
    select_ln340_739_fu_54491_p3 = (!or_ln340_1017_fu_51713_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_1017_fu_51713_p2.read()[0].to_bool())? select_ln340_738_fu_54478_p3.read(): select_ln388_303_fu_54485_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_740_fu_66228_p3() {
    select_ln340_740_fu_66228_p3 = (!or_ln340_881_fu_66206_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_881_fu_66206_p2.read()[0].to_bool())? select_ln340_388_fu_66212_p3.read(): select_ln388_355_fu_66220_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_741_fu_66350_p3() {
    select_ln340_741_fu_66350_p3 = (!or_ln340_883_fu_66328_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_883_fu_66328_p2.read()[0].to_bool())? select_ln340_389_fu_66334_p3.read(): select_ln388_356_fu_66342_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_742_fu_66472_p3() {
    select_ln340_742_fu_66472_p3 = (!or_ln340_885_fu_66450_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_885_fu_66450_p2.read()[0].to_bool())? select_ln340_390_fu_66456_p3.read(): select_ln388_357_fu_66464_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_743_fu_66594_p3() {
    select_ln340_743_fu_66594_p3 = (!or_ln340_887_fu_66572_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_887_fu_66572_p2.read()[0].to_bool())? select_ln340_391_fu_66578_p3.read(): select_ln388_358_fu_66586_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_744_fu_66716_p3() {
    select_ln340_744_fu_66716_p3 = (!or_ln340_889_fu_66694_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_889_fu_66694_p2.read()[0].to_bool())? select_ln340_392_fu_66700_p3.read(): select_ln388_359_fu_66708_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_745_fu_66838_p3() {
    select_ln340_745_fu_66838_p3 = (!or_ln340_891_fu_66816_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_891_fu_66816_p2.read()[0].to_bool())? select_ln340_393_fu_66822_p3.read(): select_ln388_360_fu_66830_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_746_fu_66960_p3() {
    select_ln340_746_fu_66960_p3 = (!or_ln340_893_fu_66938_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_893_fu_66938_p2.read()[0].to_bool())? select_ln340_394_fu_66944_p3.read(): select_ln388_361_fu_66952_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_747_fu_67082_p3() {
    select_ln340_747_fu_67082_p3 = (!or_ln340_895_fu_67060_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_895_fu_67060_p2.read()[0].to_bool())? select_ln340_395_fu_67066_p3.read(): select_ln388_362_fu_67074_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_748_fu_67204_p3() {
    select_ln340_748_fu_67204_p3 = (!or_ln340_897_fu_67182_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_897_fu_67182_p2.read()[0].to_bool())? select_ln340_396_fu_67188_p3.read(): select_ln388_363_fu_67196_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_749_fu_67326_p3() {
    select_ln340_749_fu_67326_p3 = (!or_ln340_899_fu_67304_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_899_fu_67304_p2.read()[0].to_bool())? select_ln340_397_fu_67310_p3.read(): select_ln388_364_fu_67318_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_750_fu_67448_p3() {
    select_ln340_750_fu_67448_p3 = (!or_ln340_901_fu_67426_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_901_fu_67426_p2.read()[0].to_bool())? select_ln340_398_fu_67432_p3.read(): select_ln388_365_fu_67440_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_751_fu_67570_p3() {
    select_ln340_751_fu_67570_p3 = (!or_ln340_903_fu_67548_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_903_fu_67548_p2.read()[0].to_bool())? select_ln340_399_fu_67554_p3.read(): select_ln388_366_fu_67562_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_752_fu_67692_p3() {
    select_ln340_752_fu_67692_p3 = (!or_ln340_905_fu_67670_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_905_fu_67670_p2.read()[0].to_bool())? select_ln340_400_fu_67676_p3.read(): select_ln388_367_fu_67684_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_753_fu_67814_p3() {
    select_ln340_753_fu_67814_p3 = (!or_ln340_907_fu_67792_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_907_fu_67792_p2.read()[0].to_bool())? select_ln340_401_fu_67798_p3.read(): select_ln388_368_fu_67806_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_754_fu_67936_p3() {
    select_ln340_754_fu_67936_p3 = (!or_ln340_909_fu_67914_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_909_fu_67914_p2.read()[0].to_bool())? select_ln340_402_fu_67920_p3.read(): select_ln388_369_fu_67928_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_755_fu_68058_p3() {
    select_ln340_755_fu_68058_p3 = (!or_ln340_911_fu_68036_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_911_fu_68036_p2.read()[0].to_bool())? select_ln340_403_fu_68042_p3.read(): select_ln388_370_fu_68050_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_756_fu_68180_p3() {
    select_ln340_756_fu_68180_p3 = (!or_ln340_913_fu_68158_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_913_fu_68158_p2.read()[0].to_bool())? select_ln340_404_fu_68164_p3.read(): select_ln388_371_fu_68172_p3.read());
}

void bn_relu_sc_relu::thread_select_ln340_757_fu_68302_p3() {
    select_ln340_757_fu_68302_p3 = (!or_ln340_915_fu_68280_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_915_fu_68280_p2.read()[0].to_bool())? select_ln340_405_fu_68286_p3.read(): select_ln388_372_fu_68294_p3.read());
}

}


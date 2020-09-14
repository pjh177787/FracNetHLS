#include "matmul.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void matmul::thread_add_ln1192_191_fu_8438_p2() {
    add_ln1192_191_fu_8438_p2 = (!sext_ln703_254_fu_8435_p1.read().is_01() || !sext_ln703_253_fu_8431_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_254_fu_8435_p1.read()) + sc_bigint<15>(sext_ln703_253_fu_8431_p1.read()));
}

void matmul::thread_add_ln1192_192_fu_9385_p2() {
    add_ln1192_192_fu_9385_p2 = (!sext_ln703_255_fu_9370_p1.read().is_01() || !zext_ln728_1_fu_9381_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_255_fu_9370_p1.read()) + sc_biguint<15>(zext_ln728_1_fu_9381_p1.read()));
}

void matmul::thread_add_ln1192_193_fu_8526_p2() {
    add_ln1192_193_fu_8526_p2 = (!sext_ln703_257_fu_8523_p1.read().is_01() || !sext_ln703_256_fu_8519_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_257_fu_8523_p1.read()) + sc_bigint<15>(sext_ln703_256_fu_8519_p1.read()));
}

void matmul::thread_add_ln1192_194_fu_9444_p2() {
    add_ln1192_194_fu_9444_p2 = (!sext_ln703_258_fu_9429_p1.read().is_01() || !zext_ln728_2_fu_9440_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_258_fu_9429_p1.read()) + sc_biguint<15>(zext_ln728_2_fu_9440_p1.read()));
}

void matmul::thread_add_ln1192_195_fu_9503_p2() {
    add_ln1192_195_fu_9503_p2 = (!sext_ln703_259_fu_9488_p1.read().is_01() || !zext_ln728_3_fu_9499_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_259_fu_9488_p1.read()) + sc_biguint<15>(zext_ln728_3_fu_9499_p1.read()));
}

void matmul::thread_add_ln1192_196_fu_8614_p2() {
    add_ln1192_196_fu_8614_p2 = (!sext_ln703_261_fu_8611_p1.read().is_01() || !sext_ln703_260_fu_8607_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_261_fu_8611_p1.read()) + sc_bigint<15>(sext_ln703_260_fu_8607_p1.read()));
}

void matmul::thread_add_ln1192_197_fu_9562_p2() {
    add_ln1192_197_fu_9562_p2 = (!sext_ln703_262_fu_9547_p1.read().is_01() || !zext_ln728_4_fu_9558_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_262_fu_9547_p1.read()) + sc_biguint<15>(zext_ln728_4_fu_9558_p1.read()));
}

void matmul::thread_add_ln1192_198_fu_8702_p2() {
    add_ln1192_198_fu_8702_p2 = (!sext_ln703_264_fu_8699_p1.read().is_01() || !sext_ln703_263_fu_8695_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_264_fu_8699_p1.read()) + sc_bigint<15>(sext_ln703_263_fu_8695_p1.read()));
}

void matmul::thread_add_ln1192_199_fu_9621_p2() {
    add_ln1192_199_fu_9621_p2 = (!sext_ln703_265_fu_9606_p1.read().is_01() || !zext_ln728_5_fu_9617_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_265_fu_9606_p1.read()) + sc_biguint<15>(zext_ln728_5_fu_9617_p1.read()));
}

void matmul::thread_add_ln1192_200_fu_8790_p2() {
    add_ln1192_200_fu_8790_p2 = (!sext_ln703_267_fu_8787_p1.read().is_01() || !sext_ln703_266_fu_8783_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_267_fu_8787_p1.read()) + sc_bigint<15>(sext_ln703_266_fu_8783_p1.read()));
}

void matmul::thread_add_ln1192_201_fu_9680_p2() {
    add_ln1192_201_fu_9680_p2 = (!sext_ln703_268_fu_9665_p1.read().is_01() || !zext_ln728_6_fu_9676_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_268_fu_9665_p1.read()) + sc_biguint<15>(zext_ln728_6_fu_9676_p1.read()));
}

void matmul::thread_add_ln1192_202_fu_8878_p2() {
    add_ln1192_202_fu_8878_p2 = (!sext_ln703_270_fu_8875_p1.read().is_01() || !sext_ln703_269_fu_8871_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_270_fu_8875_p1.read()) + sc_bigint<15>(sext_ln703_269_fu_8871_p1.read()));
}

void matmul::thread_add_ln1192_203_fu_9739_p2() {
    add_ln1192_203_fu_9739_p2 = (!sext_ln703_271_fu_9724_p1.read().is_01() || !zext_ln728_7_fu_9735_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_271_fu_9724_p1.read()) + sc_biguint<15>(zext_ln728_7_fu_9735_p1.read()));
}

void matmul::thread_add_ln1192_204_fu_8966_p2() {
    add_ln1192_204_fu_8966_p2 = (!sext_ln703_273_fu_8963_p1.read().is_01() || !sext_ln703_272_fu_8959_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_273_fu_8963_p1.read()) + sc_bigint<15>(sext_ln703_272_fu_8959_p1.read()));
}

void matmul::thread_add_ln1192_205_fu_9798_p2() {
    add_ln1192_205_fu_9798_p2 = (!sext_ln703_274_fu_9783_p1.read().is_01() || !zext_ln728_8_fu_9794_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_274_fu_9783_p1.read()) + sc_biguint<15>(zext_ln728_8_fu_9794_p1.read()));
}

void matmul::thread_add_ln1192_206_fu_9054_p2() {
    add_ln1192_206_fu_9054_p2 = (!sext_ln703_276_fu_9051_p1.read().is_01() || !sext_ln703_275_fu_9047_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_276_fu_9051_p1.read()) + sc_bigint<15>(sext_ln703_275_fu_9047_p1.read()));
}

void matmul::thread_add_ln1192_207_fu_9857_p2() {
    add_ln1192_207_fu_9857_p2 = (!sext_ln703_277_fu_9842_p1.read().is_01() || !zext_ln728_9_fu_9853_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_277_fu_9842_p1.read()) + sc_biguint<15>(zext_ln728_9_fu_9853_p1.read()));
}

void matmul::thread_add_ln1192_208_fu_9142_p2() {
    add_ln1192_208_fu_9142_p2 = (!sext_ln703_279_fu_9139_p1.read().is_01() || !sext_ln703_278_fu_9135_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_279_fu_9139_p1.read()) + sc_bigint<15>(sext_ln703_278_fu_9135_p1.read()));
}

void matmul::thread_add_ln1192_209_fu_9230_p2() {
    add_ln1192_209_fu_9230_p2 = (!sext_ln703_281_fu_9227_p1.read().is_01() || !sext_ln703_280_fu_9223_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_281_fu_9227_p1.read()) + sc_bigint<15>(sext_ln703_280_fu_9223_p1.read()));
}

void matmul::thread_add_ln1192_fu_9326_p2() {
    add_ln1192_fu_9326_p2 = (!sext_ln703_fu_9311_p1.read().is_01() || !zext_ln728_fu_9322_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_fu_9311_p1.read()) + sc_biguint<15>(zext_ln728_fu_9322_p1.read()));
}

void matmul::thread_add_ln31_fu_5514_p2() {
    add_ln31_fu_5514_p2 = (!zext_ln31_fu_5510_p1.read().is_01() || !zext_ln31_1_cast_reg_15681.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln31_fu_5510_p1.read()) + sc_biguint<12>(zext_ln31_1_cast_reg_15681.read()));
}

void matmul::thread_add_ln415_63_fu_6594_p2() {
    add_ln415_63_fu_6594_p2 = (!trunc_ln708_s_fu_6575_p4.read().is_01() || !zext_ln415_63_fu_6591_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(trunc_ln708_s_fu_6575_p4.read()) + sc_biguint<14>(zext_ln415_63_fu_6591_p1.read()));
}

void matmul::thread_add_ln415_64_fu_6768_p2() {
    add_ln415_64_fu_6768_p2 = (!trunc_ln708_61_fu_6749_p4.read().is_01() || !zext_ln415_64_fu_6765_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(trunc_ln708_61_fu_6749_p4.read()) + sc_biguint<14>(zext_ln415_64_fu_6765_p1.read()));
}

void matmul::thread_add_ln415_65_fu_6942_p2() {
    add_ln415_65_fu_6942_p2 = (!trunc_ln708_62_fu_6923_p4.read().is_01() || !zext_ln415_65_fu_6939_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(trunc_ln708_62_fu_6923_p4.read()) + sc_biguint<14>(zext_ln415_65_fu_6939_p1.read()));
}

void matmul::thread_add_ln415_66_fu_7116_p2() {
    add_ln415_66_fu_7116_p2 = (!trunc_ln708_63_fu_7097_p4.read().is_01() || !zext_ln415_66_fu_7113_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(trunc_ln708_63_fu_7097_p4.read()) + sc_biguint<14>(zext_ln415_66_fu_7113_p1.read()));
}

void matmul::thread_add_ln415_67_fu_7290_p2() {
    add_ln415_67_fu_7290_p2 = (!trunc_ln708_64_fu_7271_p4.read().is_01() || !zext_ln415_67_fu_7287_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(trunc_ln708_64_fu_7271_p4.read()) + sc_biguint<14>(zext_ln415_67_fu_7287_p1.read()));
}

void matmul::thread_add_ln415_68_fu_7464_p2() {
    add_ln415_68_fu_7464_p2 = (!trunc_ln708_65_fu_7445_p4.read().is_01() || !zext_ln415_68_fu_7461_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(trunc_ln708_65_fu_7445_p4.read()) + sc_biguint<14>(zext_ln415_68_fu_7461_p1.read()));
}

void matmul::thread_add_ln415_69_fu_7638_p2() {
    add_ln415_69_fu_7638_p2 = (!trunc_ln708_66_fu_7619_p4.read().is_01() || !zext_ln415_69_fu_7635_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(trunc_ln708_66_fu_7619_p4.read()) + sc_biguint<14>(zext_ln415_69_fu_7635_p1.read()));
}

void matmul::thread_add_ln415_70_fu_7812_p2() {
    add_ln415_70_fu_7812_p2 = (!trunc_ln708_67_fu_7793_p4.read().is_01() || !zext_ln415_70_fu_7809_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(trunc_ln708_67_fu_7793_p4.read()) + sc_biguint<14>(zext_ln415_70_fu_7809_p1.read()));
}

void matmul::thread_add_ln415_71_fu_7986_p2() {
    add_ln415_71_fu_7986_p2 = (!trunc_ln708_68_fu_7967_p4.read().is_01() || !zext_ln415_71_fu_7983_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(trunc_ln708_68_fu_7967_p4.read()) + sc_biguint<14>(zext_ln415_71_fu_7983_p1.read()));
}

void matmul::thread_add_ln415_fu_6420_p2() {
    add_ln415_fu_6420_p2 = (!trunc_ln_fu_6401_p4.read().is_01() || !zext_ln415_fu_6417_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(trunc_ln_fu_6401_p4.read()) + sc_biguint<14>(zext_ln415_fu_6417_p1.read()));
}

void matmul::thread_add_ln703_189_fu_8540_p2() {
    add_ln703_189_fu_8540_p2 = (!buf_V_1_09_reg_5367.read().is_01() || !select_ln340_358_reg_16271.read().is_01())? sc_lv<14>(): (sc_bigint<14>(buf_V_1_09_reg_5367.read()) + sc_bigint<14>(select_ln340_358_reg_16271.read()));
}

void matmul::thread_add_ln703_190_fu_8628_p2() {
    add_ln703_190_fu_8628_p2 = (!buf_V_2_08_reg_5379.read().is_01() || !select_ln340_360_reg_16277.read().is_01())? sc_lv<14>(): (sc_bigint<14>(buf_V_2_08_reg_5379.read()) + sc_bigint<14>(select_ln340_360_reg_16277.read()));
}

void matmul::thread_add_ln703_191_fu_8716_p2() {
    add_ln703_191_fu_8716_p2 = (!buf_V_3_07_reg_5391.read().is_01() || !select_ln340_362_reg_16283.read().is_01())? sc_lv<14>(): (sc_bigint<14>(buf_V_3_07_reg_5391.read()) + sc_bigint<14>(select_ln340_362_reg_16283.read()));
}

void matmul::thread_add_ln703_192_fu_8804_p2() {
    add_ln703_192_fu_8804_p2 = (!buf_V_4_06_reg_5403.read().is_01() || !select_ln340_364_reg_16289.read().is_01())? sc_lv<14>(): (sc_bigint<14>(buf_V_4_06_reg_5403.read()) + sc_bigint<14>(select_ln340_364_reg_16289.read()));
}

void matmul::thread_add_ln703_193_fu_8892_p2() {
    add_ln703_193_fu_8892_p2 = (!buf_V_5_05_reg_5415.read().is_01() || !select_ln340_366_reg_16295.read().is_01())? sc_lv<14>(): (sc_bigint<14>(buf_V_5_05_reg_5415.read()) + sc_bigint<14>(select_ln340_366_reg_16295.read()));
}

void matmul::thread_add_ln703_194_fu_8980_p2() {
    add_ln703_194_fu_8980_p2 = (!buf_V_6_04_reg_5427.read().is_01() || !select_ln340_368_reg_16301.read().is_01())? sc_lv<14>(): (sc_bigint<14>(buf_V_6_04_reg_5427.read()) + sc_bigint<14>(select_ln340_368_reg_16301.read()));
}

void matmul::thread_add_ln703_195_fu_9068_p2() {
    add_ln703_195_fu_9068_p2 = (!buf_V_7_03_reg_5439.read().is_01() || !select_ln340_370_reg_16307.read().is_01())? sc_lv<14>(): (sc_bigint<14>(buf_V_7_03_reg_5439.read()) + sc_bigint<14>(select_ln340_370_reg_16307.read()));
}

void matmul::thread_add_ln703_196_fu_9156_p2() {
    add_ln703_196_fu_9156_p2 = (!buf_V_8_02_reg_5451.read().is_01() || !select_ln340_372_reg_16313.read().is_01())? sc_lv<14>(): (sc_bigint<14>(buf_V_8_02_reg_5451.read()) + sc_bigint<14>(select_ln340_372_reg_16313.read()));
}

void matmul::thread_add_ln703_197_fu_9244_p2() {
    add_ln703_197_fu_9244_p2 = (!buf_V_9_01_reg_5463.read().is_01() || !select_ln340_374_reg_16319.read().is_01())? sc_lv<14>(): (sc_bigint<14>(buf_V_9_01_reg_5463.read()) + sc_bigint<14>(select_ln340_374_reg_16319.read()));
}

void matmul::thread_add_ln703_fu_8452_p2() {
    add_ln703_fu_8452_p2 = (!buf_V_0_010_reg_5355.read().is_01() || !select_ln340_356_reg_16265.read().is_01())? sc_lv<14>(): (sc_bigint<14>(buf_V_0_010_reg_5355.read()) + sc_bigint<14>(select_ln340_356_reg_16265.read()));
}

void matmul::thread_add_ln944_1_fu_10293_p2() {
    add_ln944_1_fu_10293_p2 = (!ap_const_lv32_FFFFFFE8.is_01() || !sub_ln944_1_reg_16617.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE8) + sc_biguint<32>(sub_ln944_1_reg_16617.read()));
}

void matmul::thread_add_ln944_2_fu_10355_p2() {
    add_ln944_2_fu_10355_p2 = (!ap_const_lv32_FFFFFFE8.is_01() || !sub_ln944_2_reg_16639.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE8) + sc_biguint<32>(sub_ln944_2_reg_16639.read()));
}

void matmul::thread_add_ln944_3_fu_10417_p2() {
    add_ln944_3_fu_10417_p2 = (!ap_const_lv32_FFFFFFE8.is_01() || !sub_ln944_3_reg_16661.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE8) + sc_biguint<32>(sub_ln944_3_reg_16661.read()));
}

void matmul::thread_add_ln944_4_fu_10479_p2() {
    add_ln944_4_fu_10479_p2 = (!ap_const_lv32_FFFFFFE8.is_01() || !sub_ln944_4_reg_16683.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE8) + sc_biguint<32>(sub_ln944_4_reg_16683.read()));
}

void matmul::thread_add_ln944_5_fu_10541_p2() {
    add_ln944_5_fu_10541_p2 = (!ap_const_lv32_FFFFFFE8.is_01() || !sub_ln944_5_reg_16705.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE8) + sc_biguint<32>(sub_ln944_5_reg_16705.read()));
}

void matmul::thread_add_ln944_6_fu_10603_p2() {
    add_ln944_6_fu_10603_p2 = (!ap_const_lv32_FFFFFFE8.is_01() || !sub_ln944_6_reg_16727.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE8) + sc_biguint<32>(sub_ln944_6_reg_16727.read()));
}

void matmul::thread_add_ln944_7_fu_10665_p2() {
    add_ln944_7_fu_10665_p2 = (!ap_const_lv32_FFFFFFE8.is_01() || !sub_ln944_7_reg_16749.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE8) + sc_biguint<32>(sub_ln944_7_reg_16749.read()));
}

void matmul::thread_add_ln944_8_fu_10727_p2() {
    add_ln944_8_fu_10727_p2 = (!ap_const_lv32_FFFFFFE8.is_01() || !sub_ln944_8_reg_16771.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE8) + sc_biguint<32>(sub_ln944_8_reg_16771.read()));
}

void matmul::thread_add_ln944_9_fu_10789_p2() {
    add_ln944_9_fu_10789_p2 = (!ap_const_lv32_FFFFFFE8.is_01() || !sub_ln944_9_reg_16793.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE8) + sc_biguint<32>(sub_ln944_9_reg_16793.read()));
}

void matmul::thread_add_ln944_fu_10231_p2() {
    add_ln944_fu_10231_p2 = (!ap_const_lv32_FFFFFFE8.is_01() || !sub_ln944_reg_16595.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE8) + sc_biguint<32>(sub_ln944_reg_16595.read()));
}

void matmul::thread_add_ln949_1_fu_10340_p2() {
    add_ln949_1_fu_10340_p2 = (!ap_const_lv15_7FE8.is_01() || !trunc_ln944_1_reg_16624.read().is_01())? sc_lv<15>(): (sc_bigint<15>(ap_const_lv15_7FE8) + sc_biguint<15>(trunc_ln944_1_reg_16624.read()));
}

void matmul::thread_add_ln949_2_fu_10402_p2() {
    add_ln949_2_fu_10402_p2 = (!ap_const_lv15_7FE8.is_01() || !trunc_ln944_2_reg_16646.read().is_01())? sc_lv<15>(): (sc_bigint<15>(ap_const_lv15_7FE8) + sc_biguint<15>(trunc_ln944_2_reg_16646.read()));
}

void matmul::thread_add_ln949_3_fu_10464_p2() {
    add_ln949_3_fu_10464_p2 = (!ap_const_lv15_7FE8.is_01() || !trunc_ln944_3_reg_16668.read().is_01())? sc_lv<15>(): (sc_bigint<15>(ap_const_lv15_7FE8) + sc_biguint<15>(trunc_ln944_3_reg_16668.read()));
}

void matmul::thread_add_ln949_4_fu_10526_p2() {
    add_ln949_4_fu_10526_p2 = (!ap_const_lv15_7FE8.is_01() || !trunc_ln944_4_reg_16690.read().is_01())? sc_lv<15>(): (sc_bigint<15>(ap_const_lv15_7FE8) + sc_biguint<15>(trunc_ln944_4_reg_16690.read()));
}

void matmul::thread_add_ln949_5_fu_10588_p2() {
    add_ln949_5_fu_10588_p2 = (!ap_const_lv15_7FE8.is_01() || !trunc_ln944_5_reg_16712.read().is_01())? sc_lv<15>(): (sc_bigint<15>(ap_const_lv15_7FE8) + sc_biguint<15>(trunc_ln944_5_reg_16712.read()));
}

void matmul::thread_add_ln949_6_fu_10650_p2() {
    add_ln949_6_fu_10650_p2 = (!ap_const_lv15_7FE8.is_01() || !trunc_ln944_6_reg_16734.read().is_01())? sc_lv<15>(): (sc_bigint<15>(ap_const_lv15_7FE8) + sc_biguint<15>(trunc_ln944_6_reg_16734.read()));
}

void matmul::thread_add_ln949_7_fu_10712_p2() {
    add_ln949_7_fu_10712_p2 = (!ap_const_lv15_7FE8.is_01() || !trunc_ln944_7_reg_16756.read().is_01())? sc_lv<15>(): (sc_bigint<15>(ap_const_lv15_7FE8) + sc_biguint<15>(trunc_ln944_7_reg_16756.read()));
}

void matmul::thread_add_ln949_8_fu_10774_p2() {
    add_ln949_8_fu_10774_p2 = (!ap_const_lv15_7FE8.is_01() || !trunc_ln944_8_reg_16778.read().is_01())? sc_lv<15>(): (sc_bigint<15>(ap_const_lv15_7FE8) + sc_biguint<15>(trunc_ln944_8_reg_16778.read()));
}

void matmul::thread_add_ln949_9_fu_10836_p2() {
    add_ln949_9_fu_10836_p2 = (!ap_const_lv15_7FE8.is_01() || !trunc_ln944_9_reg_16800.read().is_01())? sc_lv<15>(): (sc_bigint<15>(ap_const_lv15_7FE8) + sc_biguint<15>(trunc_ln944_9_reg_16800.read()));
}

void matmul::thread_add_ln949_fu_10278_p2() {
    add_ln949_fu_10278_p2 = (!ap_const_lv15_7FE8.is_01() || !trunc_ln944_reg_16602.read().is_01())? sc_lv<15>(): (sc_bigint<15>(ap_const_lv15_7FE8) + sc_biguint<15>(trunc_ln944_reg_16602.read()));
}

void matmul::thread_add_ln958_1_fu_10345_p2() {
    add_ln958_1_fu_10345_p2 = (!ap_const_lv32_FFFFFFE7.is_01() || !sub_ln944_1_reg_16617.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE7) + sc_biguint<32>(sub_ln944_1_reg_16617.read()));
}

void matmul::thread_add_ln958_2_fu_10407_p2() {
    add_ln958_2_fu_10407_p2 = (!ap_const_lv32_FFFFFFE7.is_01() || !sub_ln944_2_reg_16639.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE7) + sc_biguint<32>(sub_ln944_2_reg_16639.read()));
}

void matmul::thread_add_ln958_3_fu_10469_p2() {
    add_ln958_3_fu_10469_p2 = (!ap_const_lv32_FFFFFFE7.is_01() || !sub_ln944_3_reg_16661.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE7) + sc_biguint<32>(sub_ln944_3_reg_16661.read()));
}

void matmul::thread_add_ln958_4_fu_10531_p2() {
    add_ln958_4_fu_10531_p2 = (!ap_const_lv32_FFFFFFE7.is_01() || !sub_ln944_4_reg_16683.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE7) + sc_biguint<32>(sub_ln944_4_reg_16683.read()));
}

void matmul::thread_add_ln958_5_fu_10593_p2() {
    add_ln958_5_fu_10593_p2 = (!ap_const_lv32_FFFFFFE7.is_01() || !sub_ln944_5_reg_16705.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE7) + sc_biguint<32>(sub_ln944_5_reg_16705.read()));
}

void matmul::thread_add_ln958_6_fu_10655_p2() {
    add_ln958_6_fu_10655_p2 = (!ap_const_lv32_FFFFFFE7.is_01() || !sub_ln944_6_reg_16727.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE7) + sc_biguint<32>(sub_ln944_6_reg_16727.read()));
}

void matmul::thread_add_ln958_7_fu_10717_p2() {
    add_ln958_7_fu_10717_p2 = (!ap_const_lv32_FFFFFFE7.is_01() || !sub_ln944_7_reg_16749.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE7) + sc_biguint<32>(sub_ln944_7_reg_16749.read()));
}

void matmul::thread_add_ln958_8_fu_10779_p2() {
    add_ln958_8_fu_10779_p2 = (!ap_const_lv32_FFFFFFE7.is_01() || !sub_ln944_8_reg_16771.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE7) + sc_biguint<32>(sub_ln944_8_reg_16771.read()));
}

void matmul::thread_add_ln958_9_fu_10841_p2() {
    add_ln958_9_fu_10841_p2 = (!ap_const_lv32_FFFFFFE7.is_01() || !sub_ln944_9_reg_16793.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE7) + sc_biguint<32>(sub_ln944_9_reg_16793.read()));
}

void matmul::thread_add_ln958_fu_10283_p2() {
    add_ln958_fu_10283_p2 = (!ap_const_lv32_FFFFFFE7.is_01() || !sub_ln944_reg_16595.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE7) + sc_biguint<32>(sub_ln944_reg_16595.read()));
}

void matmul::thread_add_ln961_1_fu_11013_p2() {
    add_ln961_1_fu_11013_p2 = (!or_ln949_1_fu_10979_p3.read().is_01() || !select_ln958_1_fu_11005_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln949_1_fu_10979_p3.read()) + sc_biguint<32>(select_ln958_1_fu_11005_p3.read()));
}

void matmul::thread_add_ln961_2_fu_11106_p2() {
    add_ln961_2_fu_11106_p2 = (!or_ln949_2_fu_11072_p3.read().is_01() || !select_ln958_2_fu_11098_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln949_2_fu_11072_p3.read()) + sc_biguint<32>(select_ln958_2_fu_11098_p3.read()));
}

void matmul::thread_add_ln961_3_fu_11199_p2() {
    add_ln961_3_fu_11199_p2 = (!or_ln949_3_fu_11165_p3.read().is_01() || !select_ln958_3_fu_11191_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln949_3_fu_11165_p3.read()) + sc_biguint<32>(select_ln958_3_fu_11191_p3.read()));
}

void matmul::thread_add_ln961_4_fu_11292_p2() {
    add_ln961_4_fu_11292_p2 = (!or_ln949_4_fu_11258_p3.read().is_01() || !select_ln958_4_fu_11284_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln949_4_fu_11258_p3.read()) + sc_biguint<32>(select_ln958_4_fu_11284_p3.read()));
}

void matmul::thread_add_ln961_5_fu_11385_p2() {
    add_ln961_5_fu_11385_p2 = (!or_ln949_5_fu_11351_p3.read().is_01() || !select_ln958_5_fu_11377_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln949_5_fu_11351_p3.read()) + sc_biguint<32>(select_ln958_5_fu_11377_p3.read()));
}

void matmul::thread_add_ln961_6_fu_11478_p2() {
    add_ln961_6_fu_11478_p2 = (!or_ln949_6_fu_11444_p3.read().is_01() || !select_ln958_6_fu_11470_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln949_6_fu_11444_p3.read()) + sc_biguint<32>(select_ln958_6_fu_11470_p3.read()));
}

void matmul::thread_add_ln961_7_fu_11571_p2() {
    add_ln961_7_fu_11571_p2 = (!or_ln949_7_fu_11537_p3.read().is_01() || !select_ln958_7_fu_11563_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln949_7_fu_11537_p3.read()) + sc_biguint<32>(select_ln958_7_fu_11563_p3.read()));
}

void matmul::thread_add_ln961_8_fu_11664_p2() {
    add_ln961_8_fu_11664_p2 = (!or_ln949_8_fu_11630_p3.read().is_01() || !select_ln958_8_fu_11656_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln949_8_fu_11630_p3.read()) + sc_biguint<32>(select_ln958_8_fu_11656_p3.read()));
}

void matmul::thread_add_ln961_9_fu_11757_p2() {
    add_ln961_9_fu_11757_p2 = (!or_ln949_9_fu_11723_p3.read().is_01() || !select_ln958_9_fu_11749_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln949_9_fu_11723_p3.read()) + sc_biguint<32>(select_ln958_9_fu_11749_p3.read()));
}

void matmul::thread_add_ln961_fu_10920_p2() {
    add_ln961_fu_10920_p2 = (!or_ln_fu_10886_p3.read().is_01() || !select_ln958_fu_10912_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln_fu_10886_p3.read()) + sc_biguint<32>(select_ln958_fu_10912_p3.read()));
}

void matmul::thread_add_ln964_1_fu_11847_p2() {
    add_ln964_1_fu_11847_p2 = (!sub_ln964_1_fu_11842_p2.read().is_01() || !select_ln964_1_fu_11835_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln964_1_fu_11842_p2.read()) + sc_biguint<8>(select_ln964_1_fu_11835_p3.read()));
}

void matmul::thread_add_ln964_2_fu_11898_p2() {
    add_ln964_2_fu_11898_p2 = (!sub_ln964_2_fu_11893_p2.read().is_01() || !select_ln964_2_fu_11886_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln964_2_fu_11893_p2.read()) + sc_biguint<8>(select_ln964_2_fu_11886_p3.read()));
}

void matmul::thread_add_ln964_3_fu_11949_p2() {
    add_ln964_3_fu_11949_p2 = (!sub_ln964_3_fu_11944_p2.read().is_01() || !select_ln964_3_fu_11937_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln964_3_fu_11944_p2.read()) + sc_biguint<8>(select_ln964_3_fu_11937_p3.read()));
}

void matmul::thread_add_ln964_4_fu_12000_p2() {
    add_ln964_4_fu_12000_p2 = (!sub_ln964_4_fu_11995_p2.read().is_01() || !select_ln964_4_fu_11988_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln964_4_fu_11995_p2.read()) + sc_biguint<8>(select_ln964_4_fu_11988_p3.read()));
}

void matmul::thread_add_ln964_5_fu_12051_p2() {
    add_ln964_5_fu_12051_p2 = (!sub_ln964_5_fu_12046_p2.read().is_01() || !select_ln964_5_fu_12039_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln964_5_fu_12046_p2.read()) + sc_biguint<8>(select_ln964_5_fu_12039_p3.read()));
}

void matmul::thread_add_ln964_6_fu_12102_p2() {
    add_ln964_6_fu_12102_p2 = (!sub_ln964_6_fu_12097_p2.read().is_01() || !select_ln964_6_fu_12090_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln964_6_fu_12097_p2.read()) + sc_biguint<8>(select_ln964_6_fu_12090_p3.read()));
}

void matmul::thread_add_ln964_7_fu_12153_p2() {
    add_ln964_7_fu_12153_p2 = (!sub_ln964_7_fu_12148_p2.read().is_01() || !select_ln964_7_fu_12141_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln964_7_fu_12148_p2.read()) + sc_biguint<8>(select_ln964_7_fu_12141_p3.read()));
}

void matmul::thread_add_ln964_8_fu_12204_p2() {
    add_ln964_8_fu_12204_p2 = (!sub_ln964_8_fu_12199_p2.read().is_01() || !select_ln964_8_fu_12192_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln964_8_fu_12199_p2.read()) + sc_biguint<8>(select_ln964_8_fu_12192_p3.read()));
}

void matmul::thread_add_ln964_9_fu_12255_p2() {
    add_ln964_9_fu_12255_p2 = (!sub_ln964_9_fu_12250_p2.read().is_01() || !select_ln964_9_fu_12243_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln964_9_fu_12250_p2.read()) + sc_biguint<8>(select_ln964_9_fu_12243_p3.read()));
}

void matmul::thread_add_ln964_fu_11796_p2() {
    add_ln964_fu_11796_p2 = (!sub_ln964_fu_11791_p2.read().is_01() || !select_ln964_fu_11784_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln964_fu_11791_p2.read()) + sc_biguint<8>(select_ln964_fu_11784_p3.read()));
}

void matmul::thread_and_ln416_63_fu_6614_p2() {
    and_ln416_63_fu_6614_p2 = (tmp_888_fu_6584_p3.read() & xor_ln416_63_fu_6608_p2.read());
}

void matmul::thread_and_ln416_64_fu_6788_p2() {
    and_ln416_64_fu_6788_p2 = (tmp_898_fu_6758_p3.read() & xor_ln416_64_fu_6782_p2.read());
}

void matmul::thread_and_ln416_65_fu_6962_p2() {
    and_ln416_65_fu_6962_p2 = (tmp_908_fu_6932_p3.read() & xor_ln416_65_fu_6956_p2.read());
}

void matmul::thread_and_ln416_66_fu_7136_p2() {
    and_ln416_66_fu_7136_p2 = (tmp_918_fu_7106_p3.read() & xor_ln416_66_fu_7130_p2.read());
}

void matmul::thread_and_ln416_67_fu_7310_p2() {
    and_ln416_67_fu_7310_p2 = (tmp_928_fu_7280_p3.read() & xor_ln416_67_fu_7304_p2.read());
}

void matmul::thread_and_ln416_68_fu_7484_p2() {
    and_ln416_68_fu_7484_p2 = (tmp_938_fu_7454_p3.read() & xor_ln416_68_fu_7478_p2.read());
}

void matmul::thread_and_ln416_69_fu_7658_p2() {
    and_ln416_69_fu_7658_p2 = (tmp_948_fu_7628_p3.read() & xor_ln416_69_fu_7652_p2.read());
}

void matmul::thread_and_ln416_70_fu_7832_p2() {
    and_ln416_70_fu_7832_p2 = (tmp_958_fu_7802_p3.read() & xor_ln416_70_fu_7826_p2.read());
}

void matmul::thread_and_ln416_71_fu_8006_p2() {
    and_ln416_71_fu_8006_p2 = (tmp_968_fu_7976_p3.read() & xor_ln416_71_fu_8000_p2.read());
}

void matmul::thread_and_ln416_fu_6440_p2() {
    and_ln416_fu_6440_p2 = (tmp_878_fu_6410_p3.read() & xor_ln416_fu_6434_p2.read());
}

void matmul::thread_and_ln779_1_fu_6677_p2() {
    and_ln779_1_fu_6677_p2 = (tmp_892_fu_6628_p3.read() & xor_ln779_63_fu_6671_p2.read());
}

void matmul::thread_and_ln779_2_fu_6851_p2() {
    and_ln779_2_fu_6851_p2 = (tmp_902_fu_6802_p3.read() & xor_ln779_64_fu_6845_p2.read());
}

void matmul::thread_and_ln779_3_fu_7025_p2() {
    and_ln779_3_fu_7025_p2 = (tmp_912_fu_6976_p3.read() & xor_ln779_65_fu_7019_p2.read());
}

void matmul::thread_and_ln779_4_fu_7199_p2() {
    and_ln779_4_fu_7199_p2 = (tmp_922_fu_7150_p3.read() & xor_ln779_66_fu_7193_p2.read());
}

void matmul::thread_and_ln779_5_fu_7373_p2() {
    and_ln779_5_fu_7373_p2 = (tmp_932_fu_7324_p3.read() & xor_ln779_67_fu_7367_p2.read());
}

void matmul::thread_and_ln779_6_fu_7547_p2() {
    and_ln779_6_fu_7547_p2 = (tmp_942_fu_7498_p3.read() & xor_ln779_68_fu_7541_p2.read());
}

void matmul::thread_and_ln779_7_fu_7721_p2() {
    and_ln779_7_fu_7721_p2 = (tmp_952_fu_7672_p3.read() & xor_ln779_69_fu_7715_p2.read());
}

void matmul::thread_and_ln779_8_fu_7895_p2() {
    and_ln779_8_fu_7895_p2 = (tmp_962_fu_7846_p3.read() & xor_ln779_70_fu_7889_p2.read());
}

void matmul::thread_and_ln779_9_fu_8069_p2() {
    and_ln779_9_fu_8069_p2 = (tmp_972_fu_8020_p3.read() & xor_ln779_71_fu_8063_p2.read());
}

void matmul::thread_and_ln779_fu_6503_p2() {
    and_ln779_fu_6503_p2 = (tmp_882_fu_6454_p3.read() & xor_ln779_fu_6497_p2.read());
}

void matmul::thread_and_ln781_1_fu_6691_p2() {
    and_ln781_1_fu_6691_p2 = (and_ln416_63_fu_6614_p2.read() & icmp_ln879_127_fu_6644_p2.read());
}

void matmul::thread_and_ln781_2_fu_6865_p2() {
    and_ln781_2_fu_6865_p2 = (and_ln416_64_fu_6788_p2.read() & icmp_ln879_128_fu_6818_p2.read());
}

void matmul::thread_and_ln781_3_fu_7039_p2() {
    and_ln781_3_fu_7039_p2 = (and_ln416_65_fu_6962_p2.read() & icmp_ln879_129_fu_6992_p2.read());
}

void matmul::thread_and_ln781_4_fu_7213_p2() {
    and_ln781_4_fu_7213_p2 = (and_ln416_66_fu_7136_p2.read() & icmp_ln879_130_fu_7166_p2.read());
}

void matmul::thread_and_ln781_5_fu_7387_p2() {
    and_ln781_5_fu_7387_p2 = (and_ln416_67_fu_7310_p2.read() & icmp_ln879_131_fu_7340_p2.read());
}

void matmul::thread_and_ln781_6_fu_7561_p2() {
    and_ln781_6_fu_7561_p2 = (and_ln416_68_fu_7484_p2.read() & icmp_ln879_132_fu_7514_p2.read());
}

void matmul::thread_and_ln781_7_fu_7735_p2() {
    and_ln781_7_fu_7735_p2 = (and_ln416_69_fu_7658_p2.read() & icmp_ln879_133_fu_7688_p2.read());
}

void matmul::thread_and_ln781_8_fu_7909_p2() {
    and_ln781_8_fu_7909_p2 = (and_ln416_70_fu_7832_p2.read() & icmp_ln879_134_fu_7862_p2.read());
}

void matmul::thread_and_ln781_9_fu_8083_p2() {
    and_ln781_9_fu_8083_p2 = (and_ln416_71_fu_8006_p2.read() & icmp_ln879_135_fu_8036_p2.read());
}

void matmul::thread_and_ln781_fu_6517_p2() {
    and_ln781_fu_6517_p2 = (and_ln416_fu_6440_p2.read() & icmp_ln879_fu_6470_p2.read());
}

void matmul::thread_and_ln785_63_fu_6714_p2() {
    and_ln785_63_fu_6714_p2 = (or_ln785_1_fu_6703_p2.read() & xor_ln785_128_fu_6709_p2.read());
}

void matmul::thread_and_ln785_64_fu_6888_p2() {
    and_ln785_64_fu_6888_p2 = (or_ln785_2_fu_6877_p2.read() & xor_ln785_129_fu_6883_p2.read());
}

void matmul::thread_and_ln785_65_fu_7062_p2() {
    and_ln785_65_fu_7062_p2 = (or_ln785_3_fu_7051_p2.read() & xor_ln785_130_fu_7057_p2.read());
}

void matmul::thread_and_ln785_66_fu_7236_p2() {
    and_ln785_66_fu_7236_p2 = (or_ln785_4_fu_7225_p2.read() & xor_ln785_131_fu_7231_p2.read());
}

void matmul::thread_and_ln785_67_fu_7410_p2() {
    and_ln785_67_fu_7410_p2 = (or_ln785_5_fu_7399_p2.read() & xor_ln785_132_fu_7405_p2.read());
}

void matmul::thread_and_ln785_68_fu_7584_p2() {
    and_ln785_68_fu_7584_p2 = (or_ln785_6_fu_7573_p2.read() & xor_ln785_133_fu_7579_p2.read());
}

void matmul::thread_and_ln785_69_fu_7758_p2() {
    and_ln785_69_fu_7758_p2 = (or_ln785_7_fu_7747_p2.read() & xor_ln785_134_fu_7753_p2.read());
}

void matmul::thread_and_ln785_70_fu_7932_p2() {
    and_ln785_70_fu_7932_p2 = (or_ln785_63_fu_7921_p2.read() & xor_ln785_135_fu_7927_p2.read());
}

void matmul::thread_and_ln785_71_fu_8106_p2() {
    and_ln785_71_fu_8106_p2 = (or_ln785_9_fu_8095_p2.read() & xor_ln785_136_fu_8101_p2.read());
}

void matmul::thread_and_ln785_fu_6540_p2() {
    and_ln785_fu_6540_p2 = (or_ln785_fu_6529_p2.read() & xor_ln785_127_fu_6535_p2.read());
}

void matmul::thread_and_ln786_1_fu_6720_p2() {
    and_ln786_1_fu_6720_p2 = (tmp_891_fu_6620_p3.read() & select_ln416_63_fu_6683_p3.read());
}

void matmul::thread_and_ln786_289_fu_6564_p2() {
    and_ln786_289_fu_6564_p2 = (tmp_877_reg_15764.read() & xor_ln786_fu_6558_p2.read());
}

void matmul::thread_and_ln786_290_fu_8471_p2() {
    and_ln786_290_fu_8471_p2 = (tmp_885_fu_8444_p3.read() & xor_ln786_161_fu_8465_p2.read());
}

void matmul::thread_and_ln786_291_fu_6738_p2() {
    and_ln786_291_fu_6738_p2 = (tmp_887_reg_15784.read() & xor_ln786_171_fu_6732_p2.read());
}

void matmul::thread_and_ln786_292_fu_8559_p2() {
    and_ln786_292_fu_8559_p2 = (tmp_895_fu_8532_p3.read() & xor_ln786_162_fu_8553_p2.read());
}

void matmul::thread_and_ln786_293_fu_6912_p2() {
    and_ln786_293_fu_6912_p2 = (tmp_897_reg_15804.read() & xor_ln786_172_fu_6906_p2.read());
}

void matmul::thread_and_ln786_294_fu_8647_p2() {
    and_ln786_294_fu_8647_p2 = (tmp_905_fu_8620_p3.read() & xor_ln786_163_fu_8641_p2.read());
}

void matmul::thread_and_ln786_295_fu_7086_p2() {
    and_ln786_295_fu_7086_p2 = (tmp_907_reg_15824.read() & xor_ln786_173_fu_7080_p2.read());
}

void matmul::thread_and_ln786_296_fu_8735_p2() {
    and_ln786_296_fu_8735_p2 = (tmp_915_fu_8708_p3.read() & xor_ln786_164_fu_8729_p2.read());
}

void matmul::thread_and_ln786_297_fu_7260_p2() {
    and_ln786_297_fu_7260_p2 = (tmp_917_reg_15844.read() & xor_ln786_174_fu_7254_p2.read());
}

void matmul::thread_and_ln786_298_fu_8823_p2() {
    and_ln786_298_fu_8823_p2 = (tmp_925_fu_8796_p3.read() & xor_ln786_165_fu_8817_p2.read());
}

void matmul::thread_and_ln786_299_fu_7434_p2() {
    and_ln786_299_fu_7434_p2 = (tmp_927_reg_15864.read() & xor_ln786_175_fu_7428_p2.read());
}

void matmul::thread_and_ln786_2_fu_6894_p2() {
    and_ln786_2_fu_6894_p2 = (tmp_901_fu_6794_p3.read() & select_ln416_64_fu_6857_p3.read());
}

void matmul::thread_and_ln786_300_fu_8911_p2() {
    and_ln786_300_fu_8911_p2 = (tmp_935_fu_8884_p3.read() & xor_ln786_166_fu_8905_p2.read());
}

void matmul::thread_and_ln786_301_fu_7608_p2() {
    and_ln786_301_fu_7608_p2 = (tmp_937_reg_15884.read() & xor_ln786_176_fu_7602_p2.read());
}

void matmul::thread_and_ln786_302_fu_8999_p2() {
    and_ln786_302_fu_8999_p2 = (tmp_945_fu_8972_p3.read() & xor_ln786_167_fu_8993_p2.read());
}

void matmul::thread_and_ln786_303_fu_7782_p2() {
    and_ln786_303_fu_7782_p2 = (tmp_947_reg_15904.read() & xor_ln786_177_fu_7776_p2.read());
}

void matmul::thread_and_ln786_304_fu_9087_p2() {
    and_ln786_304_fu_9087_p2 = (tmp_955_fu_9060_p3.read() & xor_ln786_168_fu_9081_p2.read());
}

void matmul::thread_and_ln786_305_fu_7956_p2() {
    and_ln786_305_fu_7956_p2 = (tmp_957_reg_15924.read() & xor_ln786_178_fu_7950_p2.read());
}

void matmul::thread_and_ln786_306_fu_9175_p2() {
    and_ln786_306_fu_9175_p2 = (tmp_965_fu_9148_p3.read() & xor_ln786_169_fu_9169_p2.read());
}

void matmul::thread_and_ln786_307_fu_8130_p2() {
    and_ln786_307_fu_8130_p2 = (tmp_967_reg_15944.read() & xor_ln786_179_fu_8124_p2.read());
}

void matmul::thread_and_ln786_308_fu_9263_p2() {
    and_ln786_308_fu_9263_p2 = (tmp_975_fu_9236_p3.read() & xor_ln786_170_fu_9257_p2.read());
}

void matmul::thread_and_ln786_3_fu_7068_p2() {
    and_ln786_3_fu_7068_p2 = (tmp_911_fu_6968_p3.read() & select_ln416_65_fu_7031_p3.read());
}

void matmul::thread_and_ln786_4_fu_7242_p2() {
    and_ln786_4_fu_7242_p2 = (tmp_921_fu_7142_p3.read() & select_ln416_66_fu_7205_p3.read());
}

void matmul::thread_and_ln786_5_fu_7416_p2() {
    and_ln786_5_fu_7416_p2 = (tmp_931_fu_7316_p3.read() & select_ln416_67_fu_7379_p3.read());
}

void matmul::thread_and_ln786_6_fu_7590_p2() {
    and_ln786_6_fu_7590_p2 = (tmp_941_fu_7490_p3.read() & select_ln416_68_fu_7553_p3.read());
}

void matmul::thread_and_ln786_7_fu_7764_p2() {
    and_ln786_7_fu_7764_p2 = (tmp_951_fu_7664_p3.read() & select_ln416_69_fu_7727_p3.read());
}

void matmul::thread_and_ln786_8_fu_7938_p2() {
    and_ln786_8_fu_7938_p2 = (tmp_961_fu_7838_p3.read() & select_ln416_70_fu_7901_p3.read());
}

void matmul::thread_and_ln786_9_fu_8112_p2() {
    and_ln786_9_fu_8112_p2 = (tmp_971_fu_8012_p3.read() & select_ln416_71_fu_8075_p3.read());
}

void matmul::thread_and_ln786_fu_6546_p2() {
    and_ln786_fu_6546_p2 = (tmp_881_fu_6446_p3.read() & select_ln416_fu_6509_p3.read());
}

void matmul::thread_and_ln947_10_fu_10267_p2() {
    and_ln947_10_fu_10267_p2 = (select_ln938_reg_16385.read() & lshr_ln947_fu_10261_p2.read());
}

void matmul::thread_and_ln947_11_fu_10329_p2() {
    and_ln947_11_fu_10329_p2 = (select_ln938_1_reg_16407.read() & lshr_ln947_1_fu_10323_p2.read());
}

void matmul::thread_and_ln947_12_fu_10391_p2() {
    and_ln947_12_fu_10391_p2 = (select_ln938_2_reg_16429.read() & lshr_ln947_2_fu_10385_p2.read());
}

void matmul::thread_and_ln947_13_fu_10453_p2() {
    and_ln947_13_fu_10453_p2 = (select_ln938_3_reg_16451.read() & lshr_ln947_3_fu_10447_p2.read());
}

void matmul::thread_and_ln947_14_fu_10515_p2() {
    and_ln947_14_fu_10515_p2 = (select_ln938_4_reg_16473.read() & lshr_ln947_4_fu_10509_p2.read());
}

void matmul::thread_and_ln947_15_fu_10577_p2() {
    and_ln947_15_fu_10577_p2 = (select_ln938_5_reg_16495.read() & lshr_ln947_5_fu_10571_p2.read());
}

void matmul::thread_and_ln947_16_fu_10639_p2() {
    and_ln947_16_fu_10639_p2 = (select_ln938_6_reg_16517.read() & lshr_ln947_6_fu_10633_p2.read());
}

void matmul::thread_and_ln947_17_fu_10701_p2() {
    and_ln947_17_fu_10701_p2 = (select_ln938_7_reg_16539.read() & lshr_ln947_7_fu_10695_p2.read());
}

void matmul::thread_and_ln947_18_fu_10763_p2() {
    and_ln947_18_fu_10763_p2 = (select_ln938_8_reg_16561.read() & lshr_ln947_8_fu_10757_p2.read());
}

void matmul::thread_and_ln947_19_fu_10825_p2() {
    and_ln947_19_fu_10825_p2 = (select_ln938_9_reg_16583.read() & lshr_ln947_9_fu_10819_p2.read());
}

void matmul::thread_and_ln947_1_fu_10944_p2() {
    and_ln947_1_fu_10944_p2 = (icmp_ln947_2_reg_16852.read() & icmp_ln947_3_reg_16857.read());
}

void matmul::thread_and_ln947_2_fu_11037_p2() {
    and_ln947_2_fu_11037_p2 = (icmp_ln947_4_reg_16883.read() & icmp_ln947_5_reg_16888.read());
}

void matmul::thread_and_ln947_3_fu_11130_p2() {
    and_ln947_3_fu_11130_p2 = (icmp_ln947_6_reg_16914.read() & icmp_ln947_7_reg_16919.read());
}

void matmul::thread_and_ln947_4_fu_11223_p2() {
    and_ln947_4_fu_11223_p2 = (icmp_ln947_8_reg_16945.read() & icmp_ln947_9_reg_16950.read());
}

void matmul::thread_and_ln947_5_fu_11316_p2() {
    and_ln947_5_fu_11316_p2 = (icmp_ln947_10_reg_16976.read() & icmp_ln947_11_reg_16981.read());
}

void matmul::thread_and_ln947_6_fu_11409_p2() {
    and_ln947_6_fu_11409_p2 = (icmp_ln947_12_reg_17007.read() & icmp_ln947_13_reg_17012.read());
}

void matmul::thread_and_ln947_7_fu_11502_p2() {
    and_ln947_7_fu_11502_p2 = (icmp_ln947_14_reg_17038.read() & icmp_ln947_15_reg_17043.read());
}

void matmul::thread_and_ln947_8_fu_11595_p2() {
    and_ln947_8_fu_11595_p2 = (icmp_ln947_16_reg_17069.read() & icmp_ln947_17_reg_17074.read());
}

void matmul::thread_and_ln947_9_fu_11688_p2() {
    and_ln947_9_fu_11688_p2 = (icmp_ln947_18_reg_17100.read() & icmp_ln947_19_reg_17105.read());
}

void matmul::thread_and_ln947_fu_10851_p2() {
    and_ln947_fu_10851_p2 = (icmp_ln947_reg_16821.read() & icmp_ln947_1_reg_16826.read());
}

void matmul::thread_and_ln949_1_fu_10967_p2() {
    and_ln949_1_fu_10967_p2 = (p_Result_86_1_fu_10961_p3.read() & xor_ln949_1_fu_10955_p2.read());
}

void matmul::thread_and_ln949_2_fu_11060_p2() {
    and_ln949_2_fu_11060_p2 = (p_Result_86_2_fu_11054_p3.read() & xor_ln949_2_fu_11048_p2.read());
}

void matmul::thread_and_ln949_3_fu_11153_p2() {
    and_ln949_3_fu_11153_p2 = (p_Result_86_3_fu_11147_p3.read() & xor_ln949_3_fu_11141_p2.read());
}

void matmul::thread_and_ln949_4_fu_11246_p2() {
    and_ln949_4_fu_11246_p2 = (p_Result_86_4_fu_11240_p3.read() & xor_ln949_4_fu_11234_p2.read());
}

void matmul::thread_and_ln949_5_fu_11339_p2() {
    and_ln949_5_fu_11339_p2 = (p_Result_86_5_fu_11333_p3.read() & xor_ln949_5_fu_11327_p2.read());
}

void matmul::thread_and_ln949_6_fu_11432_p2() {
    and_ln949_6_fu_11432_p2 = (p_Result_86_6_fu_11426_p3.read() & xor_ln949_6_fu_11420_p2.read());
}

void matmul::thread_and_ln949_7_fu_11525_p2() {
    and_ln949_7_fu_11525_p2 = (p_Result_86_7_fu_11519_p3.read() & xor_ln949_7_fu_11513_p2.read());
}

void matmul::thread_and_ln949_8_fu_11618_p2() {
    and_ln949_8_fu_11618_p2 = (p_Result_86_8_fu_11612_p3.read() & xor_ln949_8_fu_11606_p2.read());
}

void matmul::thread_and_ln949_9_fu_11711_p2() {
    and_ln949_9_fu_11711_p2 = (p_Result_86_9_fu_11705_p3.read() & xor_ln949_9_fu_11699_p2.read());
}

void matmul::thread_and_ln949_fu_10874_p2() {
    and_ln949_fu_10874_p2 = (p_Result_10_fu_10868_p3.read() & xor_ln949_fu_10862_p2.read());
}

void matmul::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void matmul::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void matmul::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[4];
}

void matmul::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[5];
}

void matmul::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[6];
}

void matmul::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[2];
}

void matmul::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[3];
}

void matmul::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matmul::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matmul::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matmul::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matmul::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matmul::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matmul::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matmul::thread_ap_block_state6_pp0_stage0_iter4() {
    ap_block_state6_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matmul::thread_ap_block_state7_pp0_stage0_iter5() {
    ap_block_state7_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matmul::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln28_fu_5498_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void matmul::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void matmul::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void matmul::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void matmul::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void matmul::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void matmul::thread_ap_return_0() {
    ap_return_0 = select_ln935_fu_11825_p3.read();
}

void matmul::thread_ap_return_1() {
    ap_return_1 = select_ln935_1_fu_11876_p3.read();
}

void matmul::thread_ap_return_2() {
    ap_return_2 = select_ln935_2_fu_11927_p3.read();
}

void matmul::thread_ap_return_3() {
    ap_return_3 = select_ln935_3_fu_11978_p3.read();
}

void matmul::thread_ap_return_4() {
    ap_return_4 = select_ln935_4_fu_12029_p3.read();
}

void matmul::thread_ap_return_5() {
    ap_return_5 = select_ln935_5_fu_12080_p3.read();
}

void matmul::thread_ap_return_6() {
    ap_return_6 = select_ln935_6_fu_12131_p3.read();
}

void matmul::thread_ap_return_7() {
    ap_return_7 = select_ln935_7_fu_12182_p3.read();
}

void matmul::thread_ap_return_8() {
    ap_return_8 = select_ln935_8_fu_12233_p3.read();
}

void matmul::thread_ap_return_9() {
    ap_return_9 = select_ln935_9_fu_12284_p3.read();
}

void matmul::thread_bitcast_ln739_1_fu_11872_p1() {
    bitcast_ln739_1_fu_11872_p1 = p_Result_103_1_fu_11860_p5.read();
}

void matmul::thread_bitcast_ln739_2_fu_11923_p1() {
    bitcast_ln739_2_fu_11923_p1 = p_Result_103_2_fu_11911_p5.read();
}

void matmul::thread_bitcast_ln739_3_fu_11974_p1() {
    bitcast_ln739_3_fu_11974_p1 = p_Result_103_3_fu_11962_p5.read();
}

void matmul::thread_bitcast_ln739_4_fu_12025_p1() {
    bitcast_ln739_4_fu_12025_p1 = p_Result_103_4_fu_12013_p5.read();
}

void matmul::thread_bitcast_ln739_5_fu_12076_p1() {
    bitcast_ln739_5_fu_12076_p1 = p_Result_103_5_fu_12064_p5.read();
}

void matmul::thread_bitcast_ln739_6_fu_12127_p1() {
    bitcast_ln739_6_fu_12127_p1 = p_Result_103_6_fu_12115_p5.read();
}

void matmul::thread_bitcast_ln739_7_fu_12178_p1() {
    bitcast_ln739_7_fu_12178_p1 = p_Result_103_7_fu_12166_p5.read();
}

void matmul::thread_bitcast_ln739_8_fu_12229_p1() {
    bitcast_ln739_8_fu_12229_p1 = p_Result_103_8_fu_12217_p5.read();
}

void matmul::thread_bitcast_ln739_9_fu_12280_p1() {
    bitcast_ln739_9_fu_12280_p1 = p_Result_103_9_fu_12268_p5.read();
}

void matmul::thread_bitcast_ln739_fu_11821_p1() {
    bitcast_ln739_fu_11821_p1 = p_Result_11_fu_11809_p5.read();
}

void matmul::thread_bottom_V_address0() {
    bottom_V_address0 =  (sc_lv<10>) (zext_ln31_1_fu_5519_p1.read());
}

void matmul::thread_bottom_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        bottom_V_ce0 = ap_const_logic_1;
    } else {
        bottom_V_ce0 = ap_const_logic_0;
    }
}

void matmul::thread_buf_0_V_fu_8511_p3() {
    buf_0_V_fu_8511_p3 = (!or_ln340_385_fu_8489_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_385_fu_8489_p2.read()[0].to_bool())? select_ln340_164_fu_8495_p3.read(): select_ln388_163_fu_8503_p3.read());
}

void matmul::thread_buf_1_V_fu_8599_p3() {
    buf_1_V_fu_8599_p3 = (!or_ln340_388_fu_8577_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_388_fu_8577_p2.read()[0].to_bool())? select_ln340_165_fu_8583_p3.read(): select_ln388_164_fu_8591_p3.read());
}

void matmul::thread_buf_2_V_fu_8687_p3() {
    buf_2_V_fu_8687_p3 = (!or_ln340_391_fu_8665_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_391_fu_8665_p2.read()[0].to_bool())? select_ln340_166_fu_8671_p3.read(): select_ln388_165_fu_8679_p3.read());
}

void matmul::thread_buf_3_V_fu_8775_p3() {
    buf_3_V_fu_8775_p3 = (!or_ln340_394_fu_8753_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_394_fu_8753_p2.read()[0].to_bool())? select_ln340_167_fu_8759_p3.read(): select_ln388_166_fu_8767_p3.read());
}

void matmul::thread_buf_4_V_fu_8863_p3() {
    buf_4_V_fu_8863_p3 = (!or_ln340_397_fu_8841_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_397_fu_8841_p2.read()[0].to_bool())? select_ln340_168_fu_8847_p3.read(): select_ln388_167_fu_8855_p3.read());
}

void matmul::thread_buf_5_V_fu_8951_p3() {
    buf_5_V_fu_8951_p3 = (!or_ln340_400_fu_8929_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_400_fu_8929_p2.read()[0].to_bool())? select_ln340_169_fu_8935_p3.read(): select_ln388_168_fu_8943_p3.read());
}

void matmul::thread_buf_6_V_fu_9039_p3() {
    buf_6_V_fu_9039_p3 = (!or_ln340_403_fu_9017_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_403_fu_9017_p2.read()[0].to_bool())? select_ln340_170_fu_9023_p3.read(): select_ln388_169_fu_9031_p3.read());
}

void matmul::thread_buf_7_V_fu_9127_p3() {
    buf_7_V_fu_9127_p3 = (!or_ln340_406_fu_9105_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_406_fu_9105_p2.read()[0].to_bool())? select_ln340_171_fu_9111_p3.read(): select_ln388_170_fu_9119_p3.read());
}

void matmul::thread_buf_8_V_fu_9215_p3() {
    buf_8_V_fu_9215_p3 = (!or_ln340_409_fu_9193_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_409_fu_9193_p2.read()[0].to_bool())? select_ln340_172_fu_9199_p3.read(): select_ln388_171_fu_9207_p3.read());
}

void matmul::thread_buf_9_V_fu_9303_p3() {
    buf_9_V_fu_9303_p3 = (!or_ln340_412_fu_9281_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_412_fu_9281_p2.read()[0].to_bool())? select_ln340_173_fu_9287_p3.read(): select_ln388_172_fu_9295_p3.read());
}

void matmul::thread_cii_fu_5504_p2() {
    cii_fu_5504_p2 = (!cii_0_reg_5475.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(cii_0_reg_5475.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void matmul::thread_icmp_ln28_fu_5498_p2() {
    icmp_ln28_fu_5498_p2 = (!cii_0_reg_5475.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(cii_0_reg_5475.read() == ap_const_lv7_40);
}

void matmul::thread_icmp_ln768_63_fu_6650_p2() {
    icmp_ln768_63_fu_6650_p2 = (!tmp_893_fu_6635_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_893_fu_6635_p4.read() == ap_const_lv2_0);
}

void matmul::thread_icmp_ln768_64_fu_6824_p2() {
    icmp_ln768_64_fu_6824_p2 = (!tmp_903_fu_6809_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_903_fu_6809_p4.read() == ap_const_lv2_0);
}

void matmul::thread_icmp_ln768_65_fu_6998_p2() {
    icmp_ln768_65_fu_6998_p2 = (!tmp_913_fu_6983_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_913_fu_6983_p4.read() == ap_const_lv2_0);
}

void matmul::thread_icmp_ln768_66_fu_7172_p2() {
    icmp_ln768_66_fu_7172_p2 = (!tmp_923_fu_7157_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_923_fu_7157_p4.read() == ap_const_lv2_0);
}

void matmul::thread_icmp_ln768_67_fu_7346_p2() {
    icmp_ln768_67_fu_7346_p2 = (!tmp_933_fu_7331_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_933_fu_7331_p4.read() == ap_const_lv2_0);
}

void matmul::thread_icmp_ln768_68_fu_7520_p2() {
    icmp_ln768_68_fu_7520_p2 = (!tmp_943_fu_7505_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_943_fu_7505_p4.read() == ap_const_lv2_0);
}

void matmul::thread_icmp_ln768_69_fu_7694_p2() {
    icmp_ln768_69_fu_7694_p2 = (!tmp_953_fu_7679_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_953_fu_7679_p4.read() == ap_const_lv2_0);
}

void matmul::thread_icmp_ln768_70_fu_7868_p2() {
    icmp_ln768_70_fu_7868_p2 = (!tmp_963_fu_7853_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_963_fu_7853_p4.read() == ap_const_lv2_0);
}

void matmul::thread_icmp_ln768_71_fu_8042_p2() {
    icmp_ln768_71_fu_8042_p2 = (!tmp_973_fu_8027_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_973_fu_8027_p4.read() == ap_const_lv2_0);
}

void matmul::thread_icmp_ln768_fu_6476_p2() {
    icmp_ln768_fu_6476_p2 = (!tmp_883_fu_6461_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_883_fu_6461_p4.read() == ap_const_lv2_0);
}

void matmul::thread_icmp_ln879_127_fu_6644_p2() {
    icmp_ln879_127_fu_6644_p2 = (!tmp_893_fu_6635_p4.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_893_fu_6635_p4.read() == ap_const_lv2_3);
}

void matmul::thread_icmp_ln879_128_fu_6818_p2() {
    icmp_ln879_128_fu_6818_p2 = (!tmp_903_fu_6809_p4.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_903_fu_6809_p4.read() == ap_const_lv2_3);
}

void matmul::thread_icmp_ln879_129_fu_6992_p2() {
    icmp_ln879_129_fu_6992_p2 = (!tmp_913_fu_6983_p4.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_913_fu_6983_p4.read() == ap_const_lv2_3);
}

void matmul::thread_icmp_ln879_130_fu_7166_p2() {
    icmp_ln879_130_fu_7166_p2 = (!tmp_923_fu_7157_p4.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_923_fu_7157_p4.read() == ap_const_lv2_3);
}

void matmul::thread_icmp_ln879_131_fu_7340_p2() {
    icmp_ln879_131_fu_7340_p2 = (!tmp_933_fu_7331_p4.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_933_fu_7331_p4.read() == ap_const_lv2_3);
}

void matmul::thread_icmp_ln879_132_fu_7514_p2() {
    icmp_ln879_132_fu_7514_p2 = (!tmp_943_fu_7505_p4.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_943_fu_7505_p4.read() == ap_const_lv2_3);
}

void matmul::thread_icmp_ln879_133_fu_7688_p2() {
    icmp_ln879_133_fu_7688_p2 = (!tmp_953_fu_7679_p4.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_953_fu_7679_p4.read() == ap_const_lv2_3);
}

void matmul::thread_icmp_ln879_134_fu_7862_p2() {
    icmp_ln879_134_fu_7862_p2 = (!tmp_963_fu_7853_p4.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_963_fu_7853_p4.read() == ap_const_lv2_3);
}

void matmul::thread_icmp_ln879_135_fu_8036_p2() {
    icmp_ln879_135_fu_8036_p2 = (!tmp_973_fu_8027_p4.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_973_fu_8027_p4.read() == ap_const_lv2_3);
}

void matmul::thread_icmp_ln879_fu_6470_p2() {
    icmp_ln879_fu_6470_p2 = (!tmp_883_fu_6461_p4.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_883_fu_6461_p4.read() == ap_const_lv2_3);
}

void matmul::thread_icmp_ln935_1_fu_9391_p2() {
    icmp_ln935_1_fu_9391_p2 = (!add_ln1192_192_fu_9385_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln1192_192_fu_9385_p2.read() == ap_const_lv15_0);
}

void matmul::thread_icmp_ln935_2_fu_9450_p2() {
    icmp_ln935_2_fu_9450_p2 = (!add_ln1192_194_fu_9444_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln1192_194_fu_9444_p2.read() == ap_const_lv15_0);
}

void matmul::thread_icmp_ln935_3_fu_9509_p2() {
    icmp_ln935_3_fu_9509_p2 = (!add_ln1192_195_fu_9503_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln1192_195_fu_9503_p2.read() == ap_const_lv15_0);
}

void matmul::thread_icmp_ln935_4_fu_9568_p2() {
    icmp_ln935_4_fu_9568_p2 = (!add_ln1192_197_fu_9562_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln1192_197_fu_9562_p2.read() == ap_const_lv15_0);
}

void matmul::thread_icmp_ln935_5_fu_9627_p2() {
    icmp_ln935_5_fu_9627_p2 = (!add_ln1192_199_fu_9621_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln1192_199_fu_9621_p2.read() == ap_const_lv15_0);
}

void matmul::thread_icmp_ln935_6_fu_9686_p2() {
    icmp_ln935_6_fu_9686_p2 = (!add_ln1192_201_fu_9680_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln1192_201_fu_9680_p2.read() == ap_const_lv15_0);
}

void matmul::thread_icmp_ln935_7_fu_9745_p2() {
    icmp_ln935_7_fu_9745_p2 = (!add_ln1192_203_fu_9739_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln1192_203_fu_9739_p2.read() == ap_const_lv15_0);
}

void matmul::thread_icmp_ln935_8_fu_9804_p2() {
    icmp_ln935_8_fu_9804_p2 = (!add_ln1192_205_fu_9798_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln1192_205_fu_9798_p2.read() == ap_const_lv15_0);
}

void matmul::thread_icmp_ln935_9_fu_9863_p2() {
    icmp_ln935_9_fu_9863_p2 = (!add_ln1192_207_fu_9857_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln1192_207_fu_9857_p2.read() == ap_const_lv15_0);
}

void matmul::thread_icmp_ln935_fu_9332_p2() {
    icmp_ln935_fu_9332_p2 = (!add_ln1192_fu_9326_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(add_ln1192_fu_9326_p2.read() == ap_const_lv15_0);
}

void matmul::thread_icmp_ln947_10_fu_10556_p2() {
    icmp_ln947_10_fu_10556_p2 = (!tmp_858_fu_10546_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): (sc_bigint<31>(tmp_858_fu_10546_p4.read()) > sc_bigint<31>(ap_const_lv31_0));
}

void matmul::thread_icmp_ln947_11_fu_10582_p2() {
    icmp_ln947_11_fu_10582_p2 = (!and_ln947_15_fu_10577_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(and_ln947_15_fu_10577_p2.read() != ap_const_lv15_0);
}

void matmul::thread_icmp_ln947_12_fu_10618_p2() {
    icmp_ln947_12_fu_10618_p2 = (!tmp_862_fu_10608_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): (sc_bigint<31>(tmp_862_fu_10608_p4.read()) > sc_bigint<31>(ap_const_lv31_0));
}

void matmul::thread_icmp_ln947_13_fu_10644_p2() {
    icmp_ln947_13_fu_10644_p2 = (!and_ln947_16_fu_10639_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(and_ln947_16_fu_10639_p2.read() != ap_const_lv15_0);
}

void matmul::thread_icmp_ln947_14_fu_10680_p2() {
    icmp_ln947_14_fu_10680_p2 = (!tmp_866_fu_10670_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): (sc_bigint<31>(tmp_866_fu_10670_p4.read()) > sc_bigint<31>(ap_const_lv31_0));
}

void matmul::thread_icmp_ln947_15_fu_10706_p2() {
    icmp_ln947_15_fu_10706_p2 = (!and_ln947_17_fu_10701_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(and_ln947_17_fu_10701_p2.read() != ap_const_lv15_0);
}

void matmul::thread_icmp_ln947_16_fu_10742_p2() {
    icmp_ln947_16_fu_10742_p2 = (!tmp_870_fu_10732_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): (sc_bigint<31>(tmp_870_fu_10732_p4.read()) > sc_bigint<31>(ap_const_lv31_0));
}

void matmul::thread_icmp_ln947_17_fu_10768_p2() {
    icmp_ln947_17_fu_10768_p2 = (!and_ln947_18_fu_10763_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(and_ln947_18_fu_10763_p2.read() != ap_const_lv15_0);
}

void matmul::thread_icmp_ln947_18_fu_10804_p2() {
    icmp_ln947_18_fu_10804_p2 = (!tmp_874_fu_10794_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): (sc_bigint<31>(tmp_874_fu_10794_p4.read()) > sc_bigint<31>(ap_const_lv31_0));
}

void matmul::thread_icmp_ln947_19_fu_10830_p2() {
    icmp_ln947_19_fu_10830_p2 = (!and_ln947_19_fu_10825_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(and_ln947_19_fu_10825_p2.read() != ap_const_lv15_0);
}

void matmul::thread_icmp_ln947_1_fu_10272_p2() {
    icmp_ln947_1_fu_10272_p2 = (!and_ln947_10_fu_10267_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(and_ln947_10_fu_10267_p2.read() != ap_const_lv15_0);
}

void matmul::thread_icmp_ln947_2_fu_10308_p2() {
    icmp_ln947_2_fu_10308_p2 = (!tmp_842_fu_10298_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): (sc_bigint<31>(tmp_842_fu_10298_p4.read()) > sc_bigint<31>(ap_const_lv31_0));
}

void matmul::thread_icmp_ln947_3_fu_10334_p2() {
    icmp_ln947_3_fu_10334_p2 = (!and_ln947_11_fu_10329_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(and_ln947_11_fu_10329_p2.read() != ap_const_lv15_0);
}

void matmul::thread_icmp_ln947_4_fu_10370_p2() {
    icmp_ln947_4_fu_10370_p2 = (!tmp_846_fu_10360_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): (sc_bigint<31>(tmp_846_fu_10360_p4.read()) > sc_bigint<31>(ap_const_lv31_0));
}

void matmul::thread_icmp_ln947_5_fu_10396_p2() {
    icmp_ln947_5_fu_10396_p2 = (!and_ln947_12_fu_10391_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(and_ln947_12_fu_10391_p2.read() != ap_const_lv15_0);
}

void matmul::thread_icmp_ln947_6_fu_10432_p2() {
    icmp_ln947_6_fu_10432_p2 = (!tmp_850_fu_10422_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): (sc_bigint<31>(tmp_850_fu_10422_p4.read()) > sc_bigint<31>(ap_const_lv31_0));
}

void matmul::thread_icmp_ln947_7_fu_10458_p2() {
    icmp_ln947_7_fu_10458_p2 = (!and_ln947_13_fu_10453_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(and_ln947_13_fu_10453_p2.read() != ap_const_lv15_0);
}

void matmul::thread_icmp_ln947_8_fu_10494_p2() {
    icmp_ln947_8_fu_10494_p2 = (!tmp_854_fu_10484_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): (sc_bigint<31>(tmp_854_fu_10484_p4.read()) > sc_bigint<31>(ap_const_lv31_0));
}

void matmul::thread_icmp_ln947_9_fu_10520_p2() {
    icmp_ln947_9_fu_10520_p2 = (!and_ln947_14_fu_10515_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(and_ln947_14_fu_10515_p2.read() != ap_const_lv15_0);
}

void matmul::thread_icmp_ln947_fu_10246_p2() {
    icmp_ln947_fu_10246_p2 = (!tmp_838_fu_10236_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): (sc_bigint<31>(tmp_838_fu_10236_p4.read()) > sc_bigint<31>(ap_const_lv31_0));
}

void matmul::thread_icmp_ln958_1_fu_10990_p2() {
    icmp_ln958_1_fu_10990_p2 = (!add_ln944_1_reg_16846.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(add_ln944_1_reg_16846.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void matmul::thread_icmp_ln958_2_fu_11083_p2() {
    icmp_ln958_2_fu_11083_p2 = (!add_ln944_2_reg_16877.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(add_ln944_2_reg_16877.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void matmul::thread_icmp_ln958_3_fu_11176_p2() {
    icmp_ln958_3_fu_11176_p2 = (!add_ln944_3_reg_16908.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(add_ln944_3_reg_16908.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void matmul::thread_icmp_ln958_4_fu_11269_p2() {
    icmp_ln958_4_fu_11269_p2 = (!add_ln944_4_reg_16939.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(add_ln944_4_reg_16939.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void matmul::thread_icmp_ln958_5_fu_11362_p2() {
    icmp_ln958_5_fu_11362_p2 = (!add_ln944_5_reg_16970.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(add_ln944_5_reg_16970.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void matmul::thread_icmp_ln958_6_fu_11455_p2() {
    icmp_ln958_6_fu_11455_p2 = (!add_ln944_6_reg_17001.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(add_ln944_6_reg_17001.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void matmul::thread_icmp_ln958_7_fu_11548_p2() {
    icmp_ln958_7_fu_11548_p2 = (!add_ln944_7_reg_17032.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(add_ln944_7_reg_17032.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void matmul::thread_icmp_ln958_8_fu_11641_p2() {
    icmp_ln958_8_fu_11641_p2 = (!add_ln944_8_reg_17063.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(add_ln944_8_reg_17063.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void matmul::thread_icmp_ln958_9_fu_11734_p2() {
    icmp_ln958_9_fu_11734_p2 = (!add_ln944_9_reg_17094.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(add_ln944_9_reg_17094.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void matmul::thread_icmp_ln958_fu_10897_p2() {
    icmp_ln958_fu_10897_p2 = (!add_ln944_reg_16815.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(add_ln944_reg_16815.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void matmul::thread_l_1_fu_9941_p3() {
    l_1_fu_9941_p3 = esl_cttz<32,32>(p_Result_101_1_fu_9934_p3.read());
}

void matmul::thread_l_2_fu_9974_p3() {
    l_2_fu_9974_p3 = esl_cttz<32,32>(p_Result_101_2_fu_9967_p3.read());
}

void matmul::thread_l_3_fu_10007_p3() {
    l_3_fu_10007_p3 = esl_cttz<32,32>(p_Result_101_3_fu_10000_p3.read());
}

void matmul::thread_l_4_fu_10040_p3() {
    l_4_fu_10040_p3 = esl_cttz<32,32>(p_Result_101_4_fu_10033_p3.read());
}

void matmul::thread_l_5_fu_10073_p3() {
    l_5_fu_10073_p3 = esl_cttz<32,32>(p_Result_101_5_fu_10066_p3.read());
}

void matmul::thread_l_6_fu_10106_p3() {
    l_6_fu_10106_p3 = esl_cttz<32,32>(p_Result_101_6_fu_10099_p3.read());
}

void matmul::thread_l_7_fu_10139_p3() {
    l_7_fu_10139_p3 = esl_cttz<32,32>(p_Result_101_7_fu_10132_p3.read());
}

void matmul::thread_l_8_fu_10172_p3() {
    l_8_fu_10172_p3 = esl_cttz<32,32>(p_Result_101_8_fu_10165_p3.read());
}

void matmul::thread_l_9_fu_10205_p3() {
    l_9_fu_10205_p3 = esl_cttz<32,32>(p_Result_101_9_fu_10198_p3.read());
}

void matmul::thread_l_fu_9908_p3() {
    l_fu_9908_p3 = esl_cttz<32,32>(p_Result_s_34_fu_9901_p3.read());
}

void matmul::thread_lshr_ln947_1_fu_10323_p2() {
    lshr_ln947_1_fu_10323_p2 = (!zext_ln947_1_fu_10319_p1.read().is_01())? sc_lv<15>(): ap_const_lv15_7FFF >> (unsigned short)zext_ln947_1_fu_10319_p1.read().to_uint();
}

void matmul::thread_lshr_ln947_2_fu_10385_p2() {
    lshr_ln947_2_fu_10385_p2 = (!zext_ln947_2_fu_10381_p1.read().is_01())? sc_lv<15>(): ap_const_lv15_7FFF >> (unsigned short)zext_ln947_2_fu_10381_p1.read().to_uint();
}

void matmul::thread_lshr_ln947_3_fu_10447_p2() {
    lshr_ln947_3_fu_10447_p2 = (!zext_ln947_3_fu_10443_p1.read().is_01())? sc_lv<15>(): ap_const_lv15_7FFF >> (unsigned short)zext_ln947_3_fu_10443_p1.read().to_uint();
}

void matmul::thread_lshr_ln947_4_fu_10509_p2() {
    lshr_ln947_4_fu_10509_p2 = (!zext_ln947_4_fu_10505_p1.read().is_01())? sc_lv<15>(): ap_const_lv15_7FFF >> (unsigned short)zext_ln947_4_fu_10505_p1.read().to_uint();
}

void matmul::thread_lshr_ln947_5_fu_10571_p2() {
    lshr_ln947_5_fu_10571_p2 = (!zext_ln947_5_fu_10567_p1.read().is_01())? sc_lv<15>(): ap_const_lv15_7FFF >> (unsigned short)zext_ln947_5_fu_10567_p1.read().to_uint();
}

void matmul::thread_lshr_ln947_6_fu_10633_p2() {
    lshr_ln947_6_fu_10633_p2 = (!zext_ln947_6_fu_10629_p1.read().is_01())? sc_lv<15>(): ap_const_lv15_7FFF >> (unsigned short)zext_ln947_6_fu_10629_p1.read().to_uint();
}

void matmul::thread_lshr_ln947_7_fu_10695_p2() {
    lshr_ln947_7_fu_10695_p2 = (!zext_ln947_7_fu_10691_p1.read().is_01())? sc_lv<15>(): ap_const_lv15_7FFF >> (unsigned short)zext_ln947_7_fu_10691_p1.read().to_uint();
}

void matmul::thread_lshr_ln947_8_fu_10757_p2() {
    lshr_ln947_8_fu_10757_p2 = (!zext_ln947_8_fu_10753_p1.read().is_01())? sc_lv<15>(): ap_const_lv15_7FFF >> (unsigned short)zext_ln947_8_fu_10753_p1.read().to_uint();
}

void matmul::thread_lshr_ln947_9_fu_10819_p2() {
    lshr_ln947_9_fu_10819_p2 = (!zext_ln947_9_fu_10815_p1.read().is_01())? sc_lv<15>(): ap_const_lv15_7FFF >> (unsigned short)zext_ln947_9_fu_10815_p1.read().to_uint();
}

void matmul::thread_lshr_ln947_fu_10261_p2() {
    lshr_ln947_fu_10261_p2 = (!zext_ln947_fu_10257_p1.read().is_01())? sc_lv<15>(): ap_const_lv15_7FFF >> (unsigned short)zext_ln947_fu_10257_p1.read().to_uint();
}

void matmul::thread_lshr_ln958_1_fu_10995_p2() {
    lshr_ln958_1_fu_10995_p2 = (!add_ln958_1_reg_16867.read().is_01())? sc_lv<32>(): zext_ln957_1_fu_10987_p1.read() >> (unsigned short)add_ln958_1_reg_16867.read().to_uint();
}

void matmul::thread_lshr_ln958_2_fu_11088_p2() {
    lshr_ln958_2_fu_11088_p2 = (!add_ln958_2_reg_16898.read().is_01())? sc_lv<32>(): zext_ln957_2_fu_11080_p1.read() >> (unsigned short)add_ln958_2_reg_16898.read().to_uint();
}

void matmul::thread_lshr_ln958_3_fu_11181_p2() {
    lshr_ln958_3_fu_11181_p2 = (!add_ln958_3_reg_16929.read().is_01())? sc_lv<32>(): zext_ln957_3_fu_11173_p1.read() >> (unsigned short)add_ln958_3_reg_16929.read().to_uint();
}

void matmul::thread_lshr_ln958_4_fu_11274_p2() {
    lshr_ln958_4_fu_11274_p2 = (!add_ln958_4_reg_16960.read().is_01())? sc_lv<32>(): zext_ln957_4_fu_11266_p1.read() >> (unsigned short)add_ln958_4_reg_16960.read().to_uint();
}

void matmul::thread_lshr_ln958_5_fu_11367_p2() {
    lshr_ln958_5_fu_11367_p2 = (!add_ln958_5_reg_16991.read().is_01())? sc_lv<32>(): zext_ln957_5_fu_11359_p1.read() >> (unsigned short)add_ln958_5_reg_16991.read().to_uint();
}

void matmul::thread_lshr_ln958_6_fu_11460_p2() {
    lshr_ln958_6_fu_11460_p2 = (!add_ln958_6_reg_17022.read().is_01())? sc_lv<32>(): zext_ln957_6_fu_11452_p1.read() >> (unsigned short)add_ln958_6_reg_17022.read().to_uint();
}

void matmul::thread_lshr_ln958_7_fu_11553_p2() {
    lshr_ln958_7_fu_11553_p2 = (!add_ln958_7_reg_17053.read().is_01())? sc_lv<32>(): zext_ln957_7_fu_11545_p1.read() >> (unsigned short)add_ln958_7_reg_17053.read().to_uint();
}

void matmul::thread_lshr_ln958_8_fu_11646_p2() {
    lshr_ln958_8_fu_11646_p2 = (!add_ln958_8_reg_17084.read().is_01())? sc_lv<32>(): zext_ln957_8_fu_11638_p1.read() >> (unsigned short)add_ln958_8_reg_17084.read().to_uint();
}

void matmul::thread_lshr_ln958_9_fu_11739_p2() {
    lshr_ln958_9_fu_11739_p2 = (!add_ln958_9_reg_17115.read().is_01())? sc_lv<32>(): zext_ln957_9_fu_11731_p1.read() >> (unsigned short)add_ln958_9_reg_17115.read().to_uint();
}

void matmul::thread_lshr_ln958_fu_10902_p2() {
    lshr_ln958_fu_10902_p2 = (!add_ln958_reg_16836.read().is_01())? sc_lv<32>(): zext_ln957_fu_10894_p1.read() >> (unsigned short)add_ln958_reg_16836.read().to_uint();
}

void matmul::thread_mul_ln1118_63_fu_12359_p0() {
    mul_ln1118_63_fu_12359_p0 =  (sc_lv<12>) (sext_ln35_fu_6228_p1.read());
}

void matmul::thread_mul_ln1118_64_fu_12367_p0() {
    mul_ln1118_64_fu_12367_p0 =  (sc_lv<12>) (sext_ln35_fu_6228_p1.read());
}

void matmul::thread_mul_ln1118_65_fu_12375_p0() {
    mul_ln1118_65_fu_12375_p0 =  (sc_lv<12>) (sext_ln35_fu_6228_p1.read());
}

void matmul::thread_mul_ln1118_66_fu_12383_p0() {
    mul_ln1118_66_fu_12383_p0 =  (sc_lv<12>) (sext_ln35_fu_6228_p1.read());
}

void matmul::thread_mul_ln1118_67_fu_12391_p0() {
    mul_ln1118_67_fu_12391_p0 =  (sc_lv<12>) (sext_ln35_fu_6228_p1.read());
}

void matmul::thread_mul_ln1118_68_fu_12399_p0() {
    mul_ln1118_68_fu_12399_p0 =  (sc_lv<12>) (sext_ln35_fu_6228_p1.read());
}

void matmul::thread_mul_ln1118_69_fu_12407_p0() {
    mul_ln1118_69_fu_12407_p0 =  (sc_lv<12>) (sext_ln35_fu_6228_p1.read());
}

void matmul::thread_mul_ln1118_70_fu_12415_p0() {
    mul_ln1118_70_fu_12415_p0 =  (sc_lv<12>) (sext_ln35_fu_6228_p1.read());
}

void matmul::thread_mul_ln1118_71_fu_12423_p0() {
    mul_ln1118_71_fu_12423_p0 =  (sc_lv<12>) (sext_ln35_fu_6228_p1.read());
}

void matmul::thread_mul_ln1118_fu_12351_p0() {
    mul_ln1118_fu_12351_p0 =  (sc_lv<12>) (sext_ln35_fu_6228_p1.read());
}

void matmul::thread_or_ln340_1_fu_6743_p2() {
    or_ln340_1_fu_6743_p2 = (and_ln786_291_fu_6738_p2.read() | and_ln785_63_fu_6714_p2.read());
}

void matmul::thread_or_ln340_2_fu_6917_p2() {
    or_ln340_2_fu_6917_p2 = (and_ln786_293_fu_6912_p2.read() | and_ln785_64_fu_6888_p2.read());
}

void matmul::thread_or_ln340_383_fu_8141_p2() {
    or_ln340_383_fu_8141_p2 = (and_ln786_reg_15971.read() | xor_ln785_127_reg_15966.read());
}

void matmul::thread_or_ln340_384_fu_8145_p2() {
    or_ln340_384_fu_8145_p2 = (or_ln340_383_fu_8141_p2.read() | and_ln781_reg_15961.read());
}

void matmul::thread_or_ln340_385_fu_8489_p2() {
    or_ln340_385_fu_8489_p2 = (tmp_886_fu_8457_p3.read() | xor_ln340_164_fu_8483_p2.read());
}

void matmul::thread_or_ln340_386_fu_8170_p2() {
    or_ln340_386_fu_8170_p2 = (and_ln786_1_reg_16002.read() | xor_ln785_128_reg_15997.read());
}

void matmul::thread_or_ln340_387_fu_8174_p2() {
    or_ln340_387_fu_8174_p2 = (or_ln340_386_fu_8170_p2.read() | and_ln781_1_reg_15992.read());
}

void matmul::thread_or_ln340_388_fu_8577_p2() {
    or_ln340_388_fu_8577_p2 = (tmp_896_fu_8545_p3.read() | xor_ln340_165_fu_8571_p2.read());
}

void matmul::thread_or_ln340_389_fu_8199_p2() {
    or_ln340_389_fu_8199_p2 = (and_ln786_2_reg_16033.read() | xor_ln785_129_reg_16028.read());
}

void matmul::thread_or_ln340_390_fu_8203_p2() {
    or_ln340_390_fu_8203_p2 = (or_ln340_389_fu_8199_p2.read() | and_ln781_2_reg_16023.read());
}

void matmul::thread_or_ln340_391_fu_8665_p2() {
    or_ln340_391_fu_8665_p2 = (tmp_906_fu_8633_p3.read() | xor_ln340_166_fu_8659_p2.read());
}

void matmul::thread_or_ln340_392_fu_8228_p2() {
    or_ln340_392_fu_8228_p2 = (and_ln786_3_reg_16064.read() | xor_ln785_130_reg_16059.read());
}

void matmul::thread_or_ln340_393_fu_8232_p2() {
    or_ln340_393_fu_8232_p2 = (or_ln340_392_fu_8228_p2.read() | and_ln781_3_reg_16054.read());
}

void matmul::thread_or_ln340_394_fu_8753_p2() {
    or_ln340_394_fu_8753_p2 = (tmp_916_fu_8721_p3.read() | xor_ln340_167_fu_8747_p2.read());
}

void matmul::thread_or_ln340_395_fu_8257_p2() {
    or_ln340_395_fu_8257_p2 = (and_ln786_4_reg_16095.read() | xor_ln785_131_reg_16090.read());
}

void matmul::thread_or_ln340_396_fu_8261_p2() {
    or_ln340_396_fu_8261_p2 = (or_ln340_395_fu_8257_p2.read() | and_ln781_4_reg_16085.read());
}

void matmul::thread_or_ln340_397_fu_8841_p2() {
    or_ln340_397_fu_8841_p2 = (tmp_926_fu_8809_p3.read() | xor_ln340_168_fu_8835_p2.read());
}

void matmul::thread_or_ln340_398_fu_8286_p2() {
    or_ln340_398_fu_8286_p2 = (and_ln786_5_reg_16126.read() | xor_ln785_132_reg_16121.read());
}

void matmul::thread_or_ln340_399_fu_8290_p2() {
    or_ln340_399_fu_8290_p2 = (or_ln340_398_fu_8286_p2.read() | and_ln781_5_reg_16116.read());
}

void matmul::thread_or_ln340_3_fu_7091_p2() {
    or_ln340_3_fu_7091_p2 = (and_ln786_295_fu_7086_p2.read() | and_ln785_65_fu_7062_p2.read());
}

void matmul::thread_or_ln340_400_fu_8929_p2() {
    or_ln340_400_fu_8929_p2 = (tmp_936_fu_8897_p3.read() | xor_ln340_169_fu_8923_p2.read());
}

void matmul::thread_or_ln340_401_fu_8315_p2() {
    or_ln340_401_fu_8315_p2 = (and_ln786_6_reg_16157.read() | xor_ln785_133_reg_16152.read());
}

void matmul::thread_or_ln340_402_fu_8319_p2() {
    or_ln340_402_fu_8319_p2 = (or_ln340_401_fu_8315_p2.read() | and_ln781_6_reg_16147.read());
}

void matmul::thread_or_ln340_403_fu_9017_p2() {
    or_ln340_403_fu_9017_p2 = (tmp_946_fu_8985_p3.read() | xor_ln340_170_fu_9011_p2.read());
}

void matmul::thread_or_ln340_404_fu_8344_p2() {
    or_ln340_404_fu_8344_p2 = (and_ln786_7_reg_16188.read() | xor_ln785_134_reg_16183.read());
}

void matmul::thread_or_ln340_405_fu_8348_p2() {
    or_ln340_405_fu_8348_p2 = (or_ln340_404_fu_8344_p2.read() | and_ln781_7_reg_16178.read());
}

void matmul::thread_or_ln340_406_fu_9105_p2() {
    or_ln340_406_fu_9105_p2 = (tmp_956_fu_9073_p3.read() | xor_ln340_171_fu_9099_p2.read());
}

void matmul::thread_or_ln340_407_fu_8373_p2() {
    or_ln340_407_fu_8373_p2 = (and_ln786_8_reg_16219.read() | xor_ln785_135_reg_16214.read());
}

void matmul::thread_or_ln340_408_fu_8377_p2() {
    or_ln340_408_fu_8377_p2 = (or_ln340_407_fu_8373_p2.read() | and_ln781_8_reg_16209.read());
}

void matmul::thread_or_ln340_409_fu_9193_p2() {
    or_ln340_409_fu_9193_p2 = (tmp_966_fu_9161_p3.read() | xor_ln340_172_fu_9187_p2.read());
}

void matmul::thread_or_ln340_410_fu_8402_p2() {
    or_ln340_410_fu_8402_p2 = (and_ln786_9_reg_16250.read() | xor_ln785_136_reg_16245.read());
}

void matmul::thread_or_ln340_411_fu_8406_p2() {
    or_ln340_411_fu_8406_p2 = (or_ln340_410_fu_8402_p2.read() | and_ln781_9_reg_16240.read());
}

void matmul::thread_or_ln340_412_fu_9281_p2() {
    or_ln340_412_fu_9281_p2 = (tmp_976_fu_9249_p3.read() | xor_ln340_173_fu_9275_p2.read());
}

void matmul::thread_or_ln340_4_fu_7265_p2() {
    or_ln340_4_fu_7265_p2 = (and_ln786_297_fu_7260_p2.read() | and_ln785_66_fu_7236_p2.read());
}

void matmul::thread_or_ln340_5_fu_7439_p2() {
    or_ln340_5_fu_7439_p2 = (and_ln786_299_fu_7434_p2.read() | and_ln785_67_fu_7410_p2.read());
}

void matmul::thread_or_ln340_6_fu_7613_p2() {
    or_ln340_6_fu_7613_p2 = (and_ln786_301_fu_7608_p2.read() | and_ln785_68_fu_7584_p2.read());
}

void matmul::thread_or_ln340_7_fu_7787_p2() {
    or_ln340_7_fu_7787_p2 = (and_ln786_303_fu_7782_p2.read() | and_ln785_69_fu_7758_p2.read());
}

void matmul::thread_or_ln340_8_fu_7961_p2() {
    or_ln340_8_fu_7961_p2 = (and_ln786_305_fu_7956_p2.read() | and_ln785_70_fu_7932_p2.read());
}

void matmul::thread_or_ln340_9_fu_8135_p2() {
    or_ln340_9_fu_8135_p2 = (and_ln786_307_fu_8130_p2.read() | and_ln785_71_fu_8106_p2.read());
}

void matmul::thread_or_ln340_fu_6569_p2() {
    or_ln340_fu_6569_p2 = (and_ln786_289_fu_6564_p2.read() | and_ln785_fu_6540_p2.read());
}

void matmul::thread_or_ln785_1_fu_6703_p2() {
    or_ln785_1_fu_6703_p2 = (tmp_891_fu_6620_p3.read() | xor_ln785_1_fu_6697_p2.read());
}

void matmul::thread_or_ln785_2_fu_6877_p2() {
    or_ln785_2_fu_6877_p2 = (tmp_901_fu_6794_p3.read() | xor_ln785_2_fu_6871_p2.read());
}

void matmul::thread_or_ln785_3_fu_7051_p2() {
    or_ln785_3_fu_7051_p2 = (tmp_911_fu_6968_p3.read() | xor_ln785_3_fu_7045_p2.read());
}

void matmul::thread_or_ln785_4_fu_7225_p2() {
    or_ln785_4_fu_7225_p2 = (tmp_921_fu_7142_p3.read() | xor_ln785_4_fu_7219_p2.read());
}

void matmul::thread_or_ln785_5_fu_7399_p2() {
    or_ln785_5_fu_7399_p2 = (tmp_931_fu_7316_p3.read() | xor_ln785_5_fu_7393_p2.read());
}

void matmul::thread_or_ln785_63_fu_7921_p2() {
    or_ln785_63_fu_7921_p2 = (tmp_961_fu_7838_p3.read() | xor_ln785_8_fu_7915_p2.read());
}

void matmul::thread_or_ln785_6_fu_7573_p2() {
    or_ln785_6_fu_7573_p2 = (tmp_941_fu_7490_p3.read() | xor_ln785_6_fu_7567_p2.read());
}

void matmul::thread_or_ln785_7_fu_7747_p2() {
    or_ln785_7_fu_7747_p2 = (tmp_951_fu_7664_p3.read() | xor_ln785_7_fu_7741_p2.read());
}

void matmul::thread_or_ln785_9_fu_8095_p2() {
    or_ln785_9_fu_8095_p2 = (tmp_971_fu_8012_p3.read() | xor_ln785_9_fu_8089_p2.read());
}

void matmul::thread_or_ln785_fu_6529_p2() {
    or_ln785_fu_6529_p2 = (tmp_881_fu_6446_p3.read() | xor_ln785_fu_6523_p2.read());
}

void matmul::thread_or_ln786_63_fu_6726_p2() {
    or_ln786_63_fu_6726_p2 = (and_ln781_1_fu_6691_p2.read() | and_ln786_1_fu_6720_p2.read());
}

void matmul::thread_or_ln786_64_fu_6900_p2() {
    or_ln786_64_fu_6900_p2 = (and_ln781_2_fu_6865_p2.read() | and_ln786_2_fu_6894_p2.read());
}

void matmul::thread_or_ln786_65_fu_7074_p2() {
    or_ln786_65_fu_7074_p2 = (and_ln781_3_fu_7039_p2.read() | and_ln786_3_fu_7068_p2.read());
}

void matmul::thread_or_ln786_66_fu_7248_p2() {
    or_ln786_66_fu_7248_p2 = (and_ln781_4_fu_7213_p2.read() | and_ln786_4_fu_7242_p2.read());
}

void matmul::thread_or_ln786_67_fu_7422_p2() {
    or_ln786_67_fu_7422_p2 = (and_ln781_5_fu_7387_p2.read() | and_ln786_5_fu_7416_p2.read());
}

void matmul::thread_or_ln786_68_fu_7596_p2() {
    or_ln786_68_fu_7596_p2 = (and_ln781_6_fu_7561_p2.read() | and_ln786_6_fu_7590_p2.read());
}

void matmul::thread_or_ln786_69_fu_7770_p2() {
    or_ln786_69_fu_7770_p2 = (and_ln781_7_fu_7735_p2.read() | and_ln786_7_fu_7764_p2.read());
}

void matmul::thread_or_ln786_70_fu_7944_p2() {
    or_ln786_70_fu_7944_p2 = (and_ln781_8_fu_7909_p2.read() | and_ln786_8_fu_7938_p2.read());
}

void matmul::thread_or_ln786_71_fu_8118_p2() {
    or_ln786_71_fu_8118_p2 = (and_ln781_9_fu_8083_p2.read() | and_ln786_9_fu_8112_p2.read());
}

void matmul::thread_or_ln786_fu_6552_p2() {
    or_ln786_fu_6552_p2 = (and_ln781_fu_6517_p2.read() | and_ln786_fu_6546_p2.read());
}

void matmul::thread_or_ln949_10_fu_10973_p2() {
    or_ln949_10_fu_10973_p2 = (and_ln949_1_fu_10967_p2.read() | and_ln947_1_fu_10944_p2.read());
}

void matmul::thread_or_ln949_11_fu_11066_p2() {
    or_ln949_11_fu_11066_p2 = (and_ln949_2_fu_11060_p2.read() | and_ln947_2_fu_11037_p2.read());
}

void matmul::thread_or_ln949_12_fu_11159_p2() {
    or_ln949_12_fu_11159_p2 = (and_ln949_3_fu_11153_p2.read() | and_ln947_3_fu_11130_p2.read());
}

void matmul::thread_or_ln949_13_fu_11252_p2() {
    or_ln949_13_fu_11252_p2 = (and_ln949_4_fu_11246_p2.read() | and_ln947_4_fu_11223_p2.read());
}

void matmul::thread_or_ln949_14_fu_11345_p2() {
    or_ln949_14_fu_11345_p2 = (and_ln949_5_fu_11339_p2.read() | and_ln947_5_fu_11316_p2.read());
}

void matmul::thread_or_ln949_15_fu_11438_p2() {
    or_ln949_15_fu_11438_p2 = (and_ln949_6_fu_11432_p2.read() | and_ln947_6_fu_11409_p2.read());
}

void matmul::thread_or_ln949_16_fu_11531_p2() {
    or_ln949_16_fu_11531_p2 = (and_ln949_7_fu_11525_p2.read() | and_ln947_7_fu_11502_p2.read());
}

void matmul::thread_or_ln949_17_fu_11624_p2() {
    or_ln949_17_fu_11624_p2 = (and_ln949_8_fu_11618_p2.read() | and_ln947_8_fu_11595_p2.read());
}

void matmul::thread_or_ln949_18_fu_11717_p2() {
    or_ln949_18_fu_11717_p2 = (and_ln949_9_fu_11711_p2.read() | and_ln947_9_fu_11688_p2.read());
}

void matmul::thread_or_ln949_1_fu_10979_p3() {
    or_ln949_1_fu_10979_p3 = esl_concat<31,1>(ap_const_lv31_0, or_ln949_10_fu_10973_p2.read());
}

void matmul::thread_or_ln949_2_fu_11072_p3() {
    or_ln949_2_fu_11072_p3 = esl_concat<31,1>(ap_const_lv31_0, or_ln949_11_fu_11066_p2.read());
}

void matmul::thread_or_ln949_3_fu_11165_p3() {
    or_ln949_3_fu_11165_p3 = esl_concat<31,1>(ap_const_lv31_0, or_ln949_12_fu_11159_p2.read());
}

void matmul::thread_or_ln949_4_fu_11258_p3() {
    or_ln949_4_fu_11258_p3 = esl_concat<31,1>(ap_const_lv31_0, or_ln949_13_fu_11252_p2.read());
}

void matmul::thread_or_ln949_5_fu_11351_p3() {
    or_ln949_5_fu_11351_p3 = esl_concat<31,1>(ap_const_lv31_0, or_ln949_14_fu_11345_p2.read());
}

void matmul::thread_or_ln949_6_fu_11444_p3() {
    or_ln949_6_fu_11444_p3 = esl_concat<31,1>(ap_const_lv31_0, or_ln949_15_fu_11438_p2.read());
}

void matmul::thread_or_ln949_7_fu_11537_p3() {
    or_ln949_7_fu_11537_p3 = esl_concat<31,1>(ap_const_lv31_0, or_ln949_16_fu_11531_p2.read());
}

void matmul::thread_or_ln949_8_fu_11630_p3() {
    or_ln949_8_fu_11630_p3 = esl_concat<31,1>(ap_const_lv31_0, or_ln949_17_fu_11624_p2.read());
}

void matmul::thread_or_ln949_9_fu_11723_p3() {
    or_ln949_9_fu_11723_p3 = esl_concat<31,1>(ap_const_lv31_0, or_ln949_18_fu_11717_p2.read());
}

void matmul::thread_or_ln949_fu_10880_p2() {
    or_ln949_fu_10880_p2 = (and_ln949_fu_10874_p2.read() | and_ln947_fu_10851_p2.read());
}

void matmul::thread_or_ln_fu_10886_p3() {
    or_ln_fu_10886_p3 = esl_concat<31,1>(ap_const_lv31_0, or_ln949_fu_10880_p2.read());
}

void matmul::thread_p_Result_101_1_fu_9934_p3() {
    p_Result_101_1_fu_9934_p3 = esl_concat<17,15>(ap_const_lv17_1FFFF, p_Result_1_reg_16414.read());
}

void matmul::thread_p_Result_101_2_fu_9967_p3() {
    p_Result_101_2_fu_9967_p3 = esl_concat<17,15>(ap_const_lv17_1FFFF, p_Result_2_reg_16436.read());
}

void matmul::thread_p_Result_101_3_fu_10000_p3() {
    p_Result_101_3_fu_10000_p3 = esl_concat<17,15>(ap_const_lv17_1FFFF, p_Result_3_reg_16458.read());
}

void matmul::thread_p_Result_101_4_fu_10033_p3() {
    p_Result_101_4_fu_10033_p3 = esl_concat<17,15>(ap_const_lv17_1FFFF, p_Result_4_reg_16480.read());
}

void matmul::thread_p_Result_101_5_fu_10066_p3() {
    p_Result_101_5_fu_10066_p3 = esl_concat<17,15>(ap_const_lv17_1FFFF, p_Result_5_reg_16502.read());
}

void matmul::thread_p_Result_101_6_fu_10099_p3() {
    p_Result_101_6_fu_10099_p3 = esl_concat<17,15>(ap_const_lv17_1FFFF, p_Result_6_reg_16524.read());
}

void matmul::thread_p_Result_101_7_fu_10132_p3() {
    p_Result_101_7_fu_10132_p3 = esl_concat<17,15>(ap_const_lv17_1FFFF, p_Result_7_reg_16546.read());
}

void matmul::thread_p_Result_101_8_fu_10165_p3() {
    p_Result_101_8_fu_10165_p3 = esl_concat<17,15>(ap_const_lv17_1FFFF, p_Result_8_reg_16568.read());
}

void matmul::thread_p_Result_101_9_fu_10198_p3() {
    p_Result_101_9_fu_10198_p3 = esl_concat<17,15>(ap_const_lv17_1FFFF, p_Result_9_reg_16590.read());
}

void matmul::thread_p_Result_103_1_fu_11860_p5() {
    p_Result_103_1_fu_11860_p5 = esl_partset<32,32,9,32,32>(zext_ln962_1_fu_11832_p1.read(), tmp_1_fu_11853_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void matmul::thread_p_Result_103_2_fu_11911_p5() {
    p_Result_103_2_fu_11911_p5 = esl_partset<32,32,9,32,32>(zext_ln962_2_fu_11883_p1.read(), tmp_2_fu_11904_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void matmul::thread_p_Result_103_3_fu_11962_p5() {
    p_Result_103_3_fu_11962_p5 = esl_partset<32,32,9,32,32>(zext_ln962_3_fu_11934_p1.read(), tmp_3_fu_11955_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void matmul::thread_p_Result_103_4_fu_12013_p5() {
    p_Result_103_4_fu_12013_p5 = esl_partset<32,32,9,32,32>(zext_ln962_4_fu_11985_p1.read(), tmp_4_fu_12006_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void matmul::thread_p_Result_103_5_fu_12064_p5() {
    p_Result_103_5_fu_12064_p5 = esl_partset<32,32,9,32,32>(zext_ln962_5_fu_12036_p1.read(), tmp_5_fu_12057_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void matmul::thread_p_Result_103_6_fu_12115_p5() {
    p_Result_103_6_fu_12115_p5 = esl_partset<32,32,9,32,32>(zext_ln962_6_fu_12087_p1.read(), tmp_6_fu_12108_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void matmul::thread_p_Result_103_7_fu_12166_p5() {
    p_Result_103_7_fu_12166_p5 = esl_partset<32,32,9,32,32>(zext_ln962_7_fu_12138_p1.read(), tmp_7_fu_12159_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void matmul::thread_p_Result_103_8_fu_12217_p5() {
    p_Result_103_8_fu_12217_p5 = esl_partset<32,32,9,32,32>(zext_ln962_8_fu_12189_p1.read(), tmp_8_fu_12210_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void matmul::thread_p_Result_103_9_fu_12268_p5() {
    p_Result_103_9_fu_12268_p5 = esl_partset<32,32,9,32,32>(zext_ln962_9_fu_12240_p1.read(), tmp_9_fu_12261_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void matmul::thread_p_Result_10_fu_10868_p3() {
    p_Result_10_fu_10868_p3 = (!add_ln949_reg_16831.read().is_01() || sc_biguint<15>(add_ln949_reg_16831.read()).to_uint() >= 15)? sc_lv<1>(): select_ln938_reg_16385.read().range(sc_biguint<15>(add_ln949_reg_16831.read()).to_uint(), sc_biguint<15>(add_ln949_reg_16831.read()).to_uint());
}

void matmul::thread_p_Result_11_fu_11809_p5() {
    p_Result_11_fu_11809_p5 = esl_partset<32,32,9,32,32>(zext_ln962_fu_11781_p1.read(), tmp_s_fu_11802_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void matmul::thread_p_Result_1_fu_9419_p4() {
    p_Result_1_fu_9419_p4 = select_ln938_1_fu_9411_p3.read().range(0, 14);
}

void matmul::thread_p_Result_2_fu_9478_p4() {
    p_Result_2_fu_9478_p4 = select_ln938_2_fu_9470_p3.read().range(0, 14);
}

void matmul::thread_p_Result_3_fu_9537_p4() {
    p_Result_3_fu_9537_p4 = select_ln938_3_fu_9529_p3.read().range(0, 14);
}

void matmul::thread_p_Result_4_fu_9596_p4() {
    p_Result_4_fu_9596_p4 = select_ln938_4_fu_9588_p3.read().range(0, 14);
}

void matmul::thread_p_Result_5_fu_9655_p4() {
    p_Result_5_fu_9655_p4 = select_ln938_5_fu_9647_p3.read().range(0, 14);
}

void matmul::thread_p_Result_6_fu_9714_p4() {
    p_Result_6_fu_9714_p4 = select_ln938_6_fu_9706_p3.read().range(0, 14);
}

void matmul::thread_p_Result_7_fu_9773_p4() {
    p_Result_7_fu_9773_p4 = select_ln938_7_fu_9765_p3.read().range(0, 14);
}

void matmul::thread_p_Result_86_1_fu_10961_p3() {
    p_Result_86_1_fu_10961_p3 = (!add_ln949_1_reg_16862.read().is_01() || sc_biguint<15>(add_ln949_1_reg_16862.read()).to_uint() >= 15)? sc_lv<1>(): select_ln938_1_reg_16407.read().range(sc_biguint<15>(add_ln949_1_reg_16862.read()).to_uint(), sc_biguint<15>(add_ln949_1_reg_16862.read()).to_uint());
}

void matmul::thread_p_Result_86_2_fu_11054_p3() {
    p_Result_86_2_fu_11054_p3 = (!add_ln949_2_reg_16893.read().is_01() || sc_biguint<15>(add_ln949_2_reg_16893.read()).to_uint() >= 15)? sc_lv<1>(): select_ln938_2_reg_16429.read().range(sc_biguint<15>(add_ln949_2_reg_16893.read()).to_uint(), sc_biguint<15>(add_ln949_2_reg_16893.read()).to_uint());
}

void matmul::thread_p_Result_86_3_fu_11147_p3() {
    p_Result_86_3_fu_11147_p3 = (!add_ln949_3_reg_16924.read().is_01() || sc_biguint<15>(add_ln949_3_reg_16924.read()).to_uint() >= 15)? sc_lv<1>(): select_ln938_3_reg_16451.read().range(sc_biguint<15>(add_ln949_3_reg_16924.read()).to_uint(), sc_biguint<15>(add_ln949_3_reg_16924.read()).to_uint());
}

void matmul::thread_p_Result_86_4_fu_11240_p3() {
    p_Result_86_4_fu_11240_p3 = (!add_ln949_4_reg_16955.read().is_01() || sc_biguint<15>(add_ln949_4_reg_16955.read()).to_uint() >= 15)? sc_lv<1>(): select_ln938_4_reg_16473.read().range(sc_biguint<15>(add_ln949_4_reg_16955.read()).to_uint(), sc_biguint<15>(add_ln949_4_reg_16955.read()).to_uint());
}

void matmul::thread_p_Result_86_5_fu_11333_p3() {
    p_Result_86_5_fu_11333_p3 = (!add_ln949_5_reg_16986.read().is_01() || sc_biguint<15>(add_ln949_5_reg_16986.read()).to_uint() >= 15)? sc_lv<1>(): select_ln938_5_reg_16495.read().range(sc_biguint<15>(add_ln949_5_reg_16986.read()).to_uint(), sc_biguint<15>(add_ln949_5_reg_16986.read()).to_uint());
}

void matmul::thread_p_Result_86_6_fu_11426_p3() {
    p_Result_86_6_fu_11426_p3 = (!add_ln949_6_reg_17017.read().is_01() || sc_biguint<15>(add_ln949_6_reg_17017.read()).to_uint() >= 15)? sc_lv<1>(): select_ln938_6_reg_16517.read().range(sc_biguint<15>(add_ln949_6_reg_17017.read()).to_uint(), sc_biguint<15>(add_ln949_6_reg_17017.read()).to_uint());
}

void matmul::thread_p_Result_86_7_fu_11519_p3() {
    p_Result_86_7_fu_11519_p3 = (!add_ln949_7_reg_17048.read().is_01() || sc_biguint<15>(add_ln949_7_reg_17048.read()).to_uint() >= 15)? sc_lv<1>(): select_ln938_7_reg_16539.read().range(sc_biguint<15>(add_ln949_7_reg_17048.read()).to_uint(), sc_biguint<15>(add_ln949_7_reg_17048.read()).to_uint());
}

void matmul::thread_p_Result_86_8_fu_11612_p3() {
    p_Result_86_8_fu_11612_p3 = (!add_ln949_8_reg_17079.read().is_01() || sc_biguint<15>(add_ln949_8_reg_17079.read()).to_uint() >= 15)? sc_lv<1>(): select_ln938_8_reg_16561.read().range(sc_biguint<15>(add_ln949_8_reg_17079.read()).to_uint(), sc_biguint<15>(add_ln949_8_reg_17079.read()).to_uint());
}

void matmul::thread_p_Result_86_9_fu_11705_p3() {
    p_Result_86_9_fu_11705_p3 = (!add_ln949_9_reg_17110.read().is_01() || sc_biguint<15>(add_ln949_9_reg_17110.read()).to_uint() >= 15)? sc_lv<1>(): select_ln938_9_reg_16583.read().range(sc_biguint<15>(add_ln949_9_reg_17110.read()).to_uint(), sc_biguint<15>(add_ln949_9_reg_17110.read()).to_uint());
}

void matmul::thread_p_Result_8_fu_9832_p4() {
    p_Result_8_fu_9832_p4 = select_ln938_8_fu_9824_p3.read().range(0, 14);
}

void matmul::thread_p_Result_9_fu_9891_p4() {
    p_Result_9_fu_9891_p4 = select_ln938_9_fu_9883_p3.read().range(0, 14);
}

void matmul::thread_p_Result_s_34_fu_9901_p3() {
    p_Result_s_34_fu_9901_p3 = esl_concat<17,15>(ap_const_lv17_1FFFF, p_Result_s_reg_16392.read());
}

void matmul::thread_p_Result_s_fu_9360_p4() {
    p_Result_s_fu_9360_p4 = select_ln938_fu_9352_p3.read().range(0, 14);
}

void matmul::thread_select_ln340_164_fu_8495_p3() {
    select_ln340_164_fu_8495_p3 = (!xor_ln340_fu_8477_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_fu_8477_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_fu_8452_p2.read());
}

void matmul::thread_select_ln340_165_fu_8583_p3() {
    select_ln340_165_fu_8583_p3 = (!xor_ln340_275_fu_8565_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_275_fu_8565_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_189_fu_8540_p2.read());
}

void matmul::thread_select_ln340_166_fu_8671_p3() {
    select_ln340_166_fu_8671_p3 = (!xor_ln340_276_fu_8653_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_276_fu_8653_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_190_fu_8628_p2.read());
}

void matmul::thread_select_ln340_167_fu_8759_p3() {
    select_ln340_167_fu_8759_p3 = (!xor_ln340_277_fu_8741_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_277_fu_8741_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_191_fu_8716_p2.read());
}

void matmul::thread_select_ln340_168_fu_8847_p3() {
    select_ln340_168_fu_8847_p3 = (!xor_ln340_278_fu_8829_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_278_fu_8829_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_192_fu_8804_p2.read());
}

void matmul::thread_select_ln340_169_fu_8935_p3() {
    select_ln340_169_fu_8935_p3 = (!xor_ln340_279_fu_8917_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_279_fu_8917_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_193_fu_8892_p2.read());
}

void matmul::thread_select_ln340_170_fu_9023_p3() {
    select_ln340_170_fu_9023_p3 = (!xor_ln340_280_fu_9005_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_280_fu_9005_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_194_fu_8980_p2.read());
}

void matmul::thread_select_ln340_171_fu_9111_p3() {
    select_ln340_171_fu_9111_p3 = (!xor_ln340_281_fu_9093_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_281_fu_9093_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_195_fu_9068_p2.read());
}

void matmul::thread_select_ln340_172_fu_9199_p3() {
    select_ln340_172_fu_9199_p3 = (!xor_ln340_282_fu_9181_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_282_fu_9181_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_196_fu_9156_p2.read());
}

void matmul::thread_select_ln340_173_fu_9287_p3() {
    select_ln340_173_fu_9287_p3 = (!xor_ln340_283_fu_9269_p2.read()[0].is_01())? sc_lv<14>(): ((xor_ln340_283_fu_9269_p2.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln703_197_fu_9244_p2.read());
}

void matmul::thread_select_ln340_1_fu_8179_p3() {
    select_ln340_1_fu_8179_p3 = (!or_ln340_1_reg_16012.read()[0].is_01())? sc_lv<14>(): ((or_ln340_1_reg_16012.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln415_63_reg_15986.read());
}

void matmul::thread_select_ln340_2_fu_8208_p3() {
    select_ln340_2_fu_8208_p3 = (!or_ln340_2_reg_16043.read()[0].is_01())? sc_lv<14>(): ((or_ln340_2_reg_16043.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln415_64_reg_16017.read());
}

void matmul::thread_select_ln340_356_fu_8162_p3() {
    select_ln340_356_fu_8162_p3 = (!or_ln340_384_fu_8145_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_384_fu_8145_p2.read()[0].to_bool())? select_ln340_fu_8150_p3.read(): select_ln388_fu_8156_p3.read());
}

void matmul::thread_select_ln340_358_fu_8191_p3() {
    select_ln340_358_fu_8191_p3 = (!or_ln340_387_fu_8174_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_387_fu_8174_p2.read()[0].to_bool())? select_ln340_1_fu_8179_p3.read(): select_ln388_1_fu_8185_p3.read());
}

void matmul::thread_select_ln340_360_fu_8220_p3() {
    select_ln340_360_fu_8220_p3 = (!or_ln340_390_fu_8203_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_390_fu_8203_p2.read()[0].to_bool())? select_ln340_2_fu_8208_p3.read(): select_ln388_2_fu_8214_p3.read());
}

void matmul::thread_select_ln340_362_fu_8249_p3() {
    select_ln340_362_fu_8249_p3 = (!or_ln340_393_fu_8232_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_393_fu_8232_p2.read()[0].to_bool())? select_ln340_3_fu_8237_p3.read(): select_ln388_3_fu_8243_p3.read());
}

void matmul::thread_select_ln340_364_fu_8278_p3() {
    select_ln340_364_fu_8278_p3 = (!or_ln340_396_fu_8261_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_396_fu_8261_p2.read()[0].to_bool())? select_ln340_4_fu_8266_p3.read(): select_ln388_4_fu_8272_p3.read());
}

void matmul::thread_select_ln340_366_fu_8307_p3() {
    select_ln340_366_fu_8307_p3 = (!or_ln340_399_fu_8290_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_399_fu_8290_p2.read()[0].to_bool())? select_ln340_55_fu_8295_p3.read(): select_ln388_56_fu_8301_p3.read());
}

void matmul::thread_select_ln340_368_fu_8336_p3() {
    select_ln340_368_fu_8336_p3 = (!or_ln340_402_fu_8319_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_402_fu_8319_p2.read()[0].to_bool())? select_ln340_6_fu_8324_p3.read(): select_ln388_6_fu_8330_p3.read());
}

void matmul::thread_select_ln340_370_fu_8365_p3() {
    select_ln340_370_fu_8365_p3 = (!or_ln340_405_fu_8348_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_405_fu_8348_p2.read()[0].to_bool())? select_ln340_7_fu_8353_p3.read(): select_ln388_7_fu_8359_p3.read());
}

void matmul::thread_select_ln340_372_fu_8394_p3() {
    select_ln340_372_fu_8394_p3 = (!or_ln340_408_fu_8377_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_408_fu_8377_p2.read()[0].to_bool())? select_ln340_8_fu_8382_p3.read(): select_ln388_8_fu_8388_p3.read());
}

void matmul::thread_select_ln340_374_fu_8423_p3() {
    select_ln340_374_fu_8423_p3 = (!or_ln340_411_fu_8406_p2.read()[0].is_01())? sc_lv<14>(): ((or_ln340_411_fu_8406_p2.read()[0].to_bool())? select_ln340_9_fu_8411_p3.read(): select_ln388_9_fu_8417_p3.read());
}

void matmul::thread_select_ln340_3_fu_8237_p3() {
    select_ln340_3_fu_8237_p3 = (!or_ln340_3_reg_16074.read()[0].is_01())? sc_lv<14>(): ((or_ln340_3_reg_16074.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln415_65_reg_16048.read());
}

void matmul::thread_select_ln340_4_fu_8266_p3() {
    select_ln340_4_fu_8266_p3 = (!or_ln340_4_reg_16105.read()[0].is_01())? sc_lv<14>(): ((or_ln340_4_reg_16105.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln415_66_reg_16079.read());
}

void matmul::thread_select_ln340_55_fu_8295_p3() {
    select_ln340_55_fu_8295_p3 = (!or_ln340_5_reg_16136.read()[0].is_01())? sc_lv<14>(): ((or_ln340_5_reg_16136.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln415_67_reg_16110.read());
}

void matmul::thread_select_ln340_6_fu_8324_p3() {
    select_ln340_6_fu_8324_p3 = (!or_ln340_6_reg_16167.read()[0].is_01())? sc_lv<14>(): ((or_ln340_6_reg_16167.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln415_68_reg_16141.read());
}

void matmul::thread_select_ln340_7_fu_8353_p3() {
    select_ln340_7_fu_8353_p3 = (!or_ln340_7_reg_16198.read()[0].is_01())? sc_lv<14>(): ((or_ln340_7_reg_16198.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln415_69_reg_16172.read());
}

void matmul::thread_select_ln340_8_fu_8382_p3() {
    select_ln340_8_fu_8382_p3 = (!or_ln340_8_reg_16229.read()[0].is_01())? sc_lv<14>(): ((or_ln340_8_reg_16229.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln415_70_reg_16203.read());
}

void matmul::thread_select_ln340_9_fu_8411_p3() {
    select_ln340_9_fu_8411_p3 = (!or_ln340_9_reg_16260.read()[0].is_01())? sc_lv<14>(): ((or_ln340_9_reg_16260.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln415_71_reg_16234.read());
}

void matmul::thread_select_ln340_fu_8150_p3() {
    select_ln340_fu_8150_p3 = (!or_ln340_reg_15981.read()[0].is_01())? sc_lv<14>(): ((or_ln340_reg_15981.read()[0].to_bool())? ap_const_lv14_1FFF: add_ln415_reg_15955.read());
}

void matmul::thread_select_ln388_163_fu_8503_p3() {
    select_ln388_163_fu_8503_p3 = (!and_ln786_290_fu_8471_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_290_fu_8471_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_fu_8452_p2.read());
}

void matmul::thread_select_ln388_164_fu_8591_p3() {
    select_ln388_164_fu_8591_p3 = (!and_ln786_292_fu_8559_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_292_fu_8559_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_189_fu_8540_p2.read());
}

void matmul::thread_select_ln388_165_fu_8679_p3() {
    select_ln388_165_fu_8679_p3 = (!and_ln786_294_fu_8647_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_294_fu_8647_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_190_fu_8628_p2.read());
}

void matmul::thread_select_ln388_166_fu_8767_p3() {
    select_ln388_166_fu_8767_p3 = (!and_ln786_296_fu_8735_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_296_fu_8735_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_191_fu_8716_p2.read());
}

void matmul::thread_select_ln388_167_fu_8855_p3() {
    select_ln388_167_fu_8855_p3 = (!and_ln786_298_fu_8823_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_298_fu_8823_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_192_fu_8804_p2.read());
}

void matmul::thread_select_ln388_168_fu_8943_p3() {
    select_ln388_168_fu_8943_p3 = (!and_ln786_300_fu_8911_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_300_fu_8911_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_193_fu_8892_p2.read());
}

void matmul::thread_select_ln388_169_fu_9031_p3() {
    select_ln388_169_fu_9031_p3 = (!and_ln786_302_fu_8999_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_302_fu_8999_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_194_fu_8980_p2.read());
}

void matmul::thread_select_ln388_170_fu_9119_p3() {
    select_ln388_170_fu_9119_p3 = (!and_ln786_304_fu_9087_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_304_fu_9087_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_195_fu_9068_p2.read());
}

void matmul::thread_select_ln388_171_fu_9207_p3() {
    select_ln388_171_fu_9207_p3 = (!and_ln786_306_fu_9175_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_306_fu_9175_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_196_fu_9156_p2.read());
}

void matmul::thread_select_ln388_172_fu_9295_p3() {
    select_ln388_172_fu_9295_p3 = (!and_ln786_308_fu_9263_p2.read()[0].is_01())? sc_lv<14>(): ((and_ln786_308_fu_9263_p2.read()[0].to_bool())? ap_const_lv14_2000: add_ln703_197_fu_9244_p2.read());
}

void matmul::thread_select_ln388_1_fu_8185_p3() {
    select_ln388_1_fu_8185_p3 = (!and_ln786_291_reg_16007.read()[0].is_01())? sc_lv<14>(): ((and_ln786_291_reg_16007.read()[0].to_bool())? ap_const_lv14_2000: add_ln415_63_reg_15986.read());
}

void matmul::thread_select_ln388_2_fu_8214_p3() {
    select_ln388_2_fu_8214_p3 = (!and_ln786_293_reg_16038.read()[0].is_01())? sc_lv<14>(): ((and_ln786_293_reg_16038.read()[0].to_bool())? ap_const_lv14_2000: add_ln415_64_reg_16017.read());
}

void matmul::thread_select_ln388_3_fu_8243_p3() {
    select_ln388_3_fu_8243_p3 = (!and_ln786_295_reg_16069.read()[0].is_01())? sc_lv<14>(): ((and_ln786_295_reg_16069.read()[0].to_bool())? ap_const_lv14_2000: add_ln415_65_reg_16048.read());
}

void matmul::thread_select_ln388_4_fu_8272_p3() {
    select_ln388_4_fu_8272_p3 = (!and_ln786_297_reg_16100.read()[0].is_01())? sc_lv<14>(): ((and_ln786_297_reg_16100.read()[0].to_bool())? ap_const_lv14_2000: add_ln415_66_reg_16079.read());
}

void matmul::thread_select_ln388_56_fu_8301_p3() {
    select_ln388_56_fu_8301_p3 = (!and_ln786_299_reg_16131.read()[0].is_01())? sc_lv<14>(): ((and_ln786_299_reg_16131.read()[0].to_bool())? ap_const_lv14_2000: add_ln415_67_reg_16110.read());
}

void matmul::thread_select_ln388_6_fu_8330_p3() {
    select_ln388_6_fu_8330_p3 = (!and_ln786_301_reg_16162.read()[0].is_01())? sc_lv<14>(): ((and_ln786_301_reg_16162.read()[0].to_bool())? ap_const_lv14_2000: add_ln415_68_reg_16141.read());
}

void matmul::thread_select_ln388_7_fu_8359_p3() {
    select_ln388_7_fu_8359_p3 = (!and_ln786_303_reg_16193.read()[0].is_01())? sc_lv<14>(): ((and_ln786_303_reg_16193.read()[0].to_bool())? ap_const_lv14_2000: add_ln415_69_reg_16172.read());
}

void matmul::thread_select_ln388_8_fu_8388_p3() {
    select_ln388_8_fu_8388_p3 = (!and_ln786_305_reg_16224.read()[0].is_01())? sc_lv<14>(): ((and_ln786_305_reg_16224.read()[0].to_bool())? ap_const_lv14_2000: add_ln415_70_reg_16203.read());
}

void matmul::thread_select_ln388_9_fu_8417_p3() {
    select_ln388_9_fu_8417_p3 = (!and_ln786_307_reg_16255.read()[0].is_01())? sc_lv<14>(): ((and_ln786_307_reg_16255.read()[0].to_bool())? ap_const_lv14_2000: add_ln415_71_reg_16234.read());
}

void matmul::thread_select_ln388_fu_8156_p3() {
    select_ln388_fu_8156_p3 = (!and_ln786_289_reg_15976.read()[0].is_01())? sc_lv<14>(): ((and_ln786_289_reg_15976.read()[0].to_bool())? ap_const_lv14_2000: add_ln415_reg_15955.read());
}

void matmul::thread_select_ln416_63_fu_6683_p3() {
    select_ln416_63_fu_6683_p3 = (!and_ln416_63_fu_6614_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_63_fu_6614_p2.read()[0].to_bool())? and_ln779_1_fu_6677_p2.read(): icmp_ln879_127_fu_6644_p2.read());
}

void matmul::thread_select_ln416_64_fu_6857_p3() {
    select_ln416_64_fu_6857_p3 = (!and_ln416_64_fu_6788_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_64_fu_6788_p2.read()[0].to_bool())? and_ln779_2_fu_6851_p2.read(): icmp_ln879_128_fu_6818_p2.read());
}

void matmul::thread_select_ln416_65_fu_7031_p3() {
    select_ln416_65_fu_7031_p3 = (!and_ln416_65_fu_6962_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_65_fu_6962_p2.read()[0].to_bool())? and_ln779_3_fu_7025_p2.read(): icmp_ln879_129_fu_6992_p2.read());
}

void matmul::thread_select_ln416_66_fu_7205_p3() {
    select_ln416_66_fu_7205_p3 = (!and_ln416_66_fu_7136_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_66_fu_7136_p2.read()[0].to_bool())? and_ln779_4_fu_7199_p2.read(): icmp_ln879_130_fu_7166_p2.read());
}

void matmul::thread_select_ln416_67_fu_7379_p3() {
    select_ln416_67_fu_7379_p3 = (!and_ln416_67_fu_7310_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_67_fu_7310_p2.read()[0].to_bool())? and_ln779_5_fu_7373_p2.read(): icmp_ln879_131_fu_7340_p2.read());
}

void matmul::thread_select_ln416_68_fu_7553_p3() {
    select_ln416_68_fu_7553_p3 = (!and_ln416_68_fu_7484_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_68_fu_7484_p2.read()[0].to_bool())? and_ln779_6_fu_7547_p2.read(): icmp_ln879_132_fu_7514_p2.read());
}

void matmul::thread_select_ln416_69_fu_7727_p3() {
    select_ln416_69_fu_7727_p3 = (!and_ln416_69_fu_7658_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_69_fu_7658_p2.read()[0].to_bool())? and_ln779_7_fu_7721_p2.read(): icmp_ln879_133_fu_7688_p2.read());
}

void matmul::thread_select_ln416_70_fu_7901_p3() {
    select_ln416_70_fu_7901_p3 = (!and_ln416_70_fu_7832_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_70_fu_7832_p2.read()[0].to_bool())? and_ln779_8_fu_7895_p2.read(): icmp_ln879_134_fu_7862_p2.read());
}

void matmul::thread_select_ln416_71_fu_8075_p3() {
    select_ln416_71_fu_8075_p3 = (!and_ln416_71_fu_8006_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_71_fu_8006_p2.read()[0].to_bool())? and_ln779_9_fu_8069_p2.read(): icmp_ln879_135_fu_8036_p2.read());
}

void matmul::thread_select_ln416_fu_6509_p3() {
    select_ln416_fu_6509_p3 = (!and_ln416_fu_6440_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_fu_6440_p2.read()[0].to_bool())? and_ln779_fu_6503_p2.read(): icmp_ln879_fu_6470_p2.read());
}

void matmul::thread_select_ln777_63_fu_6656_p3() {
    select_ln777_63_fu_6656_p3 = (!and_ln416_63_fu_6614_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_63_fu_6614_p2.read()[0].to_bool())? icmp_ln879_127_fu_6644_p2.read(): icmp_ln768_63_fu_6650_p2.read());
}

void matmul::thread_select_ln777_64_fu_6830_p3() {
    select_ln777_64_fu_6830_p3 = (!and_ln416_64_fu_6788_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_64_fu_6788_p2.read()[0].to_bool())? icmp_ln879_128_fu_6818_p2.read(): icmp_ln768_64_fu_6824_p2.read());
}

void matmul::thread_select_ln777_65_fu_7004_p3() {
    select_ln777_65_fu_7004_p3 = (!and_ln416_65_fu_6962_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_65_fu_6962_p2.read()[0].to_bool())? icmp_ln879_129_fu_6992_p2.read(): icmp_ln768_65_fu_6998_p2.read());
}

void matmul::thread_select_ln777_66_fu_7178_p3() {
    select_ln777_66_fu_7178_p3 = (!and_ln416_66_fu_7136_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_66_fu_7136_p2.read()[0].to_bool())? icmp_ln879_130_fu_7166_p2.read(): icmp_ln768_66_fu_7172_p2.read());
}

void matmul::thread_select_ln777_67_fu_7352_p3() {
    select_ln777_67_fu_7352_p3 = (!and_ln416_67_fu_7310_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_67_fu_7310_p2.read()[0].to_bool())? icmp_ln879_131_fu_7340_p2.read(): icmp_ln768_67_fu_7346_p2.read());
}

void matmul::thread_select_ln777_68_fu_7526_p3() {
    select_ln777_68_fu_7526_p3 = (!and_ln416_68_fu_7484_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_68_fu_7484_p2.read()[0].to_bool())? icmp_ln879_132_fu_7514_p2.read(): icmp_ln768_68_fu_7520_p2.read());
}

void matmul::thread_select_ln777_69_fu_7700_p3() {
    select_ln777_69_fu_7700_p3 = (!and_ln416_69_fu_7658_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_69_fu_7658_p2.read()[0].to_bool())? icmp_ln879_133_fu_7688_p2.read(): icmp_ln768_69_fu_7694_p2.read());
}

void matmul::thread_select_ln777_70_fu_7874_p3() {
    select_ln777_70_fu_7874_p3 = (!and_ln416_70_fu_7832_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_70_fu_7832_p2.read()[0].to_bool())? icmp_ln879_134_fu_7862_p2.read(): icmp_ln768_70_fu_7868_p2.read());
}

void matmul::thread_select_ln777_71_fu_8048_p3() {
    select_ln777_71_fu_8048_p3 = (!and_ln416_71_fu_8006_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_71_fu_8006_p2.read()[0].to_bool())? icmp_ln879_135_fu_8036_p2.read(): icmp_ln768_71_fu_8042_p2.read());
}

void matmul::thread_select_ln777_fu_6482_p3() {
    select_ln777_fu_6482_p3 = (!and_ln416_fu_6440_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln416_fu_6440_p2.read()[0].to_bool())? icmp_ln879_fu_6470_p2.read(): icmp_ln768_fu_6476_p2.read());
}

void matmul::thread_select_ln935_1_fu_11876_p3() {
    select_ln935_1_fu_11876_p3 = (!icmp_ln935_1_reg_16397.read()[0].is_01())? sc_lv<32>(): ((icmp_ln935_1_reg_16397.read()[0].to_bool())? ap_const_lv32_0: bitcast_ln739_1_fu_11872_p1.read());
}

void matmul::thread_select_ln935_2_fu_11927_p3() {
    select_ln935_2_fu_11927_p3 = (!icmp_ln935_2_reg_16419.read()[0].is_01())? sc_lv<32>(): ((icmp_ln935_2_reg_16419.read()[0].to_bool())? ap_const_lv32_0: bitcast_ln739_2_fu_11923_p1.read());
}

void matmul::thread_select_ln935_3_fu_11978_p3() {
    select_ln935_3_fu_11978_p3 = (!icmp_ln935_3_reg_16441.read()[0].is_01())? sc_lv<32>(): ((icmp_ln935_3_reg_16441.read()[0].to_bool())? ap_const_lv32_0: bitcast_ln739_3_fu_11974_p1.read());
}

void matmul::thread_select_ln935_4_fu_12029_p3() {
    select_ln935_4_fu_12029_p3 = (!icmp_ln935_4_reg_16463.read()[0].is_01())? sc_lv<32>(): ((icmp_ln935_4_reg_16463.read()[0].to_bool())? ap_const_lv32_0: bitcast_ln739_4_fu_12025_p1.read());
}

void matmul::thread_select_ln935_5_fu_12080_p3() {
    select_ln935_5_fu_12080_p3 = (!icmp_ln935_5_reg_16485.read()[0].is_01())? sc_lv<32>(): ((icmp_ln935_5_reg_16485.read()[0].to_bool())? ap_const_lv32_0: bitcast_ln739_5_fu_12076_p1.read());
}

void matmul::thread_select_ln935_6_fu_12131_p3() {
    select_ln935_6_fu_12131_p3 = (!icmp_ln935_6_reg_16507.read()[0].is_01())? sc_lv<32>(): ((icmp_ln935_6_reg_16507.read()[0].to_bool())? ap_const_lv32_0: bitcast_ln739_6_fu_12127_p1.read());
}

void matmul::thread_select_ln935_7_fu_12182_p3() {
    select_ln935_7_fu_12182_p3 = (!icmp_ln935_7_reg_16529.read()[0].is_01())? sc_lv<32>(): ((icmp_ln935_7_reg_16529.read()[0].to_bool())? ap_const_lv32_0: bitcast_ln739_7_fu_12178_p1.read());
}

void matmul::thread_select_ln935_8_fu_12233_p3() {
    select_ln935_8_fu_12233_p3 = (!icmp_ln935_8_reg_16551.read()[0].is_01())? sc_lv<32>(): ((icmp_ln935_8_reg_16551.read()[0].to_bool())? ap_const_lv32_0: bitcast_ln739_8_fu_12229_p1.read());
}

void matmul::thread_select_ln935_9_fu_12284_p3() {
    select_ln935_9_fu_12284_p3 = (!icmp_ln935_9_reg_16573.read()[0].is_01())? sc_lv<32>(): ((icmp_ln935_9_reg_16573.read()[0].to_bool())? ap_const_lv32_0: bitcast_ln739_9_fu_12280_p1.read());
}

void matmul::thread_select_ln935_fu_11825_p3() {
    select_ln935_fu_11825_p3 = (!icmp_ln935_reg_16375.read()[0].is_01())? sc_lv<32>(): ((icmp_ln935_reg_16375.read()[0].to_bool())? ap_const_lv32_0: bitcast_ln739_fu_11821_p1.read());
}

void matmul::thread_select_ln938_1_fu_9411_p3() {
    select_ln938_1_fu_9411_p3 = (!tmp_841_fu_9397_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_841_fu_9397_p3.read()[0].to_bool())? sub_ln939_1_fu_9405_p2.read(): add_ln1192_192_fu_9385_p2.read());
}

void matmul::thread_select_ln938_2_fu_9470_p3() {
    select_ln938_2_fu_9470_p3 = (!tmp_845_fu_9456_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_845_fu_9456_p3.read()[0].to_bool())? sub_ln939_2_fu_9464_p2.read(): add_ln1192_194_fu_9444_p2.read());
}

void matmul::thread_select_ln938_3_fu_9529_p3() {
    select_ln938_3_fu_9529_p3 = (!tmp_849_fu_9515_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_849_fu_9515_p3.read()[0].to_bool())? sub_ln939_3_fu_9523_p2.read(): add_ln1192_195_fu_9503_p2.read());
}

void matmul::thread_select_ln938_4_fu_9588_p3() {
    select_ln938_4_fu_9588_p3 = (!tmp_853_fu_9574_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_853_fu_9574_p3.read()[0].to_bool())? sub_ln939_4_fu_9582_p2.read(): add_ln1192_197_fu_9562_p2.read());
}

void matmul::thread_select_ln938_5_fu_9647_p3() {
    select_ln938_5_fu_9647_p3 = (!tmp_857_fu_9633_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_857_fu_9633_p3.read()[0].to_bool())? sub_ln939_5_fu_9641_p2.read(): add_ln1192_199_fu_9621_p2.read());
}

void matmul::thread_select_ln938_6_fu_9706_p3() {
    select_ln938_6_fu_9706_p3 = (!tmp_861_fu_9692_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_861_fu_9692_p3.read()[0].to_bool())? sub_ln939_6_fu_9700_p2.read(): add_ln1192_201_fu_9680_p2.read());
}

void matmul::thread_select_ln938_7_fu_9765_p3() {
    select_ln938_7_fu_9765_p3 = (!tmp_865_fu_9751_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_865_fu_9751_p3.read()[0].to_bool())? sub_ln939_7_fu_9759_p2.read(): add_ln1192_203_fu_9739_p2.read());
}

void matmul::thread_select_ln938_8_fu_9824_p3() {
    select_ln938_8_fu_9824_p3 = (!tmp_869_fu_9810_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_869_fu_9810_p3.read()[0].to_bool())? sub_ln939_8_fu_9818_p2.read(): add_ln1192_205_fu_9798_p2.read());
}

void matmul::thread_select_ln938_9_fu_9883_p3() {
    select_ln938_9_fu_9883_p3 = (!tmp_873_fu_9869_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_873_fu_9869_p3.read()[0].to_bool())? sub_ln939_9_fu_9877_p2.read(): add_ln1192_207_fu_9857_p2.read());
}

void matmul::thread_select_ln938_fu_9352_p3() {
    select_ln938_fu_9352_p3 = (!tmp_837_fu_9338_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_837_fu_9338_p3.read()[0].to_bool())? sub_ln939_fu_9346_p2.read(): add_ln1192_fu_9326_p2.read());
}

void matmul::thread_select_ln958_1_fu_11005_p3() {
    select_ln958_1_fu_11005_p3 = (!icmp_ln958_1_fu_10990_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln958_1_fu_10990_p2.read()[0].to_bool())? lshr_ln958_1_fu_10995_p2.read(): shl_ln958_1_fu_11000_p2.read());
}

void matmul::thread_select_ln958_2_fu_11098_p3() {
    select_ln958_2_fu_11098_p3 = (!icmp_ln958_2_fu_11083_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln958_2_fu_11083_p2.read()[0].to_bool())? lshr_ln958_2_fu_11088_p2.read(): shl_ln958_2_fu_11093_p2.read());
}

void matmul::thread_select_ln958_3_fu_11191_p3() {
    select_ln958_3_fu_11191_p3 = (!icmp_ln958_3_fu_11176_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln958_3_fu_11176_p2.read()[0].to_bool())? lshr_ln958_3_fu_11181_p2.read(): shl_ln958_3_fu_11186_p2.read());
}

void matmul::thread_select_ln958_4_fu_11284_p3() {
    select_ln958_4_fu_11284_p3 = (!icmp_ln958_4_fu_11269_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln958_4_fu_11269_p2.read()[0].to_bool())? lshr_ln958_4_fu_11274_p2.read(): shl_ln958_4_fu_11279_p2.read());
}

void matmul::thread_select_ln958_5_fu_11377_p3() {
    select_ln958_5_fu_11377_p3 = (!icmp_ln958_5_fu_11362_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln958_5_fu_11362_p2.read()[0].to_bool())? lshr_ln958_5_fu_11367_p2.read(): shl_ln958_5_fu_11372_p2.read());
}

void matmul::thread_select_ln958_6_fu_11470_p3() {
    select_ln958_6_fu_11470_p3 = (!icmp_ln958_6_fu_11455_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln958_6_fu_11455_p2.read()[0].to_bool())? lshr_ln958_6_fu_11460_p2.read(): shl_ln958_6_fu_11465_p2.read());
}

void matmul::thread_select_ln958_7_fu_11563_p3() {
    select_ln958_7_fu_11563_p3 = (!icmp_ln958_7_fu_11548_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln958_7_fu_11548_p2.read()[0].to_bool())? lshr_ln958_7_fu_11553_p2.read(): shl_ln958_7_fu_11558_p2.read());
}

void matmul::thread_select_ln958_8_fu_11656_p3() {
    select_ln958_8_fu_11656_p3 = (!icmp_ln958_8_fu_11641_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln958_8_fu_11641_p2.read()[0].to_bool())? lshr_ln958_8_fu_11646_p2.read(): shl_ln958_8_fu_11651_p2.read());
}

void matmul::thread_select_ln958_9_fu_11749_p3() {
    select_ln958_9_fu_11749_p3 = (!icmp_ln958_9_fu_11734_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln958_9_fu_11734_p2.read()[0].to_bool())? lshr_ln958_9_fu_11739_p2.read(): shl_ln958_9_fu_11744_p2.read());
}

void matmul::thread_select_ln958_fu_10912_p3() {
    select_ln958_fu_10912_p3 = (!icmp_ln958_fu_10897_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln958_fu_10897_p2.read()[0].to_bool())? lshr_ln958_fu_10902_p2.read(): shl_ln958_fu_10907_p2.read());
}

void matmul::thread_select_ln964_1_fu_11835_p3() {
    select_ln964_1_fu_11835_p3 = (!tmp_844_reg_17140.read()[0].is_01())? sc_lv<8>(): ((tmp_844_reg_17140.read()[0].to_bool())? ap_const_lv8_7F: ap_const_lv8_7E);
}

void matmul::thread_select_ln964_2_fu_11886_p3() {
    select_ln964_2_fu_11886_p3 = (!tmp_848_reg_17150.read()[0].is_01())? sc_lv<8>(): ((tmp_848_reg_17150.read()[0].to_bool())? ap_const_lv8_7F: ap_const_lv8_7E);
}

void matmul::thread_select_ln964_3_fu_11937_p3() {
    select_ln964_3_fu_11937_p3 = (!tmp_852_reg_17160.read()[0].is_01())? sc_lv<8>(): ((tmp_852_reg_17160.read()[0].to_bool())? ap_const_lv8_7F: ap_const_lv8_7E);
}

void matmul::thread_select_ln964_4_fu_11988_p3() {
    select_ln964_4_fu_11988_p3 = (!tmp_856_reg_17170.read()[0].is_01())? sc_lv<8>(): ((tmp_856_reg_17170.read()[0].to_bool())? ap_const_lv8_7F: ap_const_lv8_7E);
}

void matmul::thread_select_ln964_5_fu_12039_p3() {
    select_ln964_5_fu_12039_p3 = (!tmp_860_reg_17180.read()[0].is_01())? sc_lv<8>(): ((tmp_860_reg_17180.read()[0].to_bool())? ap_const_lv8_7F: ap_const_lv8_7E);
}

void matmul::thread_select_ln964_6_fu_12090_p3() {
    select_ln964_6_fu_12090_p3 = (!tmp_864_reg_17190.read()[0].is_01())? sc_lv<8>(): ((tmp_864_reg_17190.read()[0].to_bool())? ap_const_lv8_7F: ap_const_lv8_7E);
}

void matmul::thread_select_ln964_7_fu_12141_p3() {
    select_ln964_7_fu_12141_p3 = (!tmp_868_reg_17200.read()[0].is_01())? sc_lv<8>(): ((tmp_868_reg_17200.read()[0].to_bool())? ap_const_lv8_7F: ap_const_lv8_7E);
}

void matmul::thread_select_ln964_8_fu_12192_p3() {
    select_ln964_8_fu_12192_p3 = (!tmp_872_reg_17210.read()[0].is_01())? sc_lv<8>(): ((tmp_872_reg_17210.read()[0].to_bool())? ap_const_lv8_7F: ap_const_lv8_7E);
}

void matmul::thread_select_ln964_9_fu_12243_p3() {
    select_ln964_9_fu_12243_p3 = (!tmp_876_reg_17220.read()[0].is_01())? sc_lv<8>(): ((tmp_876_reg_17220.read()[0].to_bool())? ap_const_lv8_7F: ap_const_lv8_7E);
}

void matmul::thread_select_ln964_fu_11784_p3() {
    select_ln964_fu_11784_p3 = (!tmp_840_reg_17130.read()[0].is_01())? sc_lv<8>(): ((tmp_840_reg_17130.read()[0].to_bool())? ap_const_lv8_7F: ap_const_lv8_7E);
}

void matmul::thread_sext_ln35_fu_6228_p1() {
    sext_ln35_fu_6228_p1 = esl_sext<23,12>(bottom_V_load_reg_15750.read());
}

void matmul::thread_sext_ln703_253_fu_8431_p1() {
    sext_ln703_253_fu_8431_p1 = esl_sext<15,14>(buf_V_0_010_reg_5355.read());
}

void matmul::thread_sext_ln703_254_fu_8435_p1() {
    sext_ln703_254_fu_8435_p1 = esl_sext<15,14>(select_ln340_356_reg_16265.read());
}

void matmul::thread_sext_ln703_255_fu_9370_p1() {
    sext_ln703_255_fu_9370_p1 = esl_sext<15,14>(buf_V_1_09_reg_5367.read());
}

void matmul::thread_sext_ln703_256_fu_8519_p1() {
    sext_ln703_256_fu_8519_p1 = esl_sext<15,14>(buf_V_1_09_reg_5367.read());
}

void matmul::thread_sext_ln703_257_fu_8523_p1() {
    sext_ln703_257_fu_8523_p1 = esl_sext<15,14>(select_ln340_358_reg_16271.read());
}

void matmul::thread_sext_ln703_258_fu_9429_p1() {
    sext_ln703_258_fu_9429_p1 = esl_sext<15,14>(buf_V_2_08_reg_5379.read());
}

void matmul::thread_sext_ln703_259_fu_9488_p1() {
    sext_ln703_259_fu_9488_p1 = esl_sext<15,14>(buf_V_3_07_reg_5391.read());
}

void matmul::thread_sext_ln703_260_fu_8607_p1() {
    sext_ln703_260_fu_8607_p1 = esl_sext<15,14>(buf_V_2_08_reg_5379.read());
}

void matmul::thread_sext_ln703_261_fu_8611_p1() {
    sext_ln703_261_fu_8611_p1 = esl_sext<15,14>(select_ln340_360_reg_16277.read());
}

void matmul::thread_sext_ln703_262_fu_9547_p1() {
    sext_ln703_262_fu_9547_p1 = esl_sext<15,14>(buf_V_4_06_reg_5403.read());
}

void matmul::thread_sext_ln703_263_fu_8695_p1() {
    sext_ln703_263_fu_8695_p1 = esl_sext<15,14>(buf_V_3_07_reg_5391.read());
}

void matmul::thread_sext_ln703_264_fu_8699_p1() {
    sext_ln703_264_fu_8699_p1 = esl_sext<15,14>(select_ln340_362_reg_16283.read());
}

void matmul::thread_sext_ln703_265_fu_9606_p1() {
    sext_ln703_265_fu_9606_p1 = esl_sext<15,14>(buf_V_5_05_reg_5415.read());
}

void matmul::thread_sext_ln703_266_fu_8783_p1() {
    sext_ln703_266_fu_8783_p1 = esl_sext<15,14>(buf_V_4_06_reg_5403.read());
}

void matmul::thread_sext_ln703_267_fu_8787_p1() {
    sext_ln703_267_fu_8787_p1 = esl_sext<15,14>(select_ln340_364_reg_16289.read());
}

void matmul::thread_sext_ln703_268_fu_9665_p1() {
    sext_ln703_268_fu_9665_p1 = esl_sext<15,14>(buf_V_6_04_reg_5427.read());
}

void matmul::thread_sext_ln703_269_fu_8871_p1() {
    sext_ln703_269_fu_8871_p1 = esl_sext<15,14>(buf_V_5_05_reg_5415.read());
}

void matmul::thread_sext_ln703_270_fu_8875_p1() {
    sext_ln703_270_fu_8875_p1 = esl_sext<15,14>(select_ln340_366_reg_16295.read());
}

void matmul::thread_sext_ln703_271_fu_9724_p1() {
    sext_ln703_271_fu_9724_p1 = esl_sext<15,14>(buf_V_7_03_reg_5439.read());
}

void matmul::thread_sext_ln703_272_fu_8959_p1() {
    sext_ln703_272_fu_8959_p1 = esl_sext<15,14>(buf_V_6_04_reg_5427.read());
}

void matmul::thread_sext_ln703_273_fu_8963_p1() {
    sext_ln703_273_fu_8963_p1 = esl_sext<15,14>(select_ln340_368_reg_16301.read());
}

void matmul::thread_sext_ln703_274_fu_9783_p1() {
    sext_ln703_274_fu_9783_p1 = esl_sext<15,14>(buf_V_8_02_reg_5451.read());
}

void matmul::thread_sext_ln703_275_fu_9047_p1() {
    sext_ln703_275_fu_9047_p1 = esl_sext<15,14>(buf_V_7_03_reg_5439.read());
}

void matmul::thread_sext_ln703_276_fu_9051_p1() {
    sext_ln703_276_fu_9051_p1 = esl_sext<15,14>(select_ln340_370_reg_16307.read());
}

void matmul::thread_sext_ln703_277_fu_9842_p1() {
    sext_ln703_277_fu_9842_p1 = esl_sext<15,14>(buf_V_9_01_reg_5463.read());
}

void matmul::thread_sext_ln703_278_fu_9135_p1() {
    sext_ln703_278_fu_9135_p1 = esl_sext<15,14>(buf_V_8_02_reg_5451.read());
}

void matmul::thread_sext_ln703_279_fu_9139_p1() {
    sext_ln703_279_fu_9139_p1 = esl_sext<15,14>(select_ln340_372_reg_16313.read());
}

void matmul::thread_sext_ln703_280_fu_9223_p1() {
    sext_ln703_280_fu_9223_p1 = esl_sext<15,14>(buf_V_9_01_reg_5463.read());
}

void matmul::thread_sext_ln703_281_fu_9227_p1() {
    sext_ln703_281_fu_9227_p1 = esl_sext<15,14>(select_ln340_374_reg_16319.read());
}

void matmul::thread_sext_ln703_fu_9311_p1() {
    sext_ln703_fu_9311_p1 = esl_sext<15,14>(buf_V_0_010_reg_5355.read());
}

void matmul::thread_shl_ln728_125_fu_9433_p3() {
    shl_ln728_125_fu_9433_p3 = esl_concat<10,1>(bias_2_V_read.read(), ap_const_lv1_0);
}

void matmul::thread_shl_ln728_126_fu_9492_p3() {
    shl_ln728_126_fu_9492_p3 = esl_concat<10,1>(bias_3_V_read.read(), ap_const_lv1_0);
}

void matmul::thread_shl_ln728_127_fu_9551_p3() {
    shl_ln728_127_fu_9551_p3 = esl_concat<10,1>(bias_4_V_read.read(), ap_const_lv1_0);
}

void matmul::thread_shl_ln728_128_fu_9610_p3() {
    shl_ln728_128_fu_9610_p3 = esl_concat<10,1>(bias_5_V_read.read(), ap_const_lv1_0);
}

void matmul::thread_shl_ln728_129_fu_9669_p3() {
    shl_ln728_129_fu_9669_p3 = esl_concat<10,1>(bias_6_V_read.read(), ap_const_lv1_0);
}

void matmul::thread_shl_ln728_130_fu_9728_p3() {
    shl_ln728_130_fu_9728_p3 = esl_concat<10,1>(bias_7_V_read.read(), ap_const_lv1_0);
}

void matmul::thread_shl_ln728_131_fu_9787_p3() {
    shl_ln728_131_fu_9787_p3 = esl_concat<10,1>(bias_8_V_read.read(), ap_const_lv1_0);
}

void matmul::thread_shl_ln728_132_fu_9846_p3() {
    shl_ln728_132_fu_9846_p3 = esl_concat<10,1>(bias_9_V_read.read(), ap_const_lv1_0);
}

void matmul::thread_shl_ln728_s_fu_9374_p3() {
    shl_ln728_s_fu_9374_p3 = esl_concat<10,1>(bias_1_V_read.read(), ap_const_lv1_0);
}

void matmul::thread_shl_ln958_1_fu_11000_p2() {
    shl_ln958_1_fu_11000_p2 = (!sub_ln958_1_reg_16872.read().is_01())? sc_lv<32>(): zext_ln957_1_fu_10987_p1.read() << (unsigned short)sub_ln958_1_reg_16872.read().to_uint();
}

void matmul::thread_shl_ln958_2_fu_11093_p2() {
    shl_ln958_2_fu_11093_p2 = (!sub_ln958_2_reg_16903.read().is_01())? sc_lv<32>(): zext_ln957_2_fu_11080_p1.read() << (unsigned short)sub_ln958_2_reg_16903.read().to_uint();
}

void matmul::thread_shl_ln958_3_fu_11186_p2() {
    shl_ln958_3_fu_11186_p2 = (!sub_ln958_3_reg_16934.read().is_01())? sc_lv<32>(): zext_ln957_3_fu_11173_p1.read() << (unsigned short)sub_ln958_3_reg_16934.read().to_uint();
}

void matmul::thread_shl_ln958_4_fu_11279_p2() {
    shl_ln958_4_fu_11279_p2 = (!sub_ln958_4_reg_16965.read().is_01())? sc_lv<32>(): zext_ln957_4_fu_11266_p1.read() << (unsigned short)sub_ln958_4_reg_16965.read().to_uint();
}

void matmul::thread_shl_ln958_5_fu_11372_p2() {
    shl_ln958_5_fu_11372_p2 = (!sub_ln958_5_reg_16996.read().is_01())? sc_lv<32>(): zext_ln957_5_fu_11359_p1.read() << (unsigned short)sub_ln958_5_reg_16996.read().to_uint();
}

void matmul::thread_shl_ln958_6_fu_11465_p2() {
    shl_ln958_6_fu_11465_p2 = (!sub_ln958_6_reg_17027.read().is_01())? sc_lv<32>(): zext_ln957_6_fu_11452_p1.read() << (unsigned short)sub_ln958_6_reg_17027.read().to_uint();
}

void matmul::thread_shl_ln958_7_fu_11558_p2() {
    shl_ln958_7_fu_11558_p2 = (!sub_ln958_7_reg_17058.read().is_01())? sc_lv<32>(): zext_ln957_7_fu_11545_p1.read() << (unsigned short)sub_ln958_7_reg_17058.read().to_uint();
}

void matmul::thread_shl_ln958_8_fu_11651_p2() {
    shl_ln958_8_fu_11651_p2 = (!sub_ln958_8_reg_17089.read().is_01())? sc_lv<32>(): zext_ln957_8_fu_11638_p1.read() << (unsigned short)sub_ln958_8_reg_17089.read().to_uint();
}

void matmul::thread_shl_ln958_9_fu_11744_p2() {
    shl_ln958_9_fu_11744_p2 = (!sub_ln958_9_reg_17120.read().is_01())? sc_lv<32>(): zext_ln957_9_fu_11731_p1.read() << (unsigned short)sub_ln958_9_reg_17120.read().to_uint();
}

void matmul::thread_shl_ln958_fu_10907_p2() {
    shl_ln958_fu_10907_p2 = (!sub_ln958_reg_16841.read().is_01())? sc_lv<32>(): zext_ln957_fu_10894_p1.read() << (unsigned short)sub_ln958_reg_16841.read().to_uint();
}

void matmul::thread_shl_ln_fu_9315_p3() {
    shl_ln_fu_9315_p3 = esl_concat<10,1>(bias_0_V_read.read(), ap_const_lv1_0);
}

void matmul::thread_sub_ln939_1_fu_9405_p2() {
    sub_ln939_1_fu_9405_p2 = (!ap_const_lv15_0.is_01() || !add_ln1192_192_fu_9385_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(add_ln1192_192_fu_9385_p2.read()));
}

void matmul::thread_sub_ln939_2_fu_9464_p2() {
    sub_ln939_2_fu_9464_p2 = (!ap_const_lv15_0.is_01() || !add_ln1192_194_fu_9444_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(add_ln1192_194_fu_9444_p2.read()));
}

void matmul::thread_sub_ln939_3_fu_9523_p2() {
    sub_ln939_3_fu_9523_p2 = (!ap_const_lv15_0.is_01() || !add_ln1192_195_fu_9503_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(add_ln1192_195_fu_9503_p2.read()));
}

void matmul::thread_sub_ln939_4_fu_9582_p2() {
    sub_ln939_4_fu_9582_p2 = (!ap_const_lv15_0.is_01() || !add_ln1192_197_fu_9562_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(add_ln1192_197_fu_9562_p2.read()));
}

void matmul::thread_sub_ln939_5_fu_9641_p2() {
    sub_ln939_5_fu_9641_p2 = (!ap_const_lv15_0.is_01() || !add_ln1192_199_fu_9621_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(add_ln1192_199_fu_9621_p2.read()));
}

void matmul::thread_sub_ln939_6_fu_9700_p2() {
    sub_ln939_6_fu_9700_p2 = (!ap_const_lv15_0.is_01() || !add_ln1192_201_fu_9680_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(add_ln1192_201_fu_9680_p2.read()));
}

void matmul::thread_sub_ln939_7_fu_9759_p2() {
    sub_ln939_7_fu_9759_p2 = (!ap_const_lv15_0.is_01() || !add_ln1192_203_fu_9739_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(add_ln1192_203_fu_9739_p2.read()));
}

void matmul::thread_sub_ln939_8_fu_9818_p2() {
    sub_ln939_8_fu_9818_p2 = (!ap_const_lv15_0.is_01() || !add_ln1192_205_fu_9798_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(add_ln1192_205_fu_9798_p2.read()));
}

void matmul::thread_sub_ln939_9_fu_9877_p2() {
    sub_ln939_9_fu_9877_p2 = (!ap_const_lv15_0.is_01() || !add_ln1192_207_fu_9857_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(add_ln1192_207_fu_9857_p2.read()));
}

void matmul::thread_sub_ln939_fu_9346_p2() {
    sub_ln939_fu_9346_p2 = (!ap_const_lv15_0.is_01() || !add_ln1192_fu_9326_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(add_ln1192_fu_9326_p2.read()));
}

void matmul::thread_sub_ln944_1_fu_9949_p2() {
    sub_ln944_1_fu_9949_p2 = (!ap_const_lv32_F.is_01() || !l_1_fu_9941_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_F) - sc_biguint<32>(l_1_fu_9941_p3.read()));
}

void matmul::thread_sub_ln944_2_fu_9982_p2() {
    sub_ln944_2_fu_9982_p2 = (!ap_const_lv32_F.is_01() || !l_2_fu_9974_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_F) - sc_biguint<32>(l_2_fu_9974_p3.read()));
}

void matmul::thread_sub_ln944_3_fu_10015_p2() {
    sub_ln944_3_fu_10015_p2 = (!ap_const_lv32_F.is_01() || !l_3_fu_10007_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_F) - sc_biguint<32>(l_3_fu_10007_p3.read()));
}

void matmul::thread_sub_ln944_4_fu_10048_p2() {
    sub_ln944_4_fu_10048_p2 = (!ap_const_lv32_F.is_01() || !l_4_fu_10040_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_F) - sc_biguint<32>(l_4_fu_10040_p3.read()));
}

void matmul::thread_sub_ln944_5_fu_10081_p2() {
    sub_ln944_5_fu_10081_p2 = (!ap_const_lv32_F.is_01() || !l_5_fu_10073_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_F) - sc_biguint<32>(l_5_fu_10073_p3.read()));
}

void matmul::thread_sub_ln944_6_fu_10114_p2() {
    sub_ln944_6_fu_10114_p2 = (!ap_const_lv32_F.is_01() || !l_6_fu_10106_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_F) - sc_biguint<32>(l_6_fu_10106_p3.read()));
}

void matmul::thread_sub_ln944_7_fu_10147_p2() {
    sub_ln944_7_fu_10147_p2 = (!ap_const_lv32_F.is_01() || !l_7_fu_10139_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_F) - sc_biguint<32>(l_7_fu_10139_p3.read()));
}

void matmul::thread_sub_ln944_8_fu_10180_p2() {
    sub_ln944_8_fu_10180_p2 = (!ap_const_lv32_F.is_01() || !l_8_fu_10172_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_F) - sc_biguint<32>(l_8_fu_10172_p3.read()));
}

void matmul::thread_sub_ln944_9_fu_10213_p2() {
    sub_ln944_9_fu_10213_p2 = (!ap_const_lv32_F.is_01() || !l_9_fu_10205_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_F) - sc_biguint<32>(l_9_fu_10205_p3.read()));
}

void matmul::thread_sub_ln944_fu_9916_p2() {
    sub_ln944_fu_9916_p2 = (!ap_const_lv32_F.is_01() || !l_fu_9908_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_F) - sc_biguint<32>(l_fu_9908_p3.read()));
}

void matmul::thread_sub_ln947_1_fu_10314_p2() {
    sub_ln947_1_fu_10314_p2 = (!ap_const_lv4_8.is_01() || !trunc_ln947_1_reg_16629.read().is_01())? sc_lv<4>(): (sc_bigint<4>(ap_const_lv4_8) - sc_biguint<4>(trunc_ln947_1_reg_16629.read()));
}

void matmul::thread_sub_ln947_2_fu_10376_p2() {
    sub_ln947_2_fu_10376_p2 = (!ap_const_lv4_8.is_01() || !trunc_ln947_2_reg_16651.read().is_01())? sc_lv<4>(): (sc_bigint<4>(ap_const_lv4_8) - sc_biguint<4>(trunc_ln947_2_reg_16651.read()));
}

void matmul::thread_sub_ln947_3_fu_10438_p2() {
    sub_ln947_3_fu_10438_p2 = (!ap_const_lv4_8.is_01() || !trunc_ln947_3_reg_16673.read().is_01())? sc_lv<4>(): (sc_bigint<4>(ap_const_lv4_8) - sc_biguint<4>(trunc_ln947_3_reg_16673.read()));
}

void matmul::thread_sub_ln947_4_fu_10500_p2() {
    sub_ln947_4_fu_10500_p2 = (!ap_const_lv4_8.is_01() || !trunc_ln947_4_reg_16695.read().is_01())? sc_lv<4>(): (sc_bigint<4>(ap_const_lv4_8) - sc_biguint<4>(trunc_ln947_4_reg_16695.read()));
}

void matmul::thread_sub_ln947_5_fu_10562_p2() {
    sub_ln947_5_fu_10562_p2 = (!ap_const_lv4_8.is_01() || !trunc_ln947_5_reg_16717.read().is_01())? sc_lv<4>(): (sc_bigint<4>(ap_const_lv4_8) - sc_biguint<4>(trunc_ln947_5_reg_16717.read()));
}

void matmul::thread_sub_ln947_6_fu_10624_p2() {
    sub_ln947_6_fu_10624_p2 = (!ap_const_lv4_8.is_01() || !trunc_ln947_6_reg_16739.read().is_01())? sc_lv<4>(): (sc_bigint<4>(ap_const_lv4_8) - sc_biguint<4>(trunc_ln947_6_reg_16739.read()));
}

void matmul::thread_sub_ln947_7_fu_10686_p2() {
    sub_ln947_7_fu_10686_p2 = (!ap_const_lv4_8.is_01() || !trunc_ln947_7_reg_16761.read().is_01())? sc_lv<4>(): (sc_bigint<4>(ap_const_lv4_8) - sc_biguint<4>(trunc_ln947_7_reg_16761.read()));
}

void matmul::thread_sub_ln947_8_fu_10748_p2() {
    sub_ln947_8_fu_10748_p2 = (!ap_const_lv4_8.is_01() || !trunc_ln947_8_reg_16783.read().is_01())? sc_lv<4>(): (sc_bigint<4>(ap_const_lv4_8) - sc_biguint<4>(trunc_ln947_8_reg_16783.read()));
}

void matmul::thread_sub_ln947_9_fu_10810_p2() {
    sub_ln947_9_fu_10810_p2 = (!ap_const_lv4_8.is_01() || !trunc_ln947_9_reg_16805.read().is_01())? sc_lv<4>(): (sc_bigint<4>(ap_const_lv4_8) - sc_biguint<4>(trunc_ln947_9_reg_16805.read()));
}

void matmul::thread_sub_ln947_fu_10252_p2() {
    sub_ln947_fu_10252_p2 = (!ap_const_lv4_8.is_01() || !trunc_ln947_reg_16607.read().is_01())? sc_lv<4>(): (sc_bigint<4>(ap_const_lv4_8) - sc_biguint<4>(trunc_ln947_reg_16607.read()));
}

void matmul::thread_sub_ln958_1_fu_10350_p2() {
    sub_ln958_1_fu_10350_p2 = (!ap_const_lv32_19.is_01() || !sub_ln944_1_reg_16617.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19) - sc_biguint<32>(sub_ln944_1_reg_16617.read()));
}

void matmul::thread_sub_ln958_2_fu_10412_p2() {
    sub_ln958_2_fu_10412_p2 = (!ap_const_lv32_19.is_01() || !sub_ln944_2_reg_16639.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19) - sc_biguint<32>(sub_ln944_2_reg_16639.read()));
}

void matmul::thread_sub_ln958_3_fu_10474_p2() {
    sub_ln958_3_fu_10474_p2 = (!ap_const_lv32_19.is_01() || !sub_ln944_3_reg_16661.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19) - sc_biguint<32>(sub_ln944_3_reg_16661.read()));
}

void matmul::thread_sub_ln958_4_fu_10536_p2() {
    sub_ln958_4_fu_10536_p2 = (!ap_const_lv32_19.is_01() || !sub_ln944_4_reg_16683.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19) - sc_biguint<32>(sub_ln944_4_reg_16683.read()));
}

void matmul::thread_sub_ln958_5_fu_10598_p2() {
    sub_ln958_5_fu_10598_p2 = (!ap_const_lv32_19.is_01() || !sub_ln944_5_reg_16705.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19) - sc_biguint<32>(sub_ln944_5_reg_16705.read()));
}

void matmul::thread_sub_ln958_6_fu_10660_p2() {
    sub_ln958_6_fu_10660_p2 = (!ap_const_lv32_19.is_01() || !sub_ln944_6_reg_16727.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19) - sc_biguint<32>(sub_ln944_6_reg_16727.read()));
}

void matmul::thread_sub_ln958_7_fu_10722_p2() {
    sub_ln958_7_fu_10722_p2 = (!ap_const_lv32_19.is_01() || !sub_ln944_7_reg_16749.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19) - sc_biguint<32>(sub_ln944_7_reg_16749.read()));
}

void matmul::thread_sub_ln958_8_fu_10784_p2() {
    sub_ln958_8_fu_10784_p2 = (!ap_const_lv32_19.is_01() || !sub_ln944_8_reg_16771.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19) - sc_biguint<32>(sub_ln944_8_reg_16771.read()));
}

void matmul::thread_sub_ln958_9_fu_10846_p2() {
    sub_ln958_9_fu_10846_p2 = (!ap_const_lv32_19.is_01() || !sub_ln944_9_reg_16793.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19) - sc_biguint<32>(sub_ln944_9_reg_16793.read()));
}

void matmul::thread_sub_ln958_fu_10288_p2() {
    sub_ln958_fu_10288_p2 = (!ap_const_lv32_19.is_01() || !sub_ln944_reg_16595.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19) - sc_biguint<32>(sub_ln944_reg_16595.read()));
}

void matmul::thread_sub_ln964_1_fu_11842_p2() {
    sub_ln964_1_fu_11842_p2 = (!ap_const_lv8_7.is_01() || !trunc_ln943_1_reg_16634.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7) - sc_biguint<8>(trunc_ln943_1_reg_16634.read()));
}

void matmul::thread_sub_ln964_2_fu_11893_p2() {
    sub_ln964_2_fu_11893_p2 = (!ap_const_lv8_7.is_01() || !trunc_ln943_2_reg_16656.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7) - sc_biguint<8>(trunc_ln943_2_reg_16656.read()));
}

void matmul::thread_sub_ln964_3_fu_11944_p2() {
    sub_ln964_3_fu_11944_p2 = (!ap_const_lv8_7.is_01() || !trunc_ln943_3_reg_16678.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7) - sc_biguint<8>(trunc_ln943_3_reg_16678.read()));
}

void matmul::thread_sub_ln964_4_fu_11995_p2() {
    sub_ln964_4_fu_11995_p2 = (!ap_const_lv8_7.is_01() || !trunc_ln943_4_reg_16700.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7) - sc_biguint<8>(trunc_ln943_4_reg_16700.read()));
}

void matmul::thread_sub_ln964_5_fu_12046_p2() {
    sub_ln964_5_fu_12046_p2 = (!ap_const_lv8_7.is_01() || !trunc_ln943_5_reg_16722.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7) - sc_biguint<8>(trunc_ln943_5_reg_16722.read()));
}

void matmul::thread_sub_ln964_6_fu_12097_p2() {
    sub_ln964_6_fu_12097_p2 = (!ap_const_lv8_7.is_01() || !trunc_ln943_6_reg_16744.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7) - sc_biguint<8>(trunc_ln943_6_reg_16744.read()));
}

void matmul::thread_sub_ln964_7_fu_12148_p2() {
    sub_ln964_7_fu_12148_p2 = (!ap_const_lv8_7.is_01() || !trunc_ln943_7_reg_16766.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7) - sc_biguint<8>(trunc_ln943_7_reg_16766.read()));
}

void matmul::thread_sub_ln964_8_fu_12199_p2() {
    sub_ln964_8_fu_12199_p2 = (!ap_const_lv8_7.is_01() || !trunc_ln943_8_reg_16788.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7) - sc_biguint<8>(trunc_ln943_8_reg_16788.read()));
}

void matmul::thread_sub_ln964_9_fu_12250_p2() {
    sub_ln964_9_fu_12250_p2 = (!ap_const_lv8_7.is_01() || !trunc_ln943_9_reg_16810.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7) - sc_biguint<8>(trunc_ln943_9_reg_16810.read()));
}

void matmul::thread_sub_ln964_fu_11791_p2() {
    sub_ln964_fu_11791_p2 = (!ap_const_lv8_7.is_01() || !trunc_ln943_reg_16612.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7) - sc_biguint<8>(trunc_ln943_reg_16612.read()));
}

void matmul::thread_tmp_1_fu_11853_p3() {
    tmp_1_fu_11853_p3 = esl_concat<1,8>(tmp_841_reg_16402.read(), add_ln964_1_fu_11847_p2.read());
}

void matmul::thread_tmp_22_fu_5486_p3() {
    tmp_22_fu_5486_p3 = esl_concat<5,6>(bottom_V_offset.read(), ap_const_lv6_0);
}

void matmul::thread_tmp_2_fu_11904_p3() {
    tmp_2_fu_11904_p3 = esl_concat<1,8>(tmp_845_reg_16424.read(), add_ln964_2_fu_11898_p2.read());
}

void matmul::thread_tmp_3_fu_11955_p3() {
    tmp_3_fu_11955_p3 = esl_concat<1,8>(tmp_849_reg_16446.read(), add_ln964_3_fu_11949_p2.read());
}

void matmul::thread_tmp_4_fu_12006_p3() {
    tmp_4_fu_12006_p3 = esl_concat<1,8>(tmp_853_reg_16468.read(), add_ln964_4_fu_12000_p2.read());
}

void matmul::thread_tmp_5_fu_12057_p3() {
    tmp_5_fu_12057_p3 = esl_concat<1,8>(tmp_857_reg_16490.read(), add_ln964_5_fu_12051_p2.read());
}

void matmul::thread_tmp_6_fu_12108_p3() {
    tmp_6_fu_12108_p3 = esl_concat<1,8>(tmp_861_reg_16512.read(), add_ln964_6_fu_12102_p2.read());
}

void matmul::thread_tmp_7_fu_12159_p3() {
    tmp_7_fu_12159_p3 = esl_concat<1,8>(tmp_865_reg_16534.read(), add_ln964_7_fu_12153_p2.read());
}

void matmul::thread_tmp_837_fu_9338_p3() {
    tmp_837_fu_9338_p3 = add_ln1192_fu_9326_p2.read().range(14, 14);
}

void matmul::thread_tmp_838_fu_10236_p4() {
    tmp_838_fu_10236_p4 = add_ln944_fu_10231_p2.read().range(31, 1);
}

void matmul::thread_tmp_839_fu_10855_p3() {
    tmp_839_fu_10855_p3 = add_ln944_reg_16815.read().range(31, 31);
}

void matmul::thread_tmp_841_fu_9397_p3() {
    tmp_841_fu_9397_p3 = add_ln1192_192_fu_9385_p2.read().range(14, 14);
}

void matmul::thread_tmp_842_fu_10298_p4() {
    tmp_842_fu_10298_p4 = add_ln944_1_fu_10293_p2.read().range(31, 1);
}

void matmul::thread_tmp_843_fu_10948_p3() {
    tmp_843_fu_10948_p3 = add_ln944_1_reg_16846.read().range(31, 31);
}

void matmul::thread_tmp_845_fu_9456_p3() {
    tmp_845_fu_9456_p3 = add_ln1192_194_fu_9444_p2.read().range(14, 14);
}

void matmul::thread_tmp_846_fu_10360_p4() {
    tmp_846_fu_10360_p4 = add_ln944_2_fu_10355_p2.read().range(31, 1);
}

void matmul::thread_tmp_847_fu_11041_p3() {
    tmp_847_fu_11041_p3 = add_ln944_2_reg_16877.read().range(31, 31);
}

void matmul::thread_tmp_849_fu_9515_p3() {
    tmp_849_fu_9515_p3 = add_ln1192_195_fu_9503_p2.read().range(14, 14);
}

void matmul::thread_tmp_850_fu_10422_p4() {
    tmp_850_fu_10422_p4 = add_ln944_3_fu_10417_p2.read().range(31, 1);
}

void matmul::thread_tmp_851_fu_11134_p3() {
    tmp_851_fu_11134_p3 = add_ln944_3_reg_16908.read().range(31, 31);
}

void matmul::thread_tmp_853_fu_9574_p3() {
    tmp_853_fu_9574_p3 = add_ln1192_197_fu_9562_p2.read().range(14, 14);
}

void matmul::thread_tmp_854_fu_10484_p4() {
    tmp_854_fu_10484_p4 = add_ln944_4_fu_10479_p2.read().range(31, 1);
}

void matmul::thread_tmp_855_fu_11227_p3() {
    tmp_855_fu_11227_p3 = add_ln944_4_reg_16939.read().range(31, 31);
}

void matmul::thread_tmp_857_fu_9633_p3() {
    tmp_857_fu_9633_p3 = add_ln1192_199_fu_9621_p2.read().range(14, 14);
}

void matmul::thread_tmp_858_fu_10546_p4() {
    tmp_858_fu_10546_p4 = add_ln944_5_fu_10541_p2.read().range(31, 1);
}

void matmul::thread_tmp_859_fu_11320_p3() {
    tmp_859_fu_11320_p3 = add_ln944_5_reg_16970.read().range(31, 31);
}

void matmul::thread_tmp_861_fu_9692_p3() {
    tmp_861_fu_9692_p3 = add_ln1192_201_fu_9680_p2.read().range(14, 14);
}

void matmul::thread_tmp_862_fu_10608_p4() {
    tmp_862_fu_10608_p4 = add_ln944_6_fu_10603_p2.read().range(31, 1);
}

void matmul::thread_tmp_863_fu_11413_p3() {
    tmp_863_fu_11413_p3 = add_ln944_6_reg_17001.read().range(31, 31);
}

void matmul::thread_tmp_865_fu_9751_p3() {
    tmp_865_fu_9751_p3 = add_ln1192_203_fu_9739_p2.read().range(14, 14);
}

void matmul::thread_tmp_866_fu_10670_p4() {
    tmp_866_fu_10670_p4 = add_ln944_7_fu_10665_p2.read().range(31, 1);
}

void matmul::thread_tmp_867_fu_11506_p3() {
    tmp_867_fu_11506_p3 = add_ln944_7_reg_17032.read().range(31, 31);
}

void matmul::thread_tmp_869_fu_9810_p3() {
    tmp_869_fu_9810_p3 = add_ln1192_205_fu_9798_p2.read().range(14, 14);
}

void matmul::thread_tmp_870_fu_10732_p4() {
    tmp_870_fu_10732_p4 = add_ln944_8_fu_10727_p2.read().range(31, 1);
}

void matmul::thread_tmp_871_fu_11599_p3() {
    tmp_871_fu_11599_p3 = add_ln944_8_reg_17063.read().range(31, 31);
}

void matmul::thread_tmp_873_fu_9869_p3() {
    tmp_873_fu_9869_p3 = add_ln1192_207_fu_9857_p2.read().range(14, 14);
}

void matmul::thread_tmp_874_fu_10794_p4() {
    tmp_874_fu_10794_p4 = add_ln944_9_fu_10789_p2.read().range(31, 1);
}

void matmul::thread_tmp_875_fu_11692_p3() {
    tmp_875_fu_11692_p3 = add_ln944_9_reg_17094.read().range(31, 31);
}

void matmul::thread_tmp_878_fu_6410_p3() {
    tmp_878_fu_6410_p3 = mul_ln1118_reg_15755.read().range(20, 20);
}

void matmul::thread_tmp_880_fu_6426_p3() {
    tmp_880_fu_6426_p3 = add_ln415_fu_6420_p2.read().range(13, 13);
}

void matmul::thread_tmp_881_fu_6446_p3() {
    tmp_881_fu_6446_p3 = add_ln415_fu_6420_p2.read().range(13, 13);
}

void matmul::thread_tmp_882_fu_6454_p3() {
    tmp_882_fu_6454_p3 = mul_ln1118_reg_15755.read().range(22, 22);
}

void matmul::thread_tmp_883_fu_6461_p4() {
    tmp_883_fu_6461_p4 = mul_ln1118_reg_15755.read().range(22, 21);
}

void matmul::thread_tmp_884_fu_6490_p3() {
    tmp_884_fu_6490_p3 = mul_ln1118_reg_15755.read().range(21, 21);
}

void matmul::thread_tmp_885_fu_8444_p3() {
    tmp_885_fu_8444_p3 = add_ln1192_191_fu_8438_p2.read().range(14, 14);
}

void matmul::thread_tmp_886_fu_8457_p3() {
    tmp_886_fu_8457_p3 = add_ln703_fu_8452_p2.read().range(13, 13);
}

void matmul::thread_tmp_888_fu_6584_p3() {
    tmp_888_fu_6584_p3 = mul_ln1118_63_reg_15775.read().range(20, 20);
}

void matmul::thread_tmp_890_fu_6600_p3() {
    tmp_890_fu_6600_p3 = add_ln415_63_fu_6594_p2.read().range(13, 13);
}

void matmul::thread_tmp_891_fu_6620_p3() {
    tmp_891_fu_6620_p3 = add_ln415_63_fu_6594_p2.read().range(13, 13);
}

void matmul::thread_tmp_892_fu_6628_p3() {
    tmp_892_fu_6628_p3 = mul_ln1118_63_reg_15775.read().range(22, 22);
}

void matmul::thread_tmp_893_fu_6635_p4() {
    tmp_893_fu_6635_p4 = mul_ln1118_63_reg_15775.read().range(22, 21);
}

void matmul::thread_tmp_894_fu_6664_p3() {
    tmp_894_fu_6664_p3 = mul_ln1118_63_reg_15775.read().range(21, 21);
}

void matmul::thread_tmp_895_fu_8532_p3() {
    tmp_895_fu_8532_p3 = add_ln1192_193_fu_8526_p2.read().range(14, 14);
}

void matmul::thread_tmp_896_fu_8545_p3() {
    tmp_896_fu_8545_p3 = add_ln703_189_fu_8540_p2.read().range(13, 13);
}

void matmul::thread_tmp_898_fu_6758_p3() {
    tmp_898_fu_6758_p3 = mul_ln1118_64_reg_15795.read().range(20, 20);
}

void matmul::thread_tmp_8_fu_12210_p3() {
    tmp_8_fu_12210_p3 = esl_concat<1,8>(tmp_869_reg_16556.read(), add_ln964_8_fu_12204_p2.read());
}

void matmul::thread_tmp_900_fu_6774_p3() {
    tmp_900_fu_6774_p3 = add_ln415_64_fu_6768_p2.read().range(13, 13);
}

void matmul::thread_tmp_901_fu_6794_p3() {
    tmp_901_fu_6794_p3 = add_ln415_64_fu_6768_p2.read().range(13, 13);
}

void matmul::thread_tmp_902_fu_6802_p3() {
    tmp_902_fu_6802_p3 = mul_ln1118_64_reg_15795.read().range(22, 22);
}

void matmul::thread_tmp_903_fu_6809_p4() {
    tmp_903_fu_6809_p4 = mul_ln1118_64_reg_15795.read().range(22, 21);
}

void matmul::thread_tmp_904_fu_6838_p3() {
    tmp_904_fu_6838_p3 = mul_ln1118_64_reg_15795.read().range(21, 21);
}

void matmul::thread_tmp_905_fu_8620_p3() {
    tmp_905_fu_8620_p3 = add_ln1192_196_fu_8614_p2.read().range(14, 14);
}

void matmul::thread_tmp_906_fu_8633_p3() {
    tmp_906_fu_8633_p3 = add_ln703_190_fu_8628_p2.read().range(13, 13);
}

void matmul::thread_tmp_908_fu_6932_p3() {
    tmp_908_fu_6932_p3 = mul_ln1118_65_reg_15815.read().range(20, 20);
}

void matmul::thread_tmp_910_fu_6948_p3() {
    tmp_910_fu_6948_p3 = add_ln415_65_fu_6942_p2.read().range(13, 13);
}

void matmul::thread_tmp_911_fu_6968_p3() {
    tmp_911_fu_6968_p3 = add_ln415_65_fu_6942_p2.read().range(13, 13);
}

void matmul::thread_tmp_912_fu_6976_p3() {
    tmp_912_fu_6976_p3 = mul_ln1118_65_reg_15815.read().range(22, 22);
}

void matmul::thread_tmp_913_fu_6983_p4() {
    tmp_913_fu_6983_p4 = mul_ln1118_65_reg_15815.read().range(22, 21);
}

void matmul::thread_tmp_914_fu_7012_p3() {
    tmp_914_fu_7012_p3 = mul_ln1118_65_reg_15815.read().range(21, 21);
}

void matmul::thread_tmp_915_fu_8708_p3() {
    tmp_915_fu_8708_p3 = add_ln1192_198_fu_8702_p2.read().range(14, 14);
}

void matmul::thread_tmp_916_fu_8721_p3() {
    tmp_916_fu_8721_p3 = add_ln703_191_fu_8716_p2.read().range(13, 13);
}

void matmul::thread_tmp_918_fu_7106_p3() {
    tmp_918_fu_7106_p3 = mul_ln1118_66_reg_15835.read().range(20, 20);
}

void matmul::thread_tmp_920_fu_7122_p3() {
    tmp_920_fu_7122_p3 = add_ln415_66_fu_7116_p2.read().range(13, 13);
}

void matmul::thread_tmp_921_fu_7142_p3() {
    tmp_921_fu_7142_p3 = add_ln415_66_fu_7116_p2.read().range(13, 13);
}

void matmul::thread_tmp_922_fu_7150_p3() {
    tmp_922_fu_7150_p3 = mul_ln1118_66_reg_15835.read().range(22, 22);
}

void matmul::thread_tmp_923_fu_7157_p4() {
    tmp_923_fu_7157_p4 = mul_ln1118_66_reg_15835.read().range(22, 21);
}

void matmul::thread_tmp_924_fu_7186_p3() {
    tmp_924_fu_7186_p3 = mul_ln1118_66_reg_15835.read().range(21, 21);
}

void matmul::thread_tmp_925_fu_8796_p3() {
    tmp_925_fu_8796_p3 = add_ln1192_200_fu_8790_p2.read().range(14, 14);
}

void matmul::thread_tmp_926_fu_8809_p3() {
    tmp_926_fu_8809_p3 = add_ln703_192_fu_8804_p2.read().range(13, 13);
}

void matmul::thread_tmp_928_fu_7280_p3() {
    tmp_928_fu_7280_p3 = mul_ln1118_67_reg_15855.read().range(20, 20);
}

void matmul::thread_tmp_930_fu_7296_p3() {
    tmp_930_fu_7296_p3 = add_ln415_67_fu_7290_p2.read().range(13, 13);
}

void matmul::thread_tmp_931_fu_7316_p3() {
    tmp_931_fu_7316_p3 = add_ln415_67_fu_7290_p2.read().range(13, 13);
}

void matmul::thread_tmp_932_fu_7324_p3() {
    tmp_932_fu_7324_p3 = mul_ln1118_67_reg_15855.read().range(22, 22);
}

void matmul::thread_tmp_933_fu_7331_p4() {
    tmp_933_fu_7331_p4 = mul_ln1118_67_reg_15855.read().range(22, 21);
}

void matmul::thread_tmp_934_fu_7360_p3() {
    tmp_934_fu_7360_p3 = mul_ln1118_67_reg_15855.read().range(21, 21);
}

void matmul::thread_tmp_935_fu_8884_p3() {
    tmp_935_fu_8884_p3 = add_ln1192_202_fu_8878_p2.read().range(14, 14);
}

void matmul::thread_tmp_936_fu_8897_p3() {
    tmp_936_fu_8897_p3 = add_ln703_193_fu_8892_p2.read().range(13, 13);
}

void matmul::thread_tmp_938_fu_7454_p3() {
    tmp_938_fu_7454_p3 = mul_ln1118_68_reg_15875.read().range(20, 20);
}

void matmul::thread_tmp_940_fu_7470_p3() {
    tmp_940_fu_7470_p3 = add_ln415_68_fu_7464_p2.read().range(13, 13);
}

void matmul::thread_tmp_941_fu_7490_p3() {
    tmp_941_fu_7490_p3 = add_ln415_68_fu_7464_p2.read().range(13, 13);
}

void matmul::thread_tmp_942_fu_7498_p3() {
    tmp_942_fu_7498_p3 = mul_ln1118_68_reg_15875.read().range(22, 22);
}

void matmul::thread_tmp_943_fu_7505_p4() {
    tmp_943_fu_7505_p4 = mul_ln1118_68_reg_15875.read().range(22, 21);
}

void matmul::thread_tmp_944_fu_7534_p3() {
    tmp_944_fu_7534_p3 = mul_ln1118_68_reg_15875.read().range(21, 21);
}

void matmul::thread_tmp_945_fu_8972_p3() {
    tmp_945_fu_8972_p3 = add_ln1192_204_fu_8966_p2.read().range(14, 14);
}

void matmul::thread_tmp_946_fu_8985_p3() {
    tmp_946_fu_8985_p3 = add_ln703_194_fu_8980_p2.read().range(13, 13);
}

void matmul::thread_tmp_948_fu_7628_p3() {
    tmp_948_fu_7628_p3 = mul_ln1118_69_reg_15895.read().range(20, 20);
}

void matmul::thread_tmp_950_fu_7644_p3() {
    tmp_950_fu_7644_p3 = add_ln415_69_fu_7638_p2.read().range(13, 13);
}

void matmul::thread_tmp_951_fu_7664_p3() {
    tmp_951_fu_7664_p3 = add_ln415_69_fu_7638_p2.read().range(13, 13);
}

void matmul::thread_tmp_952_fu_7672_p3() {
    tmp_952_fu_7672_p3 = mul_ln1118_69_reg_15895.read().range(22, 22);
}

void matmul::thread_tmp_953_fu_7679_p4() {
    tmp_953_fu_7679_p4 = mul_ln1118_69_reg_15895.read().range(22, 21);
}

void matmul::thread_tmp_954_fu_7708_p3() {
    tmp_954_fu_7708_p3 = mul_ln1118_69_reg_15895.read().range(21, 21);
}

void matmul::thread_tmp_955_fu_9060_p3() {
    tmp_955_fu_9060_p3 = add_ln1192_206_fu_9054_p2.read().range(14, 14);
}

void matmul::thread_tmp_956_fu_9073_p3() {
    tmp_956_fu_9073_p3 = add_ln703_195_fu_9068_p2.read().range(13, 13);
}

void matmul::thread_tmp_958_fu_7802_p3() {
    tmp_958_fu_7802_p3 = mul_ln1118_70_reg_15915.read().range(20, 20);
}

void matmul::thread_tmp_960_fu_7818_p3() {
    tmp_960_fu_7818_p3 = add_ln415_70_fu_7812_p2.read().range(13, 13);
}

void matmul::thread_tmp_961_fu_7838_p3() {
    tmp_961_fu_7838_p3 = add_ln415_70_fu_7812_p2.read().range(13, 13);
}

void matmul::thread_tmp_962_fu_7846_p3() {
    tmp_962_fu_7846_p3 = mul_ln1118_70_reg_15915.read().range(22, 22);
}

void matmul::thread_tmp_963_fu_7853_p4() {
    tmp_963_fu_7853_p4 = mul_ln1118_70_reg_15915.read().range(22, 21);
}

void matmul::thread_tmp_964_fu_7882_p3() {
    tmp_964_fu_7882_p3 = mul_ln1118_70_reg_15915.read().range(21, 21);
}

void matmul::thread_tmp_965_fu_9148_p3() {
    tmp_965_fu_9148_p3 = add_ln1192_208_fu_9142_p2.read().range(14, 14);
}

void matmul::thread_tmp_966_fu_9161_p3() {
    tmp_966_fu_9161_p3 = add_ln703_196_fu_9156_p2.read().range(13, 13);
}

void matmul::thread_tmp_968_fu_7976_p3() {
    tmp_968_fu_7976_p3 = mul_ln1118_71_reg_15935.read().range(20, 20);
}

void matmul::thread_tmp_970_fu_7992_p3() {
    tmp_970_fu_7992_p3 = add_ln415_71_fu_7986_p2.read().range(13, 13);
}

void matmul::thread_tmp_971_fu_8012_p3() {
    tmp_971_fu_8012_p3 = add_ln415_71_fu_7986_p2.read().range(13, 13);
}

void matmul::thread_tmp_972_fu_8020_p3() {
    tmp_972_fu_8020_p3 = mul_ln1118_71_reg_15935.read().range(22, 22);
}

void matmul::thread_tmp_973_fu_8027_p4() {
    tmp_973_fu_8027_p4 = mul_ln1118_71_reg_15935.read().range(22, 21);
}

void matmul::thread_tmp_974_fu_8056_p3() {
    tmp_974_fu_8056_p3 = mul_ln1118_71_reg_15935.read().range(21, 21);
}

void matmul::thread_tmp_975_fu_9236_p3() {
    tmp_975_fu_9236_p3 = add_ln1192_209_fu_9230_p2.read().range(14, 14);
}

void matmul::thread_tmp_976_fu_9249_p3() {
    tmp_976_fu_9249_p3 = add_ln703_197_fu_9244_p2.read().range(13, 13);
}

void matmul::thread_tmp_9_fu_12261_p3() {
    tmp_9_fu_12261_p3 = esl_concat<1,8>(tmp_873_reg_16578.read(), add_ln964_9_fu_12255_p2.read());
}

void matmul::thread_tmp_s_fu_11802_p3() {
    tmp_s_fu_11802_p3 = esl_concat<1,8>(tmp_837_reg_16380.read(), add_ln964_fu_11796_p2.read());
}

void matmul::thread_trunc_ln35_fu_5524_p1() {
    trunc_ln35_fu_5524_p1 = cii_0_reg_5475.read().range(6-1, 0);
}

void matmul::thread_trunc_ln708_61_fu_6749_p4() {
    trunc_ln708_61_fu_6749_p4 = mul_ln1118_64_reg_15795.read().range(20, 7);
}

void matmul::thread_trunc_ln708_62_fu_6923_p4() {
    trunc_ln708_62_fu_6923_p4 = mul_ln1118_65_reg_15815.read().range(20, 7);
}

void matmul::thread_trunc_ln708_63_fu_7097_p4() {
    trunc_ln708_63_fu_7097_p4 = mul_ln1118_66_reg_15835.read().range(20, 7);
}

void matmul::thread_trunc_ln708_64_fu_7271_p4() {
    trunc_ln708_64_fu_7271_p4 = mul_ln1118_67_reg_15855.read().range(20, 7);
}

void matmul::thread_trunc_ln708_65_fu_7445_p4() {
    trunc_ln708_65_fu_7445_p4 = mul_ln1118_68_reg_15875.read().range(20, 7);
}

void matmul::thread_trunc_ln708_66_fu_7619_p4() {
    trunc_ln708_66_fu_7619_p4 = mul_ln1118_69_reg_15895.read().range(20, 7);
}

void matmul::thread_trunc_ln708_67_fu_7793_p4() {
    trunc_ln708_67_fu_7793_p4 = mul_ln1118_70_reg_15915.read().range(20, 7);
}

void matmul::thread_trunc_ln708_68_fu_7967_p4() {
    trunc_ln708_68_fu_7967_p4 = mul_ln1118_71_reg_15935.read().range(20, 7);
}

void matmul::thread_trunc_ln708_s_fu_6575_p4() {
    trunc_ln708_s_fu_6575_p4 = mul_ln1118_63_reg_15775.read().range(20, 7);
}

void matmul::thread_trunc_ln943_1_fu_9963_p1() {
    trunc_ln943_1_fu_9963_p1 = l_1_fu_9941_p3.read().range(8-1, 0);
}

void matmul::thread_trunc_ln943_2_fu_9996_p1() {
    trunc_ln943_2_fu_9996_p1 = l_2_fu_9974_p3.read().range(8-1, 0);
}

void matmul::thread_trunc_ln943_3_fu_10029_p1() {
    trunc_ln943_3_fu_10029_p1 = l_3_fu_10007_p3.read().range(8-1, 0);
}

void matmul::thread_trunc_ln943_4_fu_10062_p1() {
    trunc_ln943_4_fu_10062_p1 = l_4_fu_10040_p3.read().range(8-1, 0);
}

void matmul::thread_trunc_ln943_5_fu_10095_p1() {
    trunc_ln943_5_fu_10095_p1 = l_5_fu_10073_p3.read().range(8-1, 0);
}

void matmul::thread_trunc_ln943_6_fu_10128_p1() {
    trunc_ln943_6_fu_10128_p1 = l_6_fu_10106_p3.read().range(8-1, 0);
}

void matmul::thread_trunc_ln943_7_fu_10161_p1() {
    trunc_ln943_7_fu_10161_p1 = l_7_fu_10139_p3.read().range(8-1, 0);
}

void matmul::thread_trunc_ln943_8_fu_10194_p1() {
    trunc_ln943_8_fu_10194_p1 = l_8_fu_10172_p3.read().range(8-1, 0);
}

void matmul::thread_trunc_ln943_9_fu_10227_p1() {
    trunc_ln943_9_fu_10227_p1 = l_9_fu_10205_p3.read().range(8-1, 0);
}

void matmul::thread_trunc_ln943_fu_9930_p1() {
    trunc_ln943_fu_9930_p1 = l_fu_9908_p3.read().range(8-1, 0);
}

void matmul::thread_trunc_ln944_1_fu_9955_p1() {
    trunc_ln944_1_fu_9955_p1 = sub_ln944_1_fu_9949_p2.read().range(15-1, 0);
}

void matmul::thread_trunc_ln944_2_fu_9988_p1() {
    trunc_ln944_2_fu_9988_p1 = sub_ln944_2_fu_9982_p2.read().range(15-1, 0);
}

void matmul::thread_trunc_ln944_3_fu_10021_p1() {
    trunc_ln944_3_fu_10021_p1 = sub_ln944_3_fu_10015_p2.read().range(15-1, 0);
}

void matmul::thread_trunc_ln944_4_fu_10054_p1() {
    trunc_ln944_4_fu_10054_p1 = sub_ln944_4_fu_10048_p2.read().range(15-1, 0);
}

void matmul::thread_trunc_ln944_5_fu_10087_p1() {
    trunc_ln944_5_fu_10087_p1 = sub_ln944_5_fu_10081_p2.read().range(15-1, 0);
}

void matmul::thread_trunc_ln944_6_fu_10120_p1() {
    trunc_ln944_6_fu_10120_p1 = sub_ln944_6_fu_10114_p2.read().range(15-1, 0);
}

void matmul::thread_trunc_ln944_7_fu_10153_p1() {
    trunc_ln944_7_fu_10153_p1 = sub_ln944_7_fu_10147_p2.read().range(15-1, 0);
}

void matmul::thread_trunc_ln944_8_fu_10186_p1() {
    trunc_ln944_8_fu_10186_p1 = sub_ln944_8_fu_10180_p2.read().range(15-1, 0);
}

void matmul::thread_trunc_ln944_9_fu_10219_p1() {
    trunc_ln944_9_fu_10219_p1 = sub_ln944_9_fu_10213_p2.read().range(15-1, 0);
}

void matmul::thread_trunc_ln944_fu_9922_p1() {
    trunc_ln944_fu_9922_p1 = sub_ln944_fu_9916_p2.read().range(15-1, 0);
}

void matmul::thread_trunc_ln947_1_fu_9959_p1() {
    trunc_ln947_1_fu_9959_p1 = sub_ln944_1_fu_9949_p2.read().range(4-1, 0);
}

void matmul::thread_trunc_ln947_2_fu_9992_p1() {
    trunc_ln947_2_fu_9992_p1 = sub_ln944_2_fu_9982_p2.read().range(4-1, 0);
}

void matmul::thread_trunc_ln947_3_fu_10025_p1() {
    trunc_ln947_3_fu_10025_p1 = sub_ln944_3_fu_10015_p2.read().range(4-1, 0);
}

void matmul::thread_trunc_ln947_4_fu_10058_p1() {
    trunc_ln947_4_fu_10058_p1 = sub_ln944_4_fu_10048_p2.read().range(4-1, 0);
}

void matmul::thread_trunc_ln947_5_fu_10091_p1() {
    trunc_ln947_5_fu_10091_p1 = sub_ln944_5_fu_10081_p2.read().range(4-1, 0);
}

void matmul::thread_trunc_ln947_6_fu_10124_p1() {
    trunc_ln947_6_fu_10124_p1 = sub_ln944_6_fu_10114_p2.read().range(4-1, 0);
}

void matmul::thread_trunc_ln947_7_fu_10157_p1() {
    trunc_ln947_7_fu_10157_p1 = sub_ln944_7_fu_10147_p2.read().range(4-1, 0);
}

void matmul::thread_trunc_ln947_8_fu_10190_p1() {
    trunc_ln947_8_fu_10190_p1 = sub_ln944_8_fu_10180_p2.read().range(4-1, 0);
}

void matmul::thread_trunc_ln947_9_fu_10223_p1() {
    trunc_ln947_9_fu_10223_p1 = sub_ln944_9_fu_10213_p2.read().range(4-1, 0);
}

void matmul::thread_trunc_ln947_fu_9926_p1() {
    trunc_ln947_fu_9926_p1 = sub_ln944_fu_9916_p2.read().range(4-1, 0);
}

void matmul::thread_trunc_ln_fu_6401_p4() {
    trunc_ln_fu_6401_p4 = mul_ln1118_reg_15755.read().range(20, 7);
}

void matmul::thread_xor_ln340_164_fu_8483_p2() {
    xor_ln340_164_fu_8483_p2 = (tmp_885_fu_8444_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln340_165_fu_8571_p2() {
    xor_ln340_165_fu_8571_p2 = (tmp_895_fu_8532_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln340_166_fu_8659_p2() {
    xor_ln340_166_fu_8659_p2 = (tmp_905_fu_8620_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln340_167_fu_8747_p2() {
    xor_ln340_167_fu_8747_p2 = (tmp_915_fu_8708_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln340_168_fu_8835_p2() {
    xor_ln340_168_fu_8835_p2 = (tmp_925_fu_8796_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln340_169_fu_8923_p2() {
    xor_ln340_169_fu_8923_p2 = (tmp_935_fu_8884_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln340_170_fu_9011_p2() {
    xor_ln340_170_fu_9011_p2 = (tmp_945_fu_8972_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln340_171_fu_9099_p2() {
    xor_ln340_171_fu_9099_p2 = (tmp_955_fu_9060_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln340_172_fu_9187_p2() {
    xor_ln340_172_fu_9187_p2 = (tmp_965_fu_9148_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln340_173_fu_9275_p2() {
    xor_ln340_173_fu_9275_p2 = (tmp_975_fu_9236_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln340_275_fu_8565_p2() {
    xor_ln340_275_fu_8565_p2 = (tmp_895_fu_8532_p3.read() ^ tmp_896_fu_8545_p3.read());
}

void matmul::thread_xor_ln340_276_fu_8653_p2() {
    xor_ln340_276_fu_8653_p2 = (tmp_905_fu_8620_p3.read() ^ tmp_906_fu_8633_p3.read());
}

void matmul::thread_xor_ln340_277_fu_8741_p2() {
    xor_ln340_277_fu_8741_p2 = (tmp_915_fu_8708_p3.read() ^ tmp_916_fu_8721_p3.read());
}

void matmul::thread_xor_ln340_278_fu_8829_p2() {
    xor_ln340_278_fu_8829_p2 = (tmp_925_fu_8796_p3.read() ^ tmp_926_fu_8809_p3.read());
}

void matmul::thread_xor_ln340_279_fu_8917_p2() {
    xor_ln340_279_fu_8917_p2 = (tmp_935_fu_8884_p3.read() ^ tmp_936_fu_8897_p3.read());
}

void matmul::thread_xor_ln340_280_fu_9005_p2() {
    xor_ln340_280_fu_9005_p2 = (tmp_945_fu_8972_p3.read() ^ tmp_946_fu_8985_p3.read());
}

void matmul::thread_xor_ln340_281_fu_9093_p2() {
    xor_ln340_281_fu_9093_p2 = (tmp_955_fu_9060_p3.read() ^ tmp_956_fu_9073_p3.read());
}

void matmul::thread_xor_ln340_282_fu_9181_p2() {
    xor_ln340_282_fu_9181_p2 = (tmp_965_fu_9148_p3.read() ^ tmp_966_fu_9161_p3.read());
}

void matmul::thread_xor_ln340_283_fu_9269_p2() {
    xor_ln340_283_fu_9269_p2 = (tmp_975_fu_9236_p3.read() ^ tmp_976_fu_9249_p3.read());
}

void matmul::thread_xor_ln340_fu_8477_p2() {
    xor_ln340_fu_8477_p2 = (tmp_885_fu_8444_p3.read() ^ tmp_886_fu_8457_p3.read());
}

void matmul::thread_xor_ln416_63_fu_6608_p2() {
    xor_ln416_63_fu_6608_p2 = (tmp_890_fu_6600_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln416_64_fu_6782_p2() {
    xor_ln416_64_fu_6782_p2 = (tmp_900_fu_6774_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln416_65_fu_6956_p2() {
    xor_ln416_65_fu_6956_p2 = (tmp_910_fu_6948_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln416_66_fu_7130_p2() {
    xor_ln416_66_fu_7130_p2 = (tmp_920_fu_7122_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln416_67_fu_7304_p2() {
    xor_ln416_67_fu_7304_p2 = (tmp_930_fu_7296_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln416_68_fu_7478_p2() {
    xor_ln416_68_fu_7478_p2 = (tmp_940_fu_7470_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln416_69_fu_7652_p2() {
    xor_ln416_69_fu_7652_p2 = (tmp_950_fu_7644_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln416_70_fu_7826_p2() {
    xor_ln416_70_fu_7826_p2 = (tmp_960_fu_7818_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln416_71_fu_8000_p2() {
    xor_ln416_71_fu_8000_p2 = (tmp_970_fu_7992_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln416_fu_6434_p2() {
    xor_ln416_fu_6434_p2 = (tmp_880_fu_6426_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln779_63_fu_6671_p2() {
    xor_ln779_63_fu_6671_p2 = (tmp_894_fu_6664_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln779_64_fu_6845_p2() {
    xor_ln779_64_fu_6845_p2 = (tmp_904_fu_6838_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln779_65_fu_7019_p2() {
    xor_ln779_65_fu_7019_p2 = (tmp_914_fu_7012_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln779_66_fu_7193_p2() {
    xor_ln779_66_fu_7193_p2 = (tmp_924_fu_7186_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln779_67_fu_7367_p2() {
    xor_ln779_67_fu_7367_p2 = (tmp_934_fu_7360_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln779_68_fu_7541_p2() {
    xor_ln779_68_fu_7541_p2 = (tmp_944_fu_7534_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln779_69_fu_7715_p2() {
    xor_ln779_69_fu_7715_p2 = (tmp_954_fu_7708_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln779_70_fu_7889_p2() {
    xor_ln779_70_fu_7889_p2 = (tmp_964_fu_7882_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln779_71_fu_8063_p2() {
    xor_ln779_71_fu_8063_p2 = (tmp_974_fu_8056_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln779_fu_6497_p2() {
    xor_ln779_fu_6497_p2 = (tmp_884_fu_6490_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_127_fu_6535_p2() {
    xor_ln785_127_fu_6535_p2 = (tmp_877_reg_15764.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_128_fu_6709_p2() {
    xor_ln785_128_fu_6709_p2 = (tmp_887_reg_15784.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_129_fu_6883_p2() {
    xor_ln785_129_fu_6883_p2 = (tmp_897_reg_15804.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_130_fu_7057_p2() {
    xor_ln785_130_fu_7057_p2 = (tmp_907_reg_15824.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_131_fu_7231_p2() {
    xor_ln785_131_fu_7231_p2 = (tmp_917_reg_15844.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_132_fu_7405_p2() {
    xor_ln785_132_fu_7405_p2 = (tmp_927_reg_15864.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_133_fu_7579_p2() {
    xor_ln785_133_fu_7579_p2 = (tmp_937_reg_15884.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_134_fu_7753_p2() {
    xor_ln785_134_fu_7753_p2 = (tmp_947_reg_15904.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_135_fu_7927_p2() {
    xor_ln785_135_fu_7927_p2 = (tmp_957_reg_15924.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_136_fu_8101_p2() {
    xor_ln785_136_fu_8101_p2 = (tmp_967_reg_15944.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_1_fu_6697_p2() {
    xor_ln785_1_fu_6697_p2 = (select_ln777_63_fu_6656_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_2_fu_6871_p2() {
    xor_ln785_2_fu_6871_p2 = (select_ln777_64_fu_6830_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_3_fu_7045_p2() {
    xor_ln785_3_fu_7045_p2 = (select_ln777_65_fu_7004_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_4_fu_7219_p2() {
    xor_ln785_4_fu_7219_p2 = (select_ln777_66_fu_7178_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_5_fu_7393_p2() {
    xor_ln785_5_fu_7393_p2 = (select_ln777_67_fu_7352_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_6_fu_7567_p2() {
    xor_ln785_6_fu_7567_p2 = (select_ln777_68_fu_7526_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_7_fu_7741_p2() {
    xor_ln785_7_fu_7741_p2 = (select_ln777_69_fu_7700_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_8_fu_7915_p2() {
    xor_ln785_8_fu_7915_p2 = (select_ln777_70_fu_7874_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_9_fu_8089_p2() {
    xor_ln785_9_fu_8089_p2 = (select_ln777_71_fu_8048_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln785_fu_6523_p2() {
    xor_ln785_fu_6523_p2 = (select_ln777_fu_6482_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_161_fu_8465_p2() {
    xor_ln786_161_fu_8465_p2 = (tmp_886_fu_8457_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_162_fu_8553_p2() {
    xor_ln786_162_fu_8553_p2 = (tmp_896_fu_8545_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_163_fu_8641_p2() {
    xor_ln786_163_fu_8641_p2 = (tmp_906_fu_8633_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_164_fu_8729_p2() {
    xor_ln786_164_fu_8729_p2 = (tmp_916_fu_8721_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_165_fu_8817_p2() {
    xor_ln786_165_fu_8817_p2 = (tmp_926_fu_8809_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_166_fu_8905_p2() {
    xor_ln786_166_fu_8905_p2 = (tmp_936_fu_8897_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_167_fu_8993_p2() {
    xor_ln786_167_fu_8993_p2 = (tmp_946_fu_8985_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_168_fu_9081_p2() {
    xor_ln786_168_fu_9081_p2 = (tmp_956_fu_9073_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_169_fu_9169_p2() {
    xor_ln786_169_fu_9169_p2 = (tmp_966_fu_9161_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_170_fu_9257_p2() {
    xor_ln786_170_fu_9257_p2 = (tmp_976_fu_9249_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_171_fu_6732_p2() {
    xor_ln786_171_fu_6732_p2 = (or_ln786_63_fu_6726_p2.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_172_fu_6906_p2() {
    xor_ln786_172_fu_6906_p2 = (or_ln786_64_fu_6900_p2.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_173_fu_7080_p2() {
    xor_ln786_173_fu_7080_p2 = (or_ln786_65_fu_7074_p2.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_174_fu_7254_p2() {
    xor_ln786_174_fu_7254_p2 = (or_ln786_66_fu_7248_p2.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_175_fu_7428_p2() {
    xor_ln786_175_fu_7428_p2 = (or_ln786_67_fu_7422_p2.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_176_fu_7602_p2() {
    xor_ln786_176_fu_7602_p2 = (or_ln786_68_fu_7596_p2.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_177_fu_7776_p2() {
    xor_ln786_177_fu_7776_p2 = (or_ln786_69_fu_7770_p2.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_178_fu_7950_p2() {
    xor_ln786_178_fu_7950_p2 = (or_ln786_70_fu_7944_p2.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_179_fu_8124_p2() {
    xor_ln786_179_fu_8124_p2 = (or_ln786_71_fu_8118_p2.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln786_fu_6558_p2() {
    xor_ln786_fu_6558_p2 = (or_ln786_fu_6552_p2.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln949_1_fu_10955_p2() {
    xor_ln949_1_fu_10955_p2 = (tmp_843_fu_10948_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln949_2_fu_11048_p2() {
    xor_ln949_2_fu_11048_p2 = (tmp_847_fu_11041_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln949_3_fu_11141_p2() {
    xor_ln949_3_fu_11141_p2 = (tmp_851_fu_11134_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln949_4_fu_11234_p2() {
    xor_ln949_4_fu_11234_p2 = (tmp_855_fu_11227_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln949_5_fu_11327_p2() {
    xor_ln949_5_fu_11327_p2 = (tmp_859_fu_11320_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln949_6_fu_11420_p2() {
    xor_ln949_6_fu_11420_p2 = (tmp_863_fu_11413_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln949_7_fu_11513_p2() {
    xor_ln949_7_fu_11513_p2 = (tmp_867_fu_11506_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln949_8_fu_11606_p2() {
    xor_ln949_8_fu_11606_p2 = (tmp_871_fu_11599_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln949_9_fu_11699_p2() {
    xor_ln949_9_fu_11699_p2 = (tmp_875_fu_11692_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_xor_ln949_fu_10862_p2() {
    xor_ln949_fu_10862_p2 = (tmp_839_fu_10855_p3.read() ^ ap_const_lv1_1);
}

void matmul::thread_zext_ln31_1_cast_fu_5494_p1() {
    zext_ln31_1_cast_fu_5494_p1 = esl_zext<12,11>(tmp_22_fu_5486_p3.read());
}

void matmul::thread_zext_ln31_1_fu_5519_p1() {
    zext_ln31_1_fu_5519_p1 = esl_zext<64,12>(add_ln31_fu_5514_p2.read());
}

void matmul::thread_zext_ln31_fu_5510_p1() {
    zext_ln31_fu_5510_p1 = esl_zext<12,7>(cii_0_reg_5475.read());
}

void matmul::thread_zext_ln415_63_fu_6591_p1() {
    zext_ln415_63_fu_6591_p1 = esl_zext<14,1>(tmp_889_reg_15790.read());
}

void matmul::thread_zext_ln415_64_fu_6765_p1() {
    zext_ln415_64_fu_6765_p1 = esl_zext<14,1>(tmp_899_reg_15810.read());
}

void matmul::thread_zext_ln415_65_fu_6939_p1() {
    zext_ln415_65_fu_6939_p1 = esl_zext<14,1>(tmp_909_reg_15830.read());
}

void matmul::thread_zext_ln415_66_fu_7113_p1() {
    zext_ln415_66_fu_7113_p1 = esl_zext<14,1>(tmp_919_reg_15850.read());
}

void matmul::thread_zext_ln415_67_fu_7287_p1() {
    zext_ln415_67_fu_7287_p1 = esl_zext<14,1>(tmp_929_reg_15870.read());
}

void matmul::thread_zext_ln415_68_fu_7461_p1() {
    zext_ln415_68_fu_7461_p1 = esl_zext<14,1>(tmp_939_reg_15890.read());
}

void matmul::thread_zext_ln415_69_fu_7635_p1() {
    zext_ln415_69_fu_7635_p1 = esl_zext<14,1>(tmp_949_reg_15910.read());
}

void matmul::thread_zext_ln415_70_fu_7809_p1() {
    zext_ln415_70_fu_7809_p1 = esl_zext<14,1>(tmp_959_reg_15930.read());
}

void matmul::thread_zext_ln415_71_fu_7983_p1() {
    zext_ln415_71_fu_7983_p1 = esl_zext<14,1>(tmp_969_reg_15950.read());
}

void matmul::thread_zext_ln415_fu_6417_p1() {
    zext_ln415_fu_6417_p1 = esl_zext<14,1>(tmp_879_reg_15770.read());
}

void matmul::thread_zext_ln728_1_fu_9381_p1() {
    zext_ln728_1_fu_9381_p1 = esl_zext<15,11>(shl_ln728_s_fu_9374_p3.read());
}

void matmul::thread_zext_ln728_2_fu_9440_p1() {
    zext_ln728_2_fu_9440_p1 = esl_zext<15,11>(shl_ln728_125_fu_9433_p3.read());
}

void matmul::thread_zext_ln728_3_fu_9499_p1() {
    zext_ln728_3_fu_9499_p1 = esl_zext<15,11>(shl_ln728_126_fu_9492_p3.read());
}

void matmul::thread_zext_ln728_4_fu_9558_p1() {
    zext_ln728_4_fu_9558_p1 = esl_zext<15,11>(shl_ln728_127_fu_9551_p3.read());
}

void matmul::thread_zext_ln728_5_fu_9617_p1() {
    zext_ln728_5_fu_9617_p1 = esl_zext<15,11>(shl_ln728_128_fu_9610_p3.read());
}

void matmul::thread_zext_ln728_6_fu_9676_p1() {
    zext_ln728_6_fu_9676_p1 = esl_zext<15,11>(shl_ln728_129_fu_9669_p3.read());
}

void matmul::thread_zext_ln728_7_fu_9735_p1() {
    zext_ln728_7_fu_9735_p1 = esl_zext<15,11>(shl_ln728_130_fu_9728_p3.read());
}

void matmul::thread_zext_ln728_8_fu_9794_p1() {
    zext_ln728_8_fu_9794_p1 = esl_zext<15,11>(shl_ln728_131_fu_9787_p3.read());
}

void matmul::thread_zext_ln728_9_fu_9853_p1() {
    zext_ln728_9_fu_9853_p1 = esl_zext<15,11>(shl_ln728_132_fu_9846_p3.read());
}

void matmul::thread_zext_ln728_fu_9322_p1() {
    zext_ln728_fu_9322_p1 = esl_zext<15,11>(shl_ln_fu_9315_p3.read());
}

void matmul::thread_zext_ln947_1_fu_10319_p1() {
    zext_ln947_1_fu_10319_p1 = esl_zext<15,4>(sub_ln947_1_fu_10314_p2.read());
}

void matmul::thread_zext_ln947_2_fu_10381_p1() {
    zext_ln947_2_fu_10381_p1 = esl_zext<15,4>(sub_ln947_2_fu_10376_p2.read());
}

void matmul::thread_zext_ln947_3_fu_10443_p1() {
    zext_ln947_3_fu_10443_p1 = esl_zext<15,4>(sub_ln947_3_fu_10438_p2.read());
}

void matmul::thread_zext_ln947_4_fu_10505_p1() {
    zext_ln947_4_fu_10505_p1 = esl_zext<15,4>(sub_ln947_4_fu_10500_p2.read());
}

void matmul::thread_zext_ln947_5_fu_10567_p1() {
    zext_ln947_5_fu_10567_p1 = esl_zext<15,4>(sub_ln947_5_fu_10562_p2.read());
}

void matmul::thread_zext_ln947_6_fu_10629_p1() {
    zext_ln947_6_fu_10629_p1 = esl_zext<15,4>(sub_ln947_6_fu_10624_p2.read());
}

void matmul::thread_zext_ln947_7_fu_10691_p1() {
    zext_ln947_7_fu_10691_p1 = esl_zext<15,4>(sub_ln947_7_fu_10686_p2.read());
}

void matmul::thread_zext_ln947_8_fu_10753_p1() {
    zext_ln947_8_fu_10753_p1 = esl_zext<15,4>(sub_ln947_8_fu_10748_p2.read());
}

void matmul::thread_zext_ln947_9_fu_10815_p1() {
    zext_ln947_9_fu_10815_p1 = esl_zext<15,4>(sub_ln947_9_fu_10810_p2.read());
}

void matmul::thread_zext_ln947_fu_10257_p1() {
    zext_ln947_fu_10257_p1 = esl_zext<15,4>(sub_ln947_fu_10252_p2.read());
}

void matmul::thread_zext_ln957_1_fu_10987_p1() {
    zext_ln957_1_fu_10987_p1 = esl_zext<32,15>(select_ln938_1_reg_16407.read());
}

void matmul::thread_zext_ln957_2_fu_11080_p1() {
    zext_ln957_2_fu_11080_p1 = esl_zext<32,15>(select_ln938_2_reg_16429.read());
}

void matmul::thread_zext_ln957_3_fu_11173_p1() {
    zext_ln957_3_fu_11173_p1 = esl_zext<32,15>(select_ln938_3_reg_16451.read());
}

void matmul::thread_zext_ln957_4_fu_11266_p1() {
    zext_ln957_4_fu_11266_p1 = esl_zext<32,15>(select_ln938_4_reg_16473.read());
}

void matmul::thread_zext_ln957_5_fu_11359_p1() {
    zext_ln957_5_fu_11359_p1 = esl_zext<32,15>(select_ln938_5_reg_16495.read());
}

void matmul::thread_zext_ln957_6_fu_11452_p1() {
    zext_ln957_6_fu_11452_p1 = esl_zext<32,15>(select_ln938_6_reg_16517.read());
}

void matmul::thread_zext_ln957_7_fu_11545_p1() {
    zext_ln957_7_fu_11545_p1 = esl_zext<32,15>(select_ln938_7_reg_16539.read());
}

void matmul::thread_zext_ln957_8_fu_11638_p1() {
    zext_ln957_8_fu_11638_p1 = esl_zext<32,15>(select_ln938_8_reg_16561.read());
}

void matmul::thread_zext_ln957_9_fu_11731_p1() {
    zext_ln957_9_fu_11731_p1 = esl_zext<32,15>(select_ln938_9_reg_16583.read());
}

void matmul::thread_zext_ln957_fu_10894_p1() {
    zext_ln957_fu_10894_p1 = esl_zext<32,15>(select_ln938_reg_16385.read());
}

void matmul::thread_zext_ln962_1_fu_11832_p1() {
    zext_ln962_1_fu_11832_p1 = esl_zext<32,31>(lshr_ln962_1_reg_17135.read());
}

void matmul::thread_zext_ln962_2_fu_11883_p1() {
    zext_ln962_2_fu_11883_p1 = esl_zext<32,31>(lshr_ln962_2_reg_17145.read());
}

void matmul::thread_zext_ln962_3_fu_11934_p1() {
    zext_ln962_3_fu_11934_p1 = esl_zext<32,31>(lshr_ln962_3_reg_17155.read());
}

void matmul::thread_zext_ln962_4_fu_11985_p1() {
    zext_ln962_4_fu_11985_p1 = esl_zext<32,31>(lshr_ln962_4_reg_17165.read());
}

void matmul::thread_zext_ln962_5_fu_12036_p1() {
    zext_ln962_5_fu_12036_p1 = esl_zext<32,31>(lshr_ln962_5_reg_17175.read());
}

void matmul::thread_zext_ln962_6_fu_12087_p1() {
    zext_ln962_6_fu_12087_p1 = esl_zext<32,31>(lshr_ln962_6_reg_17185.read());
}

void matmul::thread_zext_ln962_7_fu_12138_p1() {
    zext_ln962_7_fu_12138_p1 = esl_zext<32,31>(lshr_ln962_7_reg_17195.read());
}

void matmul::thread_zext_ln962_8_fu_12189_p1() {
    zext_ln962_8_fu_12189_p1 = esl_zext<32,31>(lshr_ln962_8_reg_17205.read());
}

void matmul::thread_zext_ln962_9_fu_12240_p1() {
    zext_ln962_9_fu_12240_p1 = esl_zext<32,31>(lshr_ln962_9_reg_17215.read());
}

void matmul::thread_zext_ln962_fu_11781_p1() {
    zext_ln962_fu_11781_p1 = esl_zext<32,31>(lshr_ln_reg_17125.read());
}

}


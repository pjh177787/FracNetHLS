set lang "C++"
set moduleName "FracNet"
set moduleIsExternC "0"
set rawDecl ""
set globalVariable ""
set PortName8 "weight_buf_3x3"
set BitWidth8 "73728"
set ArrayOpt8 ""
set Const8 "0"
set Volatile8 "0"
set Pointer8 "0"
set Reference8 "0"
set Initializer8 ""
set External8 0
set Dims8 [list  4 32 3 3]
set Interface8 "wire"
set NameSpace8 [list ]
set DataType8 "[list ap_uint 64 ]"
set Port8 [list $PortName8 $Interface8 $DataType8 $Pointer8 $Dims8 $Const8 $Volatile8 $ArrayOpt8 $Initializer8 $External8 $NameSpace8]
lappend globalVariable $Port8
set PortName9 "weight_buf_1x1"
set BitWidth9 "8192"
set ArrayOpt9 ""
set Const9 "0"
set Volatile9 "0"
set Pointer9 "0"
set Reference9 "0"
set Initializer9 ""
set External9 0
set Dims9 [list  4 32]
set Interface9 "wire"
set NameSpace9 [list ]
set DataType9 "[list ap_uint 64 ]"
set Port9 [list $PortName9 $Interface9 $DataType9 $Pointer9 $Dims9 $Const9 $Volatile9 $ArrayOpt9 $Initializer9 $External9 $NameSpace9]
lappend globalVariable $Port9
set PortName10 "thres_buf"
set BitWidth10 "2048"
set ArrayOpt10 ""
set Const10 "0"
set Volatile10 "0"
set Pointer10 "0"
set Reference10 "0"
set Initializer10 ""
set External10 0
set Dims10 [list  4 32]
set Interface10 "wire"
set NameSpace10 [list ]
set DataType10 "[list ap_fixed 11 4 0 0 0 ]"
set Port10 [list $PortName10 $Interface10 $DataType10 $Pointer10 $Dims10 $Const10 $Volatile10 $ArrayOpt10 $Initializer10 $External10 $NameSpace10]
lappend globalVariable $Port10
set PortName11 "relu_weight_buf"
set BitWidth11 "1024"
set ArrayOpt11 ""
set Const11 "0"
set Volatile11 "0"
set Pointer11 "0"
set Reference11 "0"
set Initializer11 ""
set External11 0
set Dims11 [list  2 32]
set Interface11 "wire"
set NameSpace11 [list ]
set DataType11 "[list ap_fixed 11 4 0 0 0 ]"
set Port11 [list $PortName11 $Interface11 $DataType11 $Pointer11 $Dims11 $Const11 $Volatile11 $ArrayOpt11 $Initializer11 $External11 $NameSpace11]
lappend globalVariable $Port11
set PortName12 "relu_shifty_buf"
set BitWidth12 "1024"
set ArrayOpt12 ""
set Const12 "0"
set Volatile12 "0"
set Pointer12 "0"
set Reference12 "0"
set Initializer12 ""
set External12 0
set Dims12 [list  2 32]
set Interface12 "wire"
set NameSpace12 [list ]
set DataType12 "[list ap_fixed 11 4 0 0 0 ]"
set Port12 [list $PortName12 $Interface12 $DataType12 $Pointer12 $Dims12 $Const12 $Volatile12 $ArrayOpt12 $Initializer12 $External12 $NameSpace12]
lappend globalVariable $Port12
set PortName13 "relu_shiftx_buf"
set BitWidth13 "1024"
set ArrayOpt13 ""
set Const13 "0"
set Volatile13 "0"
set Pointer13 "0"
set Reference13 "0"
set Initializer13 ""
set External13 0
set Dims13 [list  2 32]
set Interface13 "wire"
set NameSpace13 [list ]
set DataType13 "[list ap_fixed 11 4 0 0 0 ]"
set Port13 [list $PortName13 $Interface13 $DataType13 $Pointer13 $Dims13 $Const13 $Volatile13 $ArrayOpt13 $Initializer13 $External13 $NameSpace13]
lappend globalVariable $Port13
set PortName14 "pg_buf_all"
set BitWidth14 "831744"
set ArrayOpt14 ""
set Const14 "0"
set Volatile14 "0"
set Pointer14 "0"
set Reference14 "0"
set Initializer14 ""
set External14 0
set Dims14 [list  12996]
set Interface14 "wire"
set NameSpace14 [list ]
set DataType14 "[list ap_uint 64 ]"
set Port14 [list $PortName14 $Interface14 $DataType14 $Pointer14 $Dims14 $Const14 $Volatile14 $ArrayOpt14 $Initializer14 $External14 $NameSpace14]
lappend globalVariable $Port14
set PortName15 "pg_buf0"
set BitWidth15 "5184"
set ArrayOpt15 ""
set Const15 "0"
set Volatile15 "0"
set Pointer15 "0"
set Reference15 "0"
set Initializer15 ""
set External15 0
set Dims15 [list  9 9]
set Interface15 "wire"
set NameSpace15 [list ]
set DataType15 "[list ap_uint 64 ]"
set Port15 [list $PortName15 $Interface15 $DataType15 $Pointer15 $Dims15 $Const15 $Volatile15 $ArrayOpt15 $Initializer15 $External15 $NameSpace15]
lappend globalVariable $Port15
set PortName16 "bn_weight_buf"
set BitWidth16 "2048"
set ArrayOpt16 ""
set Const16 "0"
set Volatile16 "0"
set Pointer16 "0"
set Reference16 "0"
set Initializer16 ""
set External16 0
set Dims16 [list  4 32]
set Interface16 "wire"
set NameSpace16 [list ]
set DataType16 "[list ap_fixed 11 4 0 0 0 ]"
set Port16 [list $PortName16 $Interface16 $DataType16 $Pointer16 $Dims16 $Const16 $Volatile16 $ArrayOpt16 $Initializer16 $External16 $NameSpace16]
lappend globalVariable $Port16
set PortName17 "bn_bias_buf"
set BitWidth17 "2048"
set ArrayOpt17 ""
set Const17 "0"
set Volatile17 "0"
set Pointer17 "0"
set Reference17 "0"
set Initializer17 ""
set External17 0
set Dims17 [list  4 32]
set Interface17 "wire"
set NameSpace17 [list ]
set DataType17 "[list ap_fixed 11 4 0 0 0 ]"
set Port17 [list $PortName17 $Interface17 $DataType17 $Pointer17 $Dims17 $Const17 $Volatile17 $ArrayOpt17 $Initializer17 $External17 $NameSpace17]
lappend globalVariable $Port17
set PortName18 "FM_buf_acc0"
set BitWidth18 "41472"
set ArrayOpt18 ""
set Const18 "0"
set Volatile18 "0"
set Pointer18 "0"
set Reference18 "0"
set Initializer18 ""
set External18 0
set Dims18 [list  32 9 9]
set Interface18 "wire"
set NameSpace18 [list ]
set DataType18 "[list ap_fixed 14 6 0 0 0 ]"
set Port18 [list $PortName18 $Interface18 $DataType18 $Pointer18 $Dims18 $Const18 $Volatile18 $ArrayOpt18 $Initializer18 $External18 $NameSpace18]
lappend globalVariable $Port18
set PortName19 "FM_buf0"
set BitWidth19 "41472"
set ArrayOpt19 ""
set Const19 "0"
set Volatile19 "0"
set Pointer19 "0"
set Reference19 "0"
set Initializer19 ""
set External19 0
set Dims19 [list  32 9 9]
set Interface19 "wire"
set NameSpace19 [list ]
set DataType19 "[list ap_fixed 9 3 0 0 0 ]"
set Port19 [list $PortName19 $Interface19 $DataType19 $Pointer19 $Dims19 $Const19 $Volatile19 $ArrayOpt19 $Initializer19 $External19 $NameSpace19]
lappend globalVariable $Port19
set PortList ""
set PortName0 "image_thermo"
set BitWidth0 "64"
set ArrayOpt0 ""
set Const0 "0"
set Volatile0 "0"
set Pointer0 "0"
set Reference0 "0"
set Dims0 [list 153228]
set Interface0 "wire"
set DataType0 "[list ap_uint 32 ]"
set Port0 [list $PortName0 $Interface0 $DataType0 $Pointer0 $Dims0 $Const0 $Volatile0 $ArrayOpt0]
lappend PortList $Port0
set PortName1 "conv_weight_1x1_all"
set BitWidth1 "64"
set ArrayOpt1 ""
set Const1 "0"
set Volatile1 "0"
set Pointer1 "0"
set Reference1 "0"
set Dims1 [list 1000]
set Interface1 "wire"
set DataType1 "[list ap_uint 512 ]"
set Port1 [list $PortName1 $Interface1 $DataType1 $Pointer1 $Dims1 $Const1 $Volatile1 $ArrayOpt1]
lappend PortList $Port1
set PortName2 "conv_weight_3x3_all"
set BitWidth2 "64"
set ArrayOpt2 ""
set Const2 "0"
set Volatile2 "0"
set Pointer2 "0"
set Reference2 "0"
set Dims2 [list 1000 3 3]
set Interface2 "wire"
set DataType2 "[list ap_uint 512 ]"
set Port2 [list $PortName2 $Interface2 $DataType2 $Pointer2 $Dims2 $Const2 $Volatile2 $ArrayOpt2]
lappend PortList $Port2
set PortName3 "weights_all"
set BitWidth3 "64"
set ArrayOpt3 ""
set Const3 "0"
set Volatile3 "0"
set Pointer3 "0"
set Reference3 "0"
set Dims3 [list 10000]
set Interface3 "wire"
set DataType3 "[list ap_uint 512 ]"
set Port3 [list $PortName3 $Interface3 $DataType3 $Pointer3 $Dims3 $Const3 $Volatile3 $ArrayOpt3]
lappend PortList $Port3
set PortName4 "linear_weight_all"
set BitWidth4 "64"
set ArrayOpt4 ""
set Const4 "0"
set Volatile4 "0"
set Pointer4 "0"
set Reference4 "0"
set Dims4 [list 16000 2]
set Interface4 "wire"
set DataType4 "[list ap_uint 512 ]"
set Port4 [list $PortName4 $Interface4 $DataType4 $Pointer4 $Dims4 $Const4 $Volatile4 $ArrayOpt4]
lappend PortList $Port4
set PortName5 "linear_bias_all"
set BitWidth5 "64"
set ArrayOpt5 ""
set Const5 "0"
set Volatile5 "0"
set Pointer5 "0"
set Reference5 "0"
set Dims5 [list 100]
set Interface5 "wire"
set DataType5 "[list ap_uint 512 ]"
set Port5 [list $PortName5 $Interface5 $DataType5 $Pointer5 $Dims5 $Const5 $Volatile5 $ArrayOpt5]
lappend PortList $Port5
set PortName6 "DDR_buff_merge"
set BitWidth6 "64"
set ArrayOpt6 ""
set Const6 "0"
set Volatile6 "0"
set Pointer6 "1"
set Reference6 "0"
set Dims6 [list 0]
set Interface6 "wire"
set DataType6 "[list ap_uint 512 ]"
set Port6 [list $PortName6 $Interface6 $DataType6 $Pointer6 $Dims6 $Const6 $Volatile6 $ArrayOpt6]
lappend PortList $Port6
set PortName7 "out"
set BitWidth7 "64"
set ArrayOpt7 ""
set Const7 "0"
set Volatile7 "0"
set Pointer7 "0"
set Reference7 "0"
set Dims7 [list 1000]
set Interface7 "wire"
set DataType7 "float"
set Port7 [list $PortName7 $Interface7 $DataType7 $Pointer7 $Dims7 $Const7 $Volatile7 $ArrayOpt7]
lappend PortList $Port7
set globalAPint "" 
set returnAPInt "" 
set hasCPPAPInt 1 
set argAPInt "" 
set hasCPPAPFix 0 
set hasSCFix 0 
set hasCBool 0 
set hasCPPComplex 0 
set isTemplateTop 0
set hasHalf 0 
set dataPackList ""
set module [list $moduleName $PortList $rawDecl $argAPInt $returnAPInt $dataPackList]

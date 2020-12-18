set moduleName load_conv3x3_weights
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {load_conv3x3_weights}
set C_modelType { void 0 }
set C_modelArgList {
	{ conv_weight_3x3_all_V int 512 regular {axi_master 0}  }
	{ conv_weight_3x3_all_V_offset int 26 regular  }
	{ conv3x3_weight_ptr int 16 regular  }
	{ c_out int 6 regular  }
	{ c_in int 6 regular  }
	{ in_channels_after_pa int 7 regular  }
	{ weight3x3_tile_buffe_287 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_288 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_289 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_290 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_291 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_292 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_293 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_294 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_295 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_296 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_297 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_298 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_299 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_300 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_301 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_302 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_303 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_304 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_395 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_396 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_397 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_398 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_399 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_400 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_401 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_402 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_403 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_80 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_79 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_78 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_77 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_76 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_75 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_74 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_73 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_72 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_53 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_52 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_51 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_50 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_49 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_48 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_47 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_46 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_45 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_44 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_43 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_42 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_41 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_40 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_39 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_38 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_37 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_36 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_35 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_34 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_33 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_32 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_31 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_30 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_29 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_28 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_27 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_26 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_25 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_24 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_23 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_22 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_21 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_20 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_19 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_18 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_17 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_16 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_15 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_14 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_13 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_12 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_11 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_10 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_9 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_8 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_7 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_6 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_5 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_4 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_3 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_2 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_1 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_305 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_306 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_307 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_308 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_309 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_310 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_311 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_312 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_313 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_314 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_315 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_316 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_317 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_318 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_319 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_320 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_321 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_322 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_323 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_324 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_325 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_326 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_327 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_328 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_329 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_330 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_331 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_332 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_333 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_334 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_335 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_336 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_337 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_338 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_339 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_340 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_341 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_342 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_343 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_344 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_345 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_346 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_347 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_348 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_349 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_350 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_351 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_352 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_353 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_354 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_355 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_356 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_357 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_358 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_359 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_360 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_361 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_362 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_363 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_364 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_365 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_366 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_367 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_368 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_369 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_370 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_371 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_372 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_373 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_374 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_375 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_376 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_377 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_378 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_379 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_380 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_381 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_382 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_383 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_384 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_385 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_386 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_387 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_388 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_389 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_390 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_391 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_392 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_393 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_394 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_404 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_405 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_406 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_407 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_408 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_409 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_410 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_411 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_412 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_413 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_414 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_415 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_416 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_417 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_418 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_419 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_420 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_421 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_422 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_423 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_424 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_425 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_426 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_427 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_428 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_429 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_430 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_431 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_432 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_433 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_434 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_435 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_436 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_437 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_438 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_439 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_440 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_441 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_442 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_443 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_444 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_445 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_446 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_447 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_448 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_449 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_450 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_451 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_452 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_453 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_454 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_455 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_456 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_457 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_458 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_459 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_460 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_461 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_462 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_463 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_464 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_465 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_466 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_467 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_468 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_469 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_470 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_471 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_472 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_473 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_474 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_99 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_98 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_97 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_96 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_95 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_94 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_93 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_92 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_91 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_90 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_89 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_88 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_87 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_86 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_85 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_84 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_83 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_82 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_81 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_71 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_70 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_69 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_68 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_67 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_66 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_65 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_64 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_63 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_62 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_61 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_60 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_59 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_58 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_57 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_56 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_55 int 32 regular {pointer 1} {global 1}  }
	{ weight3x3_tile_buffe_54 int 32 regular {pointer 1} {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv_weight_3x3_all_V", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "conv_weight_3x3_all_V_offset", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "conv3x3_weight_ptr", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "c_out", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "c_in", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "in_channels_after_pa", "interface" : "wire", "bitwidth" : 7, "direction" : "READONLY"} , 
 	{ "Name" : "weight3x3_tile_buffe_287", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_288", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_289", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_290", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_291", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_292", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_293", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_294", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_295", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_296", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_297", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_298", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_299", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_300", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_301", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_302", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_303", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_304", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_395", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_396", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_397", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_398", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_399", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_400", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_401", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_402", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_403", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_80", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_79", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_78", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_77", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_76", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_75", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_74", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_73", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_72", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_53", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_52", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_51", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_50", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_49", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_48", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_47", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_46", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_45", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_44", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_43", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_42", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_41", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_40", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_39", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_38", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_37", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_36", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_35", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_34", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_33", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_32", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_31", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_30", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_29", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_28", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_27", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_26", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_25", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_24", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_23", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_22", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_21", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_20", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_19", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_18", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_17", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_16", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_15", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_14", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_13", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_12", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_11", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_10", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_9", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_8", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_7", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_6", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_5", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_4", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_3", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_2", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_1", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_305", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_306", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_307", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_308", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_309", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_310", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_311", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_312", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_313", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_314", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_315", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_316", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_317", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_318", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_319", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_320", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_321", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_322", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_323", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_324", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_325", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_326", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_327", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_328", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_329", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_330", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_331", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_332", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_333", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_334", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_335", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_336", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_337", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_338", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_339", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_340", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_341", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_342", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_343", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_344", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_345", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_346", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_347", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_348", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_349", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_350", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_351", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_352", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_353", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_354", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_355", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_356", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_357", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_358", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_359", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_360", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_361", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_362", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_363", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_364", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_365", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_366", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_367", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_368", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_369", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_370", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_371", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_372", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_373", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_374", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_375", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_376", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_377", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_378", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_379", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_380", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_381", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_382", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_383", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_384", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_385", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_386", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_387", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_388", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_389", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_390", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_391", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_392", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_393", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_394", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_404", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_405", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_406", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_407", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_408", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_409", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_410", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_411", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_412", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_413", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_414", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_415", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_416", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_417", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_418", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_419", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_420", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_421", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_422", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_423", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_424", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_425", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_426", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_427", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_428", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_429", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_430", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_431", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_432", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_433", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_434", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_435", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_436", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_437", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_438", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_439", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_440", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_441", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_442", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_443", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_444", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_445", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_446", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_447", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_448", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_449", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_450", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_451", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_452", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_453", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_454", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_455", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_456", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_457", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_458", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_459", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_460", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_461", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_462", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_463", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_464", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_465", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_466", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_467", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_468", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_469", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_470", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_471", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_472", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_473", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_474", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_99", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_98", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_97", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_96", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_95", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_94", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_93", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_92", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_91", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_90", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_89", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_88", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_87", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_86", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_85", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_84", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_83", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_82", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_81", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_71", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_70", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_69", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_68", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_67", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_66", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_65", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_64", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_63", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_62", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_61", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_60", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_59", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_58", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_57", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_56", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_55", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} , 
 	{ "Name" : "weight3x3_tile_buffe_54", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 632
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ m_axi_conv_weight_3x3_all_V_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WDATA sc_out sc_lv 512 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WSTRB sc_out sc_lv 64 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RDATA sc_in sc_lv 512 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_conv_weight_3x3_all_V_BUSER sc_in sc_lv 1 signal 0 } 
	{ conv_weight_3x3_all_V_offset sc_in sc_lv 26 signal 1 } 
	{ conv3x3_weight_ptr sc_in sc_lv 16 signal 2 } 
	{ c_out sc_in sc_lv 6 signal 3 } 
	{ c_in sc_in sc_lv 6 signal 4 } 
	{ in_channels_after_pa sc_in sc_lv 7 signal 5 } 
	{ weight3x3_tile_buffe_287 sc_out sc_lv 32 signal 6 } 
	{ weight3x3_tile_buffe_287_ap_vld sc_out sc_logic 1 outvld 6 } 
	{ weight3x3_tile_buffe_288 sc_out sc_lv 32 signal 7 } 
	{ weight3x3_tile_buffe_288_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ weight3x3_tile_buffe_289 sc_out sc_lv 32 signal 8 } 
	{ weight3x3_tile_buffe_289_ap_vld sc_out sc_logic 1 outvld 8 } 
	{ weight3x3_tile_buffe_290 sc_out sc_lv 32 signal 9 } 
	{ weight3x3_tile_buffe_290_ap_vld sc_out sc_logic 1 outvld 9 } 
	{ weight3x3_tile_buffe_291 sc_out sc_lv 32 signal 10 } 
	{ weight3x3_tile_buffe_291_ap_vld sc_out sc_logic 1 outvld 10 } 
	{ weight3x3_tile_buffe_292 sc_out sc_lv 32 signal 11 } 
	{ weight3x3_tile_buffe_292_ap_vld sc_out sc_logic 1 outvld 11 } 
	{ weight3x3_tile_buffe_293 sc_out sc_lv 32 signal 12 } 
	{ weight3x3_tile_buffe_293_ap_vld sc_out sc_logic 1 outvld 12 } 
	{ weight3x3_tile_buffe_294 sc_out sc_lv 32 signal 13 } 
	{ weight3x3_tile_buffe_294_ap_vld sc_out sc_logic 1 outvld 13 } 
	{ weight3x3_tile_buffe_295 sc_out sc_lv 32 signal 14 } 
	{ weight3x3_tile_buffe_295_ap_vld sc_out sc_logic 1 outvld 14 } 
	{ weight3x3_tile_buffe_296 sc_out sc_lv 32 signal 15 } 
	{ weight3x3_tile_buffe_296_ap_vld sc_out sc_logic 1 outvld 15 } 
	{ weight3x3_tile_buffe_297 sc_out sc_lv 32 signal 16 } 
	{ weight3x3_tile_buffe_297_ap_vld sc_out sc_logic 1 outvld 16 } 
	{ weight3x3_tile_buffe_298 sc_out sc_lv 32 signal 17 } 
	{ weight3x3_tile_buffe_298_ap_vld sc_out sc_logic 1 outvld 17 } 
	{ weight3x3_tile_buffe_299 sc_out sc_lv 32 signal 18 } 
	{ weight3x3_tile_buffe_299_ap_vld sc_out sc_logic 1 outvld 18 } 
	{ weight3x3_tile_buffe_300 sc_out sc_lv 32 signal 19 } 
	{ weight3x3_tile_buffe_300_ap_vld sc_out sc_logic 1 outvld 19 } 
	{ weight3x3_tile_buffe_301 sc_out sc_lv 32 signal 20 } 
	{ weight3x3_tile_buffe_301_ap_vld sc_out sc_logic 1 outvld 20 } 
	{ weight3x3_tile_buffe_302 sc_out sc_lv 32 signal 21 } 
	{ weight3x3_tile_buffe_302_ap_vld sc_out sc_logic 1 outvld 21 } 
	{ weight3x3_tile_buffe_303 sc_out sc_lv 32 signal 22 } 
	{ weight3x3_tile_buffe_303_ap_vld sc_out sc_logic 1 outvld 22 } 
	{ weight3x3_tile_buffe_304 sc_out sc_lv 32 signal 23 } 
	{ weight3x3_tile_buffe_304_ap_vld sc_out sc_logic 1 outvld 23 } 
	{ weight3x3_tile_buffe_395 sc_out sc_lv 32 signal 24 } 
	{ weight3x3_tile_buffe_395_ap_vld sc_out sc_logic 1 outvld 24 } 
	{ weight3x3_tile_buffe_396 sc_out sc_lv 32 signal 25 } 
	{ weight3x3_tile_buffe_396_ap_vld sc_out sc_logic 1 outvld 25 } 
	{ weight3x3_tile_buffe_397 sc_out sc_lv 32 signal 26 } 
	{ weight3x3_tile_buffe_397_ap_vld sc_out sc_logic 1 outvld 26 } 
	{ weight3x3_tile_buffe_398 sc_out sc_lv 32 signal 27 } 
	{ weight3x3_tile_buffe_398_ap_vld sc_out sc_logic 1 outvld 27 } 
	{ weight3x3_tile_buffe_399 sc_out sc_lv 32 signal 28 } 
	{ weight3x3_tile_buffe_399_ap_vld sc_out sc_logic 1 outvld 28 } 
	{ weight3x3_tile_buffe_400 sc_out sc_lv 32 signal 29 } 
	{ weight3x3_tile_buffe_400_ap_vld sc_out sc_logic 1 outvld 29 } 
	{ weight3x3_tile_buffe_401 sc_out sc_lv 32 signal 30 } 
	{ weight3x3_tile_buffe_401_ap_vld sc_out sc_logic 1 outvld 30 } 
	{ weight3x3_tile_buffe_402 sc_out sc_lv 32 signal 31 } 
	{ weight3x3_tile_buffe_402_ap_vld sc_out sc_logic 1 outvld 31 } 
	{ weight3x3_tile_buffe_403 sc_out sc_lv 32 signal 32 } 
	{ weight3x3_tile_buffe_403_ap_vld sc_out sc_logic 1 outvld 32 } 
	{ weight3x3_tile_buffe_80 sc_out sc_lv 32 signal 33 } 
	{ weight3x3_tile_buffe_80_ap_vld sc_out sc_logic 1 outvld 33 } 
	{ weight3x3_tile_buffe_79 sc_out sc_lv 32 signal 34 } 
	{ weight3x3_tile_buffe_79_ap_vld sc_out sc_logic 1 outvld 34 } 
	{ weight3x3_tile_buffe_78 sc_out sc_lv 32 signal 35 } 
	{ weight3x3_tile_buffe_78_ap_vld sc_out sc_logic 1 outvld 35 } 
	{ weight3x3_tile_buffe_77 sc_out sc_lv 32 signal 36 } 
	{ weight3x3_tile_buffe_77_ap_vld sc_out sc_logic 1 outvld 36 } 
	{ weight3x3_tile_buffe_76 sc_out sc_lv 32 signal 37 } 
	{ weight3x3_tile_buffe_76_ap_vld sc_out sc_logic 1 outvld 37 } 
	{ weight3x3_tile_buffe_75 sc_out sc_lv 32 signal 38 } 
	{ weight3x3_tile_buffe_75_ap_vld sc_out sc_logic 1 outvld 38 } 
	{ weight3x3_tile_buffe_74 sc_out sc_lv 32 signal 39 } 
	{ weight3x3_tile_buffe_74_ap_vld sc_out sc_logic 1 outvld 39 } 
	{ weight3x3_tile_buffe_73 sc_out sc_lv 32 signal 40 } 
	{ weight3x3_tile_buffe_73_ap_vld sc_out sc_logic 1 outvld 40 } 
	{ weight3x3_tile_buffe_72 sc_out sc_lv 32 signal 41 } 
	{ weight3x3_tile_buffe_72_ap_vld sc_out sc_logic 1 outvld 41 } 
	{ weight3x3_tile_buffe_53 sc_out sc_lv 32 signal 42 } 
	{ weight3x3_tile_buffe_53_ap_vld sc_out sc_logic 1 outvld 42 } 
	{ weight3x3_tile_buffe_52 sc_out sc_lv 32 signal 43 } 
	{ weight3x3_tile_buffe_52_ap_vld sc_out sc_logic 1 outvld 43 } 
	{ weight3x3_tile_buffe_51 sc_out sc_lv 32 signal 44 } 
	{ weight3x3_tile_buffe_51_ap_vld sc_out sc_logic 1 outvld 44 } 
	{ weight3x3_tile_buffe_50 sc_out sc_lv 32 signal 45 } 
	{ weight3x3_tile_buffe_50_ap_vld sc_out sc_logic 1 outvld 45 } 
	{ weight3x3_tile_buffe_49 sc_out sc_lv 32 signal 46 } 
	{ weight3x3_tile_buffe_49_ap_vld sc_out sc_logic 1 outvld 46 } 
	{ weight3x3_tile_buffe_48 sc_out sc_lv 32 signal 47 } 
	{ weight3x3_tile_buffe_48_ap_vld sc_out sc_logic 1 outvld 47 } 
	{ weight3x3_tile_buffe_47 sc_out sc_lv 32 signal 48 } 
	{ weight3x3_tile_buffe_47_ap_vld sc_out sc_logic 1 outvld 48 } 
	{ weight3x3_tile_buffe_46 sc_out sc_lv 32 signal 49 } 
	{ weight3x3_tile_buffe_46_ap_vld sc_out sc_logic 1 outvld 49 } 
	{ weight3x3_tile_buffe_45 sc_out sc_lv 32 signal 50 } 
	{ weight3x3_tile_buffe_45_ap_vld sc_out sc_logic 1 outvld 50 } 
	{ weight3x3_tile_buffe_44 sc_out sc_lv 32 signal 51 } 
	{ weight3x3_tile_buffe_44_ap_vld sc_out sc_logic 1 outvld 51 } 
	{ weight3x3_tile_buffe_43 sc_out sc_lv 32 signal 52 } 
	{ weight3x3_tile_buffe_43_ap_vld sc_out sc_logic 1 outvld 52 } 
	{ weight3x3_tile_buffe_42 sc_out sc_lv 32 signal 53 } 
	{ weight3x3_tile_buffe_42_ap_vld sc_out sc_logic 1 outvld 53 } 
	{ weight3x3_tile_buffe_41 sc_out sc_lv 32 signal 54 } 
	{ weight3x3_tile_buffe_41_ap_vld sc_out sc_logic 1 outvld 54 } 
	{ weight3x3_tile_buffe_40 sc_out sc_lv 32 signal 55 } 
	{ weight3x3_tile_buffe_40_ap_vld sc_out sc_logic 1 outvld 55 } 
	{ weight3x3_tile_buffe_39 sc_out sc_lv 32 signal 56 } 
	{ weight3x3_tile_buffe_39_ap_vld sc_out sc_logic 1 outvld 56 } 
	{ weight3x3_tile_buffe_38 sc_out sc_lv 32 signal 57 } 
	{ weight3x3_tile_buffe_38_ap_vld sc_out sc_logic 1 outvld 57 } 
	{ weight3x3_tile_buffe_37 sc_out sc_lv 32 signal 58 } 
	{ weight3x3_tile_buffe_37_ap_vld sc_out sc_logic 1 outvld 58 } 
	{ weight3x3_tile_buffe_36 sc_out sc_lv 32 signal 59 } 
	{ weight3x3_tile_buffe_36_ap_vld sc_out sc_logic 1 outvld 59 } 
	{ weight3x3_tile_buffe_35 sc_out sc_lv 32 signal 60 } 
	{ weight3x3_tile_buffe_35_ap_vld sc_out sc_logic 1 outvld 60 } 
	{ weight3x3_tile_buffe_34 sc_out sc_lv 32 signal 61 } 
	{ weight3x3_tile_buffe_34_ap_vld sc_out sc_logic 1 outvld 61 } 
	{ weight3x3_tile_buffe_33 sc_out sc_lv 32 signal 62 } 
	{ weight3x3_tile_buffe_33_ap_vld sc_out sc_logic 1 outvld 62 } 
	{ weight3x3_tile_buffe_32 sc_out sc_lv 32 signal 63 } 
	{ weight3x3_tile_buffe_32_ap_vld sc_out sc_logic 1 outvld 63 } 
	{ weight3x3_tile_buffe_31 sc_out sc_lv 32 signal 64 } 
	{ weight3x3_tile_buffe_31_ap_vld sc_out sc_logic 1 outvld 64 } 
	{ weight3x3_tile_buffe_30 sc_out sc_lv 32 signal 65 } 
	{ weight3x3_tile_buffe_30_ap_vld sc_out sc_logic 1 outvld 65 } 
	{ weight3x3_tile_buffe_29 sc_out sc_lv 32 signal 66 } 
	{ weight3x3_tile_buffe_29_ap_vld sc_out sc_logic 1 outvld 66 } 
	{ weight3x3_tile_buffe_28 sc_out sc_lv 32 signal 67 } 
	{ weight3x3_tile_buffe_28_ap_vld sc_out sc_logic 1 outvld 67 } 
	{ weight3x3_tile_buffe_27 sc_out sc_lv 32 signal 68 } 
	{ weight3x3_tile_buffe_27_ap_vld sc_out sc_logic 1 outvld 68 } 
	{ weight3x3_tile_buffe_26 sc_out sc_lv 32 signal 69 } 
	{ weight3x3_tile_buffe_26_ap_vld sc_out sc_logic 1 outvld 69 } 
	{ weight3x3_tile_buffe_25 sc_out sc_lv 32 signal 70 } 
	{ weight3x3_tile_buffe_25_ap_vld sc_out sc_logic 1 outvld 70 } 
	{ weight3x3_tile_buffe_24 sc_out sc_lv 32 signal 71 } 
	{ weight3x3_tile_buffe_24_ap_vld sc_out sc_logic 1 outvld 71 } 
	{ weight3x3_tile_buffe_23 sc_out sc_lv 32 signal 72 } 
	{ weight3x3_tile_buffe_23_ap_vld sc_out sc_logic 1 outvld 72 } 
	{ weight3x3_tile_buffe_22 sc_out sc_lv 32 signal 73 } 
	{ weight3x3_tile_buffe_22_ap_vld sc_out sc_logic 1 outvld 73 } 
	{ weight3x3_tile_buffe_21 sc_out sc_lv 32 signal 74 } 
	{ weight3x3_tile_buffe_21_ap_vld sc_out sc_logic 1 outvld 74 } 
	{ weight3x3_tile_buffe_20 sc_out sc_lv 32 signal 75 } 
	{ weight3x3_tile_buffe_20_ap_vld sc_out sc_logic 1 outvld 75 } 
	{ weight3x3_tile_buffe_19 sc_out sc_lv 32 signal 76 } 
	{ weight3x3_tile_buffe_19_ap_vld sc_out sc_logic 1 outvld 76 } 
	{ weight3x3_tile_buffe_18 sc_out sc_lv 32 signal 77 } 
	{ weight3x3_tile_buffe_18_ap_vld sc_out sc_logic 1 outvld 77 } 
	{ weight3x3_tile_buffe_17 sc_out sc_lv 32 signal 78 } 
	{ weight3x3_tile_buffe_17_ap_vld sc_out sc_logic 1 outvld 78 } 
	{ weight3x3_tile_buffe_16 sc_out sc_lv 32 signal 79 } 
	{ weight3x3_tile_buffe_16_ap_vld sc_out sc_logic 1 outvld 79 } 
	{ weight3x3_tile_buffe_15 sc_out sc_lv 32 signal 80 } 
	{ weight3x3_tile_buffe_15_ap_vld sc_out sc_logic 1 outvld 80 } 
	{ weight3x3_tile_buffe_14 sc_out sc_lv 32 signal 81 } 
	{ weight3x3_tile_buffe_14_ap_vld sc_out sc_logic 1 outvld 81 } 
	{ weight3x3_tile_buffe_13 sc_out sc_lv 32 signal 82 } 
	{ weight3x3_tile_buffe_13_ap_vld sc_out sc_logic 1 outvld 82 } 
	{ weight3x3_tile_buffe_12 sc_out sc_lv 32 signal 83 } 
	{ weight3x3_tile_buffe_12_ap_vld sc_out sc_logic 1 outvld 83 } 
	{ weight3x3_tile_buffe_11 sc_out sc_lv 32 signal 84 } 
	{ weight3x3_tile_buffe_11_ap_vld sc_out sc_logic 1 outvld 84 } 
	{ weight3x3_tile_buffe_10 sc_out sc_lv 32 signal 85 } 
	{ weight3x3_tile_buffe_10_ap_vld sc_out sc_logic 1 outvld 85 } 
	{ weight3x3_tile_buffe_9 sc_out sc_lv 32 signal 86 } 
	{ weight3x3_tile_buffe_9_ap_vld sc_out sc_logic 1 outvld 86 } 
	{ weight3x3_tile_buffe_8 sc_out sc_lv 32 signal 87 } 
	{ weight3x3_tile_buffe_8_ap_vld sc_out sc_logic 1 outvld 87 } 
	{ weight3x3_tile_buffe_7 sc_out sc_lv 32 signal 88 } 
	{ weight3x3_tile_buffe_7_ap_vld sc_out sc_logic 1 outvld 88 } 
	{ weight3x3_tile_buffe_6 sc_out sc_lv 32 signal 89 } 
	{ weight3x3_tile_buffe_6_ap_vld sc_out sc_logic 1 outvld 89 } 
	{ weight3x3_tile_buffe_5 sc_out sc_lv 32 signal 90 } 
	{ weight3x3_tile_buffe_5_ap_vld sc_out sc_logic 1 outvld 90 } 
	{ weight3x3_tile_buffe_4 sc_out sc_lv 32 signal 91 } 
	{ weight3x3_tile_buffe_4_ap_vld sc_out sc_logic 1 outvld 91 } 
	{ weight3x3_tile_buffe_3 sc_out sc_lv 32 signal 92 } 
	{ weight3x3_tile_buffe_3_ap_vld sc_out sc_logic 1 outvld 92 } 
	{ weight3x3_tile_buffe_2 sc_out sc_lv 32 signal 93 } 
	{ weight3x3_tile_buffe_2_ap_vld sc_out sc_logic 1 outvld 93 } 
	{ weight3x3_tile_buffe_1 sc_out sc_lv 32 signal 94 } 
	{ weight3x3_tile_buffe_1_ap_vld sc_out sc_logic 1 outvld 94 } 
	{ weight3x3_tile_buffe sc_out sc_lv 32 signal 95 } 
	{ weight3x3_tile_buffe_ap_vld sc_out sc_logic 1 outvld 95 } 
	{ weight3x3_tile_buffe_305 sc_out sc_lv 32 signal 96 } 
	{ weight3x3_tile_buffe_305_ap_vld sc_out sc_logic 1 outvld 96 } 
	{ weight3x3_tile_buffe_306 sc_out sc_lv 32 signal 97 } 
	{ weight3x3_tile_buffe_306_ap_vld sc_out sc_logic 1 outvld 97 } 
	{ weight3x3_tile_buffe_307 sc_out sc_lv 32 signal 98 } 
	{ weight3x3_tile_buffe_307_ap_vld sc_out sc_logic 1 outvld 98 } 
	{ weight3x3_tile_buffe_308 sc_out sc_lv 32 signal 99 } 
	{ weight3x3_tile_buffe_308_ap_vld sc_out sc_logic 1 outvld 99 } 
	{ weight3x3_tile_buffe_309 sc_out sc_lv 32 signal 100 } 
	{ weight3x3_tile_buffe_309_ap_vld sc_out sc_logic 1 outvld 100 } 
	{ weight3x3_tile_buffe_310 sc_out sc_lv 32 signal 101 } 
	{ weight3x3_tile_buffe_310_ap_vld sc_out sc_logic 1 outvld 101 } 
	{ weight3x3_tile_buffe_311 sc_out sc_lv 32 signal 102 } 
	{ weight3x3_tile_buffe_311_ap_vld sc_out sc_logic 1 outvld 102 } 
	{ weight3x3_tile_buffe_312 sc_out sc_lv 32 signal 103 } 
	{ weight3x3_tile_buffe_312_ap_vld sc_out sc_logic 1 outvld 103 } 
	{ weight3x3_tile_buffe_313 sc_out sc_lv 32 signal 104 } 
	{ weight3x3_tile_buffe_313_ap_vld sc_out sc_logic 1 outvld 104 } 
	{ weight3x3_tile_buffe_314 sc_out sc_lv 32 signal 105 } 
	{ weight3x3_tile_buffe_314_ap_vld sc_out sc_logic 1 outvld 105 } 
	{ weight3x3_tile_buffe_315 sc_out sc_lv 32 signal 106 } 
	{ weight3x3_tile_buffe_315_ap_vld sc_out sc_logic 1 outvld 106 } 
	{ weight3x3_tile_buffe_316 sc_out sc_lv 32 signal 107 } 
	{ weight3x3_tile_buffe_316_ap_vld sc_out sc_logic 1 outvld 107 } 
	{ weight3x3_tile_buffe_317 sc_out sc_lv 32 signal 108 } 
	{ weight3x3_tile_buffe_317_ap_vld sc_out sc_logic 1 outvld 108 } 
	{ weight3x3_tile_buffe_318 sc_out sc_lv 32 signal 109 } 
	{ weight3x3_tile_buffe_318_ap_vld sc_out sc_logic 1 outvld 109 } 
	{ weight3x3_tile_buffe_319 sc_out sc_lv 32 signal 110 } 
	{ weight3x3_tile_buffe_319_ap_vld sc_out sc_logic 1 outvld 110 } 
	{ weight3x3_tile_buffe_320 sc_out sc_lv 32 signal 111 } 
	{ weight3x3_tile_buffe_320_ap_vld sc_out sc_logic 1 outvld 111 } 
	{ weight3x3_tile_buffe_321 sc_out sc_lv 32 signal 112 } 
	{ weight3x3_tile_buffe_321_ap_vld sc_out sc_logic 1 outvld 112 } 
	{ weight3x3_tile_buffe_322 sc_out sc_lv 32 signal 113 } 
	{ weight3x3_tile_buffe_322_ap_vld sc_out sc_logic 1 outvld 113 } 
	{ weight3x3_tile_buffe_323 sc_out sc_lv 32 signal 114 } 
	{ weight3x3_tile_buffe_323_ap_vld sc_out sc_logic 1 outvld 114 } 
	{ weight3x3_tile_buffe_324 sc_out sc_lv 32 signal 115 } 
	{ weight3x3_tile_buffe_324_ap_vld sc_out sc_logic 1 outvld 115 } 
	{ weight3x3_tile_buffe_325 sc_out sc_lv 32 signal 116 } 
	{ weight3x3_tile_buffe_325_ap_vld sc_out sc_logic 1 outvld 116 } 
	{ weight3x3_tile_buffe_326 sc_out sc_lv 32 signal 117 } 
	{ weight3x3_tile_buffe_326_ap_vld sc_out sc_logic 1 outvld 117 } 
	{ weight3x3_tile_buffe_327 sc_out sc_lv 32 signal 118 } 
	{ weight3x3_tile_buffe_327_ap_vld sc_out sc_logic 1 outvld 118 } 
	{ weight3x3_tile_buffe_328 sc_out sc_lv 32 signal 119 } 
	{ weight3x3_tile_buffe_328_ap_vld sc_out sc_logic 1 outvld 119 } 
	{ weight3x3_tile_buffe_329 sc_out sc_lv 32 signal 120 } 
	{ weight3x3_tile_buffe_329_ap_vld sc_out sc_logic 1 outvld 120 } 
	{ weight3x3_tile_buffe_330 sc_out sc_lv 32 signal 121 } 
	{ weight3x3_tile_buffe_330_ap_vld sc_out sc_logic 1 outvld 121 } 
	{ weight3x3_tile_buffe_331 sc_out sc_lv 32 signal 122 } 
	{ weight3x3_tile_buffe_331_ap_vld sc_out sc_logic 1 outvld 122 } 
	{ weight3x3_tile_buffe_332 sc_out sc_lv 32 signal 123 } 
	{ weight3x3_tile_buffe_332_ap_vld sc_out sc_logic 1 outvld 123 } 
	{ weight3x3_tile_buffe_333 sc_out sc_lv 32 signal 124 } 
	{ weight3x3_tile_buffe_333_ap_vld sc_out sc_logic 1 outvld 124 } 
	{ weight3x3_tile_buffe_334 sc_out sc_lv 32 signal 125 } 
	{ weight3x3_tile_buffe_334_ap_vld sc_out sc_logic 1 outvld 125 } 
	{ weight3x3_tile_buffe_335 sc_out sc_lv 32 signal 126 } 
	{ weight3x3_tile_buffe_335_ap_vld sc_out sc_logic 1 outvld 126 } 
	{ weight3x3_tile_buffe_336 sc_out sc_lv 32 signal 127 } 
	{ weight3x3_tile_buffe_336_ap_vld sc_out sc_logic 1 outvld 127 } 
	{ weight3x3_tile_buffe_337 sc_out sc_lv 32 signal 128 } 
	{ weight3x3_tile_buffe_337_ap_vld sc_out sc_logic 1 outvld 128 } 
	{ weight3x3_tile_buffe_338 sc_out sc_lv 32 signal 129 } 
	{ weight3x3_tile_buffe_338_ap_vld sc_out sc_logic 1 outvld 129 } 
	{ weight3x3_tile_buffe_339 sc_out sc_lv 32 signal 130 } 
	{ weight3x3_tile_buffe_339_ap_vld sc_out sc_logic 1 outvld 130 } 
	{ weight3x3_tile_buffe_340 sc_out sc_lv 32 signal 131 } 
	{ weight3x3_tile_buffe_340_ap_vld sc_out sc_logic 1 outvld 131 } 
	{ weight3x3_tile_buffe_341 sc_out sc_lv 32 signal 132 } 
	{ weight3x3_tile_buffe_341_ap_vld sc_out sc_logic 1 outvld 132 } 
	{ weight3x3_tile_buffe_342 sc_out sc_lv 32 signal 133 } 
	{ weight3x3_tile_buffe_342_ap_vld sc_out sc_logic 1 outvld 133 } 
	{ weight3x3_tile_buffe_343 sc_out sc_lv 32 signal 134 } 
	{ weight3x3_tile_buffe_343_ap_vld sc_out sc_logic 1 outvld 134 } 
	{ weight3x3_tile_buffe_344 sc_out sc_lv 32 signal 135 } 
	{ weight3x3_tile_buffe_344_ap_vld sc_out sc_logic 1 outvld 135 } 
	{ weight3x3_tile_buffe_345 sc_out sc_lv 32 signal 136 } 
	{ weight3x3_tile_buffe_345_ap_vld sc_out sc_logic 1 outvld 136 } 
	{ weight3x3_tile_buffe_346 sc_out sc_lv 32 signal 137 } 
	{ weight3x3_tile_buffe_346_ap_vld sc_out sc_logic 1 outvld 137 } 
	{ weight3x3_tile_buffe_347 sc_out sc_lv 32 signal 138 } 
	{ weight3x3_tile_buffe_347_ap_vld sc_out sc_logic 1 outvld 138 } 
	{ weight3x3_tile_buffe_348 sc_out sc_lv 32 signal 139 } 
	{ weight3x3_tile_buffe_348_ap_vld sc_out sc_logic 1 outvld 139 } 
	{ weight3x3_tile_buffe_349 sc_out sc_lv 32 signal 140 } 
	{ weight3x3_tile_buffe_349_ap_vld sc_out sc_logic 1 outvld 140 } 
	{ weight3x3_tile_buffe_350 sc_out sc_lv 32 signal 141 } 
	{ weight3x3_tile_buffe_350_ap_vld sc_out sc_logic 1 outvld 141 } 
	{ weight3x3_tile_buffe_351 sc_out sc_lv 32 signal 142 } 
	{ weight3x3_tile_buffe_351_ap_vld sc_out sc_logic 1 outvld 142 } 
	{ weight3x3_tile_buffe_352 sc_out sc_lv 32 signal 143 } 
	{ weight3x3_tile_buffe_352_ap_vld sc_out sc_logic 1 outvld 143 } 
	{ weight3x3_tile_buffe_353 sc_out sc_lv 32 signal 144 } 
	{ weight3x3_tile_buffe_353_ap_vld sc_out sc_logic 1 outvld 144 } 
	{ weight3x3_tile_buffe_354 sc_out sc_lv 32 signal 145 } 
	{ weight3x3_tile_buffe_354_ap_vld sc_out sc_logic 1 outvld 145 } 
	{ weight3x3_tile_buffe_355 sc_out sc_lv 32 signal 146 } 
	{ weight3x3_tile_buffe_355_ap_vld sc_out sc_logic 1 outvld 146 } 
	{ weight3x3_tile_buffe_356 sc_out sc_lv 32 signal 147 } 
	{ weight3x3_tile_buffe_356_ap_vld sc_out sc_logic 1 outvld 147 } 
	{ weight3x3_tile_buffe_357 sc_out sc_lv 32 signal 148 } 
	{ weight3x3_tile_buffe_357_ap_vld sc_out sc_logic 1 outvld 148 } 
	{ weight3x3_tile_buffe_358 sc_out sc_lv 32 signal 149 } 
	{ weight3x3_tile_buffe_358_ap_vld sc_out sc_logic 1 outvld 149 } 
	{ weight3x3_tile_buffe_359 sc_out sc_lv 32 signal 150 } 
	{ weight3x3_tile_buffe_359_ap_vld sc_out sc_logic 1 outvld 150 } 
	{ weight3x3_tile_buffe_360 sc_out sc_lv 32 signal 151 } 
	{ weight3x3_tile_buffe_360_ap_vld sc_out sc_logic 1 outvld 151 } 
	{ weight3x3_tile_buffe_361 sc_out sc_lv 32 signal 152 } 
	{ weight3x3_tile_buffe_361_ap_vld sc_out sc_logic 1 outvld 152 } 
	{ weight3x3_tile_buffe_362 sc_out sc_lv 32 signal 153 } 
	{ weight3x3_tile_buffe_362_ap_vld sc_out sc_logic 1 outvld 153 } 
	{ weight3x3_tile_buffe_363 sc_out sc_lv 32 signal 154 } 
	{ weight3x3_tile_buffe_363_ap_vld sc_out sc_logic 1 outvld 154 } 
	{ weight3x3_tile_buffe_364 sc_out sc_lv 32 signal 155 } 
	{ weight3x3_tile_buffe_364_ap_vld sc_out sc_logic 1 outvld 155 } 
	{ weight3x3_tile_buffe_365 sc_out sc_lv 32 signal 156 } 
	{ weight3x3_tile_buffe_365_ap_vld sc_out sc_logic 1 outvld 156 } 
	{ weight3x3_tile_buffe_366 sc_out sc_lv 32 signal 157 } 
	{ weight3x3_tile_buffe_366_ap_vld sc_out sc_logic 1 outvld 157 } 
	{ weight3x3_tile_buffe_367 sc_out sc_lv 32 signal 158 } 
	{ weight3x3_tile_buffe_367_ap_vld sc_out sc_logic 1 outvld 158 } 
	{ weight3x3_tile_buffe_368 sc_out sc_lv 32 signal 159 } 
	{ weight3x3_tile_buffe_368_ap_vld sc_out sc_logic 1 outvld 159 } 
	{ weight3x3_tile_buffe_369 sc_out sc_lv 32 signal 160 } 
	{ weight3x3_tile_buffe_369_ap_vld sc_out sc_logic 1 outvld 160 } 
	{ weight3x3_tile_buffe_370 sc_out sc_lv 32 signal 161 } 
	{ weight3x3_tile_buffe_370_ap_vld sc_out sc_logic 1 outvld 161 } 
	{ weight3x3_tile_buffe_371 sc_out sc_lv 32 signal 162 } 
	{ weight3x3_tile_buffe_371_ap_vld sc_out sc_logic 1 outvld 162 } 
	{ weight3x3_tile_buffe_372 sc_out sc_lv 32 signal 163 } 
	{ weight3x3_tile_buffe_372_ap_vld sc_out sc_logic 1 outvld 163 } 
	{ weight3x3_tile_buffe_373 sc_out sc_lv 32 signal 164 } 
	{ weight3x3_tile_buffe_373_ap_vld sc_out sc_logic 1 outvld 164 } 
	{ weight3x3_tile_buffe_374 sc_out sc_lv 32 signal 165 } 
	{ weight3x3_tile_buffe_374_ap_vld sc_out sc_logic 1 outvld 165 } 
	{ weight3x3_tile_buffe_375 sc_out sc_lv 32 signal 166 } 
	{ weight3x3_tile_buffe_375_ap_vld sc_out sc_logic 1 outvld 166 } 
	{ weight3x3_tile_buffe_376 sc_out sc_lv 32 signal 167 } 
	{ weight3x3_tile_buffe_376_ap_vld sc_out sc_logic 1 outvld 167 } 
	{ weight3x3_tile_buffe_377 sc_out sc_lv 32 signal 168 } 
	{ weight3x3_tile_buffe_377_ap_vld sc_out sc_logic 1 outvld 168 } 
	{ weight3x3_tile_buffe_378 sc_out sc_lv 32 signal 169 } 
	{ weight3x3_tile_buffe_378_ap_vld sc_out sc_logic 1 outvld 169 } 
	{ weight3x3_tile_buffe_379 sc_out sc_lv 32 signal 170 } 
	{ weight3x3_tile_buffe_379_ap_vld sc_out sc_logic 1 outvld 170 } 
	{ weight3x3_tile_buffe_380 sc_out sc_lv 32 signal 171 } 
	{ weight3x3_tile_buffe_380_ap_vld sc_out sc_logic 1 outvld 171 } 
	{ weight3x3_tile_buffe_381 sc_out sc_lv 32 signal 172 } 
	{ weight3x3_tile_buffe_381_ap_vld sc_out sc_logic 1 outvld 172 } 
	{ weight3x3_tile_buffe_382 sc_out sc_lv 32 signal 173 } 
	{ weight3x3_tile_buffe_382_ap_vld sc_out sc_logic 1 outvld 173 } 
	{ weight3x3_tile_buffe_383 sc_out sc_lv 32 signal 174 } 
	{ weight3x3_tile_buffe_383_ap_vld sc_out sc_logic 1 outvld 174 } 
	{ weight3x3_tile_buffe_384 sc_out sc_lv 32 signal 175 } 
	{ weight3x3_tile_buffe_384_ap_vld sc_out sc_logic 1 outvld 175 } 
	{ weight3x3_tile_buffe_385 sc_out sc_lv 32 signal 176 } 
	{ weight3x3_tile_buffe_385_ap_vld sc_out sc_logic 1 outvld 176 } 
	{ weight3x3_tile_buffe_386 sc_out sc_lv 32 signal 177 } 
	{ weight3x3_tile_buffe_386_ap_vld sc_out sc_logic 1 outvld 177 } 
	{ weight3x3_tile_buffe_387 sc_out sc_lv 32 signal 178 } 
	{ weight3x3_tile_buffe_387_ap_vld sc_out sc_logic 1 outvld 178 } 
	{ weight3x3_tile_buffe_388 sc_out sc_lv 32 signal 179 } 
	{ weight3x3_tile_buffe_388_ap_vld sc_out sc_logic 1 outvld 179 } 
	{ weight3x3_tile_buffe_389 sc_out sc_lv 32 signal 180 } 
	{ weight3x3_tile_buffe_389_ap_vld sc_out sc_logic 1 outvld 180 } 
	{ weight3x3_tile_buffe_390 sc_out sc_lv 32 signal 181 } 
	{ weight3x3_tile_buffe_390_ap_vld sc_out sc_logic 1 outvld 181 } 
	{ weight3x3_tile_buffe_391 sc_out sc_lv 32 signal 182 } 
	{ weight3x3_tile_buffe_391_ap_vld sc_out sc_logic 1 outvld 182 } 
	{ weight3x3_tile_buffe_392 sc_out sc_lv 32 signal 183 } 
	{ weight3x3_tile_buffe_392_ap_vld sc_out sc_logic 1 outvld 183 } 
	{ weight3x3_tile_buffe_393 sc_out sc_lv 32 signal 184 } 
	{ weight3x3_tile_buffe_393_ap_vld sc_out sc_logic 1 outvld 184 } 
	{ weight3x3_tile_buffe_394 sc_out sc_lv 32 signal 185 } 
	{ weight3x3_tile_buffe_394_ap_vld sc_out sc_logic 1 outvld 185 } 
	{ weight3x3_tile_buffe_404 sc_out sc_lv 32 signal 186 } 
	{ weight3x3_tile_buffe_404_ap_vld sc_out sc_logic 1 outvld 186 } 
	{ weight3x3_tile_buffe_405 sc_out sc_lv 32 signal 187 } 
	{ weight3x3_tile_buffe_405_ap_vld sc_out sc_logic 1 outvld 187 } 
	{ weight3x3_tile_buffe_406 sc_out sc_lv 32 signal 188 } 
	{ weight3x3_tile_buffe_406_ap_vld sc_out sc_logic 1 outvld 188 } 
	{ weight3x3_tile_buffe_407 sc_out sc_lv 32 signal 189 } 
	{ weight3x3_tile_buffe_407_ap_vld sc_out sc_logic 1 outvld 189 } 
	{ weight3x3_tile_buffe_408 sc_out sc_lv 32 signal 190 } 
	{ weight3x3_tile_buffe_408_ap_vld sc_out sc_logic 1 outvld 190 } 
	{ weight3x3_tile_buffe_409 sc_out sc_lv 32 signal 191 } 
	{ weight3x3_tile_buffe_409_ap_vld sc_out sc_logic 1 outvld 191 } 
	{ weight3x3_tile_buffe_410 sc_out sc_lv 32 signal 192 } 
	{ weight3x3_tile_buffe_410_ap_vld sc_out sc_logic 1 outvld 192 } 
	{ weight3x3_tile_buffe_411 sc_out sc_lv 32 signal 193 } 
	{ weight3x3_tile_buffe_411_ap_vld sc_out sc_logic 1 outvld 193 } 
	{ weight3x3_tile_buffe_412 sc_out sc_lv 32 signal 194 } 
	{ weight3x3_tile_buffe_412_ap_vld sc_out sc_logic 1 outvld 194 } 
	{ weight3x3_tile_buffe_413 sc_out sc_lv 32 signal 195 } 
	{ weight3x3_tile_buffe_413_ap_vld sc_out sc_logic 1 outvld 195 } 
	{ weight3x3_tile_buffe_414 sc_out sc_lv 32 signal 196 } 
	{ weight3x3_tile_buffe_414_ap_vld sc_out sc_logic 1 outvld 196 } 
	{ weight3x3_tile_buffe_415 sc_out sc_lv 32 signal 197 } 
	{ weight3x3_tile_buffe_415_ap_vld sc_out sc_logic 1 outvld 197 } 
	{ weight3x3_tile_buffe_416 sc_out sc_lv 32 signal 198 } 
	{ weight3x3_tile_buffe_416_ap_vld sc_out sc_logic 1 outvld 198 } 
	{ weight3x3_tile_buffe_417 sc_out sc_lv 32 signal 199 } 
	{ weight3x3_tile_buffe_417_ap_vld sc_out sc_logic 1 outvld 199 } 
	{ weight3x3_tile_buffe_418 sc_out sc_lv 32 signal 200 } 
	{ weight3x3_tile_buffe_418_ap_vld sc_out sc_logic 1 outvld 200 } 
	{ weight3x3_tile_buffe_419 sc_out sc_lv 32 signal 201 } 
	{ weight3x3_tile_buffe_419_ap_vld sc_out sc_logic 1 outvld 201 } 
	{ weight3x3_tile_buffe_420 sc_out sc_lv 32 signal 202 } 
	{ weight3x3_tile_buffe_420_ap_vld sc_out sc_logic 1 outvld 202 } 
	{ weight3x3_tile_buffe_421 sc_out sc_lv 32 signal 203 } 
	{ weight3x3_tile_buffe_421_ap_vld sc_out sc_logic 1 outvld 203 } 
	{ weight3x3_tile_buffe_422 sc_out sc_lv 32 signal 204 } 
	{ weight3x3_tile_buffe_422_ap_vld sc_out sc_logic 1 outvld 204 } 
	{ weight3x3_tile_buffe_423 sc_out sc_lv 32 signal 205 } 
	{ weight3x3_tile_buffe_423_ap_vld sc_out sc_logic 1 outvld 205 } 
	{ weight3x3_tile_buffe_424 sc_out sc_lv 32 signal 206 } 
	{ weight3x3_tile_buffe_424_ap_vld sc_out sc_logic 1 outvld 206 } 
	{ weight3x3_tile_buffe_425 sc_out sc_lv 32 signal 207 } 
	{ weight3x3_tile_buffe_425_ap_vld sc_out sc_logic 1 outvld 207 } 
	{ weight3x3_tile_buffe_426 sc_out sc_lv 32 signal 208 } 
	{ weight3x3_tile_buffe_426_ap_vld sc_out sc_logic 1 outvld 208 } 
	{ weight3x3_tile_buffe_427 sc_out sc_lv 32 signal 209 } 
	{ weight3x3_tile_buffe_427_ap_vld sc_out sc_logic 1 outvld 209 } 
	{ weight3x3_tile_buffe_428 sc_out sc_lv 32 signal 210 } 
	{ weight3x3_tile_buffe_428_ap_vld sc_out sc_logic 1 outvld 210 } 
	{ weight3x3_tile_buffe_429 sc_out sc_lv 32 signal 211 } 
	{ weight3x3_tile_buffe_429_ap_vld sc_out sc_logic 1 outvld 211 } 
	{ weight3x3_tile_buffe_430 sc_out sc_lv 32 signal 212 } 
	{ weight3x3_tile_buffe_430_ap_vld sc_out sc_logic 1 outvld 212 } 
	{ weight3x3_tile_buffe_431 sc_out sc_lv 32 signal 213 } 
	{ weight3x3_tile_buffe_431_ap_vld sc_out sc_logic 1 outvld 213 } 
	{ weight3x3_tile_buffe_432 sc_out sc_lv 32 signal 214 } 
	{ weight3x3_tile_buffe_432_ap_vld sc_out sc_logic 1 outvld 214 } 
	{ weight3x3_tile_buffe_433 sc_out sc_lv 32 signal 215 } 
	{ weight3x3_tile_buffe_433_ap_vld sc_out sc_logic 1 outvld 215 } 
	{ weight3x3_tile_buffe_434 sc_out sc_lv 32 signal 216 } 
	{ weight3x3_tile_buffe_434_ap_vld sc_out sc_logic 1 outvld 216 } 
	{ weight3x3_tile_buffe_435 sc_out sc_lv 32 signal 217 } 
	{ weight3x3_tile_buffe_435_ap_vld sc_out sc_logic 1 outvld 217 } 
	{ weight3x3_tile_buffe_436 sc_out sc_lv 32 signal 218 } 
	{ weight3x3_tile_buffe_436_ap_vld sc_out sc_logic 1 outvld 218 } 
	{ weight3x3_tile_buffe_437 sc_out sc_lv 32 signal 219 } 
	{ weight3x3_tile_buffe_437_ap_vld sc_out sc_logic 1 outvld 219 } 
	{ weight3x3_tile_buffe_438 sc_out sc_lv 32 signal 220 } 
	{ weight3x3_tile_buffe_438_ap_vld sc_out sc_logic 1 outvld 220 } 
	{ weight3x3_tile_buffe_439 sc_out sc_lv 32 signal 221 } 
	{ weight3x3_tile_buffe_439_ap_vld sc_out sc_logic 1 outvld 221 } 
	{ weight3x3_tile_buffe_440 sc_out sc_lv 32 signal 222 } 
	{ weight3x3_tile_buffe_440_ap_vld sc_out sc_logic 1 outvld 222 } 
	{ weight3x3_tile_buffe_441 sc_out sc_lv 32 signal 223 } 
	{ weight3x3_tile_buffe_441_ap_vld sc_out sc_logic 1 outvld 223 } 
	{ weight3x3_tile_buffe_442 sc_out sc_lv 32 signal 224 } 
	{ weight3x3_tile_buffe_442_ap_vld sc_out sc_logic 1 outvld 224 } 
	{ weight3x3_tile_buffe_443 sc_out sc_lv 32 signal 225 } 
	{ weight3x3_tile_buffe_443_ap_vld sc_out sc_logic 1 outvld 225 } 
	{ weight3x3_tile_buffe_444 sc_out sc_lv 32 signal 226 } 
	{ weight3x3_tile_buffe_444_ap_vld sc_out sc_logic 1 outvld 226 } 
	{ weight3x3_tile_buffe_445 sc_out sc_lv 32 signal 227 } 
	{ weight3x3_tile_buffe_445_ap_vld sc_out sc_logic 1 outvld 227 } 
	{ weight3x3_tile_buffe_446 sc_out sc_lv 32 signal 228 } 
	{ weight3x3_tile_buffe_446_ap_vld sc_out sc_logic 1 outvld 228 } 
	{ weight3x3_tile_buffe_447 sc_out sc_lv 32 signal 229 } 
	{ weight3x3_tile_buffe_447_ap_vld sc_out sc_logic 1 outvld 229 } 
	{ weight3x3_tile_buffe_448 sc_out sc_lv 32 signal 230 } 
	{ weight3x3_tile_buffe_448_ap_vld sc_out sc_logic 1 outvld 230 } 
	{ weight3x3_tile_buffe_449 sc_out sc_lv 32 signal 231 } 
	{ weight3x3_tile_buffe_449_ap_vld sc_out sc_logic 1 outvld 231 } 
	{ weight3x3_tile_buffe_450 sc_out sc_lv 32 signal 232 } 
	{ weight3x3_tile_buffe_450_ap_vld sc_out sc_logic 1 outvld 232 } 
	{ weight3x3_tile_buffe_451 sc_out sc_lv 32 signal 233 } 
	{ weight3x3_tile_buffe_451_ap_vld sc_out sc_logic 1 outvld 233 } 
	{ weight3x3_tile_buffe_452 sc_out sc_lv 32 signal 234 } 
	{ weight3x3_tile_buffe_452_ap_vld sc_out sc_logic 1 outvld 234 } 
	{ weight3x3_tile_buffe_453 sc_out sc_lv 32 signal 235 } 
	{ weight3x3_tile_buffe_453_ap_vld sc_out sc_logic 1 outvld 235 } 
	{ weight3x3_tile_buffe_454 sc_out sc_lv 32 signal 236 } 
	{ weight3x3_tile_buffe_454_ap_vld sc_out sc_logic 1 outvld 236 } 
	{ weight3x3_tile_buffe_455 sc_out sc_lv 32 signal 237 } 
	{ weight3x3_tile_buffe_455_ap_vld sc_out sc_logic 1 outvld 237 } 
	{ weight3x3_tile_buffe_456 sc_out sc_lv 32 signal 238 } 
	{ weight3x3_tile_buffe_456_ap_vld sc_out sc_logic 1 outvld 238 } 
	{ weight3x3_tile_buffe_457 sc_out sc_lv 32 signal 239 } 
	{ weight3x3_tile_buffe_457_ap_vld sc_out sc_logic 1 outvld 239 } 
	{ weight3x3_tile_buffe_458 sc_out sc_lv 32 signal 240 } 
	{ weight3x3_tile_buffe_458_ap_vld sc_out sc_logic 1 outvld 240 } 
	{ weight3x3_tile_buffe_459 sc_out sc_lv 32 signal 241 } 
	{ weight3x3_tile_buffe_459_ap_vld sc_out sc_logic 1 outvld 241 } 
	{ weight3x3_tile_buffe_460 sc_out sc_lv 32 signal 242 } 
	{ weight3x3_tile_buffe_460_ap_vld sc_out sc_logic 1 outvld 242 } 
	{ weight3x3_tile_buffe_461 sc_out sc_lv 32 signal 243 } 
	{ weight3x3_tile_buffe_461_ap_vld sc_out sc_logic 1 outvld 243 } 
	{ weight3x3_tile_buffe_462 sc_out sc_lv 32 signal 244 } 
	{ weight3x3_tile_buffe_462_ap_vld sc_out sc_logic 1 outvld 244 } 
	{ weight3x3_tile_buffe_463 sc_out sc_lv 32 signal 245 } 
	{ weight3x3_tile_buffe_463_ap_vld sc_out sc_logic 1 outvld 245 } 
	{ weight3x3_tile_buffe_464 sc_out sc_lv 32 signal 246 } 
	{ weight3x3_tile_buffe_464_ap_vld sc_out sc_logic 1 outvld 246 } 
	{ weight3x3_tile_buffe_465 sc_out sc_lv 32 signal 247 } 
	{ weight3x3_tile_buffe_465_ap_vld sc_out sc_logic 1 outvld 247 } 
	{ weight3x3_tile_buffe_466 sc_out sc_lv 32 signal 248 } 
	{ weight3x3_tile_buffe_466_ap_vld sc_out sc_logic 1 outvld 248 } 
	{ weight3x3_tile_buffe_467 sc_out sc_lv 32 signal 249 } 
	{ weight3x3_tile_buffe_467_ap_vld sc_out sc_logic 1 outvld 249 } 
	{ weight3x3_tile_buffe_468 sc_out sc_lv 32 signal 250 } 
	{ weight3x3_tile_buffe_468_ap_vld sc_out sc_logic 1 outvld 250 } 
	{ weight3x3_tile_buffe_469 sc_out sc_lv 32 signal 251 } 
	{ weight3x3_tile_buffe_469_ap_vld sc_out sc_logic 1 outvld 251 } 
	{ weight3x3_tile_buffe_470 sc_out sc_lv 32 signal 252 } 
	{ weight3x3_tile_buffe_470_ap_vld sc_out sc_logic 1 outvld 252 } 
	{ weight3x3_tile_buffe_471 sc_out sc_lv 32 signal 253 } 
	{ weight3x3_tile_buffe_471_ap_vld sc_out sc_logic 1 outvld 253 } 
	{ weight3x3_tile_buffe_472 sc_out sc_lv 32 signal 254 } 
	{ weight3x3_tile_buffe_472_ap_vld sc_out sc_logic 1 outvld 254 } 
	{ weight3x3_tile_buffe_473 sc_out sc_lv 32 signal 255 } 
	{ weight3x3_tile_buffe_473_ap_vld sc_out sc_logic 1 outvld 255 } 
	{ weight3x3_tile_buffe_474 sc_out sc_lv 32 signal 256 } 
	{ weight3x3_tile_buffe_474_ap_vld sc_out sc_logic 1 outvld 256 } 
	{ weight3x3_tile_buffe_99 sc_out sc_lv 32 signal 257 } 
	{ weight3x3_tile_buffe_99_ap_vld sc_out sc_logic 1 outvld 257 } 
	{ weight3x3_tile_buffe_98 sc_out sc_lv 32 signal 258 } 
	{ weight3x3_tile_buffe_98_ap_vld sc_out sc_logic 1 outvld 258 } 
	{ weight3x3_tile_buffe_97 sc_out sc_lv 32 signal 259 } 
	{ weight3x3_tile_buffe_97_ap_vld sc_out sc_logic 1 outvld 259 } 
	{ weight3x3_tile_buffe_96 sc_out sc_lv 32 signal 260 } 
	{ weight3x3_tile_buffe_96_ap_vld sc_out sc_logic 1 outvld 260 } 
	{ weight3x3_tile_buffe_95 sc_out sc_lv 32 signal 261 } 
	{ weight3x3_tile_buffe_95_ap_vld sc_out sc_logic 1 outvld 261 } 
	{ weight3x3_tile_buffe_94 sc_out sc_lv 32 signal 262 } 
	{ weight3x3_tile_buffe_94_ap_vld sc_out sc_logic 1 outvld 262 } 
	{ weight3x3_tile_buffe_93 sc_out sc_lv 32 signal 263 } 
	{ weight3x3_tile_buffe_93_ap_vld sc_out sc_logic 1 outvld 263 } 
	{ weight3x3_tile_buffe_92 sc_out sc_lv 32 signal 264 } 
	{ weight3x3_tile_buffe_92_ap_vld sc_out sc_logic 1 outvld 264 } 
	{ weight3x3_tile_buffe_91 sc_out sc_lv 32 signal 265 } 
	{ weight3x3_tile_buffe_91_ap_vld sc_out sc_logic 1 outvld 265 } 
	{ weight3x3_tile_buffe_90 sc_out sc_lv 32 signal 266 } 
	{ weight3x3_tile_buffe_90_ap_vld sc_out sc_logic 1 outvld 266 } 
	{ weight3x3_tile_buffe_89 sc_out sc_lv 32 signal 267 } 
	{ weight3x3_tile_buffe_89_ap_vld sc_out sc_logic 1 outvld 267 } 
	{ weight3x3_tile_buffe_88 sc_out sc_lv 32 signal 268 } 
	{ weight3x3_tile_buffe_88_ap_vld sc_out sc_logic 1 outvld 268 } 
	{ weight3x3_tile_buffe_87 sc_out sc_lv 32 signal 269 } 
	{ weight3x3_tile_buffe_87_ap_vld sc_out sc_logic 1 outvld 269 } 
	{ weight3x3_tile_buffe_86 sc_out sc_lv 32 signal 270 } 
	{ weight3x3_tile_buffe_86_ap_vld sc_out sc_logic 1 outvld 270 } 
	{ weight3x3_tile_buffe_85 sc_out sc_lv 32 signal 271 } 
	{ weight3x3_tile_buffe_85_ap_vld sc_out sc_logic 1 outvld 271 } 
	{ weight3x3_tile_buffe_84 sc_out sc_lv 32 signal 272 } 
	{ weight3x3_tile_buffe_84_ap_vld sc_out sc_logic 1 outvld 272 } 
	{ weight3x3_tile_buffe_83 sc_out sc_lv 32 signal 273 } 
	{ weight3x3_tile_buffe_83_ap_vld sc_out sc_logic 1 outvld 273 } 
	{ weight3x3_tile_buffe_82 sc_out sc_lv 32 signal 274 } 
	{ weight3x3_tile_buffe_82_ap_vld sc_out sc_logic 1 outvld 274 } 
	{ weight3x3_tile_buffe_81 sc_out sc_lv 32 signal 275 } 
	{ weight3x3_tile_buffe_81_ap_vld sc_out sc_logic 1 outvld 275 } 
	{ weight3x3_tile_buffe_71 sc_out sc_lv 32 signal 276 } 
	{ weight3x3_tile_buffe_71_ap_vld sc_out sc_logic 1 outvld 276 } 
	{ weight3x3_tile_buffe_70 sc_out sc_lv 32 signal 277 } 
	{ weight3x3_tile_buffe_70_ap_vld sc_out sc_logic 1 outvld 277 } 
	{ weight3x3_tile_buffe_69 sc_out sc_lv 32 signal 278 } 
	{ weight3x3_tile_buffe_69_ap_vld sc_out sc_logic 1 outvld 278 } 
	{ weight3x3_tile_buffe_68 sc_out sc_lv 32 signal 279 } 
	{ weight3x3_tile_buffe_68_ap_vld sc_out sc_logic 1 outvld 279 } 
	{ weight3x3_tile_buffe_67 sc_out sc_lv 32 signal 280 } 
	{ weight3x3_tile_buffe_67_ap_vld sc_out sc_logic 1 outvld 280 } 
	{ weight3x3_tile_buffe_66 sc_out sc_lv 32 signal 281 } 
	{ weight3x3_tile_buffe_66_ap_vld sc_out sc_logic 1 outvld 281 } 
	{ weight3x3_tile_buffe_65 sc_out sc_lv 32 signal 282 } 
	{ weight3x3_tile_buffe_65_ap_vld sc_out sc_logic 1 outvld 282 } 
	{ weight3x3_tile_buffe_64 sc_out sc_lv 32 signal 283 } 
	{ weight3x3_tile_buffe_64_ap_vld sc_out sc_logic 1 outvld 283 } 
	{ weight3x3_tile_buffe_63 sc_out sc_lv 32 signal 284 } 
	{ weight3x3_tile_buffe_63_ap_vld sc_out sc_logic 1 outvld 284 } 
	{ weight3x3_tile_buffe_62 sc_out sc_lv 32 signal 285 } 
	{ weight3x3_tile_buffe_62_ap_vld sc_out sc_logic 1 outvld 285 } 
	{ weight3x3_tile_buffe_61 sc_out sc_lv 32 signal 286 } 
	{ weight3x3_tile_buffe_61_ap_vld sc_out sc_logic 1 outvld 286 } 
	{ weight3x3_tile_buffe_60 sc_out sc_lv 32 signal 287 } 
	{ weight3x3_tile_buffe_60_ap_vld sc_out sc_logic 1 outvld 287 } 
	{ weight3x3_tile_buffe_59 sc_out sc_lv 32 signal 288 } 
	{ weight3x3_tile_buffe_59_ap_vld sc_out sc_logic 1 outvld 288 } 
	{ weight3x3_tile_buffe_58 sc_out sc_lv 32 signal 289 } 
	{ weight3x3_tile_buffe_58_ap_vld sc_out sc_logic 1 outvld 289 } 
	{ weight3x3_tile_buffe_57 sc_out sc_lv 32 signal 290 } 
	{ weight3x3_tile_buffe_57_ap_vld sc_out sc_logic 1 outvld 290 } 
	{ weight3x3_tile_buffe_56 sc_out sc_lv 32 signal 291 } 
	{ weight3x3_tile_buffe_56_ap_vld sc_out sc_logic 1 outvld 291 } 
	{ weight3x3_tile_buffe_55 sc_out sc_lv 32 signal 292 } 
	{ weight3x3_tile_buffe_55_ap_vld sc_out sc_logic 1 outvld 292 } 
	{ weight3x3_tile_buffe_54 sc_out sc_lv 32 signal 293 } 
	{ weight3x3_tile_buffe_54_ap_vld sc_out sc_logic 1 outvld 293 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "BID" }} , 
 	{ "name": "m_axi_conv_weight_3x3_all_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V", "role": "BUSER" }} , 
 	{ "name": "conv_weight_3x3_all_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "conv_weight_3x3_all_V_offset", "role": "default" }} , 
 	{ "name": "conv3x3_weight_ptr", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv3x3_weight_ptr", "role": "default" }} , 
 	{ "name": "c_out", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "c_out", "role": "default" }} , 
 	{ "name": "c_in", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "c_in", "role": "default" }} , 
 	{ "name": "in_channels_after_pa", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "in_channels_after_pa", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_287", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_287", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_287_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_287", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_288", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_288", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_288_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_288", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_289", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_289", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_289_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_289", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_290", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_290", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_290_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_290", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_291", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_291", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_291_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_291", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_292", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_292", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_292_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_292", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_293", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_293", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_293_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_293", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_294", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_294", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_294_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_294", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_295", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_295", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_295_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_295", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_296", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_296", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_296_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_296", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_297", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_297", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_297_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_297", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_298", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_298", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_298_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_298", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_299", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_299", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_299_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_299", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_300", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_300", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_300_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_300", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_301", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_301", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_301_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_301", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_302", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_302", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_302_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_302", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_303", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_303", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_303_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_303", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_304", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_304", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_304_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_304", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_395", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_395", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_395_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_395", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_396", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_396", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_396_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_396", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_397", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_397", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_397_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_397", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_398", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_398", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_398_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_398", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_399", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_399", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_399_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_399", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_400", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_400", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_400_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_400", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_401", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_401", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_401_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_401", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_402", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_402", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_402_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_402", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_403", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_403", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_403_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_403", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_80", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_80", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_80_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_80", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_79", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_79", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_79_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_79", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_78", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_78", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_78_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_78", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_77", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_77", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_77_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_77", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_76", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_76", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_76_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_76", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_75", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_75", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_75_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_75", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_74", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_74", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_74_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_74", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_73", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_73", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_73_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_73", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_72", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_72", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_72_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_72", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_53", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_53", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_53_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_53", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_52", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_52", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_52_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_52", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_51", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_51", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_51_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_51", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_50", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_50", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_50_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_50", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_49", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_49", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_49_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_49", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_48", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_48", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_48_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_48", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_47", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_47", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_47_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_47", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_46", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_46", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_46_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_46", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_45", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_45", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_45_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_45", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_44", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_44", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_44_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_44", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_43", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_43", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_43_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_43", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_42", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_42", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_42_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_42", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_41", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_41", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_41_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_41", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_40", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_40", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_40_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_40", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_39", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_39", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_39_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_39", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_38", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_38", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_38_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_38", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_37", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_37", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_37_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_37", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_36", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_36", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_36_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_36", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_35", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_35", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_35_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_35", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_34", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_34", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_34_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_34", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_33", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_33", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_33_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_33", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_32", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_32", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_32_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_32", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_31", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_31", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_31_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_31", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_30", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_30", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_30_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_30", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_29", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_29", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_29_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_29", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_28", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_28", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_28_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_28", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_27", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_27", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_27_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_27", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_26", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_26", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_26_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_26", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_25", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_25", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_25_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_25", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_24", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_24", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_24_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_24", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_23", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_23", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_23_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_23", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_22", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_22", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_22_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_22", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_21", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_21", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_21_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_21", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_20", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_20", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_20_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_20", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_19", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_19", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_19_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_19", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_18", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_18", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_18_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_18", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_17", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_17", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_17_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_17", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_16", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_16", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_16_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_16", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_15", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_15", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_15_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_15", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_14", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_14", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_14_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_14", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_13", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_13", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_13_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_13", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_12", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_12", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_12_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_12", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_11", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_11", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_11_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_11", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_10", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_10", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_10_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_10", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_9", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_9", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_9_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_9", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_8", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_8", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_8_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_8", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_7", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_7", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_7_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_7", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_6", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_6", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_6_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_6", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_5", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_5", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_5_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_5", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_4", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_4", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_4_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_4", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_3", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_3_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_3", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_2", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_2_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_2", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_1", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_1", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_305", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_305", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_305_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_305", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_306", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_306", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_306_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_306", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_307", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_307", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_307_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_307", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_308", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_308", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_308_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_308", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_309", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_309", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_309_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_309", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_310", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_310", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_310_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_310", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_311", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_311", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_311_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_311", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_312", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_312", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_312_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_312", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_313", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_313", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_313_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_313", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_314", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_314", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_314_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_314", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_315", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_315", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_315_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_315", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_316", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_316", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_316_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_316", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_317", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_317", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_317_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_317", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_318", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_318", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_318_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_318", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_319", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_319", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_319_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_319", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_320", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_320", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_320_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_320", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_321", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_321", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_321_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_321", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_322", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_322", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_322_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_322", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_323", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_323", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_323_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_323", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_324", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_324", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_324_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_324", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_325", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_325", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_325_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_325", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_326", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_326", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_326_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_326", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_327", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_327", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_327_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_327", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_328", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_328", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_328_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_328", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_329", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_329", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_329_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_329", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_330", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_330", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_330_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_330", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_331", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_331", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_331_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_331", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_332", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_332", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_332_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_332", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_333", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_333", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_333_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_333", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_334", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_334", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_334_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_334", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_335", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_335", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_335_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_335", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_336", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_336", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_336_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_336", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_337", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_337", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_337_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_337", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_338", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_338", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_338_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_338", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_339", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_339", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_339_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_339", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_340", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_340", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_340_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_340", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_341", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_341", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_341_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_341", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_342", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_342", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_342_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_342", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_343", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_343", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_343_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_343", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_344", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_344", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_344_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_344", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_345", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_345", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_345_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_345", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_346", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_346", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_346_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_346", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_347", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_347", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_347_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_347", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_348", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_348", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_348_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_348", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_349", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_349", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_349_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_349", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_350", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_350", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_350_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_350", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_351", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_351", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_351_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_351", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_352", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_352", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_352_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_352", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_353", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_353", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_353_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_353", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_354", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_354", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_354_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_354", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_355", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_355", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_355_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_355", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_356", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_356", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_356_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_356", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_357", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_357", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_357_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_357", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_358", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_358", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_358_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_358", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_359", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_359", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_359_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_359", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_360", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_360", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_360_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_360", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_361", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_361", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_361_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_361", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_362", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_362", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_362_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_362", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_363", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_363", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_363_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_363", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_364", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_364", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_364_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_364", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_365", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_365", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_365_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_365", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_366", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_366", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_366_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_366", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_367", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_367", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_367_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_367", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_368", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_368", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_368_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_368", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_369", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_369", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_369_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_369", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_370", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_370", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_370_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_370", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_371", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_371", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_371_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_371", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_372", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_372", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_372_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_372", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_373", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_373", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_373_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_373", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_374", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_374", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_374_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_374", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_375", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_375", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_375_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_375", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_376", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_376", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_376_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_376", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_377", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_377", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_377_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_377", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_378", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_378", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_378_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_378", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_379", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_379", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_379_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_379", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_380", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_380", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_380_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_380", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_381", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_381", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_381_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_381", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_382", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_382", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_382_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_382", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_383", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_383", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_383_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_383", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_384", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_384", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_384_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_384", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_385", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_385", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_385_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_385", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_386", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_386", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_386_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_386", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_387", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_387", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_387_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_387", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_388", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_388", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_388_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_388", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_389", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_389", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_389_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_389", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_390", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_390", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_390_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_390", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_391", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_391", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_391_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_391", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_392", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_392", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_392_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_392", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_393", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_393", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_393_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_393", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_394", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_394", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_394_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_394", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_404", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_404", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_404_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_404", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_405", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_405", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_405_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_405", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_406", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_406", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_406_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_406", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_407", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_407", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_407_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_407", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_408", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_408", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_408_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_408", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_409", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_409", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_409_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_409", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_410", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_410", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_410_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_410", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_411", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_411", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_411_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_411", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_412", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_412", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_412_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_412", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_413", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_413", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_413_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_413", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_414", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_414", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_414_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_414", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_415", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_415", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_415_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_415", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_416", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_416", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_416_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_416", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_417", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_417", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_417_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_417", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_418", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_418", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_418_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_418", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_419", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_419", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_419_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_419", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_420", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_420", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_420_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_420", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_421", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_421", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_421_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_421", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_422", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_422", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_422_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_422", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_423", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_423", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_423_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_423", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_424", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_424", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_424_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_424", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_425", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_425", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_425_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_425", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_426", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_426", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_426_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_426", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_427", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_427", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_427_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_427", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_428", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_428", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_428_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_428", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_429", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_429", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_429_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_429", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_430", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_430", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_430_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_430", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_431", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_431", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_431_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_431", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_432", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_432", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_432_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_432", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_433", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_433", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_433_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_433", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_434", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_434", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_434_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_434", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_435", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_435", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_435_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_435", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_436", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_436", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_436_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_436", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_437", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_437", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_437_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_437", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_438", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_438", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_438_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_438", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_439", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_439", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_439_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_439", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_440", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_440", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_440_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_440", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_441", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_441", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_441_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_441", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_442", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_442", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_442_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_442", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_443", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_443", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_443_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_443", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_444", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_444", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_444_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_444", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_445", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_445", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_445_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_445", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_446", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_446", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_446_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_446", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_447", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_447", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_447_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_447", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_448", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_448", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_448_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_448", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_449", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_449", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_449_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_449", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_450", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_450", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_450_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_450", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_451", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_451", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_451_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_451", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_452", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_452", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_452_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_452", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_453", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_453", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_453_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_453", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_454", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_454", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_454_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_454", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_455", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_455", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_455_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_455", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_456", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_456", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_456_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_456", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_457", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_457", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_457_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_457", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_458", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_458", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_458_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_458", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_459", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_459", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_459_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_459", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_460", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_460", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_460_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_460", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_461", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_461", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_461_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_461", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_462", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_462", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_462_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_462", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_463", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_463", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_463_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_463", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_464", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_464", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_464_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_464", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_465", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_465", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_465_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_465", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_466", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_466", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_466_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_466", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_467", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_467", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_467_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_467", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_468", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_468", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_468_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_468", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_469", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_469", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_469_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_469", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_470", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_470", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_470_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_470", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_471", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_471", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_471_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_471", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_472", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_472", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_472_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_472", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_473", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_473", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_473_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_473", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_474", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_474", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_474_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_474", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_99", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_99", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_99_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_99", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_98", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_98", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_98_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_98", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_97", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_97", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_97_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_97", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_96", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_96", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_96_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_96", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_95", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_95", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_95_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_95", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_94", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_94", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_94_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_94", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_93", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_93", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_93_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_93", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_92", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_92", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_92_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_92", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_91", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_91", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_91_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_91", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_90", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_90", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_90_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_90", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_89", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_89", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_89_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_89", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_88", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_88", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_88_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_88", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_87", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_87", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_87_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_87", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_86", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_86", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_86_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_86", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_85", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_85", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_85_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_85", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_84", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_84", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_84_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_84", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_83", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_83", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_83_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_83", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_82", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_82", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_82_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_82", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_81", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_81", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_81_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_81", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_71", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_71", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_71_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_71", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_70", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_70", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_70_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_70", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_69", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_69", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_69_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_69", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_68", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_68", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_68_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_68", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_67", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_67", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_67_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_67", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_66", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_66", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_66_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_66", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_65", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_65", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_65_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_65", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_64", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_64", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_64_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_64", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_63", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_63", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_63_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_63", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_62", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_62", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_62_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_62", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_61", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_61", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_61_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_61", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_60", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_60", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_60_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_60", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_59", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_59", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_59_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_59", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_58", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_58", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_58_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_58", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_57", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_57", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_57_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_57", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_56", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_56", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_56_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_56", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_55", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_55", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_55_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_55", "role": "ap_vld" }} , 
 	{ "name": "weight3x3_tile_buffe_54", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight3x3_tile_buffe_54", "role": "default" }} , 
 	{ "name": "weight3x3_tile_buffe_54_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "weight3x3_tile_buffe_54", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "load_conv3x3_weights",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "36", "EstimateLatencyMax" : "36",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "conv_weight_3x3_all_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "conv_weight_3x3_all_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "conv_weight_3x3_all_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "conv_weight_3x3_all_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv3x3_weight_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "c_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "c_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_channels_after_pa", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight3x3_tile_buffe_287", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_288", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_289", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_290", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_291", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_292", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_293", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_294", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_295", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_296", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_297", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_298", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_299", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_300", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_301", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_302", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_303", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_304", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_395", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_396", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_397", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_398", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_399", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_400", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_401", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_402", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_403", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_80", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_79", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_78", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_77", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_76", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_75", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_74", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_73", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_72", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_53", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_52", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_51", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_50", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_49", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_48", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_47", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_46", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_45", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_44", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_43", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_42", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_41", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_40", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_39", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_38", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_37", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_36", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_35", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_34", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_33", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_32", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_31", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_30", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_29", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_28", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_27", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_26", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_25", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_24", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_23", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_22", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_21", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_20", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_19", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_18", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_17", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_16", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_15", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_14", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_13", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_12", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_11", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_10", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_9", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_8", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_7", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_6", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_5", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_4", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_3", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_2", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_305", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_306", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_307", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_308", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_309", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_310", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_311", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_312", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_313", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_314", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_315", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_316", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_317", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_318", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_319", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_320", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_321", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_322", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_323", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_324", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_325", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_326", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_327", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_328", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_329", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_330", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_331", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_332", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_333", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_334", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_335", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_336", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_337", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_338", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_339", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_340", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_341", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_342", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_343", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_344", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_345", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_346", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_347", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_348", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_349", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_350", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_351", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_352", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_353", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_354", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_355", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_356", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_357", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_358", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_359", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_360", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_361", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_362", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_363", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_364", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_365", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_366", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_367", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_368", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_369", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_370", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_371", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_372", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_373", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_374", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_375", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_376", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_377", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_378", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_379", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_380", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_381", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_382", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_383", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_384", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_385", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_386", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_387", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_388", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_389", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_390", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_391", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_392", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_393", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_394", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_404", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_405", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_406", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_407", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_408", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_409", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_410", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_411", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_412", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_413", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_414", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_415", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_416", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_417", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_418", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_419", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_420", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_421", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_422", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_423", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_424", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_425", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_426", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_427", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_428", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_429", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_430", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_431", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_432", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_433", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_434", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_435", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_436", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_437", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_438", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_439", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_440", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_441", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_442", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_443", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_444", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_445", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_446", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_447", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_448", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_449", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_450", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_451", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_452", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_453", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_454", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_455", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_456", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_457", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_458", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_459", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_460", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_461", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_462", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_463", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_464", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_465", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_466", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_467", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_468", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_469", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_470", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_471", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_472", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_473", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_474", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_99", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_98", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_97", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_96", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_95", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_94", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_93", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_92", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_91", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_90", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_89", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_88", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_87", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_86", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_85", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_84", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_83", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_82", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_81", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_71", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_70", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_69", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_68", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_67", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_66", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_65", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_64", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_63", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_62", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_61", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_60", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_59", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_58", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_57", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_56", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_55", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight3x3_tile_buffe_54", "Type" : "Vld", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_urem_5ns_bkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FracNet_mac_muladcud_U2", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	load_conv3x3_weights {
		conv_weight_3x3_all_V {Type I LastRead 18 FirstWrite -1}
		conv_weight_3x3_all_V_offset {Type I LastRead 1 FirstWrite -1}
		conv3x3_weight_ptr {Type I LastRead 1 FirstWrite -1}
		c_out {Type I LastRead 0 FirstWrite -1}
		c_in {Type I LastRead 0 FirstWrite -1}
		in_channels_after_pa {Type I LastRead 0 FirstWrite -1}
		weight3x3_tile_buffe_287 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_288 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_289 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_290 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_291 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_292 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_293 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_294 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_295 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_296 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_297 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_298 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_299 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_300 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_301 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_302 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_303 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_304 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_395 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_396 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_397 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_398 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_399 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_400 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_401 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_402 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_403 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_80 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_79 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_78 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_77 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_76 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_75 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_74 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_73 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_72 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_53 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_52 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_51 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_50 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_49 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_48 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_47 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_46 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_45 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_44 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_43 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_42 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_41 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_40 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_39 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_38 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_37 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_36 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_35 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_34 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_33 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_32 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_31 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_30 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_29 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_28 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_27 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_26 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_25 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_24 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_23 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_22 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_21 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_20 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_19 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_18 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_17 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_16 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_15 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_14 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_13 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_12 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_11 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_10 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_9 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_8 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_7 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_6 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_5 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_4 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_3 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_2 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_1 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_305 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_306 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_307 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_308 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_309 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_310 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_311 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_312 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_313 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_314 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_315 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_316 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_317 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_318 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_319 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_320 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_321 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_322 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_323 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_324 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_325 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_326 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_327 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_328 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_329 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_330 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_331 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_332 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_333 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_334 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_335 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_336 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_337 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_338 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_339 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_340 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_341 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_342 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_343 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_344 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_345 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_346 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_347 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_348 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_349 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_350 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_351 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_352 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_353 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_354 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_355 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_356 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_357 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_358 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_359 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_360 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_361 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_362 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_363 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_364 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_365 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_366 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_367 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_368 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_369 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_370 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_371 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_372 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_373 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_374 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_375 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_376 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_377 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_378 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_379 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_380 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_381 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_382 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_383 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_384 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_385 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_386 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_387 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_388 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_389 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_390 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_391 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_392 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_393 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_394 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_404 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_405 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_406 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_407 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_408 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_409 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_410 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_411 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_412 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_413 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_414 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_415 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_416 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_417 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_418 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_419 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_420 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_421 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_422 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_423 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_424 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_425 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_426 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_427 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_428 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_429 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_430 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_431 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_432 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_433 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_434 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_435 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_436 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_437 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_438 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_439 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_440 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_441 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_442 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_443 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_444 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_445 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_446 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_447 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_448 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_449 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_450 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_451 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_452 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_453 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_454 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_455 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_456 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_457 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_458 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_459 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_460 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_461 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_462 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_463 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_464 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_465 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_466 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_467 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_468 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_469 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_470 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_471 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_472 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_473 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_474 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_99 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_98 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_97 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_96 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_95 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_94 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_93 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_92 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_91 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_90 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_89 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_88 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_87 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_86 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_85 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_84 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_83 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_82 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_81 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_71 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_70 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_69 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_68 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_67 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_66 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_65 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_64 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_63 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_62 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_61 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_60 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_59 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_58 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_57 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_56 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_55 {Type O LastRead -1 FirstWrite 18}
		weight3x3_tile_buffe_54 {Type O LastRead -1 FirstWrite 18}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "36", "Max" : "36"}
	, {"Name" : "Interval", "Min" : "36", "Max" : "36"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	conv_weight_3x3_all_V { m_axi {  { m_axi_conv_weight_3x3_all_V_AWVALID VALID 1 1 }  { m_axi_conv_weight_3x3_all_V_AWREADY READY 0 1 }  { m_axi_conv_weight_3x3_all_V_AWADDR ADDR 1 32 }  { m_axi_conv_weight_3x3_all_V_AWID ID 1 1 }  { m_axi_conv_weight_3x3_all_V_AWLEN LEN 1 32 }  { m_axi_conv_weight_3x3_all_V_AWSIZE SIZE 1 3 }  { m_axi_conv_weight_3x3_all_V_AWBURST BURST 1 2 }  { m_axi_conv_weight_3x3_all_V_AWLOCK LOCK 1 2 }  { m_axi_conv_weight_3x3_all_V_AWCACHE CACHE 1 4 }  { m_axi_conv_weight_3x3_all_V_AWPROT PROT 1 3 }  { m_axi_conv_weight_3x3_all_V_AWQOS QOS 1 4 }  { m_axi_conv_weight_3x3_all_V_AWREGION REGION 1 4 }  { m_axi_conv_weight_3x3_all_V_AWUSER USER 1 1 }  { m_axi_conv_weight_3x3_all_V_WVALID VALID 1 1 }  { m_axi_conv_weight_3x3_all_V_WREADY READY 0 1 }  { m_axi_conv_weight_3x3_all_V_WDATA DATA 1 512 }  { m_axi_conv_weight_3x3_all_V_WSTRB STRB 1 64 }  { m_axi_conv_weight_3x3_all_V_WLAST LAST 1 1 }  { m_axi_conv_weight_3x3_all_V_WID ID 1 1 }  { m_axi_conv_weight_3x3_all_V_WUSER USER 1 1 }  { m_axi_conv_weight_3x3_all_V_ARVALID VALID 1 1 }  { m_axi_conv_weight_3x3_all_V_ARREADY READY 0 1 }  { m_axi_conv_weight_3x3_all_V_ARADDR ADDR 1 32 }  { m_axi_conv_weight_3x3_all_V_ARID ID 1 1 }  { m_axi_conv_weight_3x3_all_V_ARLEN LEN 1 32 }  { m_axi_conv_weight_3x3_all_V_ARSIZE SIZE 1 3 }  { m_axi_conv_weight_3x3_all_V_ARBURST BURST 1 2 }  { m_axi_conv_weight_3x3_all_V_ARLOCK LOCK 1 2 }  { m_axi_conv_weight_3x3_all_V_ARCACHE CACHE 1 4 }  { m_axi_conv_weight_3x3_all_V_ARPROT PROT 1 3 }  { m_axi_conv_weight_3x3_all_V_ARQOS QOS 1 4 }  { m_axi_conv_weight_3x3_all_V_ARREGION REGION 1 4 }  { m_axi_conv_weight_3x3_all_V_ARUSER USER 1 1 }  { m_axi_conv_weight_3x3_all_V_RVALID VALID 0 1 }  { m_axi_conv_weight_3x3_all_V_RREADY READY 1 1 }  { m_axi_conv_weight_3x3_all_V_RDATA DATA 0 512 }  { m_axi_conv_weight_3x3_all_V_RLAST LAST 0 1 }  { m_axi_conv_weight_3x3_all_V_RID ID 0 1 }  { m_axi_conv_weight_3x3_all_V_RUSER USER 0 1 }  { m_axi_conv_weight_3x3_all_V_RRESP RESP 0 2 }  { m_axi_conv_weight_3x3_all_V_BVALID VALID 0 1 }  { m_axi_conv_weight_3x3_all_V_BREADY READY 1 1 }  { m_axi_conv_weight_3x3_all_V_BRESP RESP 0 2 }  { m_axi_conv_weight_3x3_all_V_BID ID 0 1 }  { m_axi_conv_weight_3x3_all_V_BUSER USER 0 1 } } }
	conv_weight_3x3_all_V_offset { ap_none {  { conv_weight_3x3_all_V_offset in_data 0 26 } } }
	conv3x3_weight_ptr { ap_none {  { conv3x3_weight_ptr in_data 0 16 } } }
	c_out { ap_none {  { c_out in_data 0 6 } } }
	c_in { ap_none {  { c_in in_data 0 6 } } }
	in_channels_after_pa { ap_none {  { in_channels_after_pa in_data 0 7 } } }
	weight3x3_tile_buffe_287 { ap_vld {  { weight3x3_tile_buffe_287 out_data 1 32 }  { weight3x3_tile_buffe_287_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_288 { ap_vld {  { weight3x3_tile_buffe_288 out_data 1 32 }  { weight3x3_tile_buffe_288_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_289 { ap_vld {  { weight3x3_tile_buffe_289 out_data 1 32 }  { weight3x3_tile_buffe_289_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_290 { ap_vld {  { weight3x3_tile_buffe_290 out_data 1 32 }  { weight3x3_tile_buffe_290_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_291 { ap_vld {  { weight3x3_tile_buffe_291 out_data 1 32 }  { weight3x3_tile_buffe_291_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_292 { ap_vld {  { weight3x3_tile_buffe_292 out_data 1 32 }  { weight3x3_tile_buffe_292_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_293 { ap_vld {  { weight3x3_tile_buffe_293 out_data 1 32 }  { weight3x3_tile_buffe_293_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_294 { ap_vld {  { weight3x3_tile_buffe_294 out_data 1 32 }  { weight3x3_tile_buffe_294_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_295 { ap_vld {  { weight3x3_tile_buffe_295 out_data 1 32 }  { weight3x3_tile_buffe_295_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_296 { ap_vld {  { weight3x3_tile_buffe_296 out_data 1 32 }  { weight3x3_tile_buffe_296_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_297 { ap_vld {  { weight3x3_tile_buffe_297 out_data 1 32 }  { weight3x3_tile_buffe_297_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_298 { ap_vld {  { weight3x3_tile_buffe_298 out_data 1 32 }  { weight3x3_tile_buffe_298_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_299 { ap_vld {  { weight3x3_tile_buffe_299 out_data 1 32 }  { weight3x3_tile_buffe_299_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_300 { ap_vld {  { weight3x3_tile_buffe_300 out_data 1 32 }  { weight3x3_tile_buffe_300_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_301 { ap_vld {  { weight3x3_tile_buffe_301 out_data 1 32 }  { weight3x3_tile_buffe_301_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_302 { ap_vld {  { weight3x3_tile_buffe_302 out_data 1 32 }  { weight3x3_tile_buffe_302_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_303 { ap_vld {  { weight3x3_tile_buffe_303 out_data 1 32 }  { weight3x3_tile_buffe_303_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_304 { ap_vld {  { weight3x3_tile_buffe_304 out_data 1 32 }  { weight3x3_tile_buffe_304_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_395 { ap_vld {  { weight3x3_tile_buffe_395 out_data 1 32 }  { weight3x3_tile_buffe_395_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_396 { ap_vld {  { weight3x3_tile_buffe_396 out_data 1 32 }  { weight3x3_tile_buffe_396_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_397 { ap_vld {  { weight3x3_tile_buffe_397 out_data 1 32 }  { weight3x3_tile_buffe_397_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_398 { ap_vld {  { weight3x3_tile_buffe_398 out_data 1 32 }  { weight3x3_tile_buffe_398_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_399 { ap_vld {  { weight3x3_tile_buffe_399 out_data 1 32 }  { weight3x3_tile_buffe_399_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_400 { ap_vld {  { weight3x3_tile_buffe_400 out_data 1 32 }  { weight3x3_tile_buffe_400_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_401 { ap_vld {  { weight3x3_tile_buffe_401 out_data 1 32 }  { weight3x3_tile_buffe_401_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_402 { ap_vld {  { weight3x3_tile_buffe_402 out_data 1 32 }  { weight3x3_tile_buffe_402_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_403 { ap_vld {  { weight3x3_tile_buffe_403 out_data 1 32 }  { weight3x3_tile_buffe_403_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_80 { ap_vld {  { weight3x3_tile_buffe_80 out_data 1 32 }  { weight3x3_tile_buffe_80_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_79 { ap_vld {  { weight3x3_tile_buffe_79 out_data 1 32 }  { weight3x3_tile_buffe_79_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_78 { ap_vld {  { weight3x3_tile_buffe_78 out_data 1 32 }  { weight3x3_tile_buffe_78_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_77 { ap_vld {  { weight3x3_tile_buffe_77 out_data 1 32 }  { weight3x3_tile_buffe_77_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_76 { ap_vld {  { weight3x3_tile_buffe_76 out_data 1 32 }  { weight3x3_tile_buffe_76_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_75 { ap_vld {  { weight3x3_tile_buffe_75 out_data 1 32 }  { weight3x3_tile_buffe_75_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_74 { ap_vld {  { weight3x3_tile_buffe_74 out_data 1 32 }  { weight3x3_tile_buffe_74_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_73 { ap_vld {  { weight3x3_tile_buffe_73 out_data 1 32 }  { weight3x3_tile_buffe_73_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_72 { ap_vld {  { weight3x3_tile_buffe_72 out_data 1 32 }  { weight3x3_tile_buffe_72_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_53 { ap_vld {  { weight3x3_tile_buffe_53 out_data 1 32 }  { weight3x3_tile_buffe_53_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_52 { ap_vld {  { weight3x3_tile_buffe_52 out_data 1 32 }  { weight3x3_tile_buffe_52_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_51 { ap_vld {  { weight3x3_tile_buffe_51 out_data 1 32 }  { weight3x3_tile_buffe_51_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_50 { ap_vld {  { weight3x3_tile_buffe_50 out_data 1 32 }  { weight3x3_tile_buffe_50_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_49 { ap_vld {  { weight3x3_tile_buffe_49 out_data 1 32 }  { weight3x3_tile_buffe_49_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_48 { ap_vld {  { weight3x3_tile_buffe_48 out_data 1 32 }  { weight3x3_tile_buffe_48_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_47 { ap_vld {  { weight3x3_tile_buffe_47 out_data 1 32 }  { weight3x3_tile_buffe_47_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_46 { ap_vld {  { weight3x3_tile_buffe_46 out_data 1 32 }  { weight3x3_tile_buffe_46_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_45 { ap_vld {  { weight3x3_tile_buffe_45 out_data 1 32 }  { weight3x3_tile_buffe_45_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_44 { ap_vld {  { weight3x3_tile_buffe_44 out_data 1 32 }  { weight3x3_tile_buffe_44_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_43 { ap_vld {  { weight3x3_tile_buffe_43 out_data 1 32 }  { weight3x3_tile_buffe_43_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_42 { ap_vld {  { weight3x3_tile_buffe_42 out_data 1 32 }  { weight3x3_tile_buffe_42_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_41 { ap_vld {  { weight3x3_tile_buffe_41 out_data 1 32 }  { weight3x3_tile_buffe_41_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_40 { ap_vld {  { weight3x3_tile_buffe_40 out_data 1 32 }  { weight3x3_tile_buffe_40_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_39 { ap_vld {  { weight3x3_tile_buffe_39 out_data 1 32 }  { weight3x3_tile_buffe_39_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_38 { ap_vld {  { weight3x3_tile_buffe_38 out_data 1 32 }  { weight3x3_tile_buffe_38_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_37 { ap_vld {  { weight3x3_tile_buffe_37 out_data 1 32 }  { weight3x3_tile_buffe_37_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_36 { ap_vld {  { weight3x3_tile_buffe_36 out_data 1 32 }  { weight3x3_tile_buffe_36_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_35 { ap_vld {  { weight3x3_tile_buffe_35 out_data 1 32 }  { weight3x3_tile_buffe_35_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_34 { ap_vld {  { weight3x3_tile_buffe_34 out_data 1 32 }  { weight3x3_tile_buffe_34_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_33 { ap_vld {  { weight3x3_tile_buffe_33 out_data 1 32 }  { weight3x3_tile_buffe_33_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_32 { ap_vld {  { weight3x3_tile_buffe_32 out_data 1 32 }  { weight3x3_tile_buffe_32_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_31 { ap_vld {  { weight3x3_tile_buffe_31 out_data 1 32 }  { weight3x3_tile_buffe_31_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_30 { ap_vld {  { weight3x3_tile_buffe_30 out_data 1 32 }  { weight3x3_tile_buffe_30_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_29 { ap_vld {  { weight3x3_tile_buffe_29 out_data 1 32 }  { weight3x3_tile_buffe_29_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_28 { ap_vld {  { weight3x3_tile_buffe_28 out_data 1 32 }  { weight3x3_tile_buffe_28_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_27 { ap_vld {  { weight3x3_tile_buffe_27 out_data 1 32 }  { weight3x3_tile_buffe_27_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_26 { ap_vld {  { weight3x3_tile_buffe_26 out_data 1 32 }  { weight3x3_tile_buffe_26_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_25 { ap_vld {  { weight3x3_tile_buffe_25 out_data 1 32 }  { weight3x3_tile_buffe_25_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_24 { ap_vld {  { weight3x3_tile_buffe_24 out_data 1 32 }  { weight3x3_tile_buffe_24_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_23 { ap_vld {  { weight3x3_tile_buffe_23 out_data 1 32 }  { weight3x3_tile_buffe_23_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_22 { ap_vld {  { weight3x3_tile_buffe_22 out_data 1 32 }  { weight3x3_tile_buffe_22_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_21 { ap_vld {  { weight3x3_tile_buffe_21 out_data 1 32 }  { weight3x3_tile_buffe_21_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_20 { ap_vld {  { weight3x3_tile_buffe_20 out_data 1 32 }  { weight3x3_tile_buffe_20_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_19 { ap_vld {  { weight3x3_tile_buffe_19 out_data 1 32 }  { weight3x3_tile_buffe_19_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_18 { ap_vld {  { weight3x3_tile_buffe_18 out_data 1 32 }  { weight3x3_tile_buffe_18_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_17 { ap_vld {  { weight3x3_tile_buffe_17 out_data 1 32 }  { weight3x3_tile_buffe_17_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_16 { ap_vld {  { weight3x3_tile_buffe_16 out_data 1 32 }  { weight3x3_tile_buffe_16_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_15 { ap_vld {  { weight3x3_tile_buffe_15 out_data 1 32 }  { weight3x3_tile_buffe_15_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_14 { ap_vld {  { weight3x3_tile_buffe_14 out_data 1 32 }  { weight3x3_tile_buffe_14_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_13 { ap_vld {  { weight3x3_tile_buffe_13 out_data 1 32 }  { weight3x3_tile_buffe_13_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_12 { ap_vld {  { weight3x3_tile_buffe_12 out_data 1 32 }  { weight3x3_tile_buffe_12_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_11 { ap_vld {  { weight3x3_tile_buffe_11 out_data 1 32 }  { weight3x3_tile_buffe_11_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_10 { ap_vld {  { weight3x3_tile_buffe_10 out_data 1 32 }  { weight3x3_tile_buffe_10_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_9 { ap_vld {  { weight3x3_tile_buffe_9 out_data 1 32 }  { weight3x3_tile_buffe_9_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_8 { ap_vld {  { weight3x3_tile_buffe_8 out_data 1 32 }  { weight3x3_tile_buffe_8_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_7 { ap_vld {  { weight3x3_tile_buffe_7 out_data 1 32 }  { weight3x3_tile_buffe_7_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_6 { ap_vld {  { weight3x3_tile_buffe_6 out_data 1 32 }  { weight3x3_tile_buffe_6_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_5 { ap_vld {  { weight3x3_tile_buffe_5 out_data 1 32 }  { weight3x3_tile_buffe_5_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_4 { ap_vld {  { weight3x3_tile_buffe_4 out_data 1 32 }  { weight3x3_tile_buffe_4_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_3 { ap_vld {  { weight3x3_tile_buffe_3 out_data 1 32 }  { weight3x3_tile_buffe_3_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_2 { ap_vld {  { weight3x3_tile_buffe_2 out_data 1 32 }  { weight3x3_tile_buffe_2_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_1 { ap_vld {  { weight3x3_tile_buffe_1 out_data 1 32 }  { weight3x3_tile_buffe_1_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe { ap_vld {  { weight3x3_tile_buffe out_data 1 32 }  { weight3x3_tile_buffe_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_305 { ap_vld {  { weight3x3_tile_buffe_305 out_data 1 32 }  { weight3x3_tile_buffe_305_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_306 { ap_vld {  { weight3x3_tile_buffe_306 out_data 1 32 }  { weight3x3_tile_buffe_306_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_307 { ap_vld {  { weight3x3_tile_buffe_307 out_data 1 32 }  { weight3x3_tile_buffe_307_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_308 { ap_vld {  { weight3x3_tile_buffe_308 out_data 1 32 }  { weight3x3_tile_buffe_308_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_309 { ap_vld {  { weight3x3_tile_buffe_309 out_data 1 32 }  { weight3x3_tile_buffe_309_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_310 { ap_vld {  { weight3x3_tile_buffe_310 out_data 1 32 }  { weight3x3_tile_buffe_310_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_311 { ap_vld {  { weight3x3_tile_buffe_311 out_data 1 32 }  { weight3x3_tile_buffe_311_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_312 { ap_vld {  { weight3x3_tile_buffe_312 out_data 1 32 }  { weight3x3_tile_buffe_312_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_313 { ap_vld {  { weight3x3_tile_buffe_313 out_data 1 32 }  { weight3x3_tile_buffe_313_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_314 { ap_vld {  { weight3x3_tile_buffe_314 out_data 1 32 }  { weight3x3_tile_buffe_314_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_315 { ap_vld {  { weight3x3_tile_buffe_315 out_data 1 32 }  { weight3x3_tile_buffe_315_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_316 { ap_vld {  { weight3x3_tile_buffe_316 out_data 1 32 }  { weight3x3_tile_buffe_316_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_317 { ap_vld {  { weight3x3_tile_buffe_317 out_data 1 32 }  { weight3x3_tile_buffe_317_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_318 { ap_vld {  { weight3x3_tile_buffe_318 out_data 1 32 }  { weight3x3_tile_buffe_318_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_319 { ap_vld {  { weight3x3_tile_buffe_319 out_data 1 32 }  { weight3x3_tile_buffe_319_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_320 { ap_vld {  { weight3x3_tile_buffe_320 out_data 1 32 }  { weight3x3_tile_buffe_320_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_321 { ap_vld {  { weight3x3_tile_buffe_321 out_data 1 32 }  { weight3x3_tile_buffe_321_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_322 { ap_vld {  { weight3x3_tile_buffe_322 out_data 1 32 }  { weight3x3_tile_buffe_322_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_323 { ap_vld {  { weight3x3_tile_buffe_323 out_data 1 32 }  { weight3x3_tile_buffe_323_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_324 { ap_vld {  { weight3x3_tile_buffe_324 out_data 1 32 }  { weight3x3_tile_buffe_324_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_325 { ap_vld {  { weight3x3_tile_buffe_325 out_data 1 32 }  { weight3x3_tile_buffe_325_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_326 { ap_vld {  { weight3x3_tile_buffe_326 out_data 1 32 }  { weight3x3_tile_buffe_326_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_327 { ap_vld {  { weight3x3_tile_buffe_327 out_data 1 32 }  { weight3x3_tile_buffe_327_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_328 { ap_vld {  { weight3x3_tile_buffe_328 out_data 1 32 }  { weight3x3_tile_buffe_328_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_329 { ap_vld {  { weight3x3_tile_buffe_329 out_data 1 32 }  { weight3x3_tile_buffe_329_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_330 { ap_vld {  { weight3x3_tile_buffe_330 out_data 1 32 }  { weight3x3_tile_buffe_330_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_331 { ap_vld {  { weight3x3_tile_buffe_331 out_data 1 32 }  { weight3x3_tile_buffe_331_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_332 { ap_vld {  { weight3x3_tile_buffe_332 out_data 1 32 }  { weight3x3_tile_buffe_332_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_333 { ap_vld {  { weight3x3_tile_buffe_333 out_data 1 32 }  { weight3x3_tile_buffe_333_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_334 { ap_vld {  { weight3x3_tile_buffe_334 out_data 1 32 }  { weight3x3_tile_buffe_334_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_335 { ap_vld {  { weight3x3_tile_buffe_335 out_data 1 32 }  { weight3x3_tile_buffe_335_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_336 { ap_vld {  { weight3x3_tile_buffe_336 out_data 1 32 }  { weight3x3_tile_buffe_336_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_337 { ap_vld {  { weight3x3_tile_buffe_337 out_data 1 32 }  { weight3x3_tile_buffe_337_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_338 { ap_vld {  { weight3x3_tile_buffe_338 out_data 1 32 }  { weight3x3_tile_buffe_338_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_339 { ap_vld {  { weight3x3_tile_buffe_339 out_data 1 32 }  { weight3x3_tile_buffe_339_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_340 { ap_vld {  { weight3x3_tile_buffe_340 out_data 1 32 }  { weight3x3_tile_buffe_340_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_341 { ap_vld {  { weight3x3_tile_buffe_341 out_data 1 32 }  { weight3x3_tile_buffe_341_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_342 { ap_vld {  { weight3x3_tile_buffe_342 out_data 1 32 }  { weight3x3_tile_buffe_342_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_343 { ap_vld {  { weight3x3_tile_buffe_343 out_data 1 32 }  { weight3x3_tile_buffe_343_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_344 { ap_vld {  { weight3x3_tile_buffe_344 out_data 1 32 }  { weight3x3_tile_buffe_344_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_345 { ap_vld {  { weight3x3_tile_buffe_345 out_data 1 32 }  { weight3x3_tile_buffe_345_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_346 { ap_vld {  { weight3x3_tile_buffe_346 out_data 1 32 }  { weight3x3_tile_buffe_346_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_347 { ap_vld {  { weight3x3_tile_buffe_347 out_data 1 32 }  { weight3x3_tile_buffe_347_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_348 { ap_vld {  { weight3x3_tile_buffe_348 out_data 1 32 }  { weight3x3_tile_buffe_348_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_349 { ap_vld {  { weight3x3_tile_buffe_349 out_data 1 32 }  { weight3x3_tile_buffe_349_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_350 { ap_vld {  { weight3x3_tile_buffe_350 out_data 1 32 }  { weight3x3_tile_buffe_350_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_351 { ap_vld {  { weight3x3_tile_buffe_351 out_data 1 32 }  { weight3x3_tile_buffe_351_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_352 { ap_vld {  { weight3x3_tile_buffe_352 out_data 1 32 }  { weight3x3_tile_buffe_352_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_353 { ap_vld {  { weight3x3_tile_buffe_353 out_data 1 32 }  { weight3x3_tile_buffe_353_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_354 { ap_vld {  { weight3x3_tile_buffe_354 out_data 1 32 }  { weight3x3_tile_buffe_354_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_355 { ap_vld {  { weight3x3_tile_buffe_355 out_data 1 32 }  { weight3x3_tile_buffe_355_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_356 { ap_vld {  { weight3x3_tile_buffe_356 out_data 1 32 }  { weight3x3_tile_buffe_356_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_357 { ap_vld {  { weight3x3_tile_buffe_357 out_data 1 32 }  { weight3x3_tile_buffe_357_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_358 { ap_vld {  { weight3x3_tile_buffe_358 out_data 1 32 }  { weight3x3_tile_buffe_358_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_359 { ap_vld {  { weight3x3_tile_buffe_359 out_data 1 32 }  { weight3x3_tile_buffe_359_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_360 { ap_vld {  { weight3x3_tile_buffe_360 out_data 1 32 }  { weight3x3_tile_buffe_360_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_361 { ap_vld {  { weight3x3_tile_buffe_361 out_data 1 32 }  { weight3x3_tile_buffe_361_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_362 { ap_vld {  { weight3x3_tile_buffe_362 out_data 1 32 }  { weight3x3_tile_buffe_362_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_363 { ap_vld {  { weight3x3_tile_buffe_363 out_data 1 32 }  { weight3x3_tile_buffe_363_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_364 { ap_vld {  { weight3x3_tile_buffe_364 out_data 1 32 }  { weight3x3_tile_buffe_364_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_365 { ap_vld {  { weight3x3_tile_buffe_365 out_data 1 32 }  { weight3x3_tile_buffe_365_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_366 { ap_vld {  { weight3x3_tile_buffe_366 out_data 1 32 }  { weight3x3_tile_buffe_366_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_367 { ap_vld {  { weight3x3_tile_buffe_367 out_data 1 32 }  { weight3x3_tile_buffe_367_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_368 { ap_vld {  { weight3x3_tile_buffe_368 out_data 1 32 }  { weight3x3_tile_buffe_368_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_369 { ap_vld {  { weight3x3_tile_buffe_369 out_data 1 32 }  { weight3x3_tile_buffe_369_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_370 { ap_vld {  { weight3x3_tile_buffe_370 out_data 1 32 }  { weight3x3_tile_buffe_370_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_371 { ap_vld {  { weight3x3_tile_buffe_371 out_data 1 32 }  { weight3x3_tile_buffe_371_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_372 { ap_vld {  { weight3x3_tile_buffe_372 out_data 1 32 }  { weight3x3_tile_buffe_372_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_373 { ap_vld {  { weight3x3_tile_buffe_373 out_data 1 32 }  { weight3x3_tile_buffe_373_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_374 { ap_vld {  { weight3x3_tile_buffe_374 out_data 1 32 }  { weight3x3_tile_buffe_374_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_375 { ap_vld {  { weight3x3_tile_buffe_375 out_data 1 32 }  { weight3x3_tile_buffe_375_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_376 { ap_vld {  { weight3x3_tile_buffe_376 out_data 1 32 }  { weight3x3_tile_buffe_376_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_377 { ap_vld {  { weight3x3_tile_buffe_377 out_data 1 32 }  { weight3x3_tile_buffe_377_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_378 { ap_vld {  { weight3x3_tile_buffe_378 out_data 1 32 }  { weight3x3_tile_buffe_378_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_379 { ap_vld {  { weight3x3_tile_buffe_379 out_data 1 32 }  { weight3x3_tile_buffe_379_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_380 { ap_vld {  { weight3x3_tile_buffe_380 out_data 1 32 }  { weight3x3_tile_buffe_380_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_381 { ap_vld {  { weight3x3_tile_buffe_381 out_data 1 32 }  { weight3x3_tile_buffe_381_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_382 { ap_vld {  { weight3x3_tile_buffe_382 out_data 1 32 }  { weight3x3_tile_buffe_382_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_383 { ap_vld {  { weight3x3_tile_buffe_383 out_data 1 32 }  { weight3x3_tile_buffe_383_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_384 { ap_vld {  { weight3x3_tile_buffe_384 out_data 1 32 }  { weight3x3_tile_buffe_384_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_385 { ap_vld {  { weight3x3_tile_buffe_385 out_data 1 32 }  { weight3x3_tile_buffe_385_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_386 { ap_vld {  { weight3x3_tile_buffe_386 out_data 1 32 }  { weight3x3_tile_buffe_386_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_387 { ap_vld {  { weight3x3_tile_buffe_387 out_data 1 32 }  { weight3x3_tile_buffe_387_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_388 { ap_vld {  { weight3x3_tile_buffe_388 out_data 1 32 }  { weight3x3_tile_buffe_388_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_389 { ap_vld {  { weight3x3_tile_buffe_389 out_data 1 32 }  { weight3x3_tile_buffe_389_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_390 { ap_vld {  { weight3x3_tile_buffe_390 out_data 1 32 }  { weight3x3_tile_buffe_390_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_391 { ap_vld {  { weight3x3_tile_buffe_391 out_data 1 32 }  { weight3x3_tile_buffe_391_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_392 { ap_vld {  { weight3x3_tile_buffe_392 out_data 1 32 }  { weight3x3_tile_buffe_392_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_393 { ap_vld {  { weight3x3_tile_buffe_393 out_data 1 32 }  { weight3x3_tile_buffe_393_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_394 { ap_vld {  { weight3x3_tile_buffe_394 out_data 1 32 }  { weight3x3_tile_buffe_394_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_404 { ap_vld {  { weight3x3_tile_buffe_404 out_data 1 32 }  { weight3x3_tile_buffe_404_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_405 { ap_vld {  { weight3x3_tile_buffe_405 out_data 1 32 }  { weight3x3_tile_buffe_405_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_406 { ap_vld {  { weight3x3_tile_buffe_406 out_data 1 32 }  { weight3x3_tile_buffe_406_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_407 { ap_vld {  { weight3x3_tile_buffe_407 out_data 1 32 }  { weight3x3_tile_buffe_407_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_408 { ap_vld {  { weight3x3_tile_buffe_408 out_data 1 32 }  { weight3x3_tile_buffe_408_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_409 { ap_vld {  { weight3x3_tile_buffe_409 out_data 1 32 }  { weight3x3_tile_buffe_409_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_410 { ap_vld {  { weight3x3_tile_buffe_410 out_data 1 32 }  { weight3x3_tile_buffe_410_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_411 { ap_vld {  { weight3x3_tile_buffe_411 out_data 1 32 }  { weight3x3_tile_buffe_411_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_412 { ap_vld {  { weight3x3_tile_buffe_412 out_data 1 32 }  { weight3x3_tile_buffe_412_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_413 { ap_vld {  { weight3x3_tile_buffe_413 out_data 1 32 }  { weight3x3_tile_buffe_413_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_414 { ap_vld {  { weight3x3_tile_buffe_414 out_data 1 32 }  { weight3x3_tile_buffe_414_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_415 { ap_vld {  { weight3x3_tile_buffe_415 out_data 1 32 }  { weight3x3_tile_buffe_415_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_416 { ap_vld {  { weight3x3_tile_buffe_416 out_data 1 32 }  { weight3x3_tile_buffe_416_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_417 { ap_vld {  { weight3x3_tile_buffe_417 out_data 1 32 }  { weight3x3_tile_buffe_417_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_418 { ap_vld {  { weight3x3_tile_buffe_418 out_data 1 32 }  { weight3x3_tile_buffe_418_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_419 { ap_vld {  { weight3x3_tile_buffe_419 out_data 1 32 }  { weight3x3_tile_buffe_419_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_420 { ap_vld {  { weight3x3_tile_buffe_420 out_data 1 32 }  { weight3x3_tile_buffe_420_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_421 { ap_vld {  { weight3x3_tile_buffe_421 out_data 1 32 }  { weight3x3_tile_buffe_421_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_422 { ap_vld {  { weight3x3_tile_buffe_422 out_data 1 32 }  { weight3x3_tile_buffe_422_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_423 { ap_vld {  { weight3x3_tile_buffe_423 out_data 1 32 }  { weight3x3_tile_buffe_423_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_424 { ap_vld {  { weight3x3_tile_buffe_424 out_data 1 32 }  { weight3x3_tile_buffe_424_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_425 { ap_vld {  { weight3x3_tile_buffe_425 out_data 1 32 }  { weight3x3_tile_buffe_425_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_426 { ap_vld {  { weight3x3_tile_buffe_426 out_data 1 32 }  { weight3x3_tile_buffe_426_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_427 { ap_vld {  { weight3x3_tile_buffe_427 out_data 1 32 }  { weight3x3_tile_buffe_427_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_428 { ap_vld {  { weight3x3_tile_buffe_428 out_data 1 32 }  { weight3x3_tile_buffe_428_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_429 { ap_vld {  { weight3x3_tile_buffe_429 out_data 1 32 }  { weight3x3_tile_buffe_429_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_430 { ap_vld {  { weight3x3_tile_buffe_430 out_data 1 32 }  { weight3x3_tile_buffe_430_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_431 { ap_vld {  { weight3x3_tile_buffe_431 out_data 1 32 }  { weight3x3_tile_buffe_431_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_432 { ap_vld {  { weight3x3_tile_buffe_432 out_data 1 32 }  { weight3x3_tile_buffe_432_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_433 { ap_vld {  { weight3x3_tile_buffe_433 out_data 1 32 }  { weight3x3_tile_buffe_433_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_434 { ap_vld {  { weight3x3_tile_buffe_434 out_data 1 32 }  { weight3x3_tile_buffe_434_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_435 { ap_vld {  { weight3x3_tile_buffe_435 out_data 1 32 }  { weight3x3_tile_buffe_435_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_436 { ap_vld {  { weight3x3_tile_buffe_436 out_data 1 32 }  { weight3x3_tile_buffe_436_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_437 { ap_vld {  { weight3x3_tile_buffe_437 out_data 1 32 }  { weight3x3_tile_buffe_437_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_438 { ap_vld {  { weight3x3_tile_buffe_438 out_data 1 32 }  { weight3x3_tile_buffe_438_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_439 { ap_vld {  { weight3x3_tile_buffe_439 out_data 1 32 }  { weight3x3_tile_buffe_439_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_440 { ap_vld {  { weight3x3_tile_buffe_440 out_data 1 32 }  { weight3x3_tile_buffe_440_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_441 { ap_vld {  { weight3x3_tile_buffe_441 out_data 1 32 }  { weight3x3_tile_buffe_441_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_442 { ap_vld {  { weight3x3_tile_buffe_442 out_data 1 32 }  { weight3x3_tile_buffe_442_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_443 { ap_vld {  { weight3x3_tile_buffe_443 out_data 1 32 }  { weight3x3_tile_buffe_443_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_444 { ap_vld {  { weight3x3_tile_buffe_444 out_data 1 32 }  { weight3x3_tile_buffe_444_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_445 { ap_vld {  { weight3x3_tile_buffe_445 out_data 1 32 }  { weight3x3_tile_buffe_445_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_446 { ap_vld {  { weight3x3_tile_buffe_446 out_data 1 32 }  { weight3x3_tile_buffe_446_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_447 { ap_vld {  { weight3x3_tile_buffe_447 out_data 1 32 }  { weight3x3_tile_buffe_447_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_448 { ap_vld {  { weight3x3_tile_buffe_448 out_data 1 32 }  { weight3x3_tile_buffe_448_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_449 { ap_vld {  { weight3x3_tile_buffe_449 out_data 1 32 }  { weight3x3_tile_buffe_449_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_450 { ap_vld {  { weight3x3_tile_buffe_450 out_data 1 32 }  { weight3x3_tile_buffe_450_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_451 { ap_vld {  { weight3x3_tile_buffe_451 out_data 1 32 }  { weight3x3_tile_buffe_451_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_452 { ap_vld {  { weight3x3_tile_buffe_452 out_data 1 32 }  { weight3x3_tile_buffe_452_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_453 { ap_vld {  { weight3x3_tile_buffe_453 out_data 1 32 }  { weight3x3_tile_buffe_453_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_454 { ap_vld {  { weight3x3_tile_buffe_454 out_data 1 32 }  { weight3x3_tile_buffe_454_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_455 { ap_vld {  { weight3x3_tile_buffe_455 out_data 1 32 }  { weight3x3_tile_buffe_455_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_456 { ap_vld {  { weight3x3_tile_buffe_456 out_data 1 32 }  { weight3x3_tile_buffe_456_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_457 { ap_vld {  { weight3x3_tile_buffe_457 out_data 1 32 }  { weight3x3_tile_buffe_457_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_458 { ap_vld {  { weight3x3_tile_buffe_458 out_data 1 32 }  { weight3x3_tile_buffe_458_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_459 { ap_vld {  { weight3x3_tile_buffe_459 out_data 1 32 }  { weight3x3_tile_buffe_459_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_460 { ap_vld {  { weight3x3_tile_buffe_460 out_data 1 32 }  { weight3x3_tile_buffe_460_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_461 { ap_vld {  { weight3x3_tile_buffe_461 out_data 1 32 }  { weight3x3_tile_buffe_461_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_462 { ap_vld {  { weight3x3_tile_buffe_462 out_data 1 32 }  { weight3x3_tile_buffe_462_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_463 { ap_vld {  { weight3x3_tile_buffe_463 out_data 1 32 }  { weight3x3_tile_buffe_463_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_464 { ap_vld {  { weight3x3_tile_buffe_464 out_data 1 32 }  { weight3x3_tile_buffe_464_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_465 { ap_vld {  { weight3x3_tile_buffe_465 out_data 1 32 }  { weight3x3_tile_buffe_465_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_466 { ap_vld {  { weight3x3_tile_buffe_466 out_data 1 32 }  { weight3x3_tile_buffe_466_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_467 { ap_vld {  { weight3x3_tile_buffe_467 out_data 1 32 }  { weight3x3_tile_buffe_467_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_468 { ap_vld {  { weight3x3_tile_buffe_468 out_data 1 32 }  { weight3x3_tile_buffe_468_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_469 { ap_vld {  { weight3x3_tile_buffe_469 out_data 1 32 }  { weight3x3_tile_buffe_469_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_470 { ap_vld {  { weight3x3_tile_buffe_470 out_data 1 32 }  { weight3x3_tile_buffe_470_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_471 { ap_vld {  { weight3x3_tile_buffe_471 out_data 1 32 }  { weight3x3_tile_buffe_471_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_472 { ap_vld {  { weight3x3_tile_buffe_472 out_data 1 32 }  { weight3x3_tile_buffe_472_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_473 { ap_vld {  { weight3x3_tile_buffe_473 out_data 1 32 }  { weight3x3_tile_buffe_473_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_474 { ap_vld {  { weight3x3_tile_buffe_474 out_data 1 32 }  { weight3x3_tile_buffe_474_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_99 { ap_vld {  { weight3x3_tile_buffe_99 out_data 1 32 }  { weight3x3_tile_buffe_99_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_98 { ap_vld {  { weight3x3_tile_buffe_98 out_data 1 32 }  { weight3x3_tile_buffe_98_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_97 { ap_vld {  { weight3x3_tile_buffe_97 out_data 1 32 }  { weight3x3_tile_buffe_97_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_96 { ap_vld {  { weight3x3_tile_buffe_96 out_data 1 32 }  { weight3x3_tile_buffe_96_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_95 { ap_vld {  { weight3x3_tile_buffe_95 out_data 1 32 }  { weight3x3_tile_buffe_95_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_94 { ap_vld {  { weight3x3_tile_buffe_94 out_data 1 32 }  { weight3x3_tile_buffe_94_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_93 { ap_vld {  { weight3x3_tile_buffe_93 out_data 1 32 }  { weight3x3_tile_buffe_93_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_92 { ap_vld {  { weight3x3_tile_buffe_92 out_data 1 32 }  { weight3x3_tile_buffe_92_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_91 { ap_vld {  { weight3x3_tile_buffe_91 out_data 1 32 }  { weight3x3_tile_buffe_91_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_90 { ap_vld {  { weight3x3_tile_buffe_90 out_data 1 32 }  { weight3x3_tile_buffe_90_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_89 { ap_vld {  { weight3x3_tile_buffe_89 out_data 1 32 }  { weight3x3_tile_buffe_89_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_88 { ap_vld {  { weight3x3_tile_buffe_88 out_data 1 32 }  { weight3x3_tile_buffe_88_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_87 { ap_vld {  { weight3x3_tile_buffe_87 out_data 1 32 }  { weight3x3_tile_buffe_87_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_86 { ap_vld {  { weight3x3_tile_buffe_86 out_data 1 32 }  { weight3x3_tile_buffe_86_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_85 { ap_vld {  { weight3x3_tile_buffe_85 out_data 1 32 }  { weight3x3_tile_buffe_85_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_84 { ap_vld {  { weight3x3_tile_buffe_84 out_data 1 32 }  { weight3x3_tile_buffe_84_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_83 { ap_vld {  { weight3x3_tile_buffe_83 out_data 1 32 }  { weight3x3_tile_buffe_83_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_82 { ap_vld {  { weight3x3_tile_buffe_82 out_data 1 32 }  { weight3x3_tile_buffe_82_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_81 { ap_vld {  { weight3x3_tile_buffe_81 out_data 1 32 }  { weight3x3_tile_buffe_81_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_71 { ap_vld {  { weight3x3_tile_buffe_71 out_data 1 32 }  { weight3x3_tile_buffe_71_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_70 { ap_vld {  { weight3x3_tile_buffe_70 out_data 1 32 }  { weight3x3_tile_buffe_70_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_69 { ap_vld {  { weight3x3_tile_buffe_69 out_data 1 32 }  { weight3x3_tile_buffe_69_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_68 { ap_vld {  { weight3x3_tile_buffe_68 out_data 1 32 }  { weight3x3_tile_buffe_68_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_67 { ap_vld {  { weight3x3_tile_buffe_67 out_data 1 32 }  { weight3x3_tile_buffe_67_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_66 { ap_vld {  { weight3x3_tile_buffe_66 out_data 1 32 }  { weight3x3_tile_buffe_66_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_65 { ap_vld {  { weight3x3_tile_buffe_65 out_data 1 32 }  { weight3x3_tile_buffe_65_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_64 { ap_vld {  { weight3x3_tile_buffe_64 out_data 1 32 }  { weight3x3_tile_buffe_64_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_63 { ap_vld {  { weight3x3_tile_buffe_63 out_data 1 32 }  { weight3x3_tile_buffe_63_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_62 { ap_vld {  { weight3x3_tile_buffe_62 out_data 1 32 }  { weight3x3_tile_buffe_62_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_61 { ap_vld {  { weight3x3_tile_buffe_61 out_data 1 32 }  { weight3x3_tile_buffe_61_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_60 { ap_vld {  { weight3x3_tile_buffe_60 out_data 1 32 }  { weight3x3_tile_buffe_60_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_59 { ap_vld {  { weight3x3_tile_buffe_59 out_data 1 32 }  { weight3x3_tile_buffe_59_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_58 { ap_vld {  { weight3x3_tile_buffe_58 out_data 1 32 }  { weight3x3_tile_buffe_58_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_57 { ap_vld {  { weight3x3_tile_buffe_57 out_data 1 32 }  { weight3x3_tile_buffe_57_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_56 { ap_vld {  { weight3x3_tile_buffe_56 out_data 1 32 }  { weight3x3_tile_buffe_56_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_55 { ap_vld {  { weight3x3_tile_buffe_55 out_data 1 32 }  { weight3x3_tile_buffe_55_ap_vld out_vld 1 1 } } }
	weight3x3_tile_buffe_54 { ap_vld {  { weight3x3_tile_buffe_54 out_data 1 32 }  { weight3x3_tile_buffe_54_ap_vld out_vld 1 1 } } }
}

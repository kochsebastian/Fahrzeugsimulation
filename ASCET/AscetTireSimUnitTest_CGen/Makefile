# THIS IS A GENERATED FILE => DO NOT EDIT
# Objective: compile and link a unit test exectable
# Remark: contains hard dependencies to google test framework

OUTPUT_CONFIG=Debug
TEST_BASE_NAME=components
TEST_EXE=$(OUTPUT_CONFIG)/$(TEST_BASE_NAME).exe
MKDIR_CMD=mkdir -p

# Google test config
GOOGLE_TEST_INC=-IgoogleTestLib
GOOGLE_TEST_OUTDIR=$(OUTPUT_CONFIG)/googleTestLib/gtest
GOOGLE_TEST_OBJECTS=$(GOOGLE_TEST_OUTDIR)/gtest-all.o\
  $(OUTPUT_CONFIG)/tests/AllTests.o

INC=$(GOOGLE_TEST_INC) -Iinclude -Isrc -Itests
COMMON_FLAGS=-O0 -g3 -Wall -c -fmessage-length=0 -DSINGLE_THREADED
CPPFLAGS=$(COMMON_FLAGS)
CFLAGS=$(COMMON_FLAGS) -Wno-unused -ansi

MODEL_OBJECTS=$(OUTPUT_CONFIG)/src/AscetTireSimUnitTest_Automatic.o $(OUTPUT_CONFIG)/src/components_ModelTest_Automatic.o $(OUTPUT_CONFIG)/src/components_ModelTest_distanceIncreasing_Automatic.o $(OUTPUT_CONFIG)/src/components_ModelTest_predictDistance_Automatic.o $(OUTPUT_CONFIG)/src/components_ModelTest_deltasConsistentForSameVelocity_Automatic.o $(OUTPUT_CONFIG)/src/components_Test_SOS_state_Automatic.o $(OUTPUT_CONFIG)/src/components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_Automatic.o $(OUTPUT_CONFIG)/src/components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_Automatic.o $(OUTPUT_CONFIG)/src/components_Test_SOS_state_checkAllStatesDeactiv_Automatic.o $(OUTPUT_CONFIG)/src/components_RingBufferTest_Automatic.o $(OUTPUT_CONFIG)/src/components_RingBufferTest_start_with_empty_buffer_Automatic.o $(OUTPUT_CONFIG)/src/components_RingBufferTest_fill_buffer_decending_Automatic.o $(OUTPUT_CONFIG)/src/components_RingBufferTest_read_last_element_Automatic.o $(OUTPUT_CONFIG)/src/components_RandomGeneratorTest_Automatic.o $(OUTPUT_CONFIG)/src/components_RandomGeneratorTest_testcalc_Automatic.o $(OUTPUT_CONFIG)/src/components_RandomGeneratorTest_testcalc2_Automatic.o $(OUTPUT_CONFIG)/src/components_TireMeanTest_Automatic.o $(OUTPUT_CONFIG)/src/components_TireMeanTest_calcMeanAllValuesTheSame_Automatic.o $(OUTPUT_CONFIG)/src/components_TireMeanTest_calcMean_Automatic.o $(OUTPUT_CONFIG)/src/components_TireMeanTest_calcMeanNegativ_Automatic.o $(OUTPUT_CONFIG)/src/components_TireMeanTest_calcMeanMixed_Automatic.o $(OUTPUT_CONFIG)/src/components_TireDeviationTest_Automatic.o $(OUTPUT_CONFIG)/src/components_TireDeviationTest_noDeviationWhileCalibration_Automatic.o $(OUTPUT_CONFIG)/src/components_TireDeviationTest_highDeviationWhileCalibration_Automatic.o $(OUTPUT_CONFIG)/src/components_TireDeviationTest_lowDeviationWhileCalibration_Automatic.o $(OUTPUT_CONFIG)/src/components_TireDeviationTest_noDeviation_Automatic.o $(OUTPUT_CONFIG)/src/components_TireDeviationTest_highDeviation_Automatic.o $(OUTPUT_CONFIG)/src/components_TireDeviationTest_lowDeviation_Automatic.o $(OUTPUT_CONFIG)/src/components_ErrorModuleTest_Automatic.o $(OUTPUT_CONFIG)/src/components_ErrorModuleTest_deflation_Automatic.o $(OUTPUT_CONFIG)/src/components_ErrorModuleTest_noDeflation_Automatic.o $(OUTPUT_CONFIG)/src/assertLib_Assert_Impl.o $(OUTPUT_CONFIG)/src/components_Globals_Automatic.o $(OUTPUT_CONFIG)/src/components_Model_Automatic.o $(OUTPUT_CONFIG)/src/components_SOS_state_Automatic.o $(OUTPUT_CONFIG)/src/components_RingBuffer_Automatic.o $(OUTPUT_CONFIG)/src/components_RandomGenerator_Automatic.o $(OUTPUT_CONFIG)/src/components_TireMean_Automatic.o $(OUTPUT_CONFIG)/src/components_TireDeviation_Automatic.o $(OUTPUT_CONFIG)/src/components_ErrorModule_Automatic.o 
LIB_PATHS=$(pathcnv SN, //Mac/Home/Documents/ASCET/AscetTireSimUnitTest_CGen/lib\
  C:/ETAS)
LIB_PATHS_OPTIONS := $(foreach PATH,$(LIB_PATHS),-L$(PATH))
LIB_FILES_OPTIONS=-lESDL_Linear_Interpolation_x86 

# Google test: compile rules google test gtest-all.cc
$(GOOGLE_TEST_OUTDIR)/gtest-all.o: googleTestLib/gtest/gtest-all.cc $(GOOGLE_TEST_OUTDIR)
	g++ $(INC) $(CPPFLAGS) -o $@ $<

# Google test: compile rules google test entry component AllTests.cpp
$(OUTPUT_CONFIG)/tests/AllTests.o: tests/AllTests.cpp $(OUTPUT_CONFIG)/tests
	g++ $(INC) $(CPPFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/AscetTireSimUnitTest_Automatic.o: src/AscetTireSimUnitTest_Automatic.c src/AscetTireSimUnitTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_ModelTest_Automatic.o: src/components_ModelTest_Automatic.c src/components_ModelTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_ModelTest_distanceIncreasing_Automatic.o: src/components_ModelTest_distanceIncreasing_Automatic.c src/components_ModelTest_distanceIncreasing_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_ModelTest_predictDistance_Automatic.o: src/components_ModelTest_predictDistance_Automatic.c src/components_ModelTest_predictDistance_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_ModelTest_deltasConsistentForSameVelocity_Automatic.o: src/components_ModelTest_deltasConsistentForSameVelocity_Automatic.c src/components_ModelTest_deltasConsistentForSameVelocity_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_Test_SOS_state_Automatic.o: src/components_Test_SOS_state_Automatic.c src/components_Test_SOS_state_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_Automatic.o: src/components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_Automatic.c src/components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_Automatic.o: src/components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_Automatic.c src/components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_Test_SOS_state_checkAllStatesDeactiv_Automatic.o: src/components_Test_SOS_state_checkAllStatesDeactiv_Automatic.c src/components_Test_SOS_state_checkAllStatesDeactiv_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_RingBufferTest_Automatic.o: src/components_RingBufferTest_Automatic.c src/components_RingBufferTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_RingBufferTest_start_with_empty_buffer_Automatic.o: src/components_RingBufferTest_start_with_empty_buffer_Automatic.c src/components_RingBufferTest_start_with_empty_buffer_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_RingBufferTest_fill_buffer_decending_Automatic.o: src/components_RingBufferTest_fill_buffer_decending_Automatic.c src/components_RingBufferTest_fill_buffer_decending_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_RingBufferTest_read_last_element_Automatic.o: src/components_RingBufferTest_read_last_element_Automatic.c src/components_RingBufferTest_read_last_element_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_RandomGeneratorTest_Automatic.o: src/components_RandomGeneratorTest_Automatic.c src/components_RandomGeneratorTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_RandomGeneratorTest_testcalc_Automatic.o: src/components_RandomGeneratorTest_testcalc_Automatic.c src/components_RandomGeneratorTest_testcalc_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_RandomGeneratorTest_testcalc2_Automatic.o: src/components_RandomGeneratorTest_testcalc2_Automatic.c src/components_RandomGeneratorTest_testcalc2_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireMeanTest_Automatic.o: src/components_TireMeanTest_Automatic.c src/components_TireMeanTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireMeanTest_calcMeanAllValuesTheSame_Automatic.o: src/components_TireMeanTest_calcMeanAllValuesTheSame_Automatic.c src/components_TireMeanTest_calcMeanAllValuesTheSame_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireMeanTest_calcMean_Automatic.o: src/components_TireMeanTest_calcMean_Automatic.c src/components_TireMeanTest_calcMean_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireMeanTest_calcMeanNegativ_Automatic.o: src/components_TireMeanTest_calcMeanNegativ_Automatic.c src/components_TireMeanTest_calcMeanNegativ_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireMeanTest_calcMeanMixed_Automatic.o: src/components_TireMeanTest_calcMeanMixed_Automatic.c src/components_TireMeanTest_calcMeanMixed_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireDeviationTest_Automatic.o: src/components_TireDeviationTest_Automatic.c src/components_TireDeviationTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireDeviationTest_noDeviationWhileCalibration_Automatic.o: src/components_TireDeviationTest_noDeviationWhileCalibration_Automatic.c src/components_TireDeviationTest_noDeviationWhileCalibration_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireDeviationTest_highDeviationWhileCalibration_Automatic.o: src/components_TireDeviationTest_highDeviationWhileCalibration_Automatic.c src/components_TireDeviationTest_highDeviationWhileCalibration_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireDeviationTest_lowDeviationWhileCalibration_Automatic.o: src/components_TireDeviationTest_lowDeviationWhileCalibration_Automatic.c src/components_TireDeviationTest_lowDeviationWhileCalibration_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireDeviationTest_noDeviation_Automatic.o: src/components_TireDeviationTest_noDeviation_Automatic.c src/components_TireDeviationTest_noDeviation_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireDeviationTest_highDeviation_Automatic.o: src/components_TireDeviationTest_highDeviation_Automatic.c src/components_TireDeviationTest_highDeviation_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireDeviationTest_lowDeviation_Automatic.o: src/components_TireDeviationTest_lowDeviation_Automatic.c src/components_TireDeviationTest_lowDeviation_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_ErrorModuleTest_Automatic.o: src/components_ErrorModuleTest_Automatic.c src/components_ErrorModuleTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_ErrorModuleTest_deflation_Automatic.o: src/components_ErrorModuleTest_deflation_Automatic.c src/components_ErrorModuleTest_deflation_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_ErrorModuleTest_noDeflation_Automatic.o: src/components_ErrorModuleTest_noDeflation_Automatic.c src/components_ErrorModuleTest_noDeflation_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/assertLib_Assert_Impl.o: src/assertLib_Assert_Impl.c src/assertLib_Assert_Impl.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_Globals_Automatic.o: src/components_Globals_Automatic.c src/components_Globals_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_Model_Automatic.o: src/components_Model_Automatic.c src/components_Model_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_SOS_state_Automatic.o: src/components_SOS_state_Automatic.c src/components_SOS_state_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_RingBuffer_Automatic.o: src/components_RingBuffer_Automatic.c src/components_RingBuffer_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_RandomGenerator_Automatic.o: src/components_RandomGenerator_Automatic.c src/components_RandomGenerator_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireMean_Automatic.o: src/components_TireMean_Automatic.c src/components_TireMean_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_TireDeviation_Automatic.o: src/components_TireDeviation_Automatic.c src/components_TireDeviation_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_ErrorModule_Automatic.o: src/components_ErrorModule_Automatic.c src/components_ErrorModule_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<


all:: $(TEST_EXE)

clean::
	rmdir $(OUTPUT_CONFIG)

$(GOOGLE_TEST_OUTDIR):
	$(MKDIR_CMD) $@

$(OUTPUT_CONFIG)/src:
	$(MKDIR_CMD) $@

$(OUTPUT_CONFIG)/tests:
	$(MKDIR_CMD) $@

$(TEST_EXE): $(GOOGLE_TEST_OUTDIR) $(OUTPUT_CONFIG)/src $(OUTPUT_CONFIG)/tests $(MODEL_OBJECTS) $(GOOGLE_TEST_OBJECTS)
	g++ -o $@ -static $(MODEL_OBJECTS) $(GOOGLE_TEST_OBJECTS) $(LIB_PATHS_OPTIONS) $(LIB_FILES_OPTIONS)

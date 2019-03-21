# THIS IS A GENERATED FILE => DO NOT EDIT
# Objective: compile and link a unit test exectable
# Remark: contains hard dependencies to google test framework

OUTPUT_CONFIG=Debug
TEST_BASE_NAME=Test_SOS_state
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

MODEL_OBJECTS=$(OUTPUT_CONFIG)/src/AscetTireSimUnitTest_Automatic.o $(OUTPUT_CONFIG)/src/components_Test_SOS_state_Automatic.o $(OUTPUT_CONFIG)/src/components_Test_SOS_state_checkAllStates_Automatic.o $(OUTPUT_CONFIG)/src/components_Test_SOS_state_checkAllStatesActive2_Automatic.o $(OUTPUT_CONFIG)/src/components_Test_SOS_state_checkAllStatesDeactiv_Automatic.o $(OUTPUT_CONFIG)/src/assertLib_Assert_Impl.o $(OUTPUT_CONFIG)/src/components_SOS_state_Automatic.o 
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

$(OUTPUT_CONFIG)/src/components_Test_SOS_state_Automatic.o: src/components_Test_SOS_state_Automatic.c src/components_Test_SOS_state_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_Test_SOS_state_checkAllStates_Automatic.o: src/components_Test_SOS_state_checkAllStates_Automatic.c src/components_Test_SOS_state_checkAllStates_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_Test_SOS_state_checkAllStatesActive2_Automatic.o: src/components_Test_SOS_state_checkAllStatesActive2_Automatic.c src/components_Test_SOS_state_checkAllStatesActive2_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_Test_SOS_state_checkAllStatesDeactiv_Automatic.o: src/components_Test_SOS_state_checkAllStatesDeactiv_Automatic.c src/components_Test_SOS_state_checkAllStatesDeactiv_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/assertLib_Assert_Impl.o: src/assertLib_Assert_Impl.c src/assertLib_Assert_Impl.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_SOS_state_Automatic.o: src/components_SOS_state_Automatic.c src/components_SOS_state_Automatic.h $(OUTPUT_CONFIG)/src
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

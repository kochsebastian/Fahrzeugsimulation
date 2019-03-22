// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_Model_Automatic.h"
	#include "components_Globals_Automatic.h"
	#include "components_ModelTest_predictDistance_Automatic.h"
}

namespace {
	// test fixture class
	class components_ModelTest_predictDistance_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_ModelTest_predictDistance_Automatic_SubClass, components_ModelTest_predictDistance_Automatic_predictDistance) {
		components_ModelTest_predictDistance_RAM.myDT = 1.0F;
		components_ModelTest_predictDistance_RAM.vfr = 10.0F;
		components_ModelTest_predictDistance_RAM.vrr = 10.0F;
		components_ModelTest_predictDistance_RAM.vfl = 10.0F;
		components_ModelTest_predictDistance_RAM.vrl = 10.0F;
		components_Model_Automatic_calc(&(components_ModelTest_predictDistance.m), components_ModelTest_predictDistance_RAM.vfr, components_ModelTest_predictDistance_RAM.vrr, components_ModelTest_predictDistance_RAM.vfl, components_ModelTest_predictDistance_RAM.vrl, components_ModelTest_predictDistance_RAM.myDT);
	}

}
// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_Model_Automatic.h"
	#include "components_Globals_Automatic.h"
	#include "components_ModelTest_distanceIncreasing_Automatic.h"
}

namespace {
	// test fixture class
	class components_ModelTest_distanceIncreasing_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_ModelTest_distanceIncreasing_Automatic_SubClass, components_ModelTest_distanceIncreasing_Automatic_distanceIncreasing) {
		components_ModelTest_distanceIncreasing_RAM.myDT = 1.0F;
		components_ModelTest_distanceIncreasing_RAM.vfr = 10.0F;
		components_ModelTest_distanceIncreasing_RAM.vrr = 10.0F;
		components_ModelTest_distanceIncreasing_RAM.vfl = 10.0F;
		components_ModelTest_distanceIncreasing_RAM.vrl = 10.0F;
		components_Model_Automatic_calc(&(components_ModelTest_distanceIncreasing.m), components_ModelTest_distanceIncreasing_RAM.vfr, components_ModelTest_distanceIncreasing_RAM.vrr, components_ModelTest_distanceIncreasing_RAM.vfl, components_ModelTest_distanceIncreasing_RAM.vrl, components_ModelTest_distanceIncreasing_RAM.myDT);
		ASSERT_TRUE(components_Model_Automatic_getSfl(&(components_ModelTest_distanceIncreasing.m)) > 0.0F);
		ASSERT_TRUE(components_Model_Automatic_getSrl(&(components_ModelTest_distanceIncreasing.m)) > 0.0F);
		ASSERT_TRUE(components_Model_Automatic_getSfr(&(components_ModelTest_distanceIncreasing.m)) > 0.0F);
		ASSERT_TRUE(components_Model_Automatic_getSrr(&(components_ModelTest_distanceIncreasing.m)) > 0.0F);
	}

}
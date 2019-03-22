// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_RandomGenerator_Automatic.h"
	#include "components_RingBuffer_Automatic.h"
	#include "components_RandomGeneratorTest_testcalc_Automatic.h"
}

namespace {
	// test fixture class
	class components_RandomGeneratorTest_testcalc_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_RandomGeneratorTest_testcalc_Automatic_SubClass, components_RandomGeneratorTest_testcalc_Automatic_testcalc) {
		/* user defined local variables */
		float32 erg;
		sint32 mySeed;
		float32 noiselevel;
		float32 set_vel;

		set_vel = 100.0F;
		noiselevel = 5.0F;
		mySeed = 10;
		erg
			= components_RandomGenerator_Automatic_calc(&(components_RandomGeneratorTest_testcalc.rg), set_vel, noiselevel, mySeed);
		ASSERT_NEAR((float64)erg, 96.1425781, 0.01);
	}

}
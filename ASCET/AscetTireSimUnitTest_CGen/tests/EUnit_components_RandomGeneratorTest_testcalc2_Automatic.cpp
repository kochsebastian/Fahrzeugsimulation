// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_RandomGenerator_Automatic.h"
	#include "components_RingBuffer_Automatic.h"
	#include "components_RandomGeneratorTest_testcalc2_Automatic.h"
}

namespace {
	// test fixture class
	class components_RandomGeneratorTest_testcalc2_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_RandomGeneratorTest_testcalc2_Automatic_SubClass, components_RandomGeneratorTest_testcalc2_Automatic_testcalc2) {
		/* user defined local variables */
		float32 act;
		float32 erg;
		uint8 i;
		uint16 j;
		sint32 mySeed;
		float32 noiselevel;
		float32 set_vel;

		set_vel = 100.0F;
		noiselevel = 5.0F;
		mySeed = 10;
		for (i = 0U;true;i++)
		{
			erg
				= components_RandomGenerator_Automatic_calc(&(components_RandomGeneratorTest_testcalc2.rg), set_vel, noiselevel, mySeed);
			components_RingBuffer_Automatic_put(&(components_RandomGeneratorTest_testcalc2.rb), erg);
			for (j = 1U;true;j++)
			{
				act
					= components_RingBuffer_Automatic_getIndex(&(components_RandomGeneratorTest_testcalc2.rb), 0);
				ASSERT_NE((float64)act, (float64)components_RingBuffer_Automatic_getIndex(&(components_RandomGeneratorTest_testcalc2.rb), (sint32)j));
				if (j == 999U)
				{
					break;
				} /* end if */
			} /* end for */
			if (i == 99U)
			{
				break;
			} /* end if */
		} /* end for */
	}

}
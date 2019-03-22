// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_Model_Automatic.h"
	#include "components_Globals_Automatic.h"
	#include "components_ModelTest_deltasConsistentForSameVelocity_Automatic.h"
}

namespace {
	// test fixture class
	class components_ModelTest_deltasConsistentForSameVelocity_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_ModelTest_deltasConsistentForSameVelocity_Automatic_SubClass, components_ModelTest_deltasConsistentForSameVelocity_Automatic_deltasConsistentForSameVelocity) {
		/* user defined local variables */
		float32 buffer_time;
		uint16 i;
		float32 s_return;

		s_return = 0.0F;
		buffer_time = 10.0F;
		components_ModelTest_deltasConsistentForSameVelocity_RAM.myDT = 0.01F;
		components_ModelTest_deltasConsistentForSameVelocity_RAM.vfr = 10.0F;
		components_ModelTest_deltasConsistentForSameVelocity_RAM.vrr = 10.0F;
		components_ModelTest_deltasConsistentForSameVelocity_RAM.vfl = 10.0F;
		components_ModelTest_deltasConsistentForSameVelocity_RAM.vrl = 10.0F;
		for (i = 1U;true;i++)
		{
			components_Model_Automatic_calc(&(components_ModelTest_deltasConsistentForSameVelocity.m), components_ModelTest_deltasConsistentForSameVelocity_RAM.vfr, components_ModelTest_deltasConsistentForSameVelocity_RAM.vrr, components_ModelTest_deltasConsistentForSameVelocity_RAM.vfl, components_ModelTest_deltasConsistentForSameVelocity_RAM.vrl, components_ModelTest_deltasConsistentForSameVelocity_RAM.myDT);
			if (i == 50000U)
			{
				break;
			} /* end if */
		} /* end for */
		ASSERT_NEAR((float64)components_Model_Automatic_getDiff_sfr(&(components_ModelTest_deltasConsistentForSameVelocity.m)), (float64)components_ModelTest_deltasConsistentForSameVelocity_RAM.vfr * buffer_time, 0.1);
		ASSERT_NEAR((float64)components_Model_Automatic_getDiff_sfl(&(components_ModelTest_deltasConsistentForSameVelocity.m)), (float64)components_ModelTest_deltasConsistentForSameVelocity_RAM.vfl * buffer_time, 0.1);
		ASSERT_NEAR((float64)components_Model_Automatic_getDiff_srl(&(components_ModelTest_deltasConsistentForSameVelocity.m)), (float64)components_ModelTest_deltasConsistentForSameVelocity_RAM.vrl * buffer_time, 0.1);
		ASSERT_NEAR((float64)components_Model_Automatic_getDiff_srr(&(components_ModelTest_deltasConsistentForSameVelocity.m)), (float64)components_ModelTest_deltasConsistentForSameVelocity_RAM.vrr * buffer_time, 0.1);
	}

}
// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_SOS_state_Automatic.h"
	#include "components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_Automatic.h"
}

namespace {
	// test fixture class
	class components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_Automatic_SubClass, components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_Automatic_checkAllStatelocationsAndStatesActiveContinues) {
		components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.myDT = 0.1F;
		components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.aktiv = true;
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 9)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 1.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 1);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 18)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 2.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 0);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 27)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 1.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 1);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 36)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 2.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 0);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 45)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 1.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 1);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 54)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 2.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 0);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 71)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 3.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 1);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 88)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 4.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 0);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 105)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 3.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 1);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 122)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 4.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 0);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 139)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 3.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 1);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 156)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 4.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 0);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 165)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 1.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 1);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 174)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 2.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 0);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 183)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 1.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 1);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 192)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 2.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 0);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 201)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 1.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 1);
		while (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter < 210)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues.sos));
			components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter
				= ((components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.statelocation, 2.0, 0.1);
		ASSERT_TRUE(components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.sos.status == 0);
		components_Test_SOS_state_checkAllStatelocationsAndStatesActiveContinues_RAM.counter = 0;
	}

}
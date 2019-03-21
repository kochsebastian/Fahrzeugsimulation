// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_SOS_state_Automatic.h"
	#include "components_Test_SOS_state_checkAllStatesDeactiv_Automatic.h"
}

namespace {
	// test fixture class
	class components_Test_SOS_state_checkAllStatesDeactiv_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_Test_SOS_state_checkAllStatesDeactiv_Automatic_SubClass, components_Test_SOS_state_checkAllStatesDeactiv_Automatic_checkAllStatesDeactiv) {
		components_Test_SOS_state_checkAllStatesDeactiv_RAM.counter = 0;
		components_Test_SOS_state_checkAllStatesDeactiv_RAM.sos.myDT = 0.1F;
		components_Test_SOS_state_checkAllStatesDeactiv_RAM.sos.aktiv = false;
		while (components_Test_SOS_state_checkAllStatesDeactiv_RAM.counter < 30)
		{
			components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatesDeactiv.sos));
			components_Test_SOS_state_checkAllStatesDeactiv_RAM.counter
				= ((components_Test_SOS_state_checkAllStatesDeactiv_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatesDeactiv_RAM.counter + 1) : 2147483647L);
		} /* end while */
		ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatesDeactiv_RAM.sos.statelocation, 0.0, 0.1);
	}

}
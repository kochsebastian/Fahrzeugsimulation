// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_ErrorModule_Automatic.h"
	#include "components_ErrorModuleTest_noDeflation_Automatic.h"
}

namespace {
	// test fixture class
	class components_ErrorModuleTest_noDeflation_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_ErrorModuleTest_noDeflation_Automatic_SubClass, components_ErrorModuleTest_noDeflation_Automatic_noDeflation) {
		/* user defined local variables */
		float32 error;
		float32 same_v;
		float32 v;

		v = 10.0F;
		error = 0.5F;
		same_v = components_ErrorModule_Automatic_calc(false, v, error);
		ASSERT_NEAR((float64)same_v, (float64)v, 0.1);
	}

}
// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_ErrorModule_Automatic.h"
	#include "components_ErrorModuleTest_deflation_Automatic.h"
}

namespace {
	// test fixture class
	class components_ErrorModuleTest_deflation_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_ErrorModuleTest_deflation_Automatic_SubClass, components_ErrorModuleTest_deflation_Automatic_deflation) {
		/* user defined local variables */
		float32 deflated_v;
		float32 error;
		float32 v;

		v = 10.0F;
		error = 0.5F;
		deflated_v = components_ErrorModule_Automatic_calc(true, v, error);
		ASSERT_NEAR((float64)deflated_v, v * (1.0 - (error * 0.01)), 0.1);
	}

}
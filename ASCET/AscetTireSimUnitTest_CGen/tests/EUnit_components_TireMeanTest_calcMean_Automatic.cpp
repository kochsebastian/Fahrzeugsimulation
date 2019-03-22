// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_TireMean_Automatic.h"
	#include "components_TireMeanTest_calcMean_Automatic.h"
}

namespace {
	// test fixture class
	class components_TireMeanTest_calcMean_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_TireMeanTest_calcMean_Automatic_SubClass, components_TireMeanTest_calcMean_Automatic_calcMean) {
		/* user defined local variables */
		float32 mean;
		float32 v1;
		float32 v2;
		float32 v3;
		float32 v4;

		v1 = 50.0F;
		v2 = 15.0F;
		v3 = 75.0F;
		v4 = 100.5F;
		mean = components_TireMean_Automatic_calc(v1, v2, v3, v4);
		ASSERT_NEAR((float64)mean, 60.13, 0.1);
	}

}
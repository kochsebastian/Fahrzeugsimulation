// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_TireMean_Automatic.h"
	#include "components_TireMeanTest_calcMeanMixed_Automatic.h"
}

namespace {
	// test fixture class
	class components_TireMeanTest_calcMeanMixed_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_TireMeanTest_calcMeanMixed_Automatic_SubClass, components_TireMeanTest_calcMeanMixed_Automatic_calcMeanMixed) {
		/* user defined local variables */
		float32 mean;
		float32 v1;
		float32 v2;
		float32 v3;
		float32 v4;

		v1 = -50.0F;
		v2 = -15.5F;
		v3 = 50.0F;
		v4 = 15.5F;
		mean = components_TireMean_Automatic_calc(v1, v2, v3, v4);
		ASSERT_NEAR((float64)mean, 0.0, 0.1);
	}

}
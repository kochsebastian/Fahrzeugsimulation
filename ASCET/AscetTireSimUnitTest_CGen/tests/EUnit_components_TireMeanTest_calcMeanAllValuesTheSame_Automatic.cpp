// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_TireMean_Automatic.h"
	#include "components_TireMeanTest_calcMeanAllValuesTheSame_Automatic.h"
}

namespace {
	// test fixture class
	class components_TireMeanTest_calcMeanAllValuesTheSame_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_TireMeanTest_calcMeanAllValuesTheSame_Automatic_SubClass, components_TireMeanTest_calcMeanAllValuesTheSame_Automatic_calcMeanAllValuesTheSame) {
		/* user defined local variables */
		float32 mean;
		float32 v1;

		v1 = 50.0F;
		mean = components_TireMean_Automatic_calc(v1, v1, v1, v1);
		ASSERT_NEAR((float64)mean, (float64)v1, 0.1);
	}

}
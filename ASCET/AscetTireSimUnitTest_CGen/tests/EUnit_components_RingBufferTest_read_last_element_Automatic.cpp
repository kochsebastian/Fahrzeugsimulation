// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_RingBuffer_Automatic.h"
	#include "components_RingBufferTest_read_last_element_Automatic.h"
}

namespace {
	// test fixture class
	class components_RingBufferTest_read_last_element_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_RingBufferTest_read_last_element_Automatic_SubClass, components_RingBufferTest_read_last_element_Automatic_read_last_element) {
		/* user defined local variables */
		float32 fill_element;
		uint16 i;

		fill_element = 0.0F;
		for (i = 0U;true;i++)
		{
			components_RingBuffer_Automatic_put(&(components_RingBufferTest_read_last_element.rb), fill_element);
			fill_element = fill_element + 1.0F;
			if (i == 999U)
			{
				break;
			} /* end if */
		} /* end for */
		ASSERT_NEAR((float64)components_RingBuffer_Automatic_getIndex(&(components_RingBufferTest_read_last_element.rb), 999), (float64)0.0F, 0.01);
	}

}
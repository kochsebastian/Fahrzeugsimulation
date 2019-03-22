// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_RingBuffer_Automatic.h"
	#include "components_RingBufferTest_fill_buffer_decending_Automatic.h"
}

namespace {
	// test fixture class
	class components_RingBufferTest_fill_buffer_decending_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_RingBufferTest_fill_buffer_decending_Automatic_SubClass, components_RingBufferTest_fill_buffer_decending_Automatic_fill_buffer_decending) {
		/* user defined local variables */
		sint32 buffer_maxIndex;
		float32 fill_element;
		uint16 i;
		uint16 n;
		/* temp. variables */
		float32 _t1real32;

		fill_element = 0.0F;
		buffer_maxIndex = 999;
		for (i = 0U;true;i++)
		{
			components_RingBuffer_Automatic_put(&(components_RingBufferTest_fill_buffer_decending.rb), fill_element);
			fill_element = fill_element + 1.0F;
			if (i == 999U)
			{
				break;
			} /* end if */
		} /* end for */
		for (n = 0U;true;n++)
		{
			_t1real32 = (float32)buffer_maxIndex;
			ASSERT_NEAR((float64)components_RingBuffer_Automatic_getIndex(&(components_RingBufferTest_fill_buffer_decending.rb), (sint32)n), (float64)_t1real32, 0.01);
			buffer_maxIndex
				= ((buffer_maxIndex > -2147483647) ? (buffer_maxIndex - 1) : (sint32)SINT32_MIN);
			if (n == 999U)
			{
				break;
			} /* end if */
		} /* end for */
	}

}
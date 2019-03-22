// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_RingBuffer_Automatic.h"
	#include "components_RingBufferTest_start_with_empty_buffer_Automatic.h"
}

namespace {
	// test fixture class
	class components_RingBufferTest_start_with_empty_buffer_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_RingBufferTest_start_with_empty_buffer_Automatic_SubClass, components_RingBufferTest_start_with_empty_buffer_Automatic_start_with_empty_buffer) {
		/* user defined local variables */
		uint16 i;

		for (i = 0U;true;i++)
		{
			ASSERT_NEAR((float64)components_RingBuffer_Automatic_getIndex(&(components_RingBufferTest_start_with_empty_buffer.rb), (sint32)i), 0.0, 0.01);
			if (i == 999U)
			{
				break;
			} /* end if */
		} /* end for */
	}

}
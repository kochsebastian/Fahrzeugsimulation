package components;

import assertLib.Assert;

import components.Globals;
import components.Model;



static class RingBufferTest {
	RingBuffer rb;

	
	
	@Test
	public void start_with_empty_buffer(){
		for(i in 0 .. 999)
		{
			Assert.assertNear(rb.getIndex(i),0.0,0.01);
		}
		
	}
	@Test
	public void fill_buffer_decending(){
		real fill_element = 0.0;
		integer buffer_maxIndex = 999;
		for(i in 0 .. 999)
		{
			rb.put(fill_element);
			fill_element = fill_element + 1.0;
		}
		for(n in 0 .. 999)
		{
			Assert.assertNear(rb.getIndex(n),real(buffer_maxIndex),0.01);
			buffer_maxIndex = buffer_maxIndex - 1;
		}
	}
	
	@Test
	public void read_last_element(){
		real fill_element = 0.0;
	
		for(i in 0 .. 999)
		{
			rb.put(fill_element);
			fill_element = fill_element + 1.0;
		}
		
		Assert.assertNear(rb.getIndex(999),real(0),0.01);
			
		
	}
}
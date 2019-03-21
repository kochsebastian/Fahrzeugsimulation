package components;

import assertLib.Assert;

import components.Globals;
import components.Model;



static class RingBufferTest {
	RingBuffer rb;
	
	
	@Test
	public void start_with_empty_buffer(){
		for(i in 0 .. 9999)
		{
			Assert.assertNear(rb.getIndex(i),0.0,0.01);
		}
		
	}
	@Test
	public void fill_buffer_decending(){
		real fill_element = 0.0;
		integer buffer_maxIndex = 9999;
		for(i in 0 .. 9999)
		{
			rb.put(fill_element);
			fill_element = fill_element + 1.0;
		}
		for(n in 0 .. 9999)
		{
			Assert.assertNear(rb.getIndex(n),real(buffer_maxIndex),0.01);
			buffer_maxIndex = buffer_maxIndex - 1;
		}
	}
	
	@Test
	public void read_last_element(){
		real fill_element = 0.0;
	
		for(i in 0 .. 9999)
		{
			rb.put(fill_element);
			fill_element = fill_element + 1.0;
		}
		
		Assert.assertNear(rb.getIndex(9999),real(0),0.01);
			
		
	}
}
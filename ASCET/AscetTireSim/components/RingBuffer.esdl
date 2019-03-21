package components;

class RingBuffer{
	
	s_array buffer[1000];	
	real c;
	real swap;


	public void put(real element){
		swap = element;
		for(i in 0 .. 999){
			c = buffer[i];
			buffer[i] = swap;
			swap = c;
		}
	}
	
	public real getLast(){
		return buffer[999];
	}
	
	public real getIndex(integer i)
	{
		return buffer[i];
	}
	

}
package components;

class RingBuffer{
	
	s_array buffer[100];	
	real c;
	real swap;

	public void initBuffer(){
		for(n in 0 .. 99)
		{
			buffer[n] = 0.0;
		}
	}
	public void put(real element){
		swap = element;
		for(i in 0 .. 99){
			c = buffer[i];
			buffer[i] = swap;
			swap = c;
		}
	}
	
	public real getLast(){
		return buffer[99];
	}
	

}
package components;

type s_array is array [] of real;
class Model {
	real sfl;
	real sfr;
	real srl;
	real srr;
	RingBuffer buffer_sfl;
	RingBuffer buffer_sfr;
	RingBuffer buffer_srr;
	RingBuffer buffer_srl;
	real sfl_before;
	RingBuffer RingBuffer_instance;
	real sfr_before;
	real srl_before;
	real srr_before;
	real delta_sfl;
	real delta_sfr;
	real delta_srl;
	real delta_srr;

	@generated("blockdiagram")
	public void calc(real in vfr, real in vrr, real in vfl, real in vrl, real in my_dT) {
		sfl = (sfl + (vfl * my_dT)); // Main/calc 1
		sfr = (sfr + (vfr * my_dT)); // Main/calc 2
		srl = (srl + (vrl * my_dT)); // Main/calc 3
		srr = (srr + (vrr * my_dT)); // Main/calc 4
		RingBuffer_instance.put(sfl); // Main/calc 5
		RingBuffer_instance.put(sfr); // Main/calc 6
		RingBuffer_instance.put(srl); // Main/calc 7
		RingBuffer_instance.put(srr); // Main/calc 8
		sfl_before = RingBuffer_instance.getLast(); // Main/calc 9
		sfr_before = RingBuffer_instance.getLast(); // Main/calc 10
		srl_before = RingBuffer_instance.getLast(); // Main/calc 11
		srr_before = RingBuffer_instance.getLast(); // Main/calc 12
		delta_sfl = (sfl - sfl_before); // Main/calc 13
		delta_sfr = (sfr - sfr_before); // Main/calc 14
		delta_srl = (srl - srl_before); // Main/calc 15
		delta_srr = (srr - srr_before); // Main/calc 16
	}

	@generated("blockdiagram")
	public real getSfl() {
		return sfl; // Main/getSfl 1
	}

	@generated("blockdiagram")
	public real getSrl() {
		return srl; // Main/getSrl 1
	}

	@generated("blockdiagram")
	public real getSrr() {
		return srr; // Main/getSrr 1
	}

	@generated("blockdiagram")
	public real getSfr() {
		return sfr; // Main/getSfr 1
	}
	
	public real getDiff_sfl(){
		return delta_sfl;
	}
	public real getDiff_sfr(){
		return delta_sfr;
	}
	public real getDiff_srr(){
		return delta_srr;
	}
	public real getDiff_srl(){
		return delta_srl;
	}
}
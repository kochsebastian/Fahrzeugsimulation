package components;

type s_array is array [] of real;
class Model {
	real sfl;
	real sfr;
	real srl;
	real srr;
	real sfl_before;
	real sfr_before;
	real srl_before;
	real srr_before;
	real delta_sfl;
	real delta_sfr;
	real delta_srl;
	real delta_srr;
	RingBuffer RingBuffer_instance;
	RingBuffer RingBuffer_instance_2;
	RingBuffer RingBuffer_instance_3;
	RingBuffer RingBuffer_instance_4;

	@generated("blockdiagram")
	public void calc(real in vfr, real in vrr, real in vfl, real in vrl, real in my_dT) {
		sfl = (sfl + (vfl * my_dT)); // Main/calc 1
		sfr = (sfr + (vfr * my_dT)); // Main/calc 2
		srl = (srl + (vrl * my_dT)); // Main/calc 3
		srr = (srr + (vrr * my_dT)); // Main/calc 4
		sfl_before = RingBuffer_instance.getLast(); // Main/calc 5
		sfr_before = RingBuffer_instance_2.getLast(); // Main/calc 6
		srl_before = RingBuffer_instance_3.getLast(); // Main/calc 7
		srr_before = RingBuffer_instance_4.getLast(); // Main/calc 8
		delta_sfl = (sfl - sfl_before); // Main/calc 9
		delta_sfr = (sfr - sfr_before); // Main/calc 10
		delta_srl = (srl - srl_before); // Main/calc 11
		delta_srr = (srr - srr_before); // Main/calc 12
		RingBuffer_instance.put(sfl); // Main/calc 13
		RingBuffer_instance_2.put(sfr); // Main/calc 14
		RingBuffer_instance_3.put(srl); // Main/calc 15
		RingBuffer_instance_4.put(srr); // Main/calc 16
	}

	public real getDiff_sfl() {
		return delta_sfl;
	}

	public real getDiff_sfr() {
		return delta_sfr;
	}

	public real getDiff_srr() {
		return delta_srr;
	}

	public real getDiff_srl() {
		return delta_srl;
	}

	public real getSfr() {
		return sfr;
	}

	public real getSfl() {
		return sfl;
	}

	public real getSrr() {
		return srr;
	}

	public real getSrl() {
		return srl;
	}
}
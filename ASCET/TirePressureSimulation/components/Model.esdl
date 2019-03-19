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

	@generated("blockdiagram")
	public void calc(real in vfr, real in vrr, real in vfl, real in vrl, real in my_dT) {
		sfl = (sfl + (vfl * my_dT)); // Main/calc 1
		sfr = (sfr + (vfr * my_dT)); // Main/calc 2
		srl = (srl + (vrl * my_dT)); // Main/calc 3
		srr = (srr + (vrr * my_dT)); // Main/calc 4
		
		buffer_sfl.put(sfl);
		buffer_sfr.put(sfr);
		buffer_srl.put(srl);
		buffer_srr.put(srr);
		
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
	
	
}
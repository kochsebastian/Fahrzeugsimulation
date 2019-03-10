package components;

class Model {
	real sfl;
	real sfr;
	real srl;
	real srr;

	@generated("blockdiagram")
	public void calc(real in vfr, real in vrr, real in vfl, real in vrl, real in my_dT) {
		sfl = (sfl + (vfl * my_dT)); // Main/calc 1
		sfr = (sfr + (vfr * my_dT)); // Main/calc 2
		srl = (srl + (vrl * my_dT)); // Main/calc 3
		srr = (srr + (vrr * my_dT)); // Main/calc 4
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
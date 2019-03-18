package components;

type s_array is array [] of real;
class Model {
	real sfl;
	real sfr;
	real srl;
	real srr;
	s_array mem_dist[100];
	integer read_index = 0;
	real mem_sfl;
	integer write_index = 0;

	@generated("blockdiagram")
	public void calc(real in vfr, real in vrr, real in vfl, real in vrl, real in my_dT) {
		sfl = (sfl + (vfl * my_dT)); // Main/calc 1
		sfr = (sfr + (vfr * my_dT)); // Main/calc 2
		srl = (srl + (vrl * my_dT)); // Main/calc 3
		srr = (srr + (vrr * my_dT)); // Main/calc 4
		mem_dist[write_index] = sfl; // Main/calc 6
		write_index = write_index + 1;
		if(write_index >= 99){
			write_index = 0;
		}
		
		mem_sfl = mem_dist[read_index]; // Main/calc 5
		
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
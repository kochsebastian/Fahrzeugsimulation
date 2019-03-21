package components;

class TireDeviation {
	real v;
	real mean;
	real diff;
	real limit;

	@generated("blockdiagram")
	public boolean calc(real in v_single, real in v_mean, real in limit) {
		v = v_single; // Main/calc 1
		mean = v_mean; // Main/calc 2
		this.limit = limit; // Main/calc 3
		diff = ((abs((v - mean)) / mean) * 100.0); // Main/calc 4
		return(diff > this.limit); // Main/calc 5
	}
}
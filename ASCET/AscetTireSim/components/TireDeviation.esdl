package components;

class TireDeviation {
	real v;
	real mean;
	real diff;
	real limit;

	@generated("blockdiagram")
	public boolean calc(real in v_single, real in v_mean, real in limit, boolean in noFailure) {
		return((((abs((v_single - v_mean)) / v_mean) * 100.0) > limit) && (!noFailure)); // Main/calc 1
	}
}
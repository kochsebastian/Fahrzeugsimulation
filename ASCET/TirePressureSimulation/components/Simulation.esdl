package components;

static class Simulation {
	characteristic real vfr = 0.0;
	characteristic real vfl = 0.0;
	characteristic real vrr = 0.0;
	characteristic real vrl = 0.0;
	real sfl;
	real srl;
	real srr;
	real sfr;
	real rand;
	RandomGenerator RandomGenerator_instance_2;
	characteristic boolean status_tire = false;
	real diff_sfl;
	real diff_sfr;
	real diff_srr;
	real diff_srl;
	Model Model_instance;

	@generated("blockdiagram")
	@thread
	public void calc() {
		rand = RandomGenerator_instance_2.calc(10.0); // Main/calc 1
		sfl = Model_instance.getSfl(); // Main/calc 2
		srl = Model_instance.getSrl(); // Main/calc 3
		srr = Model_instance.getSrr(); // Main/calc 4
		sfr = Model_instance.getSfr(); // Main/calc 5
		diff_sfl = Model_instance.getDiff_sfl(); // Main/calc 6
		diff_sfr = Model_instance.getDiff_sfr(); // Main/calc 7
		diff_srr = Model_instance.getDiff_srr(); // Main/calc 8
		diff_srl = Model_instance.getDiff_srl(); // Main/calc 9
		Model_instance.calc(vfr, vrr, vfl, vrl, Globals.d_T); // Main/calc 10
	}
}
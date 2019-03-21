package components;
import interfaces.interfaces;

static class Simulation
writes interfaces.failure_detected, interfaces.delta_sfl, interfaces.delta_sfr, interfaces.delta_srr, interfaces.delta_srl
reads interfaces.vfr, interfaces.vfl, interfaces.vrr, interfaces.vrl {
	real sfl;
	real srl;
	real srr;
	real sfr;
	real rand;
	characteristic boolean status_tire = false;
	real diff_sfl;
	real diff_sfr;
	real diff_srr;
	real diff_srl;
	Model Model_instance;
	TireMean TireMean_instance;
	real mean;
	TireDeviation TireDeviation_instance;
	boolean fl_failure;
	boolean fr_failure;
	boolean rl_failure;
	boolean rr_failure;
	RandomGenerator RandomGenerator_instance;
	characteristic real base_v = 0.0;
	characteristic real base_noiselevel = 0.0;
	real vfr;
	real vrr;
	real vfl;
	real vrl;

	@generated("blockdiagram")
	@thread
	public void calc() {
		vfr = interfaces.vfr; // Main/calc 1
		vrr = interfaces.vrr; // Main/calc 2
		vfl = interfaces.vfl; // Main/calc 3
		vrl = interfaces.vrl; // Main/calc 4
		Model_instance.calc(vfr, vrr, vfl, vrl, Globals.d_T); // Main/calc 5
		srl = Model_instance.getSrl(); // Main/calc 6
		sfl = Model_instance.getSfl(); // Main/calc 7
		srr = Model_instance.getSrr(); // Main/calc 8
		sfr = Model_instance.getSfr(); // Main/calc 9
		diff_sfl = Model_instance.getDiff_sfl(); // Main/calc 10
		diff_sfr = Model_instance.getDiff_sfr(); // Main/calc 11
		diff_srr = Model_instance.getDiff_srr(); // Main/calc 12
		diff_srl = Model_instance.getDiff_srl(); // Main/calc 13
		interfaces.delta_sfl = diff_sfl; // Main/calc 14
		interfaces.delta_sfr = diff_sfr; // Main/calc 15
		interfaces.delta_srr = diff_srr; // Main/calc 16
		interfaces.delta_srl = diff_srl; // Main/calc 17
	}
}
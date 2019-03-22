package runnableModels;
import interfaces.interfaces;
import components.Globals;
import components.TireMean;
import components.TireDeviation;

static class TirePressureMonitoring
writes interfaces.failure_detected, interfaces.mean
reads interfaces.delta_sfl, interfaces.delta_sfr, interfaces.delta_srr, interfaces.delta_srl, interfaces.srl, interfaces.noFailure {
	boolean fr_failure;
	real diff_sfr;
	real diff_sfl;
	real diff_srl;
	boolean rr_failure;
	boolean rl_failure;
	real diff_srr;
	boolean fl_failure;
	TireMean TireMean_instance;
	real mean;
	boolean test;
	TireDeviation TireDeviation_instance;
	TireDeviation TireDeviation_instance_2;
	TireDeviation TireDeviation_instance_3;
	TireDeviation TireDeviation_instance_4;

	@generated("blockdiagram")
	@thread
	public void calc() {
		mean = TireMean_instance.calc(interfaces.delta_sfl, interfaces.delta_sfr, interfaces.delta_srr, interfaces.delta_srl); // Main/calc 1
		interfaces.mean = mean; // Main/calc 2
		fl_failure = TireDeviation_instance.calc(interfaces.delta_sfl, mean, Globals.limit_FL, interfaces.noFailure); // Main/calc 3
		fr_failure = TireDeviation_instance_2.calc(interfaces.delta_sfr, mean, Globals.limit_RL, interfaces.noFailure); // Main/calc 4
		rl_failure = TireDeviation_instance_3.calc(interfaces.delta_srl, mean, Globals.limit_RL, interfaces.noFailure); // Main/calc 5
		rr_failure = TireDeviation_instance_4.calc(interfaces.delta_srr, mean, Globals.limit_RR, interfaces.noFailure); // Main/calc 6
		interfaces.failure_detected = (((fl_failure || fr_failure) || rl_failure) || rr_failure); // Main/calc 7
	}
}
package components;
import interfaces.interfaces;

static class TirePressureMonitoring
writes interfaces.failure_detected
reads interfaces.delta_sfl, interfaces.delta_sfr, interfaces.delta_srr, interfaces.delta_srl {
	boolean fr_failure;
	real diff_sfr;
	real diff_sfl;
	real diff_srl;
	boolean rr_failure;
	TireDeviation TireDeviation_instance;
	boolean rl_failure;
	real diff_srr;
	boolean fl_failure;
	TireDeviation TireDeviation_instance_2;
	TireDeviation TireDeviation_instance_3;
	TireDeviation TireDeviation_instance_4;
	TireMean TireMean_instance;
	TireMean TireMean_instance_2;
	TireMean TireMean_instance_3;
	TireMean TireMean_instance_4;
	real mean_exRl;
	real mean_exFl;
	real mean_exFr;
	real mean_exRr;

	@generated("blockdiagram")
	@thread
	public void calc() {
		mean_exRl = TireMean_instance.calc(interfaces.delta_sfl, interfaces.delta_sfr, interfaces.delta_srr); // Main/calc 1
		mean_exFr = TireMean_instance_3.calc(interfaces.delta_sfl, interfaces.delta_srr, interfaces.delta_srl); // Main/calc 2
		mean_exRr = TireMean_instance_4.calc(interfaces.delta_sfl, interfaces.delta_sfr, interfaces.delta_srl); // Main/calc 3
		mean_exFl = TireMean_instance_2.calc(interfaces.delta_srl, interfaces.delta_sfr, interfaces.delta_srr); // Main/calc 4
		fl_failure = TireDeviation_instance.calc(interfaces.delta_sfl, mean_exFl, Globals.limit); // Main/calc 5
		fr_failure = TireDeviation_instance_2.calc(interfaces.delta_sfr, mean_exRl, Globals.limit); // Main/calc 6
		rl_failure = TireDeviation_instance_3.calc(interfaces.delta_srl, mean_exRl, Globals.limit); // Main/calc 7
		rr_failure = TireDeviation_instance_4.calc(interfaces.delta_srr, mean_exRr, Globals.limit); // Main/calc 8
		interfaces.failure_detected = (((fl_failure || fr_failure) || rl_failure) || rr_failure); // Main/calc 9
	}
}
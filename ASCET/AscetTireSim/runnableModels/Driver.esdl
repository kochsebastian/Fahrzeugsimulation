package runnableModels;
import interfaces.interfaces;
import components.RandomGenerator;
import components.ErrorModule;

static class Driver
writes interfaces.vfr, interfaces.vfl, interfaces.vrl, interfaces.vrr
reads interfaces.mean {
	characteristic real base_v = 0.0;
	characteristic real base_noiselevel = 0.0;
	real rand;
	RandomGenerator RandomGenerator_instance;
	RandomGenerator RandomGenerator_instance_2;
	RandomGenerator RandomGenerator_instance_3;
	RandomGenerator RandomGenerator_instance_4;
	characteristic boolean deflate_fr = false;
	characteristic boolean deflate_fl = false;
	characteristic boolean deflate_vrl = false;
	characteristic boolean deflate_vrr = false;
	ErrorModule ErrorModule_instance;
	characteristic real error_FR = 0.0;
	ErrorModule ErrorModule_instance_2;
	characteristic real error_FL = 0.0;
	ErrorModule ErrorModule_instance_3;
	characteristic real error_RL = 0.0;
	ErrorModule ErrorModule_instance_4;
	characteristic real error_RR = 0.0;

	@generated("blockdiagram")
	@thread
	public void calc() {
		interfaces.vfr = ErrorModule_instance.calc(deflate_fr, RandomGenerator_instance.calc(base_v, base_noiselevel, 123), error_FR); // Main/calc 1
		interfaces.vfl = ErrorModule_instance_2.calc(deflate_fl, RandomGenerator_instance_2.calc(base_v, base_noiselevel, 456), error_FL); // Main/calc 2
		interfaces.vrl = ErrorModule_instance_3.calc(deflate_vrl, RandomGenerator_instance_3.calc(base_v, base_noiselevel, 789), error_RL); // Main/calc 3
		interfaces.vrr = ErrorModule_instance_4.calc(deflate_vrr, RandomGenerator_instance_4.calc(base_v, base_noiselevel, 901), error_RR); // Main/calc 4
	}
}
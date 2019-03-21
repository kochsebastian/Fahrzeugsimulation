package components;
import interfaces.interfaces;

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
	CalcDiviation CalcDiviation_instance;
	CalcDiviation CalcDiviation_instance_2;
	CalcDiviation CalcDiviation_instance_3;
	CalcDiviation CalcDiviation_instance_4;

	@generated("blockdiagram")
	@thread
	public void calc() {
		interfaces.vfr = CalcDiviation_instance.calc(deflate_fr, RandomGenerator_instance.calc(base_v, base_noiselevel, 123)); // Main/calc 1
		interfaces.vfl = CalcDiviation_instance_2.calc(deflate_fl, RandomGenerator_instance_2.calc(base_v, base_noiselevel, 456)); // Main/calc 2
		interfaces.vrl = CalcDiviation_instance_3.calc(deflate_vrl, RandomGenerator_instance_3.calc(base_v, base_noiselevel, 789)); // Main/calc 3
		interfaces.vrr = CalcDiviation_instance_4.calc(deflate_vrr, RandomGenerator_instance_4.calc(base_v, base_noiselevel, 901)); // Main/calc 4
	}
}
package components;

static class Simulation {
	Model Model_instance;
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
	SOS SOS_instance;
	characteristic boolean status_tire = false;


	@generated("blockdiagram")
	@thread
	public void calc() {
		Model_instance.calc(vfr, vrr, vfl, vrl, Globals.d_T); // Main/calc 1
		sfl = Model_instance.getSfl(); // Main/calc 2
		srl = Model_instance.getSrl(); // Main/calc 3
		srr = Model_instance.getSrr(); // Main/calc 4
		sfr = Model_instance.getSfr(); // Main/calc 5
		rand = RandomGenerator_instance_2.calc(10.0); // Main/calc 6
		if (status_tire) {
			
				SOS_instance.calc(true, Globals.d_T, 0.8); // Main/calc 7/if-then 1
		
				
			
			
			
		} // Main/calc 7
	}
}
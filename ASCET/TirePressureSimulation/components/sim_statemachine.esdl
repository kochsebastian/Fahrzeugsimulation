package components;

static class sim_statemachine {
	SOS_state SOS_state_instance;
	characteristic boolean failure = false;

	@generated("blockdiagram")
	@thread
	public void calc() {
		SOS_state_instance.myDT = Globals.d_T; // Main/calc 1
		SOS_state_instance.aktiv = failure; // Main/calc 2
		SOS_state_instance.sOS_stateStatemachineTrigger(); // Main/calc 3
	}
}
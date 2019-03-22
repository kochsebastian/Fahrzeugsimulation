package runnableModels;
import interfaces.interfaces;

import components.Globals;
import components.SOS_state;

static class sim_statemachine
reads interfaces.failure_detected {
	SOS_state SOS_state_instance;
	characteristic boolean failure = false;

	@generated("blockdiagram")
	@thread
	public void calc() {
		SOS_state_instance.myDT = Globals.d_T; // Main/calc 1
		SOS_state_instance.aktiv = interfaces.failure_detected; // Main/calc 2
		SOS_state_instance.sOS_stateStatemachineTrigger(); // Main/calc 3
	}
}
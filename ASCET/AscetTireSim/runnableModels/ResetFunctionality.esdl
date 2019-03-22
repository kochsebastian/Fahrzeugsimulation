package runnableModels;
import components.Reset;
import components.Globals;
import interfaces.interfaces;

import components.ResetStateMachine;

static class ResetFunctionality
reads interfaces.vfr, interfaces.vfl, interfaces.vrl, interfaces.vrr, interfaces.sfr, interfaces.delta_sfr, interfaces.srr, interfaces.sfl, interfaces.delta_sfl, interfaces.delta_srr, interfaces.srl, interfaces.delta_srl, interfaces.mean
writes interfaces.noFailure {
	characteristic boolean ResetButton = false;
	Reset Reset_instance;
	boolean restValid;
	boolean exitState;
	ResetStateMachine ResetStateMachine_instance;
	ResetStateMachine ResetStateMachine_instance_2;
	ResetStateMachine ResetStateMachine_instance_3;
	ResetStateMachine ResetStateMachine_instance_4;
	boolean test;

	@generated("blockdiagram")
	@thread
	public void calc() {
		restValid = Reset_instance.calc(ResetButton, interfaces.vrl, interfaces.vrr, interfaces.vfr, interfaces.vfl); // Main/calc 1
		ResetStateMachine_instance.reset = restValid; // Main/calc 2
		ResetStateMachine_instance.myDT = Globals.d_T; // Main/calc 3
		ResetStateMachine_instance.delta_xx = interfaces.delta_sfr; // Main/calc 4
		ResetStateMachine_instance.mean = interfaces.mean; // Main/calc 5
		ResetStateMachine_instance.limit = Globals.limit_FR; // Main/calc 6
		ResetStateMachine_instance.resetStateMachineStatemachineTrigger(); // Main/calc 7
		Globals.limit_FR = ResetStateMachine_instance.new_limit; // Main/calc 8
		interfaces.noFailure = ResetStateMachine_instance.noFailure; // Main/calc 9
		ResetStateMachine_instance_2.reset = restValid; // Main/calc 10
		ResetStateMachine_instance_2.myDT = Globals.d_T; // Main/calc 11
		ResetStateMachine_instance_2.delta_xx = interfaces.delta_sfl; // Main/calc 12
		ResetStateMachine_instance_2.mean = interfaces.mean; // Main/calc 13
		ResetStateMachine_instance_2.limit = Globals.limit_FL; // Main/calc 14
		ResetStateMachine_instance_2.resetStateMachineStatemachineTrigger(); // Main/calc 15
		Globals.limit_FL = ResetStateMachine_instance_2.new_limit; // Main/calc 16
		test = ResetStateMachine_instance_2.noFailure; // Main/calc 17
		interfaces.noFailure = test; // Main/calc 18
		ResetStateMachine_instance_3.reset = restValid; // Main/calc 19
		ResetStateMachine_instance_3.myDT = Globals.d_T; // Main/calc 20
		ResetStateMachine_instance_3.delta_xx = interfaces.delta_srr; // Main/calc 21
		ResetStateMachine_instance_3.mean = interfaces.mean; // Main/calc 22
		ResetStateMachine_instance_3.limit = Globals.limit_RR; // Main/calc 23
		ResetStateMachine_instance_3.resetStateMachineStatemachineTrigger(); // Main/calc 24
		Globals.limit_RR = ResetStateMachine_instance_3.new_limit; // Main/calc 25
		interfaces.noFailure = ResetStateMachine_instance_3.noFailure; // Main/calc 26
		ResetStateMachine_instance_4.reset = restValid; // Main/calc 27
		ResetStateMachine_instance_4.myDT = Globals.d_T; // Main/calc 28
		ResetStateMachine_instance_4.delta_xx = interfaces.delta_srl; // Main/calc 29
		ResetStateMachine_instance_4.mean = interfaces.mean; // Main/calc 30
		ResetStateMachine_instance_4.limit = Globals.limit_RL; // Main/calc 31
		ResetStateMachine_instance_4.resetStateMachineStatemachineTrigger(); // Main/calc 32
		Globals.limit_RL = ResetStateMachine_instance_4.new_limit; // Main/calc 33
		interfaces.noFailure = ResetStateMachine_instance_4.noFailure; // Main/calc 34
	}
}
package components;
@generated("statemachine")
type ResetStateMachineStatemachineStates is enum {
	DoNothing,
	WaitForReset,
	Reset,
	WaitForGo
};

class ResetStateMachine {
	@set
	private boolean reset;
	@set
	private real myDT;
	@set
	private real delta_xx;
	@set
	private real mean;
	@get
	private real new_limit = 0.5;
	real duration;
	real diff_xx;
	@set
	private real limit;
	boolean setDone;
	@get
	private boolean noFailure;

	@generated("statemachine")
	public void resetStateMachineStatemachineTrigger() triggers ResetStateMachineStatemachine;

	@generatedStateMachine
	statemachine ResetStateMachineStatemachine using ResetStateMachineStatemachineStates {
		start DoNothing;

		state DoNothing {
			entry {
				setDone = false;
				noFailure = false;
			}
			transition reset == true to WaitForGo;
		}

		state WaitForReset {
			entry {
				reset = false;
				duration = 0.0;
			}
			static {
				duration = duration + myDT;
			}
			transition duration > 20.0 to Reset;
		}

		state Reset {
			entry {
				limit = 0.5;
				diff_xx = abs(mean - delta_xx) / mean;
				new_limit = limit + diff_xx * 100.0;
				setDone = true;
			}
			transition setDone == true to DoNothing;
		}

		state WaitForGo {
			entry {
				noFailure = true;
			}
			transition reset == false to WaitForReset;
		}
	}
}
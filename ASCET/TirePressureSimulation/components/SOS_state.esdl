package components;
@generated("statemachine")
type SOS_stateStatemachineStates is enum {
	beep_short,
	no_short,
	beep_long,
	no_long,
	off
};

class SOS_state {
	integer x;
	integer status;
	@set
	private real myDT;
	real duration;
	integer y;
	integer run;
	@set
	private boolean aktiv;
	public real statelocation;

	@generated("statemachine")
	public void sOS_stateStatemachineTrigger() triggers SOS_stateStatemachine;

	@generatedStateMachine
	statemachine SOS_stateStatemachine using SOS_stateStatemachineStates {
		start off;

		state beep_short {
			entry {
				status = 1;
				duration = 0.0;
				y = 0;
				statelocation = 1.0;
			}
			static {
				duration = duration + myDT;
			}
			transition duration >= 0.8 to no_short;
		}

		state no_short {
			entry {
				status = 0;
				duration = 0.0;
				x = x + 1;
				run = run + 1;
				statelocation = 2.0;
			}
			static {
				duration = duration + myDT;
			}
			transition duration >= 0.8 && x >= 3 && run < 6 to beep_long;
			transition duration >= 0.8 && x < 3 to beep_short;
			transition duration >= 0.8 && run >= 6 to off;
		}

		state beep_long {
			entry {
				status = 1;
				duration = 0.0;
				x = 0;
				statelocation = 3.0;
			}
			static {
				duration = duration + myDT;
			}
			transition duration >= 1.6 to no_long;
		}

		state no_long {
			entry {
				status = 0;
				duration = 0.0;
				y = y + 1;
				statelocation = 4.0;
			}
			static {
				duration = duration + myDT;
			}
			transition duration >= 1.6 && y < 3 to beep_long;
			transition duration >= 1.6 && y >= 3 to beep_short;
		}

		state off {
			entry {
				run = 0;
				x = 0;
				y = 0;
			}
			transition aktiv == true to beep_short;
		}
	}
}
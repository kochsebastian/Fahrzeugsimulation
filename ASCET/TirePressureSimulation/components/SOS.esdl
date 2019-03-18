package components;

class SOS {
	boolean led_state;
	real duration;

	@generated("blockdiagram")
	public real calc(boolean in in_status, real in my_dT, real in time) {
		led_state = in_status; // Main/calc 1
		duration = (my_dT + duration); // Main/calc 2
		if (duration >= time) {
			led_state = (!in_status); // Main/calc 3/if-then 1
			return 1.6; // Main/calc 3/if-then 2
		} else {
			return 0.8; // Main/calc 3/if-else 1
		} // Main/calc 3
	}
}
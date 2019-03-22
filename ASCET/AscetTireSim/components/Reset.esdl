package components;

class Reset {
	@generated("blockdiagram")
	public boolean calc(boolean in reset, real in vrl, real in vrr, real in vfr, real in vfl) {
		if (reset) {
			if ((((vrl == 0.0) && (vrr == 0.0)) && (vfr == 0.0)) && (vfl == 0.0)) {
				return true; // Main/calc 1/if-then 1/if-then 1
			} else {
				return false; // Main/calc 1/if-then 1/if-else 1
			} // Main/calc 1/if-then 1
		} else {
			return false; // Main/calc 1/if-else 1
		} // Main/calc 1
	}
}
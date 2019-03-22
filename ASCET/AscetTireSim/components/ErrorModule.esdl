package components;

class ErrorModule {
	@generated("blockdiagram")
	public real calc(boolean in deflate, real in v, real in error) {
		if (deflate) {
			return(v * (1.0 - (error / 100.0))); // Main/calc 1/if-then 1
		} else {
			return v; // Main/calc 1/if-else 1
		} // Main/calc 1
	}
}
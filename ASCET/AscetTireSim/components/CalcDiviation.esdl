package components;

class CalcDiviation {
	@generated("blockdiagram")
	public real calc(boolean in deflate, real in v) {
		if (deflate) {
			return(v * 0.994); // Main/calc 1/if-then 1
		} else {
			return v; // Main/calc 1/if-else 1
		} // Main/calc 1
	}
}
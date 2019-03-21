package components;

class TireMean {
	@generated("blockdiagram")
	public real calc(real in v1, real in v3, real in v2) {
		return((v1 + v2 + v3) / 3.0); // Main/calc 1
	}
}
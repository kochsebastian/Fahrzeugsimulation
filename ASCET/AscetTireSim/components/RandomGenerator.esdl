package components;

type myint is integer 0 ..1024;
class RandomGenerator {
	characteristic myint a = 89;
	characteristic myint m = 1024;
	characteristic myint c = 251;
	myint seed;
	myint x = 0;

	@generated("blockdiagram")
	public real calc(real in set_vel, real in noiselevel, integer in mySeed) {
		if (integer(x) == 0) {
			x = myint(mySeed); // Main/calc 1/if-then 1
		} // Main/calc 1
		x = (((x * a) + c) % m); // Main/calc 2
		return(set_vel + (((noiselevel * 2.0) * (real(x) - (real(m) / 2.0))) / real(m))); // Main/calc 3
	}
}
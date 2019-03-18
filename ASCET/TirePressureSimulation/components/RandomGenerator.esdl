package components;

type myint is integer 0 .. 1009;
class RandomGenerator {
	characteristic myint a = 89;
	characteristic myint m = 1009;
	characteristic real crop = 0.001009;
	characteristic myint c = 251;
	characteristic myint seed = 2;
	myint x = seed;

	@generated("blockdiagram")
	public real calc(real in set_vel) {
		x = (((x * a) + c) % m); // Main/calc 1
		return(set_vel + (crop * (real(x) - (real(m) / 2.0)))); // Main/calc 2
	}
}
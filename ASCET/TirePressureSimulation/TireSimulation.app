application {
	class components.Simulation
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 1000ms delay 0ms {
		process components.Simulation.calc
	}
}
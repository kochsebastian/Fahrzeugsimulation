application {
	class components.Simulation
	class components.sim_statemachine
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process components.Simulation.calc
		process components.sim_statemachine.calc
	}
}
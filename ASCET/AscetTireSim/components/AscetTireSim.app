application {
	class components.sim_statemachine
	class components.Simulation
	class components.Globals
	class components.Driver
	class components.TirePressureMonitoring
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process components.Driver.calc
		process components.Simulation.calc
		process components.TirePressureMonitoring.calc
		process components.sim_statemachine.calc
	}
}
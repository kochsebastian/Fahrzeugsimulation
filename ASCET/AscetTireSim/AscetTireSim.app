application {
	class runnableModels.sim_statemachine
	class runnableModels.Simulation
	class components.Globals
	class runnableModels.Driver
	class runnableModels.TirePressureMonitoring
	class runnableModels.ResetFunctionality
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process runnableModels.Driver.calc
		process runnableModels.Simulation.calc
		process runnableModels.TirePressureMonitoring.calc
		process runnableModels.sim_statemachine.calc
		process runnableModels.ResetFunctionality.calc
	}
}
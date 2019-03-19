package components;

import assertLib.Assert;

import components.Globals;
import components.SOS_state;

static class Test_SOS_state {
	integer counter = 0;
	SOS_state sos;

	
	@Test
	public void shortBeepOn(){
		sos.myDT = 0.1;
		sos.aktiv = true;
		while(counter<8){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);

	}
	@Test
	public void shortBeepOn2(){
		sos.myDT = 0.1;
		sos.aktiv = true;
		while(counter<8){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);

	}
	
	

	
}
package components;

import assertLib.Assert;

import components.Globals;
import components.SOS_state;

static class Test_SOS_state {
	integer counter = 0;
	SOS_state sos;

	@Test
	public void checkAllStates(){
		sos.myDT = 0.1;
		sos.aktiv = true;
		
		while(counter<8){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		while(counter<17){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);

		while(counter<24){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		while(counter<32){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);
		
		while(counter<40){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		while(counter<48){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);
	
		while(counter<64){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 3.0, 0.1);
		
		while(counter<80){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 4.0, 0.1);
		
		while(counter<96){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 3.0, 0.1);
		
		while(counter<112){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 4.0, 0.1);
		
		while(counter<128){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 3.0, 0.1);
		
		while(counter<144){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 4.0, 0.1);
		
		counter = 0;
		
		while(counter<16){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		
	}
}
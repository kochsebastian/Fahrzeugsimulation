package components;

import assertLib.Assert;

import components.Globals;
import components.SOS_state;

static class Test_SOS_state {
	integer counter;
	SOS_state sos;

//Der Wechsel eines States beansprucht 10ms zusätzlich
//wurde in die Berechnung der Zeit für die Stati aufgenommen
	@Test
	public void checkAllStatesActive(){
		counter = 0;
		sos.myDT = 0.1;
		sos.aktiv = true;
		
		while(counter<9){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		while(counter<18){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);

		while(counter<27){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		while(counter<36){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);
		
		while(counter<45){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		while(counter<54){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);
	
		while(counter<71){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 3.0, 0.1);
		
		while(counter<88){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 4.0, 0.1);
		
		while(counter<105){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 3.0, 0.1);
		
		while(counter<122){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 4.0, 0.1);
		
		while(counter<139){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 3.0, 0.1);
		
		while(counter<156){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 4.0, 0.1);

		while(counter<165){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		while(counter<174){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);

		while(counter<183){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);	
		
		while(counter<192){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);
		
		while(counter<201){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		while(counter<210){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);
		
		//aktiv = true --> Start von vorne mit Status 1
		
		while(counter<220){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
	}
	
	
	@Test
	public void checkAllStatesActive2(){
		counter = 0;
		sos.myDT = 0.1;
		sos.aktiv = true;
		
		while(counter<9){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		sos.aktiv = false;
		
		while(counter<18){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);

		while(counter<27){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		while(counter<36){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);
		
		while(counter<45){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		while(counter<54){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);
	
		while(counter<71){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 3.0, 0.1);
		
		while(counter<88){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 4.0, 0.1);
		
		while(counter<105){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 3.0, 0.1);
		
		while(counter<122){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 4.0, 0.1);
		
		while(counter<139){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 3.0, 0.1);
		
		while(counter<156){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 4.0, 0.1);

		while(counter<165){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		while(counter<174){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);

		while(counter<183){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);	
		
		while(counter<192){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);
		
		while(counter<201){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 1.0, 0.1);
		
		while(counter<210){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 2.0, 0.1);
		
		//aktiv = false --> bleibe in Status 0
		
		while(counter<240){
			sos.sOS_stateStatemachineTrigger();
			counter = counter + 1;
		}
		Assert.assertNear(sos.statelocation, 0.0, 0.1);
	}
	
	
	@Test
	public void checkAllStatesDeactiv(){
		counter = 0;
		sos.myDT = 0.1;
		sos.aktiv = false;
		while(counter<30){
				sos.sOS_stateStatemachineTrigger();
				counter = counter + 1;
			}
			Assert.assertNear(sos.statelocation, 0.0, 0.1);
	}
}
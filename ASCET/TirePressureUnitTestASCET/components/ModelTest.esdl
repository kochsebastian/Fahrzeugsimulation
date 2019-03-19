package components;

import assertLib.Assert;

import components.Globals;
import components.Model;

static class ModelTest {
	real myDT = Globals.d_T;
	real vfr;
	real vrr;
	real vfl;
	real vrl;
	Model m;
	SOS_state smi;

	
/*	@Test
	public void distanceIncreasing(){
		myDT = 1.0;
		vfr = 10.0;
		vrr = 10.0;
		vfl = 10.0;
		vrl = 10.0;
		m.calc(vfr, vrr, vfl, vrl, myDT);
		Assert.assertTrue(m.getSfl() > 0.0);
		Assert.assertTrue(m.getSrl() > 0.0);
		Assert.assertTrue(m.getSfr() > 0.0);
		Assert.assertTrue(m.getSrr() > 0.0);
	}
	
	@Test
	public void predictDistance(){
		myDT = 1.0;
		vfr = 10.0;
		vrr = 10.0;
		vfl = 10.0;
		vrl = 10.0;
		m.calc(vfr, vrr, vfl, vrl, myDT);
	}*/
	
	@Test
	public void statmachine(){
		smi.myDT = 0.01;
	}

	
}
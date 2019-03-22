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


	
	@Test
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
	}
	
	@Test
	public void deltasConsistentForSameVelocity(){
		real s_return;
		real buffer_time = 10.0; 
		myDT = 0.01;
		vfr = 10.0;
		vrr = 10.0;
		vfl = 10.0;
		vrl = 10.0;
		
		for(i in 1 .. 50000){
			m.calc(vfr, vrr, vfl, vrl, myDT);
		}
		Assert.assertNear(m.getDiff_sfr(), vfr*buffer_time, 0.1);
		Assert.assertNear(m.getDiff_sfl(), vfl*buffer_time, 0.1);
		Assert.assertNear(m.getDiff_srl(), vrl*buffer_time, 0.1);
		Assert.assertNear(m.getDiff_srr(), vrr*buffer_time, 0.1);
		
	}
	
	
	
}
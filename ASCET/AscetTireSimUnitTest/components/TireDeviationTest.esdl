package components;


import assertLib.Assert;

import components.Globals;
import components.Model;

static class TireDeviationTest {
	TireDeviation td;
	
	@Test
	public void noDeviationWhileCalibration(){
		real v = 100.04;
		real v_mean = 100.0;
		real limit = 0.05;
		boolean noFailure = true;
		Assert.assertTrue(td.calc(v, v_mean, limit,noFailure)==false);
	}
	
	@Test
	public void highDeviationWhileCalibration(){
		real v = 100.06;
		real v_mean = 100.0;
		real limit = 0.05;
		boolean noFailure = true;
		Assert.assertTrue(td.calc(v, v_mean, limit,noFailure)==false);
	}
	@Test
	public void lowDeviationWhileCalibration(){
		real v = 99.94;
		real v_mean = 100.0;
		real limit = 0.05;
		boolean noFailure = true;
		Assert.assertTrue(td.calc(v, v_mean, limit,noFailure)==false);
	}
	
	@Test
	public void noDeviation(){
		real v = 100.04;
		real v_mean = 100.0;
		real limit = 0.05;
		boolean noFailure = false;
		Assert.assertTrue(td.calc(v, v_mean, limit,noFailure)==false);
	}
	
	@Test
	public void highDeviation(){
		real v = 100.06;
		real v_mean = 100.0;
		real limit = 0.05;
		boolean noFailure = false;
		Assert.assertTrue(td.calc(v, v_mean, limit,noFailure)==true);
	}
	@Test
	public void lowDeviation(){
		real v = 99.94;
		real v_mean = 100.0;
		real limit = 0.05;
		boolean noFailure = false;
		Assert.assertTrue(td.calc(v, v_mean, limit,noFailure)==true);
	}
	
	
	
}
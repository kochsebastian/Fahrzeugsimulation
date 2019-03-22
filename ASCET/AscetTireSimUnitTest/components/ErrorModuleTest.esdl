package components;

import assertLib.Assert;

import components.Globals;
import components.Model;

static class ErrorModuleTest {
	ErrorModule cd;
	
	@Test
	public void deflation(){
		real v = 10.0;
		real error = 0.5;
		real deflated_v = cd.calc(true, v, error);
		Assert.assertNear(deflated_v, v*(1.0-(error/100.0)), 0.1);
	}
	
	@Test
	public void noDeflation(){
		real v = 10.0;
		real error = 0.5;
		real same_v = cd.calc(false, v, error);
		Assert.assertNear(same_v, v, 0.1);
	}
}
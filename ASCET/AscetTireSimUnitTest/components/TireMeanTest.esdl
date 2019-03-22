
package components;
import assertLib.Assert;
import components.Globals;
import components.Model;
static class TireMeanTest {
    TireMean m;
    
    
    @Test
    public void calcMeanAllValuesTheSame(){
    	real v1 = 50.0;
        real mean = m.calc(v1, v1, v1,v1);
        Assert.assertNear(mean, v1, 0.1);
    }
    
    @Test
    public void calcMean(){
    	real v1 = 50.0;
    	real v2 = 15.0;
 	   	real v3 = 75.0;
 	   	real v4 = 100.5;
        real mean = m.calc(v1, v2, v3,v4);

        Assert.assertNear(mean, 60.13, 0.1);
    }
    
    @Test
    public void calcMeanNegativ(){
    	real v1 = -50.0;
    	real v2 = -15.0;
 	   	real v3 = -75.0;
 	   	real v4 = -100.5;
        real mean = m.calc(v1, v2, v3,v4);

        Assert.assertNear(mean,-60.13, 0.1);
    }
    
    @Test
    public void calcMeanMixed(){
    	real v1 = -50.0;
    	real v2 = -15.5;
 	   	real v3 = 50.0;
 	   	real v4 = 15.5;
        real mean = m.calc(v1, v2, v3,v4);

        Assert.assertNear(mean,0.0, 0.1);
    }
    
}
using System;

static class AssemblyLine
{
    
    public static double SuccessRate(int speed)
    {
        if(speed == 0) return (float)0;
        else if (speed > 0 && speed < 5) return (float)1.0;
        else if ( speed > 4 && speed < 9) return 0.9;
        else if (speed == 9) return 0.8;
        else return  0.77;
    }
    
    public static double ProductionRatePerHour(int speed) => (double)((float) speed * (float)221 * SuccessRate(speed));

    public static int WorkingItemsPerMinute(int speed) => (int) ProductionRatePerHour(speed) / 60;
}

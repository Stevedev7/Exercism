class Lasagna
{
    // TODO: define the 'ExpectedMinutesInOven()' method
    public int OvenTime = 40;
    public int ExpectedMinutesInOven(){
        return OvenTime;
    }
    // TODO: define the 'RemainingMinutesInOven()' method
    public int RemainingMinutesInOven(int x){
        return OvenTime - x;
    }
    // TODO: define the 'PreparationTimeInMinutes()' method
    public int PreparationTimeInMinutes(int layers){
        return layers * 2;
    }
    // TODO: define the 'ElapsedTimeInMinutes()' method
    public int ElapsedTimeInMinutes(int layers, int time){
        return time + PreparationTimeInMinutes(layers);
    }
}

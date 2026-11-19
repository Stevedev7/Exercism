class Lasagna
{
    public const int OvenTime = 40;
    public const int timePerLayer = 2;
    // TODO: define the 'ExpectedMinutesInOven()' method
    public int ExpectedMinutesInOven() => OvenTime;
    // TODO: define the 'RemainingMinutesInOven()' method
    public int RemainingMinutesInOven(int x) => OvenTime - x;
    // TODO: define the 'PreparationTimeInMinutes()' method
    public int PreparationTimeInMinutes(int layers) => layers * timePerLayer;
    // TODO: define the 'ElapsedTimeInMinutes()' method
    public int ElapsedTimeInMinutes(int layers, int time) =>  time + PreparationTimeInMinutes(layers);
}

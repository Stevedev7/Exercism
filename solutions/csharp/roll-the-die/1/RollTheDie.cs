using System;

public class Player
{
    public Random rand = new();
    public int RollDie() => rand.Next(1, 19);

    public double GenerateSpellStrength() => rand.NextDouble() * 100.0;
}

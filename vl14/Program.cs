﻿using System;
using Observer;

namespace Main
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            RandomGenerator rg = new RandomGenerator();
            Min min = new Min(rg);
            Max max = new Max(rg);

            rg.Start();
        }
    }
}
using System;
using System.Collections.Generic;

namespace Event
{
    public delegate void RandomNumberHandler(int i);


    public class Min
    {
        private int min;

        public Min(RandomGenerator rg)
        {
            min = int.MaxValue;
            rg.RandomNumber += this.Action;
        }
        public void Action(int i)
        {
            if (i < min)
            {
                Console.WriteLine("Min = {0}", i);
                min = i;
            }
        }
    }

    public class Max
    {
        private int max;

        public Max(RandomGenerator rg)
        {
            max = int.MinValue;
            rg.RandomNumber += this.Action;
        }
        public void Action(int i)
        {
            if (i > max)
            {
                Console.WriteLine("Max = {0}", i);
                max = i;
            }
        }
    }
    public class RandomGenerator
    {
        public event RandomNumberHandler RandomNumber;
        public void Start()
        {
            Random rg = new Random();
            for (int i = 0; i < 10; i++)
            {
                int z = rg.Next(10);
                RandomNumber(z);
            }
        }
    }
}
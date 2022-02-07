using System;
using System.Collections.Generic;

namespace EventArgsKonvention
{
    public class RandomArgs : EventArgs
    {
        public int Number
        {
            private set;
            get;
        }
        public RandomArgs(int i)
        {
            Number = i;
        }
    }
    public delegate void RandomNumberHandler(object sender, RandomArgs args);


    public class Min
    {
        private int min;

        public Min(RandomGenerator rg)
        {
            min = int.MaxValue;
            rg.RandomNumber += this.Action;
        }
        public void Action(object sender, RandomArgs args)
        {
            if (args.Number < min)
            {
                min = args.Number;
                Console.WriteLine("Min = {0}", min);
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
        public void Action(object sender, RandomArgs args)
        {
            if (args.Number > max)
            {
                max = args.Number;
                Console.WriteLine("Max = {0}", max);
            }
        }
    }
    public class RandomGenerator
    {
        public event RandomNumberHandler RandomNumber;

        private void OnRandomNumber(int i)
        {
            if (RandomNumber != null)
            {
                RandomNumber(this, new RandomArgs(i));
            }
        }
        public void Start()
        {
            Random rg = new Random();
            for (int i = 0; i < 10; i++)
            {
                int z = rg.Next(10);
                OnRandomNumber(z);
            }
        }
    }
}
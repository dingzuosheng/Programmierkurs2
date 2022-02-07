using System;
using System.Collections.Generic;

namespace Delegate
{
    public delegate void RandomNumverHandler(int i);

    public interface Observable
    {
        void Register(RandomNumverHandler o);
        void UnRegister(RandomNumverHandler o);
        void Notify(int i);
    }

    public abstract class Subject : Observable
    {

        private RandomNumverHandler RandomNumber;

        public Subject()
        {

        }
        public void Register(RandomNumverHandler o)
        {
            RandomNumber += o;
        }
        public void UnRegister(RandomNumverHandler o)
        {
            RandomNumber -= o;
        }

        public void Notify(int i)
        {
            RandomNumber(i);
        }
    }

    public class Min
    {
        private int min;

        public Min(Observable o)
        {
            min = int.MaxValue;
            o.Register(this.Action);
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

        public Max(Observable o)
        {
            max = int.MinValue;
            o.Register(this.Action);
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
    public class RandomGenerator : Subject
    {
        public void Start()
        {
            Random rg = new Random();
            for (int i = 0; i < 10; i++)
            {
                int z = rg.Next(10);
                Notify(z);
            }
        }
    }
}
using System;
using System.Collections.Generic;

namespace Observer
{
    public interface Observer
    {
        void Action(int i);
    }

    public interface Observable
    {
        void Register(Observer o);
        void UnRegister(Observer o);
        void Notify(int i);
    }

    public abstract class Subject : Observable
    {

        private List<Observer> liste;

        public Subject()
        {
            liste = new List<Observer>();
        }
        public void Register(Observer o)
        {
            liste.Add(o);
        }
        public void UnRegister(Observer o)
        {
            liste.Remove(o);
        }

        public void Notify(int i)
        {
            foreach (Observer o in liste)
            {
                o.Action(i);
            }
        }
    }

    public class Min : Observer
    {
        private int min;

        public Min(Observable o)
        {
            min = int.MaxValue;
            o.Register(this);
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

    public class Max : Observer
    {
        private int max;

        public Max(Observable o)
        {
            max = int.MinValue;
            o.Register(this);
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
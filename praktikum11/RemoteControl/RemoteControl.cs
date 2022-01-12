using Praktikum11.Fh.Pk2.Commands;

namespace Praktikum11
{
    namespace Fh.Pk2.Rc
    {
        class RemoteControl
        {
            private Command[][] commands = new Command[4][];
            public void setCommand(int i, Command on, Command off)
            {
                commands[i] = new Command[2];
                commands[i][0] = on;
                commands[i][1] = off;
            }

            public void pressOn(int i)
            {
                commands[i][0].execute();
            }

            public void pressOff(int i)
            {
                commands[i][1].execute();
            }
        }
    }
}
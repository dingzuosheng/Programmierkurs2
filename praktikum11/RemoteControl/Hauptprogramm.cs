using Praktikum11.Fh.Pk2.Devices;
using Praktikum11.Fh.Pk2.Rc;
class Hauptprogramm
{
    public static void Main(String[] args)
    {
        CdPlayer cdPlayer = new CdPlayer();
        Garagentor tor = new Garagentor();

        RemoteControl control = new RemoteControl();

        CdStart start = new CdStart(cdPlayer);
        CdStopp stopp = new CdStopp(cdPlayer);

        TorHoch th = new TorHoch(tor);
        TorRunter tr = new TorRunter(tor);

        control.setCommand(0, start, stopp);
        control.setCommand(1, th, tr);

        control.pressOn(0);
        control.pressOn(1);

        control.pressOff(0);
        control.pressOff(1);

    }
}
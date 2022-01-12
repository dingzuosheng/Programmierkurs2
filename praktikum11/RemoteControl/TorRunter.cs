using Praktikum11.Fh.Pk2.Commands;
using Praktikum11.Fh.Pk2.Devices;
class TorRunter : Command
{
    private Garagentor tor;

    public TorRunter(Garagentor tor)
    {
        this.tor = tor;
    }

    public override void execute()
    {
        tor.runter();
    }
}
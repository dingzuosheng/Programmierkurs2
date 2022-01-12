using Praktikum11.Fh.Pk2.Commands;
using Praktikum11.Fh.Pk2.Devices;
class TorHoch : Command
{
    private Garagentor tor;

    public TorHoch(Garagentor tor)
    {
        this.tor = tor;
    }

    public override void execute()
    {
        tor.hoch();
    }
}
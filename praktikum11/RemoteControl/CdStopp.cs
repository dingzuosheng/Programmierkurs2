using Praktikum11.Fh.Pk2.Commands;
using Praktikum11.Fh.Pk2.Devices;
class CdStopp : Command
{
    private CdPlayer player;

    public CdStopp(CdPlayer player)
    {
        this.player = player;
    }

    public override void execute()
    {
        player.stopp();
    }
}
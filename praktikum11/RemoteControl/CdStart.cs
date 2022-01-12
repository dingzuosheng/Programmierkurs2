using Praktikum11.Fh.Pk2.Commands;
using Praktikum11.Fh.Pk2.Devices;
class CdStart : Command
{
    private CdPlayer player;

    public CdStart(CdPlayer player)
    {
        this.player = player;
    }

    public override void execute()
    {
        player.start();
    }

}
/*Punkt_H*/
class Punkt{
    private:
        double x;
        double y;
    public:
        Punkt(double x, double y):x{x},y{y}{}
        double getX(){return x;}
        double getY(){return y;}
};

/*Punkt.CPP*/

using namespace std;

ostream& operator<<(ostream& ausgabe, Punkt& p){
    ausgabe << "(" << p.getX() << ", " << p.getY() << ")";
    return ausgabe;
} 

int main(){
    Punkt p1 {10.1, 100.1};
    Punkt p2 = p1;
    count << p1 << endl;

    Punkt *p3 = new Punkt(10.5, 100.5);
    count << *p3 << endl;
    delete *p3;
    return 0; 
}
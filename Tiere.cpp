#include <iostream>

using namespace std;

class Tier{
  public:
    string rufname;
    string farbe;
    int alter;

};

//Vererbung von klasse Tier!!
class Katze: public Tier{
    public:
        void miauen(){
            cout <<"MIauu! \n";
        }
};

class Hund: public Tier{
    public:
        void bellen(){
            cout<<"Wuff Wuff!! \n";
        }
};


int main()
{
// Create an object of Tier
    Hund Rufus;
    Rufus.rufname="Rufus";
    Rufus.farbe="Schwarz";
    Rufus.alter= 7;

    //Rufus.bellen();

 // Create another Object of Tier
    Katze Garfield;
    Garfield.rufname="Garfield";
    Garfield.farbe="Orange";
    Garfield.alter= 4;
    //Garfield.miauen();

    cout<<Garfield.rufname<<" "<<"ist "<< Garfield.alter<<" Jahre alt"<<"\n";
    cout<<Garfield.rufname<<" "<<"sagt"<<"\n";
    Garfield.miauen();

    return 0;
}

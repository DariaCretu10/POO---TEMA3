#include "Supersport.h"
int Supersport::nr_exp = 0;
int Supersport::nr_vand = 0;
Supersport::Supersport():Masina()
{
   pret = -1;
}

Supersport::~Supersport():~Masina()
{
    pret = -1;
}

Supersport::Supersport(const Supersport &ob):Masina(ob)
{
    pret = ob.pret;
}

Supersport::Supersport(int cai_nou, int an_nou, int pret_nou):Masina(cai_nou, an_nou)
{
    pret = pret_nou;
}

void Supersport::set_pret(int pret_nou)
{
    pret = pret_nou;
}

istream& operator>>(istream &i, const Supersport& ob)
{
    i>>dynamic_cast<Masina&>(ob);
    return i;
}
ostream& operator<<(ostream &cout, const Supersport& ob)
{
    ob.afisare();
    return cout;
}

void Supersport::afisare()
{
    cout<<"Supersport"<<'/n';
    cout<<"Se vor afisa numarul de cai putere, anul fabricatiei si pretul";
    cout<<this->cai_putere<<" "<<this->an_fabricatie<<" "<<this->pret<<'/n';
}

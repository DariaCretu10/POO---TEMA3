#include "Cabrio.h"

Cabrio::Cabrio():Masina()
{
  acoperis = -1;
}

Cabrio::~Cabrio():~Masina()
{
    acoperis = -1;
}
Cabrio::Cabrio(const Cabrio &ob):Masina(ob)
{
    acoperis = ob.acoperis;
}
Cabrio::Cabrio(int cai_nou, int an_nou, int acoperis_nou):Masina(cai_nou, an_nou)
{
    acoperis = acoperis_nou;
}

void Cabrio::afisare()
{
    cout<<"Coupe";
    cout<<"Se vor afisa numarul de cai putere, anul fabricatiei si tipul acoperisului";
    cout<<this->cai_putere<<" "<<this->an_fabricatie<<" "
    if(acoperis==1)
        cout<<"Transparent";
    else cout<<"Colorat";
}
istream& operator>>(istream &i, const Cabrio& ob)
{
    i>>dynamic_cast<Masina&>(ob);
    i>>motor;
    return i;
}

ostream& operator<<(ostream &cout, const Cabrio& ob);
{
    ob.afisare();
    return cout;
}

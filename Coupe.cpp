#include "Coupe.h"

Coupe::Coupe():Masina()
{
}

Coupe::~Coupe():~Masina()
{
}

Coupe::Coupe(int cai_nou, int an_nou):Masina(cai_nou, an_nou)
{
}

Coupe::Coupe(const Coupe &ob):Masina(ob)
{
}

istream& operator>>(istream& i, const Masina& ob)
{
    i>>dynamic_cast<Masina&>(ob);
    return i;
}

ostream& operator<<(ostream &cout, const Coupe& ob);
{
  ob.afisare();
  return cout;
}

void Coupe::afisare()
{   cout<<"Coupe";
    cout<<"Se afiseaza numarul de cai putere si anul fabricatiei";
    cout<<this->cai_putere<<" "<<this->an_fabricatie<<'/n';
}

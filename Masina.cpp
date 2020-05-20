#include "Masina.h"

Masina::Masina()
{
    pret = -1;
    vanduta = 0;
}

Masina::~Masina()
{
    cai_putere = -1;
    an_fabricatie = 0;
}

Masina::Masina(int cai_nou, int an_nou)
{
    cai_putere = cai_nou;
    an_fabricatie = an_nou;
}
Masina::Masina(const Masina &ob)
{
    cai_putere = ob.cai_putere;
    an_fabricatie = ob.an_fabricatie;
}

void Masina::afisare()
{
    cout<<"Cai putere:"<<this->cai_putere<<" ";
    cout<<"Anul fabricatiei:"<<this->an_fabricatie<<'/n';
}

istream& operator>>(istream& i, const Masina& ob)
{
    cout<<"Se citesc numarul de cai putere si anul fabricatiei";
    i>>ob.cai_putere;
    i>>ob.an_fabricatie;
    return i;
}

ostream& operator<<(ostream &cout, const Masina& ob)
{
    cout<<ob.afisare();
    return cout;

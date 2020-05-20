#include "HotHatch.h"

HotHatch::HotHatch():Masina()
{
    motor = -1;
}
HotHatch::~HotHatch():~Masina()
{
    motor = -1;
}

HotHatch::HotHatch(int cai_nou, int an_nou, int motor_nou):Masina(cai_nou,an_nou)
{
    motor = motor_nou;
}

HotHatch::HotHatch(const HotHatch &ob):Masina(ob)
{
    motor = ob.motor;
}

void HotHatch::afisare()
{
    cout<<"Hot-Hatch";
    cout<<"Se afiseaza numarul de cai putere,anul fabricatiei si tipul motorului";
    cout<<this->cai_putere<<" "<<this->an_fabricatie";
    if(this->motor==1)
        cout<<"Adr"<<'/n';
    else cout<<"Hhda"<<'/n';
}

istream& operator>>(istream &i, const HotHatch& ob)
{
    i>>dynamic_cast<Masina&>(ob);
    i>>motor;
    return i;
}

ostream& operator<<(ostream &cout, const HotHatch& ob)
{
    ob.afisare();
    return cout;

}

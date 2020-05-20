#ifndef EXPOZITIE_H
#define EXPOZITIE_H
#include <vector>
#include "Masina.h"
#include "HotHatch.h"
#include "Supersport.h"
#include "Coupe.h"
#include "Cabrio.h"

template <typename T>
class Expozitie
{   private: vector<T*> exp;
             static int nr_exp;
    public:
        Expozitie(T nr_nou, T vec[]);
        virtual ~Expozitie();
        Expozitie(const Expozitie &ob);
        Expozitie();
        friend istream& operator>>(istream &i, const Expozitie& ob);
        friend ostream& operator<<(ostream &o, const Expozitie& ob);
        void adauga()
        {
            T* masina = new T;
            cin>>*masina;
            exp.push_back(masina)
            nr_exp++;
        }


};

template <>
class Expozitie<Supersport*>{
       static int nr_exp;
       static int nr_vand;
       vector<Supersport*> stoc;
       vector<Supersport*> vandute;
   public:
        Expozitie();
        virtual ~Expozitie();
        Expozitie(const Expozitie &ob);
        Expozitie();
        void operator-=(int i)
        {
            int j;
            cin>>j;
            Vanduta(i,j);
        }
        void Vanduta(int masina, T pret)
        {
        for (int i = 0; i < stoc.size(); i++)
          if(masina == i)
            { vandute.push_back(stoc[i]);
              for(j=i; j<=stoc.size(); j++)
                stoc[j] = stoc[j+1];
              stoc.pop_back();
              stoc[i].set_pret(pret);
              nr_exp-=;

            }

         }



};

int Expozitie::nr_exp = 0;
int Expozitie::nr_vand = 0;
template<typename T>
T Expozitie<T>::Expozitie(int nr_nou, vector<T*> vec)
{  int i;
   nr++;
   this->masini = new T[nr_nou+1];
   for(i = 0; i < nr_nou; i++)
        this->exp[i] = vec[i];

}

template <typename T>
T Expozitie<T>::Expozitie(const Expozitie &ob)
{   int i;
    nr++;
    this->exp = new T[ob.nr+1];
    for(i = 0; i < ob.nr; i++)
        this->exp[i] = ob.exp[i];
}

template <typename T>
T Expozitie<T>:: ~Expozitie()
{   nr--;
    delete masini;
}
template <typename T>
T Expozitie<T>::Expozitie()
{
    nr++;
    for ( int i=0; i<= nr; i++)
        exp[i] = 0;
}

istream& operator>>(istream& i, const Expozitie& ob)
{
    i>>ob.nr;
    for(int j = 0 ; j<=ob.nr; j++)
        i>>ob.exp[j];
    return i;
}
 ostream& operator<<(ostream& o, const Expozitie& ob)
{
   o<<ob.nr<<'/n';
   for(int j = 0 ; j<=ob.nr; j++)
        o<<ob.exp[j]<<" "<<'/n';
   return o;
}



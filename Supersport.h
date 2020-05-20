#ifndef SUPERSPORT_H
#define SUPERSPORT_H


class Supersport : public Masina
{   private:
       int pret;

    public:
        Supersport();
        virtual ~Supersport();
        Supersport(int cai_nou, int an_nou, int pret_nou);
        Supersport(const Supersport &ob);
        void set_pret(int p_nou);
        void afisare();
        friend istream& operator>>(istream &i, const Supersport& ob);
        friend ostream& operator<<(ostream &cout, const Supersport& ob);

};

#endif // SUPERSPORT_H

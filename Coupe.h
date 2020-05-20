#ifndef COUPE_H
#define COUPE_H


class Coupe : public Masina
{
    public:
        Coupe();
        virtual ~Coupe();
        Coupe(int cai_nou, int an_nou);
        Coupe(const Coupe &ob);
        void afisare();
        friend istream& operator>>(istream &i, const Coupe& ob);
        friend ostream& operator<<(ostream &cout, const Coupe& ob);
};

#endif // COUPE_H

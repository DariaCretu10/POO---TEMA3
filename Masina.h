#ifndef MASINA_H
#define MASINA_H


class Masina
{   private:
        int cai_putere;
        int an_fabricatie;
    public:
        Masina(int cai_putere, int an_fabricatie);
        Masina( const Masina &ob);
        Masina();
        virtual ~Masina();
        virtual void afisare(const Masina &ob);
        friend istream& operator>>(istream &i, const Masina& ob);
        friend ostream& operator<<(ostream &o, const Masina& ob);

};

#endif // MASINA_H

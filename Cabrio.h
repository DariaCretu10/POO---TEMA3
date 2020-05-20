#ifndef CABRIO_H
#define CABRIO_H


class Cabrio : Masina()
{   private:
        int acoperis;
    public:
        Cabrio();
        virtual ~Cabrio();
        Cabrio(int cai_nou, int an_nou, int acoperis_nou);
        Cabrio(const Cabrio &ob);
        void afisare();
        friend istream& operator>>(istream &i, const Cabrio& ob);
        friend ostream& operator<<(ostream &cout, const Cabrio& ob);
};

#endif // CABRIO_H

#ifndef HOTHATCH_H
#define HOTHATCH_H


class HotHatch : public Masina
{   private:
        int motor;
    public:
        HotHatch();
        virtual ~HotHatch();
        HotHatch(int cai_nou, int an_nou, int motor_nou);
        HotHatch(const HotHatch &ob);
        void afisare();
        friend istream& operator>>(istream &i, const HotHatch& ob);
        friend ostream& operator<<(ostream &cout, const HotHatch& ob);

};

#endif // HOTHATCH_H

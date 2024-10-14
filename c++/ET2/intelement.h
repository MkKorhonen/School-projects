#ifndef INTELEMENT_H_INCLUDED
#define INTELEMENT_H_INCLUDED

class intelement
{
    public:
        intelement();
        intelement(int v);
        ~intelement() = default;
        int getVal() const;
        int setVal(int v) const;
        intelement operator+=(const intelement& i);
        intelement operator-=(const intelement& i);
        intelement operator*=(const intelement& i);


    private:
        int val;
};

#endif // INTELEMENT_H_INCLUDED

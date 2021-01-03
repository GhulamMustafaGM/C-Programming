// Class with objects 

#include <iostream>
#include <math.h>

using namespace std;

class Complex
{

private:
    double Real;
    double Imagination;

public:
    Complex()
    {

        Real = 0;
        Imagination = 0;
    }

    Complex(double re)
    {

        Real = re;
        Imagination = 0;
    }

    Complex(double re, double im)
    {

        Real = re;
        Imagination = im;
    }

    double getR()
    {

        return Real;
    }

    double getIm()
    {

        return Imagination;
    }

    void setRe(double re)
    {

        Real = re;
    }

    void setIm(double im)
    {

        Imagination = im;
    }

    void set(double re, double im)
    {

        Real = re;
        Imagination = im;
    }

    Complex operator+(Complex b)
    {

        Complex h;
        h.Real = Real + b.Real;
        h.Imagination = Imagination + b.Imagination;
        return h;
    }

    Complex operator+(double b)
    {

        Complex h;
        h.Real = Real + b;
        h.Imagination = Imagination;
        return h;
    }

    Complex operator-(Complex b)
    {

        Complex h;
        h.Real = Real - b.Real;
        h.Imagination = Imagination - b.Imagination;
        return h;
    }

    Complex operator-(double b)
    {

        Complex h;
        h.Real = Real - b;
        h.Imagination = Imagination;
        return h;
    }

    Complex operator*(Complex b)
    {

        Complex h;
        h.Real = (Real * b.Real) - (Imagination * b.Imagination);
        h.Imagination = (Real * b.Imagination) + (Imagination * b.Real);
        return h;
    }

    Complex operator*(double b)
    {

        Complex h;
        h.Real = Real * b;
        h.Imagination = Imagination * b;
        return h;
    }

    Complex operator/(Complex b)
    {

        Complex h;
        h.Real = ((Real * b.Real) - (Imagination * b.Imagination)) / (sqrt(pow(b.Real, 2) + pow(b.Imagination, 2)));
        h.Real = ((Real * b.Imagination) + (Imagination * b.Real)) / (sqrt(pow(b.Real, 2) + pow(b.Imagination, 2)));
    }

    Complex operator/(double b)
    {

        Complex h;
        h.Real = (Real * b) / (sqrt(pow(b, 2)));
        h.Imagination = (Imagination * b) / (sqrt(pow(b, 2)));
        return h;
    }

    void input(istream &i)
    {

        char t, s;
        i >> Real >> t >> Imagination >> s;
    }

    void print(ostream &o)
    {

        if (Imagination > 0)
            o << Real << '+' << Imagination << 'i';

        if (Imagination == 0)
            o << Real;

        if (Imagination < 0)
            o << Real << Imagination << 'i';
    }
};

ostream &operator<<(ostream &o, Complex &a)
{

    a.print(o);
    return o;
}

istream &operator>>(istream &i, Complex &a)
{

    a.input(i);
    return i;
}

Complex operator+(double b, Complex h)
{

    return h + b;
}

Complex operator-(double b, Complex h)
{

    return h - b;
}

Complex operator*(double b, Complex h)
{

    return h * b;
}

Complex operator/(double b, Complex h)
{

    return h / b;
}

int main()
{

    Complex a, b(2), c(3, 5);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    c = a + b;
    cout << c << endl;

    return 0;
}
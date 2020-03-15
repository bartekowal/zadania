#include <iostream>
#include <stdio.h>
using namespace std;


class Vector
{
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    size_t dimension_;
    double data_[3] = {0,0,0};
};

Vector::Vector(double element1)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R1 :" <<endl;
    dimension_ = 1;
    data_[0] = element1;
}

Vector::Vector(double element1,double element2)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R2 :" <<endl;
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
}

Vector::Vector(double element1,double element2,double element3)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R3 :" <<endl;
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
    data_[3] = element3;
}


Vector operator+(const Vector &left, const Vector &right)
{
    if (left.dimension_ == right.dimension_)
    {
        Vector result(0,0);
        result.data_[0] = left.data_[0]+ right.data_[0];
        result.data_[1] = left.data_[1]+ right.data_[1];
        result.data_[2] = left.data_[2]+ right.data_[2];
        return result;
    }
    else
    {
        cout << "\n Error: Bledny wymiar wektorow :" <<endl;
    }
}


int main()
{
    Vector r1(1.0); // R1
    cout << "Obiekt klasy Vector o wymiarze:" << r1.dimension_  << endl;
    cout << "Obiekt klasy Vector :" << r1.data_[0]  << endl;
    Vector r2(2.0, 2.0); // R2
    cout << "Obiekt klasy Vector o wymiarze:" << r2.dimension_  << endl;
    Vector r22(3.0, 3.0); // R2

    Vector c = r2 + r22;
    cout << c.data_[0]<<" "<<c.data_[1]<< endl;

}

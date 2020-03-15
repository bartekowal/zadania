#include <iostream>
#include <stdio.h>
using namespace std;

class Vector {
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    int dimension_;

private:
    double data_[3] = { 0, 0, 0 };
};

Vector::Vector(double element1)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R1 :" << endl;
    dimension_ = 1;
    data_[0] = element1;
}

Vector::Vector(double element1, double element2)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R2 :" << endl;
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
}

Vector::Vector(double element1, double element2, double element3)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R3 :" << endl;
    dimension_ = 3;
    data_[0] = element1;
    data_[1] = element2;
    data_[2] = element3;
}

int main()
{
    Vector r1(1.0); // R1
    cout << "Obiekt klasy Vector o wymiarze:" << r1.dimension_ << endl;
    cout << "Obiekt klasy Vector :" << r1.data_[0]  << endl;
    Vector r2(1.0, 2.0); // R2
    cout << "Obiekt klasy Vector o wymiarze:" << r2.dimension_ << endl;
    Vector r3(1.0, 1.0, 3.0); // R2
    cout << "Obiekt klasy Vector o wymiarze:" << r3.dimension_ << endl;
}

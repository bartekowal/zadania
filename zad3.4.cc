#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

class Vector {
private:
    int dimension_;
    double data_[3] = { 0, 0, 0 };
    friend float module(Vector);

public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
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

float module(float* a)
{
    float mod = 0;
    for (int i = 0; i < 3; i++) {
        mod = mod + a[i] * a[i];
    }
    mod = sqrt(mod);
    return mod;
}

float module(Vector a)
{
    float mod = 0;
    for (int i = 0; i < a.dimension_; i++) {
        mod = mod + a.data_[i] * a.data_[i];
    }
    mod = sqrt(mod);
    return mod;
}

int main()
{
    Vector r1(1.0); // R1
    Vector r2(2.0, 2.0); // R2
    Vector r3(3.0, 3.0, 3.0); // R3

    float vect[3] = { 3, 3, 3 }; // wektor jako tablica
    cout << " Moduł wektora definiowanego tablicą:" << module(vect) << endl;
    cout << " Moduł wektora definiowanego obiektem klasy Vector:" << module(r3) << endl;
}

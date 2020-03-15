#include <iostream>
#include <stdio.h>
using namespace std;

class Vector {
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    void showElements();
    void showElements(Vector);
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

void Vector::showElements()
{
    cout << " Zmienna typu Vector :" << endl;
    for (int i = 0; i < dimension_; i++) {
        cout << " wartosc elementu o indeksie " << i << "  : " << data_[0] << endl;
    }
}

void Vector::showElements(Vector v)
{
    cout << " Zmienna typu Vector :" << endl;
    for (int i = 0; i < v.dimension_; i++) {
        cout << " wartosc elementu o indeksie " << i << "  : " << v.data_[0] << endl;
    }
}

int main()
{
    Vector r1(1.0); // R1
    cout << " Obiekt klasy Vector o wymiarze:" << r1.dimension_ << endl;
    cout << "Obiekt klasy Vector :" << r1.data_[0]  << endl;
    Vector r2(2.0, 2.0); // R2
    cout << " Obiekt klasy Vector o wymiarze:" << r2.dimension_ << endl;
    Vector r3(3.0, 3.0, 3.0); // R2
    cout << " Obiekt klasy Vector o wymiarze:" << r3.dimension_ << endl;

    cout << "\n";
    r2.showElements();
    cout << "\n";
    r2.showElements(r3);
}

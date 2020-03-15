#include <iostream>
#include <stdio.h>
using namespace std;

class Vector {
public:
    Vector operator+(const Vector&);
    void printElements(Vector); // metoda showElements pozwoli wyświetlić prywatna składową data_
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
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
    data_[3] = element3;
}

Vector Vector::operator+(const Vector& right)
{
    if (this->dimension_ == right.dimension_) {
        Vector result(0, 0);
        result.data_[0] = this->data_[0] + right.data_[0];
        result.data_[1] = this->data_[1] + right.data_[1];
        result.data_[2] = this->data_[2] + right.data_[2];
        return result;
    }
    else {
        cout << "\n Error: Niezgodne wymiary wektorow !!! :" << endl;
    }
}

// metoda showElements
void Vector::printElements(Vector w)
{
    cout << " Zmienna typu Vector :" << endl;
    for (int i = 0; i < w.dimension_; i++) {
        cout << " wartosc elementu o indeksie " << i << "  : " << w.data_[0] << endl;
    }
}

int main()
{
    Vector r1(1.0); // R1
    cout << "Obiekt klasy Vector o wymiarze:" << r1.dimension_ << endl;
    cout << "Obiekt klasy Vector :" << r1.data_[0]  << endl;
    Vector r2(2.0, 2.0); // R2
    cout << "Obiekt klasy Vector o wymiarze:" << r2.dimension_ << endl;
    Vector r22(3.0, 3.0); // R2

    Vector c = r2 + r22;
    c.printElements(c); // wywowłanie metody showElements
}

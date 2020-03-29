#include <iostream>
#include <stdio.h>
using namespace std;

class Vector {
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    void showvector(Vector);
    void showvector();
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

void Vector::showvector(Vector vec){
    for(int i = 0; i < vec.dimension_; i++){
        cout << vec.data_[i] << endl;
    }
}

void Vector::showvector(){
    for(int i = 0; i < dimension_; i++){
        cout << data_[i] << endl;
    }
}

int main()
{
    Vector r2(1.0, 2.0); // R2
    cout << "Obiekt klasy Vector o wymiarze:" << r2.dimension_ << endl;
    Vector r3(1.0, 2.0, 3.0); // R3
    cout << "Obiekt klasy Vector o wymiarze:" << r3.dimension_ << endl;
    r2.showvector();
    r2.showvector(r3);
}

#include <iostream>
using namespace std;

class student
{
public:
    student();
    string Opis_ = "student grupy";
    void printOpis();
};

class starosta : public student
{
public:
    string Opis_ = "starosta grupy";
    string star;
};

student::student()
{
    cout << "Tworzenie obiektu klasy student o nazwie: " << Opis_ << endl;
}

void student::printOpis()
{
    cout << "Opis: " << Opis_ << endl;
}

int main()
{
    student stud;
    starosta starosta1;
    stud.printOpis();
    star.printOpis();

}

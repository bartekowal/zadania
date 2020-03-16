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
    starosta();
    string Opis_ = "starosta grupy";
    void printOpis();
};

student::student()
{
    cout << "Tworzenie obiektu klasy student o nazwie: " << Opis_ << endl;
}

void student::printOpis()
{
    cout << "Opis: " << Opis_ << endl;
}
starosta::starosta()
{
    cout << "Tworzenie obiektu klasy starosta o nazwie: " << Opis_ << endl;
}
void starosta::printOpis()
{
    cout << "Opis: " << Opis_ << endl;
}

int main()
{
    student stud;
    starosta star;
    stud.printOpis();
    star.printOpis();

}

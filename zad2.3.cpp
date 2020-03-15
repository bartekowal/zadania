#include <iostream>
#include <cstring>
using namespace std;

class Circle{
public:
    float *radius_;
    Circle(float r)
    {
        radius_ = new float(r);
    };
    ~Circle(){
        cout<<"Uzyto destruktora"<<endl;
    }
    void view() {
        cout << *radius_ << endl;
    }
};

int main() {
    Circle r(0.75);
    r.view(); //wyswietlam

}

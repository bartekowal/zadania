#include <iostream>
#include <cstring>
using namespace std;

class Circle{
public:
    float radius_;
    float circumference();
    float area();
};
float Circle::circumference(){
    return 2*3.14*radius_;
}
float Circle::area(){
    return 3.14*radius_*radius_;
}

int main() {
    Circle r1;
    r1.radius_ = 1;
    cout << r1.circumference() << endl;
    cout << r1.area() << endl;
}

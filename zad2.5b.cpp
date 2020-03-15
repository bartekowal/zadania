#include <iostream>
#include <cstring>
using namespace std;
class Circle{
private:
    float radius_;
    float area_;
    float circumference_;
public:
    Circle(float, float);
};
Circle::Circle(float radius, float area){
    radius_ = radius;
    area_ = area;
};
int main(){
    Circle r1(0.5, 4);

}



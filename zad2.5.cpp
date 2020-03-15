#include <iostream>
#include <cstring>
using namespace std;
class Circle{
private:
    float radius_;
    float area_;
    float circumference_;
public:
    Circle(float);
};
    Circle::Circle(float radius){
        radius_ = radius;
        area_ = radius*radius*3.14;
    };
int main(){
    Circle r1(2);

}
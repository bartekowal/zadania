#include <iostream>
#include <cstring>
using namespace std;
class Circle{
private:
    float radius_;
    float area_;
    float circumference_;
public:

    void setRadius(float radius){
        radius_ = radius;
    }
    float getRadius(void){
        return radius_;
    }
};
int main(){
    Circle cir;
    cir.setRadius(0.001);
    cout << cir.getRadius() << endl;
}
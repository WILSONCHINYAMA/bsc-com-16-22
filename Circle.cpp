#include "circle.h"

using namespace shapes;

Circle::Circle() {
    radius=0;
} 

Circle::Circle(double r) {
    radius= r;
} 

double Circle::getRadius() const {
    return radius;
}

Circle::~Circle() {
    
}

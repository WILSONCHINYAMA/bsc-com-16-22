#include "area.h"
#include <cmath>

using namespace shapes;

double Area::calculateSquareArea(const Square& square) {
    return square.getSideLength() * square.getSideLength();
}

double Area::calculateTriangleArea(const Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

double Area::calculateCircleArea(const Circle& circle) {
    return M_PI * circle.getRadius() * circle.getRadius();
}

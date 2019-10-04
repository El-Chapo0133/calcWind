#include <iostream>
#include "vector.h"

using namespace std;

Vector::Vector() {
    x = 0;
    y = 0;
    z = 0;
    power = 0;
}
int Vector::getX() {
    return x;
};
int Vector::getY() {
    return y;
};
int Vector::getZ() {
    return z;
};
double Vector::getPower() {
    return power;
};
void Vector::setX(int value) {
    x = value;
};
void Vector::setY(int value) {
    y = value;
};
void Vector::setZ(int value) {
    z = value;
};
void Vector::setPower(double value) {
    power = value;
};
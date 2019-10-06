#include <iostream>
#include <string>
#include "../objects/wind.h"
#include "../objects/wind.cpp"

using namespace std;

int main() {
    cout << "starting the program" << endl;

    Wind wind;

    wind.setX(5);
    wind.setY(7);

    wind.setPower(wind.calcPower(20, 17, 0));

    cout << (wind.calcRange() * wind.getPower()) * 3.6 << endl;

    cout << "end of the program" << endl;
};
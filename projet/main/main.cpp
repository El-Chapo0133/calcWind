#include <iostream>
#include "../interfaces/vector.cpp"
#include "../objects/thing.cpp"
#include "../objects/wind.cpp"

using namespace std;


void setVariables(Wind wind, Thing thing) {
    thing.setX(8);
    thing.setY(3);
    thing.setZ(0);
    wind.setX(3);
    wind.setY(1);
    wind.setZ(0);
};

int main() {
    cout << "starting the program" << endl;
    Thing thing;
    Wind wind;
    setVariables(wind, thing);
};
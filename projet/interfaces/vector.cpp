#include <iostream>

using namespace std;

class Vector {
    public:
        int getX() {
            return x;
        };
        int getY() {
            return y;
        };
        int getZ() {
            return z;
        };
        int getPower() {
            return power;
        };
        void setX(int value) {
            x = value;
        };
        void setY(int value) {
            y = value;
        };
        void setZ(int value) {
            z = value;
        };
        void setPower(int value) {
            power = value;
        };

    private:
        int x;
        int y;
        int z;
        int power;
};
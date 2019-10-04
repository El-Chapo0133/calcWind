#ifndef DEF_VECTOR
#define DEF_VECTOR

class Vector {
    public:
        Vector();
        int getX();
        int getY();
        int getZ();
        double getPower();
        void setX(int value);
        void setY(int value);
        void setZ(int value);
        void setPower(double value);
    private:
        int x;
        int y;
        int z;
        int power;
};

#endif // !DEF_VECTOR
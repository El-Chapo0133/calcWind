#ifndef DEF_WIND
#define DEF_WIND

#include "../interfaces/vector.h"

class Wind: public Vector {
    public:
        double calcPower(double airHeat, double ambiantHeat, double groundIncli);
        double calcRange();
    private:
        bool isRefChaleurUpperOne(double refChaleur);
        bool isIncliRight(double incli);
};

#endif // !DEF_WIND
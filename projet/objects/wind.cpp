#include "wind.h"
#include "math.h"
#include "../interfaces/vector.h"
#include "../interfaces/vector.cpp"

using namespace std;

bool Wind::isRefChaleurUpperOne(double refChaleur) {
    if (refChaleur >= 1)
        return true;
    else
        return false;
}
bool Wind::isIncliRight(double incli) {
    if (incli >= 0 && incli <= 100)
        return true;
    else
        return false;
}
/** @name : CalcPower
 * @desc : calc the power of the wind with the [km/h]
 * @param : value of the power in [km/h]
 * @return {double}
 * *************************************/
double Wind::calcPower(double airHeat, double ambiantHeat, double groundIncli) {
    /* variables */
    double rangeValue = calcRange();
    double incliPower;
    /* get m/s value */
    double t_refHeat = (airHeat / ambiantHeat);
    if (isRefChaleurUpperOne(t_refHeat)) {
        if (isIncliRight(groundIncli)) {
            /* calc parable */
            incliPower = pow(groundIncli, 2) / 100;
        } else {
            cout << "wrong incli" << endl;
        }
    } else {
        incliPower = 100;
    }
    if (incliPower == 0)
        incliPower = 1;
    rangeValue = (rangeValue * incliPower) / 100;

    return rangeValue;
};

/** @name calcRange
 * @desc calc range with x and y, in [m/s]
 * @return value in [m/s]
*/
double Wind::calcRange() {
    /* Pythagore */
    double x = pow(getX(), 2);
    double y = pow(getY(), 2);
    /* calc squared root */
    double result = sqrt((x + y));
    
    return result;
}
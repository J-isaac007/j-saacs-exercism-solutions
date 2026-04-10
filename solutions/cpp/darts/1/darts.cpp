#include "darts.h"
#include <cmath>
namespace darts {

// TODO: add your solution here
    int score(double x, double y) {
        double distanceFromOrigin{std::sqrt(x*x+y*y)};
        if (distanceFromOrigin <= 1) return 10;
        else if (distanceFromOrigin <= 5) return 5;
        else if (distanceFromOrigin <= 10) return 1;
        else return 0;
    }
}  // namespace darts

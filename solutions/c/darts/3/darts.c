#include "darts.h"
#include "math.h"
#include <stdint.h>

uint8_t score(coordinate_t p) {
    double x = fabs(p[0]);
    double y = fabs(p[1]);
    double r = sqrt(x * x + y * y);

    if (r > 10.0) return 0;
    if (r >  5.0) return 1;
    if (r >  1.0) return 5;
    return 10;
    
    
}
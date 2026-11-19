#include "space_age.h"



float age(planet_t planet, int64_t seconds){
    switch (planet) {
    case MERCURY:
        return seconds/(0.2408467 * 31557600);
    case VENUS:
        /* code */
        return seconds/(0.61519726 * 31557600);
    case EARTH:
        return seconds/(1.0 * 31557600);
    case MARS:
        return seconds/(1.8808158 * 31557600);
    case JUPITER:
        return seconds/(11.862615 * 31557600);
    case SATURN:
        return seconds/(29.447498 * 31557600);
    case URANUS:
        return seconds/(84.016846 * 31557600);
    case NEPTUNE:
        return seconds/(164.79132 * 31557600);
    default:
        return -1;
    }
}

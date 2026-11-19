#include "grains.h"


uint64_t square(uint8_t index) {
    if (index == 1) {
        return 1;
    } else {
        return square(index - 1) * 2;
    }
}
uint64_t total(void) {
    uint64_t result = 0;

    for(int i = 1; i < 65; i++){
        result += square(i);
    }

    return result;
}
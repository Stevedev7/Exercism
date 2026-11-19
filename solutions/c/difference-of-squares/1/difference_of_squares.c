#include "difference_of_squares.h"
#include "stdlib.h"

unsigned int sum_of_squares(unsigned int number) {
    unsigned int result = 0;
    for(int i = 1; i <= (int)number; i++) {
        result += (unsigned int)(i*i);
    }
    return result;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int result = 0;

    for(int i = 1; i <= (int)number; i++){
        result += i;
    }

    return result * result;
}
unsigned int difference_of_squares(unsigned int number) {
    return abs(((int)sum_of_squares(number) - (int)square_of_sum(number)));
}
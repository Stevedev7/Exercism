#include "dnd_character.h"


int modifier(int score) {
    int temp = score - 10;
    return (temp) % 2 == 0 
            ? temp / 2
            : (temp / 2) - 1;
}
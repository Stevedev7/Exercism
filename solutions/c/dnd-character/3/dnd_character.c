#include "dnd_character.h"
#include "stdlib.h"
#include "stdio.h"
#include "math.h"

int modifier(int score) {
    return (int)floor((score - 10)/ (float)2);
}

int ability(void){
    int smallest = 7, temp, score = 0;
    for(int i = 0; i < 4; i++){
        temp = (rand() % 6) + 1;
        smallest = temp < smallest ? temp : smallest;
        score += temp;
    }

    return score - smallest;
}

dnd_character_t make_dnd_character(void) {
    dnd_character_t charecter;

    charecter.strength = ability();
    charecter.dexterity = ability();
    charecter.constitution = ability();
    charecter.intelligence = ability();
    charecter.wisdom = ability();
    charecter.charisma = ability();
    charecter.hitpoints = 10 + modifier(charecter.constitution);

    return charecter;
}
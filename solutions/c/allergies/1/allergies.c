#include "allergies.h"

bool is_allergic_to(allergen_t allergen, int score){
    return (1 << allergen) & score;
}

allergen_list_t get_allergens(int score) {
    allergen_list_t list;
    list.count = 0;

    for(int i = 0; i < ALLERGEN_COUNT; i++){
        list.allergens[i] = is_allergic_to(i, score);
        list.count += list.allergens[i];
    }
    return list;
}

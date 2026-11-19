#include "resistor_color.h"

int color_code(resistor_band_t colour) {

    return colour;
}
resistor_band_t colour_codes[] = { BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE,  VIOLET, GREY,   WHITE };
resistor_band_t* colors(void) {
    return colour_codes;
}
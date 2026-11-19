#include "luhn.h"
#include "string.h"
#include <stdio.h>
bool luhn(const char *num) {
    int sum = 0;
    int offset = 0;
    int length = (int)strlen(num);
    int i = length - 1;

    for(; i >= 0; i--){
        if((int)num[i] <= 57 && (int)num[i] >= 48){
            if((length - i - offset) % 2 == 0 ){
                int temp = (int)(num[i] - '0') * 2;
                if (temp > 9) {
                    temp = 1 + (temp % 10);
                }
                sum += temp;
            } else {
                sum += (int)(num[i] - '0');
            }
        }
        else if((int)num[i] == 32){
            offset += 1;
        } else {
            return false;
        }

    }

    if(sum == 0 && (length - i - offset - 1)==1){
        return false;
    }

    return sum % 10 == 0;

}
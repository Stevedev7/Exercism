#include "pangram.h"
#include "stdio.h"

bool is_pangram(const char *sentence){
    bool found[26] = {false};
    if (sentence == NULL || sentence[0] == '\0')
        return false;

    for(int i = 0; sentence[i] != '\0'; i++) {
        char c = sentence[i];
        if(c >= 'a' && c <= 'z') found[c - 'a'] = true;
        else if (c >= 'A' && c <= 'Z') found[c - 'A'] = true;
    }
    
    for(int i = 0; i < 26; i++)
        if(!found[i]) return false;
    return true;
}
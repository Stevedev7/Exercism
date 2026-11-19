#include "rna_transcription.h"
#include <stdlib.h>
#include <string.h>

char *to_rna(const char *dna)
{
    char *rna = malloc(strlen(dna) + 1);
    if (rna == NULL)
        return NULL;

    for (size_t i = 0; (rna[i] = dna[i]) != '\0'; i++) {
        switch (rna[i]) {
            case 'G': rna[i] = 'C'; break;
            case 'C': rna[i] = 'G'; break;
            case 'T': rna[i] = 'A'; break;
            case 'A': rna[i] = 'U'; break;
        }
    }
    return rna;
}
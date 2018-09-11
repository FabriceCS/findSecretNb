#include <stdio.h>
#include <stdlib.h>
#include "entete.h"


int findSecretNb(int debut, int fin, int nGuest) {

    /*Find your secret number between debut and fin in nGuest times
    you help me by answering yes or no to the question on the screen */
    int i=0, halfValue, min=debut, max=fin, nSecret;
    char reponse;

    while (i < nGuest) {
        halfValue = (min+max)/2;
        printf("Est-il > %d - (o-n) ? \n", halfValue);
        scanf(" %c", &reponse);
        if (reponse == 'o') {
            min = halfValue+1;
        }
        else {
            max = halfValue;
        }
        printf("Min = %d, Max = %d \n", min, max);
        i++;
    }

    if (reponse == 'o') nSecret = max;
    else nSecret=min;
    printf("Le nombre secret c'est %d \n", nSecret);
    return nSecret;
}

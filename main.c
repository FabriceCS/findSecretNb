#include <stdio.h>
#include <stdlib.h>
#define nGuest 3

int main()
{
    /*I want to find your secret number between 1 and 10*/
    int i=0, halfValue, min=1, max=10, nSecret;
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

    if (reponse == 'n') nSecret = max;
    else nSecret=min;
    printf("Le nombre secret c'est %d \n", nSecret);
    return 0;
}

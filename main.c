#include <stdio.h>
#include <stdlib.h>
#include "entete.h"


int main()
{
    int unknownNb, debut=1, fin=10, nGuest=3;

    printf("Finding the secret number between %d and %d in %d guests \n", debut, fin, nGuest);
    unknownNb = findSecretNb(debut, fin, nGuest);
    printf("That number is : %d\n", unknownNb);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int what()
{


    int f50, f100, f200;

    printf("How many 50 forint you have?");

    scanf("%d", &f50);

    printf("How many 100 forint you have?");

    scanf("%d", &f100);

    printf("How many 200 forint you have?");

    scanf("%d", &f200);

    int sumoff50 = f50 * 50;

    int sumoff100 = f100 * 100;

    int sumoff200 = f200 * 200;

    int money = sumoff50 + sumoff100 + sumoff200;

    printf("You have %d\n", money);

    if (money > 2000){
        printf("You are rich.");
    }
    else{
        printf("Poor Baby.");
    }



    return 0;
}



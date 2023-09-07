#include <stdio.h>
#include <stdlib.h>

int why()
{


    double Height, Diameter;

    printf("What is the height?");

    scanf("%lf", &Height);

    printf("What is the diameter?");

    scanf("%lf", &Diameter);

    double AreaCylin = 2 * 3.14159265 * Diameter * (Diameter + Height);

    printf("Area of Cylinder is %lf\n", AreaCylin);

    double Paint = AreaCylin / 2;

    printf("You need %lf\n", Paint);

    return 0;
}


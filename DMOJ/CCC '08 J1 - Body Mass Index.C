#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Fisrt input weight second height in meters*/
    /*Output BMI*/

    int weight;
    float height;

    scanf("%d%f", &weight, &height);

    double bmi = weight / pow(height, 2);

    if (bmi > 25)
    {
        printf("Overweight");
    }
    else if (bmi < 18.5)
    {
        printf("Underweight");
    }
    else
    {
        printf("Normal weight");
    }

    return 0;
}
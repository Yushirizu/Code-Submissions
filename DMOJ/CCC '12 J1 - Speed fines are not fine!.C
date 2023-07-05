#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*km/h over the limit	Fine
    1 to 20	$100
    21 to 30	$270
    31 or above	$500*/

    /*Not speeding output Congratulations, you are within the speed limit!*/
    /*You are speeding and your fine is $F where F is the fee*/
    /*First input is the speed limit then the speed of the car*/

    int speedLimit, speedCar;

    scanf("%d%d", &speedLimit, &speedCar);

    if (speedLimit >= speedCar)
    {
        printf("Congratulations, you are within the speed limit!");
    }
    else if (speedCar - speedLimit >= 1 && speedCar - speedLimit <= 20)
    {
        printf("You are speeding and your fine is $100.");
    }
    else if (speedCar - speedLimit >= 21 && speedCar - speedLimit <= 30)
    {
        printf("You are speeding and your fine is $270.");
    }
    else if (speedCar - speedLimit >= 31)
    {
        printf("You are speeding and your fine is $500.");
    }
    else
    {
        printf("Congratulations, you are within the speed limit!");
    }

    return 0;
}
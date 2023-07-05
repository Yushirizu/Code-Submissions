#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Here are the three burger choices:
    1 – Cheeseburger (461 Calories)
    2 – Fish Burger (431 Calories)
    3 – Veggie Burger (420 Calories)
    4 – no burger
    Here are the three drink choices:
    1 – Soft Drink (130 Calories)
    2 – Orange Juice (160 Calories)
    3 – Milk (118 Calories)
    4 – no drink
    Here are the three side order choices:
    1 – Fries (100 Calories)
    2 – Baked Potato (57 Calories)
    3 – Chef Salad (70 Calories)
    4 – no side order
    Here are the three dessert choices:
    1 – Apple Pie (167 Calories)
    2 – Sundae (266 Calories)
    3 – Fruit Cup (75 Calories)
    4 – no dessert*/

    /*First burger than side than drink than dessert*/
    /*Program outpouts calories*/

    int burger[4] = {461, 431, 420, 0};
    int drink[4] = {130, 160, 118, 0};
    int side[4] = {100, 57, 70, 0};
    int dessert[4] = {167, 266, 75, 0};

    int burgerChoice, drinkChoice, sideChoice, dessertChoice;

    scanf("%d%d%d%d", &burgerChoice, &sideChoice, &drinkChoice, &dessertChoice);

    printf("Your total Calorie count is %d.", burger[burgerChoice - 1] + drink[drinkChoice - 1] + side[sideChoice - 1] + dessert[dessertChoice - 1]);

    return 0;
}
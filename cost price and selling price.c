#include <stdio.h>
#include <conio.h>

void main()
{
    float purchase;
    float sell;
    float percentage;
    printf("cost price\n");
    scanf("%f", &purchase);
    printf("selling price\n");
    scanf("%f", &sell);

    if (purchase > sell)
    {
        float loss;
        loss = purchase - sell;
        percentage = (loss / purchase) * 100;
        printf("shopkeeper sell his product in %f rupees loss and percentage of loss is %f", loss, percentage);
    }
    else if (sell > purchase)
    {
        float profit;
        profit = sell - purchase;
        percentage = (profit / sell) * 100;
        printf("shopkeeper sell his product in %f rupees profit and percentage of loss is %f", profit, percentage);
    }
    else
    {
        printf("no profit no loss");
    }
}

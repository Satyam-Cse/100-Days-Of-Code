//Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main () {
    float cost_price, selling_price, profit, loss , profit_percentage, loss_percentage;
    printf("enter cost price and selling price");
    scanf("%f %f",&cost_price,&selling_price);

    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        profit_percentage = (profit / cost_price) * 100;
        printf("profit: %.2f\n", profit);
        printf("profit percentage: %.2f%%\n", profit_percentage);
    }
    else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        loss_percentage = (loss / cost_price) * 100;
        printf("loss: %.2f\n", loss);
        printf("loss percentage: %.2f%%\n", loss_percentage);
    }
    else {
        printf("no profit no loss\n");
    }
    return 0;
}
        


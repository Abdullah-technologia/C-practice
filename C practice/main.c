#include <stdio.h>

int main(){
    char name[50] = "";
    float price = 0.0f;
    int amount = 0;
    char currency = '$';
    
    
    printf("What item would you like to buy?: ");
    fgets(name,sizeof(name),stdin);
    
    printf("What is the price for each?: ");
    scanf("%f", &price);
    
    printf("How many would you like?: ");
    scanf(" %d", &amount);

    float total = price * amount;

    printf("You have bought %d pizzas\n", amount);
    printf("The total is %c%.2f\n",currency, total);
    

    return 0;
}
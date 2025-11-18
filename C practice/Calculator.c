#include <stdio.h>

int main(){
    double fNumber = 0.0;
    double seNumber = 0.0;
    char symbol = '\0';
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &fNumber);

    printf("Enter the operator (+ - * /): ");
    scanf("%s", &symbol);

    printf("Enter the second number: ");
    scanf("%lf", &seNumber);

    switch(symbol){
        case '+':
            result = fNumber + seNumber;
            break;
        case '-':
            result = fNumber - seNumber;
            break;
        case '*':
            result = fNumber * seNumber;
            break;
        case '/':
            result = fNumber/seNumber;
            break;
        default:
            printf("Please select a valid option");

    }
    printf("Total is :%.2lf", result);
    return 0;
}
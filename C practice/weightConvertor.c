#include <stdio.h>

int main(){
    
    int option = 0;
    float weight = 0.0f;
    double conversion = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilogram to Pounds\n");
    printf("2. Pound to Kilogram\n");
    printf("Enter your choice 1 or 2: \n");
    scanf("%d", &option);
    
    if (option == 1){
        printf("Enter the weight in Kilogram: ");
        scanf("%f", &weight);
        conversion = weight * 2.20462;
    }
    else if (option == 2){
        printf("Enter the weight in Pound: ");
        scanf("%f", &weight);
        conversion = weight * 0.4535;
    }
    else {
        printf("enter a valid option!\n");
    }
    printf("%.2f Kilogram is equal to %.2lf pounds", weight, conversion);

    return 0;
}
#include <stdio.h>
#include <time.h>

int main(){
    const int n = 10000;
    const int measure = 1000;
    int list1[n];
    int list2[n];
    int list3[n];
    
    for (int i = 0; i<n; i++){
        list1[i] = 1;
        list2[i] = 1;
    }

    clock_t start = clock();

     for (int r = 0; r < measure; r++) {
        for (int i = 0; i < n; i++) {
            list3[i] = list1[i] + list2[i];
        }
    }
    clock_t end = clock();

    double difference = end - start;
    double elapsedTime = difference / CLOCKS_PER_SEC;

    printf("elapsed time is: %lf\n", elapsedTime);
    
    return 0;
}
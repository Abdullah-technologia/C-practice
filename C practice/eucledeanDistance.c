#include <stdio.h>
#include <math.h>

void eucDistance(int n,const double x[], const double y[], double d[n][n]){

    for(int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            double dx = x[i] - x[j];
            double dy = y[i] - y[j];

            d[i][j] = sqrt((pow(dx,2)) + (pow(dy,2)));

        }
    }
}

int main(){
    const int n = 5;
    double x[] = {2.0,3.0,3.0,1.0,-1.0};
    double y[] = {2.0,1.0,-3.0,4.0,-4.0};
    double d[n][n];
    

    eucDistance(n,x,y,d);

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            printf("%6.2f", d[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
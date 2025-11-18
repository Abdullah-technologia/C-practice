#include <stdio.h>
#include <string.h>

void ocurOfA(const char c[]) {
    static int count = 0;
    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] == 'a') {
            count++;
        }
        if (c[i] == 'q'){
            printf("the number of times 'a' showed up is: %d\n", count);

        }
    }
}
int main(){
    char string[100]= "\0";
    int i = 0;
    printf("enter a string of char: \n");
    
    do {
        fgets(string,sizeof(string),stdin);
        string[strlen(string)-1] = '\0';
        ocurOfA(string);
        i++;
    } while (i<=sizeof(string));
}
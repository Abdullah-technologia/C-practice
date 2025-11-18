#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} complex;

complex addByVal(complex a, complex b){
    complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c;
}

void addByReference(complex *a, complex *b, complex*c){
    (*c).real = (*a).real + (*b).real;
    (*c).imaginary = (*a).imaginary + (*b).imaginary;
}

int main(){
    complex c1;
    printf("enter the complex number in order(real part then imaginary part): \n");
    scanf("%lf %lf", &c1.real,&c1.imaginary);

    complex c2;
    printf("enter the complex number in order(real part then imaginary part): \n");
    scanf("%lf %lf", &c2.real,&c2.imaginary);

    complex value = addByVal(c1,c2);
    printf("By Value : %.2f%.2f\n", c1.real,c1.imaginary);

    complex reference;
    addByReference(&c1, &c2, &reference);
    printf("By reference: %.2f%.2f\n", reference.real,reference.imaginary);
    
    
    return 0;

}
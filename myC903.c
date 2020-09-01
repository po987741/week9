#include<stdio.h>
int main(){
    int testInterger;
    float num1;
    double num2;
    printf("Enter an integer: ");
    scanf("%d", &testInterger);
    printf("Enter an Float: ");
    scanf("%f", &num1);
    printf("Enter an Double: ");
    scanf("%lf", &num2);

    printf("Number is %d\n", testInterger);
    printf("Float is %f\n", num1);
    printf("Double is %lf\n", num2);
}
/*
Promgrammimg: Charter I/O
BY : Po wongwat
*/
#include<stdio.h>
int main(){
    char chr;
    int a;
    printf("Enter a charter: ");
    scanf("%c", &chr);

    printf("Enter a int: ");
    scanf("%d", &a);
    
    printf("------------------\n");
    printf("You Enter charter %c\n", chr);
    printf("ASCII value is %d\n",chr);
    printf("banarry value is %d",a);


    return 0;
}
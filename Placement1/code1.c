#include<stdio.h>
int main(){
    int a,b;
    printf("\nEnter value for a:");
    scanf("%d",&a);
    printf("\nEnter value for b");
    scanf("%d",&b);
    printf("Values before swapping a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a=%d b=%d",a,b);
    return 0;
}
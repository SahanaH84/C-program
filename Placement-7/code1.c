#include <stdio.h>
int main() {
    void swap_by_value(int a,int b){
        int temp;
        temp=a;
        a=b;
        b=temp;
        printf("Swapping using call by value");
        printf("\nA:%d",a);
        printf("\nB:%d",b);
    }
    void swap_by_ref(int* a,int* b){
        int* temp;
        temp=*a;
        *a=*b;
        *b=temp;
        printf("\nSwapping using call by reference");
        printf("\nA:%d",*a);
        printf("\nB:%d",*b);
    }
    int a,b;
    printf("Enter the values to swap:");
    printf("\nA:");
    scanf("%d",&a);
    printf("\nB:");
    scanf("%d",&b);
    swap_by_value(a,b);
    swap_by_ref(&a,&b);
    return 0;
}
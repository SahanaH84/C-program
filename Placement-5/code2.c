// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int size,i,des,n=0;
    printf("Enter the size of digit:");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        printf("Enter digit from left to right:");
        scanf("%d",&arr[i]);
    }
    printf("[");
    for(i=0;i<size-1;i++){
        printf("%d,",arr[i]);
    }
    printf("%d]",arr[size-1]);
    des=arr[0];
    i=0;
    while(i<size){
        if(i==size-1){
            n=1;
            break;
        }
        else{
            i+=des;
            des=arr[i];
        }
    }
    if(n==1){
        printf("\nTrue");
    }
    else{
        printf("\nFalse");
    }
    return 0;
}
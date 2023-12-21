#include <stdio.h>
int main() {
    int num;
    printf("Enter a value:");
    scanf("%d",&num);
    int year=num/365;
    int week1=year*52;
    int week2=num/7;
    int rem_week=(num%365)/7;
    int rem_days=num%365;
    printf("Number of complete years in given value: %d\n", year);
    printf("Number of weeks for complete years: %d\n", week1);
    printf("Number of complete weeks in given value: %d\n", week2);
    printf("Number of remaining weeks after complete years: %d\n", rem_week);
    printf("Number of remaining Days after complete years: %d", rem_days);
}
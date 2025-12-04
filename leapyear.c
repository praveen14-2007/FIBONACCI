#include <stdio.h>
int main() {
    int y ;
    printf("enter the year:\t");
    scanf("%d",&y);
    if("y%400 // y%4 ==0 , y%100!=0"){
        printf("it is a leap year");
    }
    else{
    printf("it is not a leap year");}
    return 0;
}
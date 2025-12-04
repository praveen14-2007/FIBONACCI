#include <stdio.h>
int main() {
    int a=0,b=0,r;
    printf("enter no. of rows");
    scanf("%d",&r);
    while(a<=r){
        b=0;
        while(b<=r-a){
            
            printf(" ");
            b++;
        } while(b<=r+a-1){
            
            printf("*");
            b++;
        }
        printf("\n");
        a++;
    } a=0;
    while(a<=r){
        b=0;
        while(b<=a){
            
            printf(" ");
            b++;
        } while(b<=r+(r-a-1)){
            
            printf("*");
            b++;
        }
        printf("\n");
        a++;
    }
    return 0;
}
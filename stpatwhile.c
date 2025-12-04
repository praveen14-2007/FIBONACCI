#include <stdio.h>
int main() {
    int a=0,b=0,r;
    scanf("%d",&r);
    // while(a<r){
    //     b=0;
    //     while(b<=a){
    //         printf("* ");
    //         b++;
    //     } 
    // printf("\n");
    //     a++;
    for(a;a<r;a++){
        for(b=0;b<=a;b++){
            printf("* ");
        }printf("\n");
    }  
     return 0;
}
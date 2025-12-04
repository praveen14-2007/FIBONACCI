#include <stdio.h>
int main() {
    int a,b;
    printf("enter the no of stars each row : ");
    scanf("%d",&a);
    printf("if you want rectangle(0) or sqaure(1) enter the respective no :");
    scanf("%d",&b);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            printf("*");
            if(b==1){printf(" ");}
        }printf("\n");
    }
    return 0;
}
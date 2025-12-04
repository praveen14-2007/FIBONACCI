#include <stdio.h>
int main() {
    int a;
    printf("enter the table required : ");
    scanf("%d",&a);
    for(int i=20;i>=0;i--){
        printf("%d*%d=%d\n",a,i,a*i);
    }
    return 0;
}
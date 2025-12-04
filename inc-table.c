#include <stdio.h>
int main() {
    int a;
    printf("enter the tdable to be printed:");
    scanf("%d",&a);
    for(int i=1;i<=20;i++ ){

        printf("%d\n",a*i);
    }
    return 0;
}
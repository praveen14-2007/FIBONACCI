#include <stdio.h>
int main() {
    char A[100] ;
    printf("enter your name:");
    fgets(A,100,stdin);
    printf("hello!!%s",A);
    return 0;
}
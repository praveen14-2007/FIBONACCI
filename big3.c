#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    (a>c) ? ((a<b) ? printf("b") : printf("a")) : ((b<c) ? printf("c") : printf("b"));
    return 0;
}
    #include <stdio.h>
int main() {
    int d ,m ,y ,s ,LN ;
    printf("enter d-m-y values");
    scanf("%d%d%d",&d,&m,&y);
    s = d +m +y ;
    LN = s %9 ;
    printf("LUCKY NUMBER = %d",LN);
    return 0;
     
}
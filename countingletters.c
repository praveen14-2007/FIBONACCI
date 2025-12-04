#include <stdio.h>

int main() {
   // char t[] = "H1 HOW ARE";
   char c;
   scanf("%s",&c);
   char t[] = c;
    int a =0 , b =0 ;
    while(t[a] !='\0'){
        if(t[a]>='A'&&t[a]<='Z'){
            b++;
        }
        a++;

    }
    printf("the no of cpital letters are : %d\n",b);
    return 0;
}
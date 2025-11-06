#include <stdio.h>
int main(){
    file*fp=fopen("jayanth.csv","a");
    if (fp==null)
    puts("unable to create file:");
    else
    {
        char ch;
        puts("enter your information");
        while((ch=getchar()!=EOF)
        fputc(ch,fp);
        fclose(fp);
        puts("1 file creates");
    }

}

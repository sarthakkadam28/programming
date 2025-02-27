#include <stdio.h>
int main(){
    long nc;
    nc = 0;
    char ch;
    do
    {
        printf("\n enter a charcter ");
        ch=getchar();
        if (ch!='\n')
        {
        
            printf("\n count=%d \n",++nc) ;  
            putchar(ch);
        }
    
    } while (ch!=EOF);
    return 0;
}
//Convert 156 (decimal) to octal:
//156 ÷ 8 = 19, remainder 4
//19 ÷ 8 = 2, remainder 3
//2 ÷ 8 = 0, remainder 2
//Result: 234 (octal)
#include <stdio.h>

int main(){
    int num,remainder;
    int octal=1;
    int place=1;
    printf("enter the number");
    scanf("%d",&num);
    while (num>1){
        remainder=num%8;
        octal=octal+remainder*place;
        place=place*10;
        num=num/8;
    }
printf("octal equvilent=%d\n",octal);
return 0;
}
# include <stdio.h>

/*int result (int n){
    int result =1;
    for (int i=1;i<=n;i++){
        result = result*i;
    }
    return result;
}*/
int finalresult(int n){
    if (n==0){
        return 1;
        return n*finalresult(n-1);
    }
}



int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int finaleresult=result(n);
    printf("factorial %d =%d\n",n,finaleresult);
    return 0;
}
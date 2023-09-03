#include<stdio.h>
int fact(int n);
int fact(int n){
    if (n==1)
    {
    
        return 1;
        
    }else{
        return(n*fact(n-1));

    }


}
int main(){
    // actual parameter
    int n;
    int f;
    printf("enter any number to find the factorial\n");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial is =%d",f);
    }
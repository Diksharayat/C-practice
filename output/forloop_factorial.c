#include<stdio.h>
int main(){
    int i,n,fac;
    fac=1;
     printf("enter any number to find factorial\n");
       scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("%d\n",i);
      fac=fac*i;
    }
    printf("factorial is%d\n",fac);
}
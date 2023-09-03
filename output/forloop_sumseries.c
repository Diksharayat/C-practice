#include<stdio.h>
int main(){
    int i,n,sum;
    sum =0;
    printf("enter any number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("%d\n",i);
      sum=(sum+i);
    }
    printf("total sum is%d",sum);
}
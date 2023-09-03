#include<stdio.h>
int main(){
    int i,a,r;
    i=1;
    printf("enter any number to display table\n");
    scanf("%d",&a);
     printf("enter any range to display table\n");
    scanf("%d",&r);
    do{
printf("%d\n",i*r);
i++;

    }while(i<=r);
}
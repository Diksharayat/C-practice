#include<stdio.h>
int main(){
    int i;
    int a[5];

    printf("enter any 5 numbers\n");
    for ( i = 0; i <=5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the five numbers are\n");
    for ( i = 0; i < 5; i++)
    {
       printf("%d",a[i]);
    }
    
    
}
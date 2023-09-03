#include<stdio.h>
int main(){
    int i;
    char a[5];
     printf("enter any 5 fruits\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%c",&a[i]);
    }
    for ( i = 0; i <5; i++)
    {
        printf("%c",a[i]);
    }
    
    
}
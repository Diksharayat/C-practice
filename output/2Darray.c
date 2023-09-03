#include<stdio.h>
int main(){
    int i,j;
    int a[2][2]={{1,1},{2,1}};
    printf("print the matrix\n");
    for (i = 0; i <2; i++)
    {
       for (j = 0; j < 2; j++)
       {
        printf("%d\t",a[i][j]);
       }
       printf("\n");
       
    }
    
}
#include<stdio.h>
int Sum(int a, int b);
int Sum(int a,int b){
int c;
c=a+b;
return (c);
}
int main(){
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=Sum(a,b);
     printf("%d",c);
     
}
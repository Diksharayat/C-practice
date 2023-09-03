#include<stdio.h>
void Sum(int a, int b);
void Sum(int a,int b){
    int c;
    c=a+b;
    printf("%d",c);
}
int main(){
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    Sum(a,b);
   
}
#include<stdio.h>
void Sum(void);
void Sum(void){
    int a,b,c;
    printf("\nenter two numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is=%d",c);
}
int main(){
    Sum();
    Sum();
    // we can use function again and again
}
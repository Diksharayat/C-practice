#include<stdio.h>
int main()
{
    int a;
    float b,d;
    int c;
    printf("enter the principle,rate,time\n");
    scanf("%d%f%d",&a,&b,&c);
    d=(a+b+c)/100;
    printf("Interest is %f",d);
    return 0;

}
#include<stdio.h>
int main(){
    int a,b,c;
    float d;
    printf("enter three numbers to find average");
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c)/3;
    printf("average is %f",d);
    return 0;

}
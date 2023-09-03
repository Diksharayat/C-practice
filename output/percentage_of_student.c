#include<stdio.h>
int main(){
    int a,b,c,d,e;
    float f;
    printf("enter the five numbers to find the percentage\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    f=(a+b+c+d+e)*100/500;
    printf("percentage is %f",f);
            }
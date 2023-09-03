#include<stdio.h>
void average(int a,int b,int c);
void average(int a,int b,int c){
    int d;
    d=(a+b+c)/3;
    printf("average is%d",d);

}
int main(){
    int a,b,c;
    printf("enter three numbers to find average\n");
    scanf("%d%d%d",&a,&b,&c);
    average(a,b,c);
}
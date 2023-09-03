#include<stdio.h>
int main(){
    long a;
    double dis,net;
    printf("enter your payable amount\n");
    scanf("%ld",&a);
    if(a>10000){
      dis=(a*15)/100;
      net=(double)a-dis;
      printf("you have to pay with 15 percent discount= %lf\n",net);
   }else{
        printf("sorry! no discount you have to pay full amount %ld",a);
    }

}
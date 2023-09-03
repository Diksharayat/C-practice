#include<stdio.h>
int main(){
    int a;
    printf("enter keys from 1 to 7 to print days of the week\n");
    scanf("%d",&a);
    if(a==1){
        printf("sunday");

    }else if (a==2)
    {
        printf("monday");
    }else if(a==3){
        printf("tuesday");
    }else if(a==4){
        printf("wednesday");
    }else if(a==5){
        printf("thursday");
    }else if(a==6){
        printf("friday");
    }else {
        printf("saturday");
    }
    
}
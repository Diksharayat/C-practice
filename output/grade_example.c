#include<stdio.h>
int main(){
    int a;
    printf("enter your percentage to get your grades\n");
    scanf("%d",&a);
    if((a>90)&&(a<=100)){
        printf("grade=A+");
    }else if((a>80)&&(a<=90)){
        printf("grade=A");
    }else if((a>70)&&(a<=80)){
        printf("grade=B+");
    }else if((a>60)&&(a<=70)){
        printf("grade=B");
    }else if((a>50)&&(a<=60)){
        printf("grade=C+");
    }else if((a>40)&&(a<=50)){
        printf("grade=C");
    }else {
        printf("fail");
    }

}
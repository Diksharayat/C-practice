#include<stdio.h>
int main(){
    int i;
    printf("enter number from 1 to 7\n");
    scanf("%d",&i);
    switch(i){
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;
         case 3:
        printf("tuesday");
        break;
         case 4:
        printf("wednesday");
        break;
         case 5:
        printf("thursday");
        break;
         case 6:
        printf("friday");
        break;
         default:
        printf("saturday");
        break;
    }
}
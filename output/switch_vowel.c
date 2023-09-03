#include<stdio.h>
int main(){
    char i;
    printf("enter alphabets to check if it is vowel or not\n");
    scanf("%c",&i);
    switch(i){
        case 'a':
        case 'A':
        printf("it is vowel");
        break;
        case 'e':
        case 'E':
        printf("it is vowel");
        break;
        case 'i':
        case 'I':
        printf("it is vowel");
        break;
        case 'o':
        case 'O':
        printf("it is vowel");
        break;
        case 'u':
        case 'U':
        printf("it is vowel");
        break;
        default:
        printf("it is not vowel");
    }
}
#include<stdio.h>
int main(){
    int a  ;
    scanf(" %d\n" , &a); //scanf only need format no prompt or text required
    printf("The value of a is %d\n", a);
    int b =  a%97 ;
    printf("The value of b is %d", b);
    return 0;
}
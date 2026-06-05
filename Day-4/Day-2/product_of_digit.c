#include<stdio.h>
int main(){
    int num , product = 1,digit;
    printf("Enter the number:");
    scanf("%d",&num);
    
    while(num!=0){
        digit = num%10;
        product =  product*digit;
        num = num/10;

    }
    printf("product of digits is =%d",product);
    return 0;
}
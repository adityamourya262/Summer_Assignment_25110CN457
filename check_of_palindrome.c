#include<stdio.h>
int main(){
    int num, reverse = 0 ,digit, num1;

    printf("Enter the number :");
    scanf("%d",&num);
         num1 = num;

    while(num!=0){
        digit = num%10;
        reverse = reverse*10 + digit;
        num = num/10;
    
    }
    if(reverse == num1){
        printf("number is palindrome");
    }else {
    
        printf("number is not palindrome");
    }
       return 0;
}
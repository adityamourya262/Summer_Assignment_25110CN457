#include<stdio.h>
int main (){
    int n, reverse = 0,a;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n!=0){
        a = n%10;
        reverse = reverse*10 + a;
        n = n/10; 
    }
    printf("reverse number is =%d",reverse);
    return 0 ;
}
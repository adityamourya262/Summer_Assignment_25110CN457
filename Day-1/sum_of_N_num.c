#include <stdio.h>

int main() {
    // Write C code here
    int n, sum = 0,i;
    printf("Enter the numbers :");
    scanf("%d",&n);
    for(i=1;i<=n; i++)
    sum = sum + i;
    {
    printf("The sun of N number is %d\n",sum);
    }

    return 0;
}
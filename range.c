#include<stdio.h>
    int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int res=(a>=-4&&a<=6);
    printf("%d is in between -4 and 6 is %d",a,res);
    return 0;
}
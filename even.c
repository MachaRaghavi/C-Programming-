#include<stdio.h>
int main(){
int a;
printf("Enter a number:");
scanf("%d",&a);
int res=(a%2==0);
printf("%d is the even number is %d",a,res);
return 0;
}	
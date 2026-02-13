#include<stdio.h>
int main(){
char a;
printf("Enter a character:");
scanf("%c",&a);
int res=(a>='A'&&a<='Z');
printf("%c is the upper case letter is %d",a,res);
return 0;}
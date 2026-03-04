#include<stdio.h>
int main(){
int a=2;
int b=3;
int c=(a++)+(++b)*(a++)/(b--)-(--a);
printf("a=%d \t b=%d \t c=%d",a,b,c);
return 0;
}
#include<stdio.h>
int main(){
int n;
printf("Enter the value of n:\n");
scanf("%d",&n);
int sum=0;
for(int i=1;i<=(n-1);i++)
{
sum=sum+i;
}
printf("Total number of handshakes done are:%d",sum);
return 0;
}
#include<stdio.h>
int main(){
int you;
int date;
printf("Enter the stylish of you:\n");
scanf("%d",&you);
printf("Enter the stylish of your date:\n");
scanf("%d",&date);
if(you>=8 || date>=8)
{
printf("2");}
else if(you<=2 || date<=2)
{
printf("0");}
else{
printf("1");
}
return 0;
}

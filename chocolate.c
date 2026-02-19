#include<stdio.h>
int main(){
int small;
int big;
int goal;
printf("Enter number of small bars:\n ");
scanf("%d",&small);
printf("Enter number of big bars:\n ");
scanf("%d",&big);
printf("Enter number of kilos of goal:\n ");
scanf("%d",&goal);
int req=goal/5;
if(req<=big)
{ int rem=goal-req*5;
if(rem<=small)
{printf("required number of small balls:%d\n",rem);
}
else{
printf("false");}
} else
{
int rem=goal-big*5;
if(rem<=small)
{
printf("Required number of small bars:%d\n",rem);}
else{
printf("false");}
}
   return 0;
}
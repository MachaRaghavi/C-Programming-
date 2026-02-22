#include<stdio.h>
int main(){
int small;
int big;
int goal;
printf("Enter number of small bricks:\n ");
scanf("%d",&small);
printf("Enter number of large bricks:\n ");
scanf("%d",&big);
printf("Enter number of inches of goal:\n ");
scanf("%d",&goal);
int req=goal/5;
if(req<=big)
{ int rem=goal-req*5;
if(rem<=small)
{printf("true");
}
else{
printf("false");}
} else
{
int rem=goal-big*5;
if(rem<=small)
{
printf("true");}
else{
printf("false");}
}
   return 0;
}
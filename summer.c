#include<stdio.h>
int main(){
int Temperature,boolean;
printf("Enter number of Temperature:");
scanf("%d",&Temperature);
printf("Enter 1 for summer \t enter 0 for not a summer");
scanf("%d",&boolean);
if(boolean){
if(Temperature>=60&&Temperature<=100)
{ printf("true");
}
else{
printf("false");}
}
else{
if(Temperature>=60&&Temperature<=90)
{
printf("true");}
else{
printf("false");
}
}
return 0;
}
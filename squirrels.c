#include<stdio.h>
int main(){
int cigars,weekend;
printf("Enter number of cigars:");
scanf("%d",&cigars);
printf("Enter 1 for weekend \t enter 0 for week days");
scanf("%d",&weekend);
if(weekend){
if(cigars>=40)
{ printf("true");
}
else{
printf("false");}
}
else{
if(cigars>=40&&cigars<=60)
{
printf("true");}
else{
printf("false");
}
}
return 0;
}
#include <stdio.h>
typedef struct{
char name1[10];
char name2[20];
}faculty;

typedef struct{
int year;
char Branch[10];
faculty dealed;
}students;

int main(){
faculty person={"sudha","prasad"};
students s={2026,"CSE-AIML",person};
printf("Students of:%d (%s),Dealed by:%s %s\n",s.year,s.Branch,s.dealed.name1,s.dealed.name2);
return 0;
}

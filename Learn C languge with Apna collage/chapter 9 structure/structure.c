#include<stdio.h>
#include<string.h>

 struct student 
    {
         int roll;
         float cgpa;
         char name[100];
    };


int main(){
    struct student s1;

    s1.roll =1664;
    s1.cgpa = 9.2;
    // s1.name ="Bibek";
    strcpy(s1.name,"Bibek"); 
      
      printf("student name =%s\n" ,s1.name);
      printf("student roll no = %d\n",s1.roll);
      printf("student cgpa = %f\n",s1.cgpa);

   return 0;
}
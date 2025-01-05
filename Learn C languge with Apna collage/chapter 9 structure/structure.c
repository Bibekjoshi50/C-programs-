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
    strcpy(s1.name,"Bibek")
    

   return 0;
}
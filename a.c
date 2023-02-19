#include <stdio.h>
#include <math.h>
#include <string.h>

double gpa(double gpa_credits, double gpa_points)
{
   double final_gpa= gpa_points/gpa_credits;
   return final_gpa;
}


int main()
{
   int sub_num;
   printf("Enter the number of courses you have");
   scanf("%d", &sub_num);
   char course_name[25];
   
   char grade[10];
   double points=0,total_points=0, credits,total_credits=0, A_plus=4.0, A=4.0, B_plus=3.5, B=3.0, C_plus=2.5, C=2.0, D_plus=1.5, D=1.0, F=0.0;
   printf("Enter the \n course name \t grades \t credits \n");
   for(int i=0;i<sub_num;i++)
   {
       
       scanf("%s", course_name);
       scanf("%s", grade);
       scanf("%lf", &credits);
        if( !strcmp(grade,"a") || !strcmp(grade,"A"))
        {
            points= credits * A;
        }
        else if(!strcmp(grade,"a+") || !strcmp(grade,"A+"))
        {
             points= credits * A_plus;
        }
        else if(!strcmp(grade,"b") || !strcmp(grade,"B"))
        {
             points= credits * B;
        }
        else if(!strcmp(grade,"b+") || !strcmp(grade,"B+"))
        {
             points= credits * B_plus;
        }
        else if(!strcmp(grade,"c") || !strcmp(grade,"C"))
        {
             points= credits * C;
        }
        else if(!strcmp(grade,"c+") || !strcmp(grade,"C+"))
        {
             points= credits * C_plus;
        }
        else if(!strcmp(grade,"d") || !strcmp(grade,"D"))
        {
             points= credits * D;
        }
        else if(!strcmp(grade,"d+") || !strcmp(grade,"D+"))
        {
             points= credits * D_plus;
        }
        else if(!strcmp(grade,"f") || !strcmp(grade,"F"))
        {
             points= credits * F;
        }
        else
        {
            printf("Wrong input");
        }
        total_credits += credits;
        total_points += points;
       
   }
   double p=gpa(total_credits,total_points);
   
   printf("Your final GPA is %lf",p);
   return 0;
}
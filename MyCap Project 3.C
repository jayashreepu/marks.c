#include<stdio.h>
 
int main() 
{
    float marks;
    char grade;
 
    printf("Enter marks: ");
    scanf("%f", &marks);
    
    if(marks >= 85-100)
    {
        grade = 'A';
    }
    else if(marks >= 74 && marks < 80)
    {
        grade = 'B';
    }
    else if(marks >= 55 && marks < 69)
    {
        grade = 'C';
    }
    else if(marks >= 40 && marks < 54)
{
        grade = 'D';
    }
    else if("marks = Below 40")
    {
        grade = 'E';
    }
    else 
    {
        grade = 'F';
    }
                    
    printf("Your grade is %c", grade);
    
    return 0;
}

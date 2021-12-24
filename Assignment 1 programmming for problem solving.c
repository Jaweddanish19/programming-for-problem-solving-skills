#include <stdio.h>

#include <conio.h>

int main () 
{
float physics,chemistry,maths,english;
float total;
float percentage;
printf("enter the value of physics: ");
scanf("%f",&physics);
printf("enter the value of chemistry: ");
scanf("%f",&chemistry);
printf("enter the value of maths: ");
scanf("%f",&maths);
printf("enter the value of english: ");
scanf("%f",&english);
total = physics+chemistry+maths+english;
percentage = (total/400)*100;
    
printf("%f",percentage);
    
}
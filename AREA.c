#include<stdio.h>
#include<conio.h>
void main()
{
    //area of circle
    float radius=4;
    float area_of_circle=3.14*radius*radius;
    printf("%f\n",area_of_circle);


//area of rectangle
int length=5;
int breadth=2;
int area_of_rectangle=length*breadth;
printf ("%d\n",area_of_rectangle);


//area of triangle
int base=5;
int height=2;
int area_of_triangle=(base*height)/2;
printf ("%d\n",area_of_triangle);

//area of trapezium
float sum_of_parallel_sides = 5;
float distance_between_paralle_sides =5;
float area_of_trapezium =(sum_of_parallel_sides*distance_between_paralle_sides)/2;
printf ("%f\n",area_of_trapezium);

 
}
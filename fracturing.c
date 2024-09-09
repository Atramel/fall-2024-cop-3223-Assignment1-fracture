// Alec Tramel
//9/8/2024
//Cop3223 Fall24

// The purpose of this code is to successfully use functions

#include <stdio.h>
#include <math.h>


// Block for calculating distance
double calculateDistance()
{
   double point_one_x=0;
   double point_one_y=0;
   double point_two_x=0;
   double point_two_y=0;
   printf("Please enter x and y values for point#1\n");
   scanf("%lf%lf",&point_one_x,&point_one_y);
   printf("Please enter x and y values for point#2\n");
   scanf("%lf%lf", &point_two_x,&point_two_y);
   printf(" Point #1 entered: x1=%lf and y1=%lf",point_one_x,point_one_y);
   printf("\n Point #2 entered: x2=%lf and y2=%lf",point_two_x,point_two_y);
   
   double distance_x=0;
   double distance_y=0;
   double distance=0;
   distance_x=point_two_x-point_one_x;
   distance_y=point_two_y-point_one_y;
   distance=distance_y/distance_x;

   printf("\nThe distance between the points is %lf",distance);
   return distance;
}

// block for calculating perimeter
double calculatePerimeter()
{
   double point_one_x=0;
   double point_one_y=0;
   double point_two_x=0;
   double point_two_y=0;
   printf("\nPlease enter x and y values for point#1\n");
   scanf("%lf%lf",&point_one_x,&point_one_y);
   printf("Please enter x and y values for point#2\n");
   scanf("%lf%lf", &point_two_x,&point_two_y);
   printf(" Point #1 entered: x1=%lf and y1=%lf",point_one_x,point_one_y);
   printf("\n Point #2 entered: x2=%lf and y2=%lf",point_two_x,point_two_y);

   double perimeter=0;
   double height=0;
   height=point_two_y-point_one_y;
   double width=0;
   width=point_two_x-point_one_x;
   perimeter=2*height+2*width;
   
   printf("\nThe perimeter of the city is %lf",perimeter);


}

// block for calculating height
double calculateHeight()
{
   double point_one_x=0;
   double point_one_y=0;
   double point_two_x=0;
   double point_two_y=0;
   printf("\nPlease enter x and y values for point#1\n");
   scanf("%lf%lf",&point_one_x,&point_one_y);
   printf("Please enter x and y values for point#2\n");
   scanf("%lf%lf", &point_two_x,&point_two_y);
   printf(" Point #1 entered: x1=%lf and y1=%lf",point_one_x,point_one_y);
   printf("\n Point #2 entered: x2=%lf and y2=%lf",point_two_x,point_two_y);

   double height=0;
   height=point_two_y-point_one_y;
   printf("\nThe height of the city encompassed by your request is %lf",height);

   double difficulty=2;

   return difficulty;

}

// block for calculating width

double calculateWidth()
{
   double point_one_x=0;
   double point_one_y=0;
   double point_two_x=0;
   double point_two_y=0;
   printf("\nPlease enter x and y values for point#1\n");
   scanf("%lf%lf",&point_one_x,&point_one_y);
   printf("Please enter x and y values for point#2\n");
   scanf("%lf%lf", &point_two_x,&point_two_y);
   printf(" Point #1 entered: x1=%lf and y1=%lf",point_one_x,point_one_y);
   printf("\n Point #2 entered: x2=%lf and y2=%lf",point_two_x,point_two_y);

   double width=0;
   width=point_two_x-point_one_x;
   printf("\nThe height of the city encompassed by your request is %lf",width);

   double difficulty=2;

   return difficulty;

}

// block for calculating area
double calculateArea()
{
   double point_one_x=0;
   double point_one_y=0;
   double point_two_x=0;
   double point_two_y=0;
   printf("\nPlease enter x and y values for point#1\n");
   scanf("%lf%lf",&point_one_x,&point_one_y);
   printf("Please enter x and y values for point#2\n");
   scanf("%lf%lf", &point_two_x,&point_two_y);
   printf(" Point #1 entered: x1=%lf and y1=%lf",point_one_x,point_one_y);
   printf("\n Point #2 entered: x2=%lf and y2=%lf",point_two_x,point_two_y);

   double area=0;
   double height=0;
   height=point_two_y-point_one_y;
   double width=0;
   width=point_two_x-point_one_x;
   area=height*width;
   
   printf("\nThe area of the city is %lf",area);
}
// Failed function to try and alleviate some of the redundancy, failed because other functions would want more variable than were present to be named between the functions.
//double askForUserInPut()
//{
  // double point_one_x=0;
   //double point_one_y=0;
   //double point_two_x=0;
  // double point_two_y=0;
   //printf("Please enter x and y values for point#1\n");
   //scanf("%lf%lf",&point_one_x,&point_one_y);
   //printf("Please enter x and y values for point#2\n");
   //scanf("%lf%lf", &point_two_x,&point_two_y);
   //printf(" Point #1 entered: x1=%lf and y1=%lf",point_one_x,point_one_y);
   //printf("\n Point #2 entered: x2=%lf and y2=%lf",point_two_x,point_two_y);
   //return point_one_x,point_one_y,point_two_x,point_two_y;
//}
int main(int argc, char **argv) 
{
   //askForUserInput();
   calculateDistance();
   calculateHeight();
   calculateWidth();
   calculatePerimeter();
   calculateArea();

    
   return 0;
}


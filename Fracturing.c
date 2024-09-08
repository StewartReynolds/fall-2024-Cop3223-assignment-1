// Stewart_Reynolds Fracture Assignment 1
// NID 5295783

#include <stdio.h>
#include <math.h>
//Updated define PI via assignment 1 pdf
#define PI 3.14159
//Using double for values of certain parameters
double calculatedistance();
double calculateperimeter();
double calculatearea();
double calculatewidth();
double calculateheight();
double askforuserInput(const char* prompt);

//main function writing code to call the functions above
int main(int arg, char **argv){
    calculatedistance();
    calculateperimeter();
    calculatearea();
    calculatewidth();
    calculateheight();

    return 0;
}
//Calculating the distance between the points starting with x's then y's
//revising with helper function to follow DRY
double askforuserInput(const char* prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    
    return value;
}
double calculatedistance() {
    double x1 = askforuserInput("Enter x1: ");
    double x2 = askforuserInput("Enter x2: ");
    double y1 = askforuserInput("Enter y1: ");
    double y2 = askforuserInput("Enter y2: ");
    //calculating the distance
    double distance = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));

    //print statements
    printf("Point #1 entered: x1 = %lf; y1= %lf", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2= %lf", x2, y2);
    printf(" The distance between the two points is: %f\n", distance);

    // this one was very difficult 4.0-5.0 i relaized i had to use a helper function to not repeat myself
    return distance; 
}
//Perimeter
double calculateperimeter() {
    double x1 = askforuserInput("Enter x1: ");
    double x2 = askforuserInput("Enter x2: ");
    double y1 = askforuserInput("Enter y1: ");
    double y2 = askforuserInput("Enter y2: ");
    
    double distance = calculatedistance();
    //calculate perimeter we are using circumferance of a cirlce
    double perimeter = 2 * PI * distance;
    //Print statements
    printf("Point #1 entered; x1 = %f; y1 = %f\n", x1, y1);
    printf("Point #2 entered; x2 = %f; y2 = %f\n", x2, y2);
    printf(" The perimeter of the city encompassed by your request is:%f\n", perimeter);

//this one was a little easir for sure than distance
    return 4.0;
}
// Area
double calculatearea() {
    double x1 = askforuserInput("Enter x1: ");
    double x2 = askforuserInput("Enter x2: ");
    double y1 = askforuserInput("Enter y1: ");
    double y2 = askforuserInput("Enter y2: ");

    double distance = calculatedistance();
    double area = PI * distance * distance;

    //print statements (I keep getting errors for x1, x2 , y1, and y2 )on functions that arent distance i assume because im calling for distances values
    //Ive leanred about placeholders from W3 hopefully this works
    printf("Point #1 entered: x1 = %f; y1 = %f\n", x1, y1);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", x2, y2);
     printf(" The area of the city encompasse by your request is: %f\n", area);
     //so far this is the easiest one
     return 1.0;
}
//Width
double calculatewidth() {
    double x1 = askforuserInput("Enter x1: ");
    double x2 = askforuserInput("Enter x2: ");
    // calculating width
    double width = fabs(x2 - x1);
    //print statements again
    printf("Point #1 entered: x1 = %f\n", x1);
    printf("Point #2 entered: x2 = %f\n", x2);
    printf(" The width of the city encompasse by your request is: %f\n", width);

    //I found this one as difficult as perimeter but i was slightly more stressful finding that i ha to use fabs im not sure why it took me so long to find it out 
    return 2.0;
}
double calculateheight() {
    double y1 = askforuserInput("Enter y1: ");
    double y2 = askforuserInput("Enter y2: ");
    //calculating height
    double height = fabs(y2 - y1);
    //print statements
    printf("Point #1 entered: y1= %f\n", y1);
    printf("Point #2 entered: y1= %f\n", y2);
    printf(" The height of your city encompassed by your request is: %f\n", height);
    // I honestly found this one hard maybe 3.0 or so but its very similar to the others in many ways
    return 3.0;
}
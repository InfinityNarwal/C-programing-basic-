#include<stdio.h>

//Area of rectangle whoes values are pre defined

int main(){
    int a = 10, b = 10;          //pre defined values a is length, b is width and c is product of a and b
    int c = a*b;
    printf("the area of rectangle %d", c);
    
    //area of user defined rectangle
    float d, e;            //using float to print all the  numbers
    printf("Please enter the lenght and width of rectangle");
    scanf("%f %f", &d, &e);  //asking user to enter the values
    printf("%f", d*e);       

}
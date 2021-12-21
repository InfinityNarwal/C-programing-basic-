//To find greatest of 2 numbers

#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("please enter 4 numbers");      //Enter the values
    
    printf("please the value of a");
    scanf("%d",&a);                        //Value of a 
    
    printf("please the value of d");
    scanf("%d",&b);                       //Value of b
    
    printf("please the value of b");
    scanf("%d",&c);                       //Value of c 
    
    printf("please the value of c");
    scanf("%d",&d);                       //Value of d

    if ( a > b && a > c && a > d)       // Cheacking if a is greatest 
    {
        printf("a is greatest of all");
    }
    else if (b > a && b > c && d > d)  // Cheacking if b is greatest 
    {
        printf("b is greatest of all");
    }
    else if (c > a && c > b && c > d)  // Cheacking if c is greatest 
    {
        printf("c is greatest of all");
    }
    else                               // Cheacking if d is greatest 
    printf("d is greatest of all");
}


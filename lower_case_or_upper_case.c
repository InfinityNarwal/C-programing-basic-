//lowercase or uppar case

#include<stdio.h>
void main(){
    char character;
    printf("Please enter a character \n");
    scanf("%c", &character);         //Enter a character (A-Z, a-z)

    if (character >= 'A' && character <= 'Z') //Checking if character belongs A-Z.
    {
        printf("it is uppercase");
    }
    else if(character >= 'a' && character <= 'z'){
      printf("it is lowercase"); //Checking if character belongs a-z.
    }
    else
      printf("Error! this is not a character"); //If it is not a character.+

    }
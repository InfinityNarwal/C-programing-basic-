#include<stdio.h>

char main(){
    int key;
    printf("****Please Enter your login details*****");
    printf("Please enter your password\n");
    scanf("%d", &key);

if (key == 1234)
  {
    printf("Login complete \n");
  } 
else
    printf("Login failed");

}
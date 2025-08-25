/*Q5 (User Inputs, Operations & Output)
📋
Write a program to convert temperature from Celsius to Fahrenheit.*/



#include<stdio.h>
int main(){

int celcius,fahernheite;

printf("enter the temp in celcius");

scanf("%d",&celcius);

fahernheite = (celcius*1.8)+32;

printf("the temp of fahrenheite is %d",fahernheite);

return 0;
}
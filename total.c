/*
Student Name:Diwakar kandel
Program:WAP to print Name,Address,Age,Gender;ask from user 5 times using for loop.
Subject:Programming Fundamental
Roll No:08
Lab No:14
Date: 15nov,2016
*/
#include<stdio.h>
int main()
{

 int i,age;
  char name[20],address[10],gender[10];
 
 printf("Enter your name:\n");
 scanf("%s",name);
  printf("Enter your address:\n");
 scanf("%s",address); 
  printf("Enter your age:\n");
 scanf("%d",&age); 
  printf("Enter your gender:\n");
 scanf("%s",gender); 
 
 for(i=0; i<=5; i++)
 {
	 printf("\n %s \n %s \n %d \n %s\n",name,address,age,genderss);
 }
  
  
  return 0;
  }

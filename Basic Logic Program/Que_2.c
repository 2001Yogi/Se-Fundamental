//2. Write a program to make Simple calculator (to make addition, subtraction, 
//multiplication, division and modulo) 

#include<stdio.h>
int main(){
	int num1, num2, result=0;
	
	printf("Enter the 1st Number:- ");
	scanf("%d",&num1);
	printf("Enter the 2nd Number:- ");
	scanf("%d",&num2);
	
	//Addition
	result = num1+num2;
	printf("Addition of %d and %d:- %d\n ",num1,num2,result);
	
	//Subtraction
	result = num1-num2;
	printf("Subtraction of %d and %d:- %d\n ",num1,num2,result);
	
	//multiplication
	result = num1*num2;
	printf("Multiplication of %d and %d:- %d\n ",num1,num2,result);
	
	//Division
	result = num1/num2;
	printf("Division of %d and %d:- %d\n ",num1,num2,result);
		
	//Modulo
	result = num1%num2;
	printf("Modulo of %d and %d:- %d\n ",num1,num2,result);
}

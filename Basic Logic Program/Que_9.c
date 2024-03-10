//9. Find circumference of Triangle formula :  triangle = a + b + c 

#include<stdio.h>
#include<math.h>
int main(){
	float side1, side2, side3, circum=0;
	
	printf("Enter the 1st side of triangle:-");
	scanf("%f",&side1);
	
	printf("Enter the 2nd side of triangle:-");
	scanf("%f",&side2);
	
	printf("Enter the 3rd side of triangle:-");
	scanf("%f",&side3);
	
//	circumference of triangle
	circum = side1 + side2 + side3;
	
	//print the circumference of triangle
	printf("The circumference of triangle for given sides is :- %.2f",circum);
	
}

//6. Find area of Triangle Formula : A = 1/2 × b × h 


#include<stdio.h>
#include<math.h>
int main(){
	float base, height, area=0;
	
	printf("Enter the base for triangle:-");
	scanf("%f",&base);
	
	printf("Enter the height for triangle:-");
	scanf("%f",&height);
	
//	area of triangle
	area = 0.5*base*height;
	
	//print the area of triangle
	printf("The area of triangle for given base and height is :- %.2f",area);
	
}

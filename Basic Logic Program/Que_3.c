//3. WAP to Find Area And Circumference of Circle

#include<stdio.h>

int main(){
	float radius,circum=0,area=0;
	
	printf("Enter the radius:- ");
	scanf("%f",&radius);
	
//	area formula
	area = 3.14*radius*radius;
//	circumference formula
	circum = 2*3.14*radius;
	
	//Print the area
	printf("The area of circle for given radius:- %.2f\n",area);
	
	//Print the circumference
	printf("The circumference of circle for given radius:- %.2f\n",circum);
}

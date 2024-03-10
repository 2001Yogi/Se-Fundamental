//11. Find circumference of square formula : C = 4 * a

#include<stdio.h>
#include<math.h>
int main(){
	float num, circum=0;
	
	printf("Enter the number:-");
	scanf("%f",&num);
	
//	circumference of square
	circum = 4*num;   
	
	//print the circumference of square
	printf("The circumference of square for given number is :- %.2f",circum);
	
}

//5. Find Area of Cube formula : a = 6a2

#include<stdio.h>
#include<math.h>
int main(){
	int num, area=0;
	
	printf("Enter the number:-");
	scanf("%d",&num);
	
//	area of cube
	area = 6*num*num;
	
	//print the area of cube
	printf("The area of cube for given number is :- %d",area);
	
}

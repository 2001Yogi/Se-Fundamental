//12. Accept number of students from user. I need to give 5 apples to each 
//student. How many apples are required?

#include<stdio.h>

int apple,student;
int main()
{
	printf("Enter the number of student:");
	scanf("%d",&student);
	
	//formula to count how many apple
	apple = student * 5;
	
	//print the result
	printf("Total apples required :- %d\n", apple);

}

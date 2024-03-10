//7. Find area of Rectangle Formula : A=wl 

#include<stdio.h>
#include<math.h>
int main(){
	int width, length, area=0;
	
	printf("Enter the width for rectangle:-");
	scanf("%d",&width);
	
	printf("Enter the length for rectangle:-");
	scanf("%d",&length);
	
//	area of rectangle
	area = width*length;
	
	//print the area of rectangle
	printf("The area of rectangle for given width and length is :- %d",area);
	
}

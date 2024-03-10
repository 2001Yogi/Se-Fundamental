//10. find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
#include<math.h>
int main(){
	float width, length, height, area=0;
	
	printf("Enter the width for rectangle:-");
	scanf("%f",&width);
	
	printf("Enter the length for rectangle:-");
	scanf("%f",&length);
	
	printf("Enter the height for rectangle:-");
	scanf("%f",&height);
	
//	area of rectangle prism
	area = 2*(width*length + height*length + height*width);   
	
	//print the area of rectangle prism
	printf("The area of rectangle prism for given width, length and height is :- %.2f",area);
	
}

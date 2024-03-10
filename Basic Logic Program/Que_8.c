//8. Find circumference of Rectangle formula : C = 4 * a


#include<stdio.h>
#include<math.h>
int main(){
	int width, length, circum=0;
	
	printf("Enter the width for rectangle:-");
	scanf("%d",&width);
	
	printf("Enter the length for rectangle:-");
	scanf("%d",&length);
	
//	circumference of rectangle
	circum = 2*(width+length);     //2(l+w)
	
	//print the circumference of rectangle
	printf("The circumference of rectangle for given width and length is :- %d",circum);
	
}

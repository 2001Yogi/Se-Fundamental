//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
//and without using 3rd variable

//swap 2 numbers with using 3rd variable

#include<stdio.h>
//int main(){
//	int a,b,c;
//	printf("Enter the 1st number:- ");
//	scanf("%d",&a);
//	printf("Enter the 2nd number:- ");
//	scanf("%d",&b);
//	printf("before swap %d %d\n", a,b);
//	
//	c=a;
//	a=b;
//	b=c;
//	
//	printf("after swap %d %d", a,b);
//}

//swap 2 numbers without using 3rd variable
int main1(){
	int d,e;
	printf("Enter the 1st number:- ");
	scanf("%d",&d);
	printf("Enter the 2nd number:- ");
	scanf("%d",&e);
	printf("before swap %d %d\n",d,e);
	d=d+e;
	e=d-e;
	d=d-e;
	printf("after swap %d %d",d,e);
}



//20.WAP program to print below output using for loop

//01 02 03 04 05 06 07 08 09 10 
//11   12 13 14 15 16 17 18 19 20 
//. 
//. 
// 43 44 45 46 47 48 49 50 

#include<stdio.h>

int main(){
	int i,j,num;
	char ch='A';
	for(i=0;i<=4;i++){
		for(j=0;j<10;j++){
			printf("%02d ",++num);//02d means in 2 digit number only get
		}
		printf("\n");
	}
}


//15. Convert school’s name in abbreviated form

#include<stdio.h>
int main(){
	char school_fname[20],school_lname[30];
	printf("Enter your School's Firstname and Lastname:-");
	scanf("%s%s",&school_fname[20],&school_lname[30]);
	printf("%c.%c",school_fname[20],school_lname[30]);
}

//16. Convert country’s name in abbreviate form

#include<stdio.h>
int main(){
	char country_fname[20],country_lname[30];
	printf("Enter your Country Firstname and Lastname:-");
	scanf("%s%s",&country_fname[20],&country_lname[30]);
	printf("%c.%c",country_fname[20],country_lname[30]);
}

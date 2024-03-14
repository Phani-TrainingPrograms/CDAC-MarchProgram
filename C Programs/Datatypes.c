#include<stdio.h>
//Any kind of data that is required for computing the program should be stored into locations called VARIABLES. 
//Every variable has to be declared before being using. 
//The variable is created using format specifier. It means that a variable of a certain kind, can store data of that kind only
//A variable can hold only one data at a time.
//A variable is created based on the type of data, so data types play an important role in creating the variable. 
int main() {
	int myNum = 123;//To store whole numbers
	float fNum = 4356.56;
	char myChar = 'P';

	//Lets print the values:
	printf("%d\n", myNum);
	printf("%f\n", fNum);
	printf("%c\n", myChar);
	return 0;
}

//printf looks for format specifier while printing variables. %d for digits, %f for floating points, %lf for double, %c for charecters, %s for strings. strings are not the part of primitive data types of C. They are type defs and are like Arrays. 
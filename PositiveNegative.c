// Write a C program to find the given number is positive, negative

# include <stdio.h>

main()
{
	int n;  // a variable should be declared before using that to store value.
	// the input from the user is stored in this variable
	
	// scanf() -> used to get input from the user
	
	// Basic data types used
	// %d - decimal,
	// %c - character
	// %f - floating point number
	// %s - string
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if (n == 0)
		printf("Zero");
	else if (n > 0)
		printf("%d is a Positive Number", n);
	else if (n < 0)
		printf("%d is a Negative Number", n);
	
	getch();
}

// Odd or Even

# include <stdio.h>

main()
{
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	// if (n == 0)
		// printf("Zero");
	
	// else if (n % 2 == 0) // gives the remainder of n divided by 2
		// printf("%d is Even", n);
	// else
		// printf("%d is Odd", n);
	
	printf(n==0 ? "Zero" : (n%2==0 ? "Even" : "Odd"));
	
	getch();
}
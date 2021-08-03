// Factorial of a number

# include <stdio.h>

main()
{
	int n, fact=1, i;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for (i=n; i>1; i--)
	{
		fact *= i;
	}
	
	printf("Factorial of %d is %d", n, fact);
	
	getch();
}
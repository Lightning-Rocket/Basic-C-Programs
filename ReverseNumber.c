// Reverse a number

# include <stdio.h>

main()
{
	int n, tn, rev=0, rem;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	tn = n;
	
	// Main Concept
	while (tn != 0)
	{
		rem = tn % 10;
		rev = rev*10 + rem;
		tn = tn / 10;
	}
	// end main concept
	
	printf("Reverse of %d is %d", n, rev);
	
	getch();	
}
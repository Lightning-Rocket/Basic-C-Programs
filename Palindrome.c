// Palindrome

# include <stdio.h>

main()
{
	int n, rev=0, rem, tn;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	tn = n;
	
	// Reverse Logic
	while (tn > 0)
	{
		rem = tn % 10;
		rev = rev*10 + rem;
		tn = tn / 10;
	}
	
	if (n == rev)
		printf("Palindrome");
	else
		printf("Not Palindrome");
	
	getch();
}
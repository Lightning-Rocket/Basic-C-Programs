// Palindrome Range

# include <stdio.h>

main()
{
	int n, rev, rem, tn, start, end, count=0;
	
	printf("Enter the start range: ");
	scanf("%d", &start);
	printf("Enter the end range: ");
	scanf("%d", &end);
	
	
	printf("\nThe Palindrome numbers between %d and %d are:\n", start, end);
	for (n=start; n<=end; n++)
	{
		tn = n;
		rev = 0;
		
		while (tn > 0)
		{
			rem = tn % 10;
			rev = rev*10 + rem;
			tn = tn / 10;
		}
		
		if (n == rev)
		{
			printf("%d\t", n);
			count++;
		}
	}
	
	printf("\nNo. of Palindrome numbers between %d and %d are: %d", start, end, count);
	
	getch();
}
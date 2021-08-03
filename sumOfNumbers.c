// Sum of N Natural Numbers (1 to infinite)

# include <stdio.h>

main()
{
	int number, n, sum=0;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	for (n=1; n<=number; n++)
	{
		printf("%d ", n);
		sum = sum + n;
	}
	
	printf("\nSum of Natural numbers up to %d is %d", number, sum);
	getch();
}
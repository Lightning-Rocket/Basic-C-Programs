// Armstrong Number

# include <stdio.h>
# include <math.h>

main()
{
	int n, digit, tn, arms=0, count=0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	tn = n;
	// count number of digits
	while (tn > 0)
	{
		count++;
		tn /= 10;
	}
	
	tn = n;
	while (tn > 0)
	{
		digit = tn % 10;
		arms += pow(digit, count);
		tn /= 10;
	}
	
	if (arms == n)
		printf("%d is an Armstrong number", n);
	else
		printf("%d is not an Armstrong number", n);
	
	getch();
}
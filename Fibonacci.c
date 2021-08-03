// Fibonacci Series

# include <stdio.h>

main()
{
	int f=0, s=1, t, n, i;
	
	printf("Enter the range: ");
	scanf("%d", &n); // 5
	
	for (i=0; i<n; i++)
	{
		printf("%d ", f); // 0 1 1 2 3
		t = f + s;
		f = s;
		s = t;
	}
	
	getch();
}
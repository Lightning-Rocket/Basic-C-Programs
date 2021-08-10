// Largest and Smallest element in Array

# include <stdio.h>
# include <stdlib.h>

main()
{
	int *arr;
	int max, min, n, i;
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	arr = (int *) malloc(n * sizeof(int));
	
	printf("Enter %d array values:-\n", n);
	for (i=0; i<n; i++) 
	{
		scanf("%d", &arr[i]);
	}
	
	max = arr[0];
	min = arr[0];
	// finding the max and min element in array
	for (i=0; i<n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
		
	printf("Largest value = %d\n", max);
	printf("Smallest value = %d", min);
		
	getch();
}
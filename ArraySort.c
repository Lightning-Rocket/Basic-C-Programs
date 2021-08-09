// Array Sort

# include <stdio.h>

main()
{
	int arr[50];
	int temp, n, i=0;
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	printf("Enter the array elements:-\n");
	for (i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	// sorting array in Ascending order
	for (i=0; i<n-1; i++)
	{
		if (arr[i] > arr[i+1])
		{
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
			i = -1;
		}
	}
	
	printf("\t\tSorted Array\n");
	for (i=0; i<n; i++)
		printf("%d\n", arr[i]);
	
	getch();
}
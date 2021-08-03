// Greatest of three numbers

# include <stdio.h>

main()
{
	int n1, n2, n3;
	int biggest;
	
	printf("Enter three numbers: ");
	scanf("%d %d %d", &n1, &n2, &n3); // & should be used to store data in any variable
	
	// if (n1 > n2 && n1 > n3)
		// biggest = n1;
	// else if (n2 > n3)
		// biggest = n2;
	// else
		// biggest = n3;
	
	biggest = (n1>n2 && n1>n3 ? n1 : (n2>n3 ? n2 : n3));
	
	printf("%d is the Biggest of Three numbers.", biggest);
	getch();
}
// ASCII Char

# include <stdio.h>

main()
{
	char c = 'A';
	int i;
	
	// all the characters are stored as ASCII value internally
	// ASCII values are of int type
	
	// ASCII range → 0 to 255
	
	printf("Enter a character: ");
	scanf("%d", &c);
	printf("ASCII value of %c is %d.\n", c, c);
	
	for (i=0; i<=255; i++)
		printf("%c - %d\n", i, i);

	
	getch();
}
// String Library

# include <stdio.h>
# include <string.h>

main()
{
	char str1[] = "stringLibrary";
	char str2[20];
	char str3[] = "Library";
	
	// strcpy - to copy one string value to another string
	// str2 = str1;
	strcpy(str2, str1);
	
	printf("str1 -> %s\n", str1);
	printf("str2 -> %s\n", str2);
	printf("str3 -> %s\n", str3);
	
	//---------------------------------
	// strcmp - to compare the values in two string
	if (strcmp(str1, str2) == 0)
		printf("str1 = str2\n");
	else 
		printf("str1 != str2\n");
	
	if (strcmp(str1, str3) == 0)
		printf("str1 = str3\n");
	else
		printf("str1 != str3\n");
	//---------------------------------
	// strlen - returns the length of the string
	
	printf("str1 lenght -> %d\n", strlen(str1));
	//---------------------------------
	// strrev - it reverses the given string value

	printf("str3 reverse -> %s", strrev(str3));
		
	
	
	getch();
}

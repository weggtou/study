#define _CRT_SECURE_NO_WARNINGS
#include <string.h>


int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c' };
	char arr3[] = { 'a', 'b', 'c', '\0' };

	int leg = strlen(arr1);
	int leg2= strlen(arr2);
	int leg3 = strlen(arr3);


	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);

	printf("%d\n", leg);
	printf("%d\n", leg2);
	printf("%d\n", leg3);


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a = 9 % 2;
	int b = a << 1;
	int c = ++a;


	printf("%d\n", a);
	printf("%d\n", b);
	a ? a += 1 : a - 1;
	printf("%d\n", a);



	return 0;
}
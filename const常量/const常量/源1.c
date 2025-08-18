#define _CRT_SECURE_NO_WARNINGS
int main()
{
	const int sum = 10;
	// 如果再次定义sum = 20 会报错，因为被const定义的变量无法被改变
	printf("%d\n", sum);

	return 0;
}
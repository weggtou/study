#define _CRT_SECURE_NO_WARNINGS

//int main()//定义过的函数可在整个项目中使用
//{
//	int sum = 0;
//	sum = w(1, 2);
//	printf("%d", sum);
//	return 0;
//}
int main()
{
	int i = 0;

	int arr[5] = { 1, 2, 3, 4, 5 };
	while (i < 5)
	{
		printf("%d\n", arr[i]);
		i = i + 1;

	}

	return 0;
}
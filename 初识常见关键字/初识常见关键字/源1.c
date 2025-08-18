#define _CRT_SECURE_NO_WARNINGS

typedef unsigned int ui;//重定义关键字

void A()//定义函数A返回类型为空，及不需要返回
{
	static ui a = 1;//使变量a在每次循环后可以保留值
	a++;
	printf("%d\n", a);

}

static int add(int a,int b)//使add函数变为静态
{
	int x = a;
	int y = b;
	int z = x + y;
	return z;
}

//int main()
//{
//	ui i = 0;
//	while (i < 10)
//	{
//		A();
//		i++;
//	}
//
//	return 0;
//}
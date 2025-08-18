#define _CRT_SECURE_NO_WARNINGS

extern void A();//A函数没有变静态可声明在别的源文件使用
extern int add(int, int);//add函数变为静态后无法声明

int main()
{
	int h = 0;
	int i = 0;
	scanf("%d %d", &h, &i);
	int sum = add(h, i);//add无法使用

	return 0;
}
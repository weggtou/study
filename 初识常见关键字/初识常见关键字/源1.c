#define _CRT_SECURE_NO_WARNINGS

typedef unsigned int ui;//�ض���ؼ���

void A()//���庯��A��������Ϊ�գ�������Ҫ����
{
	static ui a = 1;//ʹ����a��ÿ��ѭ������Ա���ֵ
	a++;
	printf("%d\n", a);

}

static int add(int a,int b)//ʹadd������Ϊ��̬
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
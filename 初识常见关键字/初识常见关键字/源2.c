#define _CRT_SECURE_NO_WARNINGS

extern void A();//A����û�б侲̬�������ڱ��Դ�ļ�ʹ��
extern int add(int, int);//add������Ϊ��̬���޷�����

int main()
{
	int h = 0;
	int i = 0;
	scanf("%d %d", &h, &i);
	int sum = add(h, i);//add�޷�ʹ��

	return 0;
}
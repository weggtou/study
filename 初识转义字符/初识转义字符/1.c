#define _CRT_SECURE_NO_WARNINGS

int main()
{
	printf("%c\n", '\'');//��ӡ���ţ���ʹ�á�������ʹ�ڶ�������ʶ��Ϊ���һ��������һ��
	printf("%s\n", "c:\\t");//��ӡ\\t����Ϊ����\t�ᱻʶ��Ϊת���ַ�
	printf("\a\a\a\n");//������
	printf("%s\n", "abc\tdef");
	printf("ab\rcd\n");
	printf("%s\n", "\328");//\������ֻᱻʶ��Ϊת��������������Ϲ�����޷�ʶ��
	printf("%d", strlen("c:\test\328\test.c"));
	return 0;
}
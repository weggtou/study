#define _CRT_SECURE_NO_WARNINGS

int main()
{
	printf("%c\n", '\'');//打印‘号，若使用’‘’会使第二单引号识别为与第一个单引号一起
	printf("%s\n", "c:\\t");//打印\\t是因为输入\t会被识别为转义字符
	printf("\a\a\a\n");//警告声
	printf("%s\n", "abc\tdef");
	printf("ab\rcd\n");
	printf("%s\n", "\328");//\后加数字会被识别为转义符但是若不符合规则会无法识别
	printf("%d", strlen("c:\test\328\test.c"));
	return 0;
}
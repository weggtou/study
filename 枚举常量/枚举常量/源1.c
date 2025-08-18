#define _CRT_SECURE_NO_WARNINGS
enum class
{
	g = 3,
	s,
	z,
	w,

};

int main()
{
	enum class a = w;
	printf("%d\n", a);
	printf("%d\n", s);

	return 0;
}
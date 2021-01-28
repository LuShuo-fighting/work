#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	//打印num的每一位
	//1 2 3 4
	print(num);
	return 0;
}
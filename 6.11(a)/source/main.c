#include <stdio.h>
#include <stdlib.h>
#define size 10

int main(void)
{
	int a[size] = {0};
	int i, j, b;

	printf("�п�J10�Ӽ�:\n");
	for (i = 0; i<10; i++)
	{
		printf("%2d. ", i + 1);
		scanf_s("%d", &a[i]);
		fflush(stdin);
	}

	printf("-----------------------------\n");

	for (j = 9; j>0; j--)
	{
		for (i = 0; i<j; i++)
		{
			if (a[i]>a[i + 1])
			{
				b = a[i]; a[i] = a[i + 1]; a[i + 1] = b;
			}
		}
	}
	for (i = 0; i<10; i++)
		printf("%5d", a[i]);

	printf("\n");
	system("pause");
	return 0;
}
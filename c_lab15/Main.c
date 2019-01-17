#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)

int main()
{
	int n = 0;
	scanf("%d", &n);

	char modificator[100];
	int x = -2147483648;
	
	int mas[10000];
	for (int i = 0; i < sizeof(mas)/4; i++)
		mas[i] = -2147483648;

	if (n > 0 && n <= 100000)
	{
		for (int i = 0; i < n; i++)
		{
		
			scanf("%s", &modificator);

			if (strcmp(modificator, "CONST") == 0)
			{
				scanf("%i", &x);
				if (x < 1000000000 && x > -1000000000)
				{
					for (int i = 0; i < sizeof(mas); i++)
					{
						if (mas[i] == -2147483648)
						{
							mas[i] = x;
							break;
						}
					}
				}
			}
			else if (strcmp(modificator, "ADD") == 0)
			{
				for (int i = 0; i < sizeof(mas); i++)
				{
					if (mas[i] == -2147483648)
					{
						mas[i - 2] += mas[i - 1];
						mas[i - 1] = -2147483648;
						break;
					}
				}
			}
			else if (strcmp(modificator, "SUB") == 0)
			{
				for (int i = 0; i < sizeof(mas); i++)
				{
					if (mas[i] == -2147483648)
					{
						mas[i - 2] = mas[i - 1] - mas[i - 2];
						mas[i - 1] = -2147483648;
						break;
					}
				}
			}
			else if (strcmp(modificator, "MUL") == 0)
			{
				for (int i = 0; i < sizeof(mas); i++)
				{
					if (mas[i] == -2147483648)
					{
						mas[i - 2] *= mas[i - 1];
						mas[i - 1] = -2147483648;
						break;
					}
				}
			}
			else if (strcmp(modificator, "DIV") == 0)
			{
				for (int i = 0; i < sizeof(mas); i++)
				{
					if (mas[i] == -2147483648)
					{
						mas[i - 2] = mas[i - 1] / mas[i - 2];
						mas[i - 1] = -2147483648;
						break;
					}
				}
			}
			else if (strcmp(modificator, "MAX") == 0)
			{
				for (int i = 0; i < sizeof(mas); i++)
				{
					if (mas[i] == -2147483648)
					{
						if (mas[i - 1] > mas[i - 2]) mas[i - 2] = mas[i - 1];
						mas[i - 1] = -2147483648;
						break;
					}
				}
			}
			else if (strcmp(modificator, "MIN") == 0)
			{
				for (int i = 0; i < sizeof(mas); i++)
				{
					if (mas[i] == -2147483648)
					{
						if (mas[i - 1] < mas[i - 2]) mas[i - 2] = mas[i - 1];
						mas[i - 1] = -2147483648;
						break;
					}
				}
			}
			else if (strcmp(modificator, "NEG") == 0)
			{
				for (int i = 0; i < sizeof(mas); i++)
				{
					if (mas[i] == -2147483648)
					{
						mas[i - 1] = -mas[i - 1];
						break;
					}
				}
			}
			else if (strcmp(modificator, "DUP") == 0)
			{
				for (int i = 0; i < sizeof(mas); i++)
				{
					if (mas[i] == -2147483648)
					{
						mas[i] = mas[i - 1];
						break;
					}
				}
			}
			else if (strcmp(modificator, "SWAP") == 0)
			{
				for (int i = 0; i < sizeof(mas); i++)
				{
					if (mas[i] == -2147483648)
					{
						x = mas[i - 2];
						mas[i - 2] = mas[i - 1];
						mas[i - 1] = x;
						x = -2147483648;
						break;
					}
				}
			}
		}
	}
	printf("%i\n", mas[0]);
	system("pause");
	return 0;
}
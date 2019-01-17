#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)


int main()
{
	int n = 0;
	scanf("%d", &n);

	char modificator[] = "";
	int x = -1000000001;
	int mas[1000];

	for (int i = 0; i < 100; i++)
	{
		mas[i] = x;
	}

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
					for (int i = 0; i < 1000; i++)
					{
						if (mas[i] == -1000000001)
						{
							mas[i] = x;
							break;
						}
					}
				}
			}
			else if (strcmp(modificator, "ADD") == 0)
			{
				for (int i = 0; i < 1000; i++)
				{
					if (mas[i] == -1000000001)
					{
						mas[i - 2] += mas[i - 1];
						mas[i - 1] = -1000000001;
						break;
					}
				}
			}
			else if (strcmp(modificator, "SUB") == 0)
			{
				for (int i = 0; i < 1000; i++)
				{
					if (mas[i] == -1000000001)
					{
						mas[i - 2] = mas[i - 1] - mas[i - 2];
						mas[i - 1] = -1000000001;
						break;
					}
				}
			}
			else if (strcmp(modificator, "MUL") == 0)
			{
				for (int i = 0; i < 1000; i++)
				{
					if (mas[i] == -1000000001)
					{
						mas[i - 2] *= mas[i - 1];
						mas[i - 1] = -1000000001;
						break;
					}
				}
			}
			else if (strcmp(modificator, "DIV") == 0)
			{
				for (int i = 0; i < 1000; i++)
				{
					if (mas[i] == -1000000001)
					{
						mas[i - 2] = mas[i - 1] / mas[i - 2];
						mas[i - 1] = -1000000001;
						break;
					}
				}
			}
			else if (strcmp(modificator, "MAX") == 0)
			{
				for (int i = 0; i < 1000; i++)
				{
					if (mas[i] == -1000000001)
					{
						if (mas[i - 1] > mas[i - 2]) mas[i - 2] = mas[i - 1];
						mas[i - 1] = -1000000001;
						break;
					}
				}
			}
			else if (strcmp(modificator, "MIN") == 0)
			{
				for (int i = 0; i < 1000; i++)
				{
					if (mas[i] == -1000000001)
					{
						if (mas[i - 1] < mas[i - 2]) mas[i - 2] = mas[i - 1];
						mas[i - 1] = -1000000001;
						break;
					}
				}
			}
			else if (strcmp(modificator, "NEG") == 0)
			{
				for (int i = 0; i < 1000; i++)
				{
					if (mas[i] == -1000000001)
					{
						mas[i - 1] = -mas[i - 1];
						break;
					}
				}
			}
			else if (strcmp(modificator, "DUP") == 0)
			{
				for (int i = 0; i < 1000; i++)
				{
					if (mas[i] == -1000000001)
					{
						mas[i] = mas[i - 1];
						break;
					}
				}
			}
			else if (strcmp(modificator, "SWAP") == 0)
			{
				for (int i = 0; i < 1000; i++)
				{
					if (mas[i] == -1000000001)
					{
						x = mas[i - 2];
						mas[i - 2] = mas[i - 1];
						mas[i - 1] = x;
						x = -1000000001;
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
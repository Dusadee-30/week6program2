#include<Stdio.h>
#include<math.h>
float over(float n)
{
	float all, sum = 1;
	for (int i = 1;i <= n;i++)
	{
		sum = sum * i;
	}
	all = sum / n;
	return all;
}
int main()
{
	int n;
	float sum = 0.00;
	printf("Input your number : ");
	scanf_s("%d", &n);
	if (n % 2 != 0)
	{
		for (int i = 1;i <= n;i += 2)
		{
			int j = 1;
			while (j <= i)
			{
				printf(" %d!/%d ", j, j);
				sum += over(j);
				if (j != i)
				{
					printf(" + ");
				}
				else
				{
					printf(" =  %.2f ", sum);
				}
				j += 2;
			}
			printf("\n");
			sum = 0;
		}
	}
	else if (n % 2 == 0)
	{
		for (int i = 2;i <= n;i += 2)
		{
			int j = 2;
			while (j <= i)
			{
				printf(" %d!/%d ", j, j);
				sum += over(j);
				if (j != i)
				{
					printf(" + ");
				}
				else
				{
					printf(" =  %.2f ", sum);
				}
				j += 2;
			}
			printf("\n");
			sum = 0;
		}
	}


	return 0;
}
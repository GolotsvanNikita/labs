#include <stdio.h>
#include <math.h>

int main()
{
	// Цей код написав студент Голоцван Нiкiта Дмитрович AI - 251
	// 3.1
	//double x, y;

	//printf("Enter x, y:\n");
	//scanf_s("%lf %lf", &x, &y);

	//if ((x >= -1 && x <= 0 && y >= -1 && y <= 1) 
	//	|| (x >= 0 && pow(x, 2) + pow(y, 2) <= 1))
	//{
	//	printf("The point belongs\n");
	//}
	//else
	//{
	//	printf("The point don't belong\n");
	//}

	// 3.2
	double a, x, y;
	int n;

	printf("Enter a: ");
	scanf_s("%lf", &a);

	printf("Enter count x values: ");
	scanf_s("%d", &n);

	double x_values[100], y_values[100];

	for (int i = 0; i < n; i++)
	{
		printf("Enter x%d: ", i + 1);
		scanf_s("%lf", &x);
		x_values[i] = x;

		if (x + 3 > fabs(a))
		{
			y_values[i] = x - a;
		}
		else if (x + 3 < fabs(a))
		{
			y_values[i] = x / 5;
		}
		else
		{
			y_values[i] = a + 3;
		}
	}

	printf("\n|  x   |  y   |\n");
	printf("|------|------|\n");
	for (int i = 0; i < n; i++)
	{
		printf("| %.2f | %.2f |\n", x_values[i], y_values[i]);
	}
}
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	// Цей код написав студент Голоцван Нiкiта Дмитрович AI - 251
	double x, y, z;

	printf("x, y, z: \n");
	scanf_s("%lf %lf %lf", &x, &y, &z);

	double a_1 = pow(log10(1 + fabs(tan(z))), 2) + 0.95 * x;
	double a_2 = 1 + pow(sin(y - M_PI / 5), 2) - 0.01 * x;

	double a = a_1 / a_2;
	double b = pow(log10(1 + fabs(tan(z))), 2) + 3;

	printf("\na = %.2lf\nb = %.2lf", a, b);
}
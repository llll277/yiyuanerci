#include <stdio.h>
#include <math.h>
void max(double *x1, double *x2);
int main()
{
	double a, b, c, d;
	double x1, x2,i1,i2;
	scanf_s("%lf %lf %lf", &a, &b, &c);
	if (a == 0 && b == 0 && c == 00)
	{
		printf("Zero Equation\n");
		while ((c = getchar()) != '\n' && c != EOF);
		getchar();
		return 0;
	}
	if (a == 0 && b == 0 && c != 00)
	{
		printf("Not An Equation\n");
		while ((c = getchar()) != '\n' && c != EOF);
		getchar();
		return 0;
	}
	if (a == 0 && b != 0 && c != 0)
	{
		printf("%.2lf", -c / b);
		getchar();
		while ((c = getchar()) != '\n' && c != EOF);
		return 0;
	}
	d = pow(b, 2) - 4 * a * c;
	if (d >= 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		if (d == 0)
		{
			printf("%.2lf\n", x1);
		}
		max(&x1, &x2);
		printf("%.2lf\n%.2lf\n", x1, x2);
	}
	else
	{
		x1 = -b / 2 * a;
		i1 = sqrt(-d) / 2 * a;
		x2 = -b / 2 * a;
		i2 = -sqrt(-d) / 2 * a;
		max(&i1, &i2);
		printf("%.2lf+%.2lfi\n%.2lf%.2lfi\n", x1, i1, x2, i2);
	}
	while ((c = getchar()) != '\n' && c != EOF);
	getchar();
	return 0;
}
void max(double *x1, double *x2) 
{
	double swap;
	if (*x2 >= *x1) 
	{
		swap = *x2;
		*x2 = *x1;
		*x1 = swap;
	}
}
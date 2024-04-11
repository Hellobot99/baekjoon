#include <stdio.h>
#define MAX_DEGREE 101

typedef struct
{
	int degree;
	float coef[MAX_DEGREE];
}pol;

pol pol_mul(pol a, pol b)
{
	pol c;
	c.degree = a.degree + b.degree;

	for (int i = 0; i < c.degree + 1; i++)
	{
		c.coef[i] = 0;
	}

	for (int i = 0; i < a.degree + 1; i++)
	{
		for (int k = 0; k < b.degree + 1; k++)
		{
			c.coef[i + k] += a.coef[i] * b.coef[k];
		}
	}
	
	return c;
}

void print(pol w)
{
	for (int i = 0; i < w.degree; i++)
	{
		if (w.coef[i] != 0)
		{
			printf("%3.1f^%d + ", w.coef[i], w.degree - i);
		}
	}
	printf("%3.1f", w.coef[w.degree]);
}

int main()
{

	pol a = { 3,{4.0,3.0,2.0,1.0} };
	pol b = { 2,{3.0,2.0,8.0} };
	pol c;

	c = pol_mul(a, b);
	print(c);

}
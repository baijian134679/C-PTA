#include <stdio.h>

int main()
{
	double a,b,c,d;
	int sum;
	double average;
	if (scanf("%lf %lf %lf %lf", &a, &b, &c, &d)>-2E31&&
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d)<2E31)
	sum = a + b + c + d;
	average = ( a + b + c + d)/4;
	printf("Sum = %d; Average = %.1f",sum,average);
	return 0;
}

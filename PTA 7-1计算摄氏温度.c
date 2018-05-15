#include <stdio.h>

int main()
{
	int c,f;
	if (scanf("%d", &f)>-2E31&&scanf("%d", &f)<2E31)
	{
		c = 5 * (f - 32)/9;
		printf("Celsius = %d",c);
	}
	
	return 0;
}

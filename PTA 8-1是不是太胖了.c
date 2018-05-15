#include <stdio.h>

int main()
{
	
	double w;
	int h ;
	if (scanf("%d", &h)>-2E31&&scanf("%d", &h)<2E31)
	if(h>100&&h<=300)
	w = ( h - 100) * 0.9*2;
	printf("%.1f\n",w);
	
	return 0;
}

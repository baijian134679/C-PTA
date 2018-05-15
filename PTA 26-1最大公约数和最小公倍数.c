#include <stdio.h>

int main (void)
{
	int a,b,temp;
	int gcd,lcm;
	
	if( scanf("%d %d", &a, &b) >=0 && 
		a <=1000 && b <=1000) 
	{
		lcm = a*b;
		if( a<b ) {
		temp = a;
		a = b;
		b = temp;	
		}
		while( b!=0 ) {
		temp = a % b;
		a = b;
		b = temp;
		}
		gcd = a;
		printf("%d %d", gcd, lcm/gcd);	
	}
	
	return 0;
}


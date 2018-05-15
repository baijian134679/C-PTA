#include <stdio.h>

int main()
{
	int a,b;
	
	if(scanf("%d", &a)>=0&&scanf("%d", &a)<=153){
		b = a%16;
		a /= 16;
		b = b + a%16*10;
		printf("%d",b);	
	}
	
	return 0;
}

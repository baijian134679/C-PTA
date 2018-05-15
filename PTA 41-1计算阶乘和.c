#include <stdio.h>

int fac(int a);

int main(void)
{
	int N;
	int S=1;
	int i;
	
	if(scanf("%d", &N)<=10 && N>0 )
	for ( i=2; i<=N; i++ ) {
		S += fac(i);
	}
	printf("%d\n", S);
	
	return 0;
}

int fac(int a)
{
	int ret=1;
	int i;
	for ( i=2; i<=a; i++){
		ret *= i;
	}
	
	return ret;	
}

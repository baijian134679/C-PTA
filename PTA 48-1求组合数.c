#include <stdio.h>

double fact(int n);
 
int main(void)
{
	int m,n;
	double ret;
	
	if(scanf("%d %d", &m, &n) &&  m<=n){
		ret = fact(n)/(fact(m)*fact(n-m));
		printf("result = %.0f\n", ret);
	}

	return 0;
}

double fact(int n)
{
	int i;
	double sum=1;
	for( i=1; i<=n; i++){
		sum *= i;
	}
	
	return sum;
}

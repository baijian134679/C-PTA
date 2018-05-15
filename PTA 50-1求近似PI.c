#include <stdio.h>

double fact(int n)
{
	int i;
	double sum=1;
	for( i=1; i<=n; i++){
		sum *= i;
	}
	
	return sum;
}

int main(void)
{
	double eps,t;
	double n = 1,k = 1;
	int i=1;
	
	if(scanf("%le", &eps)){
	do{
		if( eps >= 1 ){
			printf("PI = %.5f", n*2);
			break;
		}
		k *=2*i+1;
		n += fact(i)/k;
		t = fact(i)/k;
		if ( t<eps){
			printf("PI = %.5f\n", n*2);
			break;
		}
	}while(i++);
	}
	
	return 0;
}

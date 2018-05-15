#include <stdio.h>

int main(void)
{
	double a=2,b=1,t;
	int N;
	double sum=0;
	int cnt=0; 
	
	if(scanf("%d", &N)>0 && N<=2E31)
	{
		while(cnt<N)
		{
			sum += a/b;
			t = a;
			a = a+b;
			b = t;
			cnt++;
		}
		printf("%.2f\n", sum);
	}
	
	return 0;
}

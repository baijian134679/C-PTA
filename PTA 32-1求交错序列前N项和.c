#include <stdio.h>

int main(void)
{
	double a=1;
	int N,i,j=3;
	
	if(scanf("%d", &N)>0 && N<2E31)
	{
		for( i=2; i<=N; i++ )
		{
			if(i%2==0){
				a -= i/(double)j;
			}else{
				a += i/(double)j;
			}
			j += 2;
		}
		printf("%.3f\n", a);		
	}
	
	return 0;
}

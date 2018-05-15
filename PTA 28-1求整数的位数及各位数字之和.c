#include <stdio.h>

int main(void)
{
	int N;
	int sum=0;
	int i=0;
	
	if(scanf("%d", &N)>0 && N<=1E9){
		while(N%10>0 || N/10>0){
		i++;
		sum+=N%10;
		N/=10;
		}
		printf("%d %d\n", i,sum);
	}
	
	return 0;
}

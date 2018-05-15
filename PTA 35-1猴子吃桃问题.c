#include <stdio.h>

int main(void)
{
	int N,sum=1;
	int cnt=1;
	
	if(scanf("%d", &N)){
		if( N>1 && N<=10 ){
		while(cnt<N){
			sum = (sum+1)*2;
			cnt++;
		}
		printf("%d\n", sum);
		}
	}
	
	return 0;
}

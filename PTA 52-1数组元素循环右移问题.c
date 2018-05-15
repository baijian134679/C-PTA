#include <stdio.h>

int main(void)
{
	int a[101];
	int N,M,i;
	
	if(scanf("%d %d", &N, &M) && M>=0 && N>=1
		&& N<=100 )
	{
		if(M>=N){
			if(M%N==0){
				M = 0;
			}else{
				M %= N;
			}
		}
		for( i=M; i<N; i++){
			if(scanf("%d", &a[i]))
			if(i==N-1){
				for( i=0; i<M; i++){
				if(scanf("%d", &a[i]));
				}
				break;
			}
		}
		for( i=0; i<N; i++){
			if(i==N-1){
				printf("%d\n", a[i]);
			}else{
				printf("%d ", a[i]);
			}
		}
	}
	
	return 0;
}

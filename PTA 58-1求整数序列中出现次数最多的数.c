#include <stdio.h>

struct {
	int a[1000];
	int c[1000];
}n;

int main(void)
{
	int N,i,k,cnt,x;
	for( i=0; i<1000; i++ ){
		n.c[i] = 0;
	}
	
	if(scanf("%d", &N) && N>0 && N<=1000){
		for( i=0; i<N; i++ ){
			if(scanf("%d", &n.a[i]));
		}
		for( i=0; i<N; i++){
			for( k=0; k<N; k++ ){
				if(n.a[i]==n.a[k]){
					n.c[i]++;
				}
			}
		}
		cnt = n.c[0];
		x = n.a[0];
		for( i=1; i<N; i++ ){
			if( n.c[i]>cnt ){
				cnt = n.c[i];
				x = n.a[i];
			}
		}
		printf("%d %d", x, cnt);
	}
	
	return 0;	
}

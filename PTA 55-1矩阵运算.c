#include <stdio.h>

int main(void)
{
	int n;
	int x[10][10];
	int sum=0, i, k, t;
	
	if(scanf("%d", &n) && n>1 && n<=10 ){
		for( i=0; i<n; i++ ){
			for( k=0; k<n; k++ ){
				if(scanf("%d", &x[i][k]));
			}
		}
		t = n-1;
		for( i=0; i<n-1; i++ ){
			for ( k=0; k<n-1; k++ ){
				if( k!=t ){
					sum += x[i][k];	
				}
			}
			t--;
		}
		printf("%d\n", sum);
	}
	
	return 0;	
}

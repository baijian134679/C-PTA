#include <stdio.h>

int main(void) {
	int m,n;
	int i,j,k=0,sum=1;
	int a[10001]= {0};
	int ret=1;

	if(scanf("%d %d", &m, &n)){
		if(m>1 && n>=m && n<=10000 ){
	for ( i=m; i<=n; i++ ) {
		for ( j=2; j<i; k++,j++ ) {
			if( i%j == 0) {
				sum += j;
				a[k] = j;
			}
			if( sum > i ) {
				break;
			}
		}
		if(sum == i) {
			ret=0;
			printf("%d = 1", i);
			for ( k=0; k<10001; k++ ) {
				if(a[k] > 0) {
					printf(" + %d", a[k]);
				}
			}
			printf("\n");
		}
		for ( k=0; k<10001; k++ ) {
			a[k] = 0;
		}
		k=0;
		sum=1;
	}
	if(ret) {
		printf("None\n");
	}		
		}
	}

	return 0;
}

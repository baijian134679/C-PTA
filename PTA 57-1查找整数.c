#include <stdio.h>

int main(void)
{
	int N,i;
	long int X;
	long int a[20];
	int noFound = 1;
	
	if(scanf("%d %ld", &N, &X) && N<=20){
		for( i=0; i<N; i++ ){
			if(scanf("%ld", &a[i]));
		}
		for ( i=0; i<N; i++ ){
			if( X==a[i] ){
				noFound = 0;
				printf("%d\n", i);
			}
		}
		if(noFound) printf("Not Found\n");	
	}
	
	return 0;	
}

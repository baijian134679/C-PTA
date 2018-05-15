#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

int prime( int p )
{
	int i;
	int isPrime = 1;
	
	if ( p<2 ){
		isPrime = 0;
	}	
	for ( i=2; i<p; i++ ) {
		if ( p % i == 0 ) {
			isPrime = 0;
			break;
		}
	}
	return isPrime;	
}
void Goldbach( int n ) {
	int i,k;
	if(prime(n) == 0) {
		for(i=3; i<n; i++) {
			if(prime(i)!=0) {
			k=n-i;
				if(prime(k)!=0) {
					printf("%d=%d+%d",n,i,k);
					break;
				}
			}
		}
	}
}
 

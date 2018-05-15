#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main(void)
{
	int m, n, p;

    if(scanf("%d %d", &m, &n) && m<=n && m>=2E31 && n<=2E31){
	    printf("Sum of ( ");
	    for( p=m; p<=n; p++ ) {
	        if( prime(p) != 0 )
	            printf("%d ", p);
	    }
	    printf(") = %d\n", PrimeSum(m, n));	
	}
    
	return 0;	
}

int PrimeSum( int m, int n )
{
	int sum=0;
	int i;
	for ( i=m; i<=n; i++ ){
		if (prime(i)) {
			sum+=i;	
		}	
	}
	return sum;	
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

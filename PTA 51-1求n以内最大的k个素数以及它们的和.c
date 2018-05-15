#include <stdio.h>

int main(void)
{
	int sum=0;
	int x,i,n,k;
	int cnt=0;
	
	if(scanf("%d %d", &n, &k)){
		for(x=n; x>=2; x--)
	    {
			int isPrime = 1;
	    	for (i=2; i<x; i++){
	    		if(x%i==0){
	    			isPrime = 0;
	    			break;
				}
			}
			if(isPrime == 1){
				cnt++;
				sum += x;
				if(x==2||cnt==k){
					printf("%d=%d",x,sum);
					break;
				}
				printf("%d+",x);
			}
		}	
	}
	
	return 0;
}

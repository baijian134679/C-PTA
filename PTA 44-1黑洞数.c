#include <stdio.h>

int main(void)
{
	int cnt=1;
	int N,i,t,j;
	int sum1,sum2; 
	int a[3];
	
	if(scanf("%d", &N) < 1000 ) {
	while(1){
		for ( i=0; i<3; i++ ){   //Â¼ÈëÊı¾İ 
			if ( N<100 ){
				a[i] = N%10;
				a[++i] = N/10;
			}else{
				a[i] = N%10;
			}
			N /= 10;
		}
		for( i=0; i<2; i++ ){
			for ( j=2; j>0; j--){  //ÅÅĞò 
				if( a[i]>a[j]){
					t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
			}	
		}
		sum1 = a[0]*100 + a[1]*10 + a[2];
		sum2 = a[2]*100 + a[1]*10 + a[0];
		printf("%d: %d - %d = %d\n", cnt, sum2, sum1, sum2-sum1);
		N = sum2-sum1;
		cnt++;
		if( N==495) break;	
	}	
	}
	
	return 0;
}

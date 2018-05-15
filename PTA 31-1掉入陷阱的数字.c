#include <stdio.h>

int main(void)
{
	int N;
	int cnt=1,n,t,r=0;
	
	if(scanf("%d", &N)<30000){
	n=N;
	do{
		t = n;
		if( n<9 ){
			n = n*3+1;
		}else{
			while( n>9 ){
				r += n%10;
				n /= 10;
			}
			n = n+r;
			n = n*3+1;
			r=0;
		}
		printf("%d:%d\n", cnt, n);
		if( n==t ){
			break;
		}
	}while(cnt++);	
	}
	
	return 0;
}

#include <stdio.h>

int main(void)
{
	int a[10]={10,8,1,2};
	int n,i;
	
	if(scanf("%d", &n) && n>=1 && n<=10){
		for( i=0; i<n; i++ ){
			if(scanf("%d", &a[i]));
		}
		for( i=n-1; i>=0; i-- ){
			if( i==0 ){
				printf("%d\n", a[i]);
			}else{
				printf("%d ", a[i]);
			}
		}
	}
	
	return 0;
}

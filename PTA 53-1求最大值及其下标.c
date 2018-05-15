#include <stdio.h>

int main(void)
{
	int n,i;
	int a[10];
	int t,z=0;
	
	if(scanf("%d", &n) && n>1 && n<=10){
		for( i=0; i<n; i++ ){
			if(scanf("%d", &a[i]));
		}
		t=a[0];
		for( i=0; i<n; i++ ){
			if(t<a[i]){
				t=a[i];
				z=i;
			}
		}
		printf("%d %d\n", t, z);
	}
	
	return 0;
}

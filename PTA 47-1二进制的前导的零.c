#include <stdio.h>

int main(void)
{
	int n,t;
	int s[32]={0};
	int i=31;
	
	if(scanf("%d", &n)){
	t = n;
	while(t>0){
		s[i] = t%2;
		t /= 2;	
		i--;
	}
	if(n==0){
		printf("32\n");
	}else if(n<0){
		printf("0\n");
	}else{
		for ( i=0; i<32; i++ ){
		if(s[i] > 0){
			printf("%d", i);
			break;
			}
		}	
	}
	}
	
	return 0;
}

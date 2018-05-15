#include <stdio.h>

int main(void)
{
	int t=1;
	int N,U,D,h=0;
	
	if(scanf("%d %d %d", &N, &U, &D)){
		if( N<=100 && D<U ){
			while(1){
				if(t%2!=0 || t<2){
					h += U;		
				}else{
					h -= D;
				}
				if(h>=N){
					printf("%d\n", t);
					break;
				}
				t++;
			}		
		}
	}
	
	return 0;
}

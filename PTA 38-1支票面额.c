#include <stdio.h>

int main(void)
{
	int isFound=0;
	int y,f;
	int n;
	
	if(scanf("%d", &n)<100){
	for( y=0; y<100; y++){
		for( f=0; f<100; f++){
			if( 98*f-199*y==n ){
				isFound=1;
				goto u;
			}
		}
	}
u:	
	if(isFound){
		printf("%d.%d\n", y, f);	
	}else{
		printf("No Solution");
	}	
	}
	
	return 0;
}

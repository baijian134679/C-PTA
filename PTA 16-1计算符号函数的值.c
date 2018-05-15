#include <stdio.h>

int main()
{
	int n;
	
	if (scanf("%d", &n)>-2E31&&scanf("%d", &n)<2E31){
		if ( n > 0 ){
			printf("sign(%d) = 1",n);
		}else if ( n == 0 ){
			printf("sign(%d) = 0",n);
		}else if ( n < 0 ) {
			printf("sign(%d) = -1",n);
		}	
	}
	return 0;
}

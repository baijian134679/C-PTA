#include <stdio.h>

int main()
{
	int x;
	int mask = 1;
	
	if(scanf("%d", &x)){
		int t = x;
		while( t > 9){
			t /=10;
			mask *= 10;
		}
		do{
			printf("%d ", x/mask);
			x %= mask;
			mask /=10;
		}while( mask > 0);
		printf("\n");
	}

	return 0;	
}

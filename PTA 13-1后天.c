#include <stdio.h>

int main()
{	
	int a,b;
	if(scanf("%d", &a)>=1&&scanf("%d", &a)<=7){
		b = a+2;
		if(b < 8){
			printf("%d",b);
		}else{
			printf("%d",b-7);
		}	
	}
	
	return 0;
}

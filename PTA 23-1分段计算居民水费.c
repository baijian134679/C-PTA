#include <stdio.h>

int main()
{
	int x;
	double y;
	
	if(scanf("%d",&x)>0){
		if (x <= 15){
		y = 4 * x / 3.0;
	}else{
		y = 2.5 * x - 17.5; 
	}
	printf("%.2f",y);
	}
	return 0;
}

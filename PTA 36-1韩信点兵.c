#include <stdio.h>

int main(void)
{
	int x=5;
    
	while(1){
		if(x%5==1 && x%6==5 && x%7==4 && x%11==10){
    		printf("%d",x);
    		break;
		}
		x++;
	}
	printf("\n");
	
	return 0;
}

#include <stdio.h>

int main()
{
	int v;
	
	if(scanf("%d", &v)>-2E31 && scanf("%d", &v)<2E31)
	if(v >=0 && v <=500 ){
		if (v >60){
		printf("Speed: %d - Speeding",v);
	}else{
		printf("Speed: %d - OK",v);
	}
	}
	
	return 0;
}

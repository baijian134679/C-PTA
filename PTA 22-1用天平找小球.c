#include <stdio.h>

int main()
{
	int A,B,C;
	
	if(scanf("%d %d %d", &A, &B, &C) <2E31)
	if(A >0 && B>0 && C>0){
		if (B==C){
		printf("A");
	}else if(A==C){
		printf("B");
	}else{
		printf("C");
	}
	}
	
	return 0;
}

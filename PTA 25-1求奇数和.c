#include <stdio.h>

int main()
{
	int s[1000];
	int i = 0,sum = 0;
	
	do{
		if(scanf("%d", &s[i])<2E31){
			if(s[i]<=0){
			break;
			}else{
				if(s[i]%2!=0 )
				sum += s[i];	
			}
			i++;
		}
	}while(1);
	printf("%d",sum);
	
	return 0;
}

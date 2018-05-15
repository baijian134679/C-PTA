#include <stdio.h>

int main(void)
{
	int T;
	int s1=0,s2=0;
	int isRest=0; 
	int t=1,tr=0;
	

	if(scanf("%d", &T))
	{
		while(t<=T){
			if(isRest==1){
				tr++;
				if(tr==30){
					isRest=0;
					tr=0;
				}	
			}else{
				s1+=9;
			}
			if(s1>s2 && t%10==0 && tr==0){
				isRest=1;
			}
			s2+=3;
			t++;
		}
		if( s1>s2 ){
			printf("^_^ %d\n", s1);
		}else if( s1<s2 ){
			printf("@_@ %d\n", s2);
		}else{
			printf("-_- %d\n", s1);
		}		
	}
	
	return 0;
}

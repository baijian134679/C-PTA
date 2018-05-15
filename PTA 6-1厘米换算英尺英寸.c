#include<stdio.h>
int main()
{
	int cm,foot,inch;
	double m;
	
	while(scanf("%d",&cm)==1){
		foot = cm/30.48;
		m = cm/30.48-foot;
		inch = 12*m;
		printf("%d %d",foot,inch);	
	}
	return 0; 
 } 

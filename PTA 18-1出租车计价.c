#include <stdio.h>

int main()
{
	int t;
	double charge=0;
	double s;
	
	
	if (scanf("%lf %d", &s, &t)>-2E31&&
		scanf("%lf %d", &s, &t)<2E31)
		
	if ( t >= 5){
		charge = t/5*2;
	}
	if ( s>=3 && s<= 10 ){
		charge = 10 + (s-3)*2 + charge;
	}else if ( s>10 ){
		charge = 10 + (10-3)*2 + (s-10)*3 + charge;
	}else{
		charge += 10;
	}
	printf("%.0f",charge);
	return 0;
}

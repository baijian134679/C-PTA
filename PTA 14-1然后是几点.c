#include <stdio.h>

int main()
{	
	int a,b;
	int c; 
	int h=0,m=0;

	
	if (scanf("%d %d",&a,&b)>-2E31&&scanf("%d %d",&a,&b)<2E31){
		m = a%100 + b%60;
		h = a/100 + b/60;
		if(b<0){
			if(m<0){
				m = m + 60;
				h --;
			}
		}else{
			if( m > 59){
				h++;
				m = m - 60;
			}
		}
		c = h*100 + m; 
		printf("%d", c);
	}
		
	return 0;
}

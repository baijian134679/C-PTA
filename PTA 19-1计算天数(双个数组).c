#include <stdio.h>

int main()
{
	int y,m,d;
	int x=0,i;
	int a[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31,},
				  {31,29,31,30,31,30,31,31,30,31,30,31,},};
	
	if(scanf("%d/%d/%d", &y, &m, &d))
	{
	if ( (y%4==0&&y%100!=0)||y%400==0){
		for(i=0;i<m-1;i++){
			x += a[1][i];
		}
	}else{
		for(i=0;i<m-1;i++){
			x += a[0][i];
		}
	}
	x += d;
	printf("%d",x);
	}
	return 0;
}

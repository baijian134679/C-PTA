#include<stdio.h> 

int main() 
{ 
	int year,month,day,i; 
	int days=0,sum=0;
	
	if(scanf("%d/%d/%d",&year,&month,&day)){
		for(i=1;i<month;i++) 
		{ 
			switch(i) 
			{ 
				case 1: 
				case 3: 
				case 5: 
				case 7: 
				case 8: 
				case 10: 
				case 12:days=31;break; 
				case 4: 
				case 6: 
				case 9: 
				case 11:days=30;break; 
				case 2:if((year%4==0&&year%100!=0)||year%400==0) 
					 days=29; 
				else days=28; 
			} 
			sum += days; 
		} 
	 	sum += day;
	printf("%d\n",sum); 	
	}
	
	return 0;
}


#include <stdio.h>

int main()
{
	int year, month, day;
	
	if (scanf("%d-%d-%d", &month, &day, &year)>-2E31&&
		scanf("%d-%d-%d", &month, &day, &year)<2E31)
		printf("%d", year);
	if (month <10){
		printf("-0%d", month);
	}else{
		printf("-%d", month);
	}
	if (day < 10 ){
		printf("-0%d",day);
	}else {
		printf("-%d",day);
	}

	return 0;
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[81];
	int i,n;
	
	if(scanf("%[^\n]", s)){
		n = strlen(s);
		for( i=n-1; i>=0 ; i--){
			printf("%c", s[i]);
		}
		printf("\n");
	}
	
	return 0;
}

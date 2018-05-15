#include <stdio.h>
#include <string.h>

int main(void)
{
	int N,i;
	char s1[81];
	
	if(scanf("%d", &N));
	char s[N][81];
	for( i=0; i<N; i++ ){
		if(scanf("%s", s[i]));
	}
	strcpy(s1,s[0]);
	for( i=1; i<N; i++ ){
		if( strlen(s1) < strlen(s[i]) ){
			strcpy(s1,s[i]);
		}
	}
	printf("The longest is: %s\n", s1);
	
	return 0;	
}

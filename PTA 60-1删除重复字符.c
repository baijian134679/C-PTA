#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[80];
	char s1;
	int n,i,k;
	
	if(scanf("%[^\n]",s)){
	n = strlen(s);
	for ( i=0; i<n; i++ ){
		for( k=i+1; k<n; k++){
			if (s[i]==s[k]){
				s1 = s[n-1];
				s[n-1] = '\0';
				if(s[k]>1){
					s[k] = s1;
				}
				n--;
			}
			if(s[k]==s[i]){
				k--;
			}	
		}
	}
	for ( i=0; i<n; i++ ){
		for ( k=i+1; k<n; k++ ){
			if( s[i]-s[k]>0){
				s1 = s[i];
				s[i] = s[k];
				s[k] = s1;
			}
		}
	}
	printf("%s\n", s);
	}
	
	return 0;	
}

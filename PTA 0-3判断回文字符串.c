#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome( char *s )
{
	int i,k=0;
	char s1[MAXN];
	
	for( i=strlen(s)-1; i>=0; i-- ){
		s1[k++] = s[i];
	}
	if(strncmp(s1,s,strlen(s))==0){
		return true;
	}else{
		return false;
	}
}

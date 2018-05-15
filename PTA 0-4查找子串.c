#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
//void ReadString( char s[] ); /* 裁判提供，细节不表 */

int main()
{
    char s[MAXS], t[MAXS], *pos;

//    ReadString(s);
//    ReadString(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}
char *search( char *s, char *t )
{
    int i,k=0,slen,tlen,cnt=0;
    int isFound = 0;
    char *p = s;
    //取字符串长度 
	while(t[i] != '\0'){
		i++;
	}
	tlen=i;
	i=0;
	while(s[i] != '\0'){
		i++;
	}
	slen=i; 
    for ( i=0; i<slen; i++ ){
        if(t[k]==s[i]){
            cnt++;
            k++;
        }else{
            cnt=0;
            k=0;
        }
        if(cnt==tlen){
            isFound = 1;
            break;
        }
        p++;
    }
    if(isFound){
        p-=cnt-1;
        return p;
    }else{
        return NULL;
    }
}
//char *search(char *s, char *t){  
//    int i,j,k=0,slen,tlen;  
//    char *p=NULL;  
//	
////	slen=strlen(s);
////	tlen=strlen(t);
//	while(t[i] != '\0'){
//		i++;
//	}
//	tlen=i;
//	i=0;
//	while(s[i] != '\0'){
//		i++;
//	}
//	slen=i;   
//    for(i=0;i<slen;i++){  
//        j=i;  
//        while(s[j]==t[k]){  
//            k++;  
//            j++;  
//        }  
//        if(k>=tlen){  
//            p=&s[i];  
//            return p;  
//        }  
//        k=0;  
//    }  
//    return p;  
//}  

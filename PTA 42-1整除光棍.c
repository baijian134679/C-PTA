#include <stdio.h>

int main(void) 
{
	int x, len=0, i=0, now=1;
	char s[1001];
	
	if(scanf("%d", &x)<1000){
	while ( ++len ) {
		if( i || now/x ){         //商第一位是0时，不输出 
			s[i++] = '0' + now/x; //保存商，用ASCII转化为字符
		}
		now %= x;                 //取余数 
		if( now == 0 ) {          //余数是0，说明能整除了 
			s[i] = '\0';          //加上字符串结束符 
			printf("%s %d\n", s, len);
			break;
		}
		now = now*10+1;           //增加一个1 
	}	
	}
	
 	return 0;
}


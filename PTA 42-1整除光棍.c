#include <stdio.h>

int main(void) 
{
	int x, len=0, i=0, now=1;
	char s[1001];
	
	if(scanf("%d", &x)<1000){
	while ( ++len ) {
		if( i || now/x ){         //�̵�һλ��0ʱ������� 
			s[i++] = '0' + now/x; //�����̣���ASCIIת��Ϊ�ַ�
		}
		now %= x;                 //ȡ���� 
		if( now == 0 ) {          //������0��˵���������� 
			s[i] = '\0';          //�����ַ��������� 
			printf("%s %d\n", s, len);
			break;
		}
		now = now*10+1;           //����һ��1 
	}	
	}
	
 	return 0;
}


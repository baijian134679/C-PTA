#include<stdio.h>
#include<string.h>

int main(void)
{
	char s[21];		 //�������ݷ�Χ��ŵ��������� 
	int x[21]={0};	 //�������� 
	int x1[21]={0};	 //������� 
	int x2[21]={0};	 //�����ж����� 
	int t,z=0;		 //��ʱ����	
	int i,k=0;     	 //ѭ������ 
	int isYes=1;     //�жϽ�� 
	int cnt;         //�������ݳ��� 
	
	if(scanf("%s", s)<=20){
	cnt = strlen(s);
//���ַ�������¼�뵽�������� 
	for ( i=cnt-1; i>=0; i--,k++ ){
		t = s[i] - '0';
		x[i] = t;
		if( t*2<9){
			x1[k] = t*2+z;
			x2[k] = x1[k];
			z=0;
		}else{
			x1[k] = t*2%10+z;
			x2[k] = x1[k];
			z=t*2/10;
			if(z>0 && i==0 ){
				x1[++k] += z;
			}
		}
	}
	z=k;
//ȷ�Ͻ������ 
	if( z==cnt ){
		isYes=1;
	}else{
		isYes=0;
	}
//�������������� 
	for ( i=cnt-1; i>=0; i-- ){
			for ( k=0; k<i; k++ ){
				if(x[i]<x[k]){
					t = x[k];
					x[k] = x[i];
					x[i] = t;
				}
			}
		}
//������������� 
	for ( i=cnt-1; i>=0; i-- ){
			for ( k=0; k<i; k++ ){
				if(x2[i]<x2[k]){
					t = x2[k];
					x2[k] = x2[i];
					x2[i] = t;
				}
			}
		}
//�Ƚ��������������һ���� 
	if(isYes){
		for( i=0; i<cnt; i++ ){
			if( x2[i]!=x[i]){
				isYes=0;
				break;
			}
		}	
	}
//�жϽ������� 
	if(isYes){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	for ( i=z-1; i>=0; i-- ){
		printf("%d",x1[i]);
	}
	printf("\n");
	}
	
	return 0;	
}

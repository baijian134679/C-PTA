#include <stdio.h>

struct {
	int h[20]; //��� 
	int w[20]; //���� 
}bmi;

int main(void)
{
	int N,i;
	double sta;
	double value;
	
	if(scanf("%d", &N)){
	for( i=0; i<N; i++){
		if(scanf("%d %d", &bmi.h[i], &bmi.w[i]));
	}
	for( i=0; i<N; i++){
		sta = (bmi.h[i]-100)*0.9*2;
		value = bmi.w[i]-sta;
		if(value<0){
			value = -value; //��֤��ֵΪ���� 
		}
		if(value < sta*0.1 ){ //�Ƿ�Ϊ������� 
			printf("You are wan mei!\n");
		}else if(bmi.w[i] > sta ){//�Ƚ�ʵ�����غͱ�׼���� 
			printf("You are tai pang le!\n");
		}else if(bmi.w[i] < sta ){//�Ƚ�ʵ�����غͱ�׼���� 
			printf("You are tai shou le!\n");
		}
	}	
	}
	
	return 0;
}

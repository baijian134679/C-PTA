#include<stdio.h>

int main(void)
{
	int N;//Ŀ�����
	int month=1;//��ʼ���·ݼ���ǰΪ��һ����
	int sum=1;//��ǰ�ۼ��м���
	int now=0,pre=0;//���У�֮ǰ
	
	if(scanf("%d",&N)>0 && N<=10000){
		if(N==sum){
			printf("%d\n",month);//�����ǰ��������Ŀ�������ֱ�����
		}else{
	   	month++;//ת���¸���
	   	now=pre+sum;//�����еĶ�������֮ǰ�ļ����ۼƵ�
	   	while(now<N){//���ڵĶ�����û�ﵽN��
	   		month++;//ת���¸���
	   		pre=sum;//���ۼƵĶ�����Ϊ�¸���֮ǰһ���µĶ���
	   		sum=now;//Ŀǰ�Ķ�����Ϊ�¸���֮ǰ�������ۼƵĶ���
	   		now=pre+sum;//���еĶ�������֮ǰ�ļ����ۼƵ�
	   	}
	   	printf("%d\n",month);//�����Ҫ������
	   }
	}
	
	return 0;
}


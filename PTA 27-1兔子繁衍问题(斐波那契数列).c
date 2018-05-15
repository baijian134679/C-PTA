#include<stdio.h>

int main(void)
{
	int N;//目标对数
	int month=1;//初始化月份即当前为第一个月
	int sum=1;//当前累计有几对
	int now=0,pre=0;//现有，之前
	
	if(scanf("%d",&N)>0 && N<=10000){
		if(N==sum){
			printf("%d\n",month);//如果当前对数就是目标对数，直接输出
		}else{
	   	month++;//转入下个月
	   	now=pre+sum;//现在有的对数就是之前的加上累计的
	   	while(now<N){//现在的对数还没达到N对
	   		month++;//转入下个月
	   		pre=sum;//将累计的对数作为下个月之前一个月的对数
	   		sum=now;//目前的对数作为下个月之前几个月累计的对数
	   		now=pre+sum;//现有的对数就是之前的加上累计的
	   	}
	   	printf("%d\n",month);//输出需要几个月
	   }
	}
	
	return 0;
}


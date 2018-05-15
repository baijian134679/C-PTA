#include<stdio.h>
#include<string.h>

int main(void)
{
	char s[21];		 //由于数据范围存放的输入数据 
	int x[21]={0};	 //输入数组 
	int x1[21]={0};	 //结果数组 
	int x2[21]={0};	 //用于判断数组 
	int t,z=0;		 //临时变量	
	int i,k=0;     	 //循环参数 
	int isYes=1;     //判断结果 
	int cnt;         //输入数据长度 
	
	if(scanf("%s", s)<=20){
	cnt = strlen(s);
//从字符串数组录入到输入数组 
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
//确认结果长度 
	if( z==cnt ){
		isYes=1;
	}else{
		isYes=0;
	}
//给输入数组排序 
	for ( i=cnt-1; i>=0; i-- ){
			for ( k=0; k<i; k++ ){
				if(x[i]<x[k]){
					t = x[k];
					x[k] = x[i];
					x[i] = t;
				}
			}
		}
//给结果数组排序 
	for ( i=cnt-1; i>=0; i-- ){
			for ( k=0; k<i; k++ ){
				if(x2[i]<x2[k]){
					t = x2[k];
					x2[k] = x2[i];
					x2[i] = t;
				}
			}
		}
//比较重组后结果和输入一致性 
	if(isYes){
		for( i=0; i<cnt; i++ ){
			if( x2[i]!=x[i]){
				isYes=0;
				break;
			}
		}	
	}
//判断结果并输出 
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

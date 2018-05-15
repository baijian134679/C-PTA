#include<stdio.h>
#include<string.h>

int main (void)
{
	char a[1002];
	scanf("%[^\n]",a);
	int len=strlen(a);
	int i;int x;int y;
	int max=1;int ans;
	
	for(i=1;i<len-1;i++){
		x=i-1;y=i+1;
		ans=1;
		while(a[x]==a[y]&&x>=0&&y<=len){
			x-=1;
			y+=1;
			ans+=2;
		}
		if(ans>max)
		max=ans;
	}
	for(i=0;i<len-1;i++){
		x=i;y=i+1;
		ans=0;
		while(a[x]==a[y]&&x>=0&&y<=len){
			x-=1;
			y+=1;
			ans+=2;
			
		}if(ans>max)
		max=ans;
	}
	printf("%d",max);
	
	return 0;
}

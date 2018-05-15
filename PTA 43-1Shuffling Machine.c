#include <stdio.h>  
int main()  
{  
    int start[55],set[55],end[55];//定义存储数组  
    char a[]={"SHCDJ"};  
    int n;  
    scanf("%d",&n);  
    int i,j,k;  
    for(i=1;i<55;i++)//输入每个牌改变的对应位置，并对牌赋值  
    {  
        scanf("%d",&set[i]);  
        end[i]=i;  
    }  
    for(i=0;i<n;i++)//n次洗牌  
    {  
        for(j=1;j<55;j++)//把end数组元素存入start数组中准备洗牌  
        {  
            start[j]=end[j];  
        }  
        for(k=1;k<55;k++)  
        {  
            end[set[k]]=start[k];//洗牌，set[k]即对应牌改变后的位置  
        }  
    }  
    for(i=1;i<55;i++)  
    {  
        end[i]=end[i]-1;//与字母存储数组a对应，a从0开始  
        printf("%c%d",a[end[i]/13],end[i]%13+1);  
        if(i!=54)  
            printf(" ");//最后一张牌后无空格  
  
    }  
    return 0;  
}  

#include <stdio.h>  
int main()  
{  
    int start[55],set[55],end[55];//����洢����  
    char a[]={"SHCDJ"};  
    int n;  
    scanf("%d",&n);  
    int i,j,k;  
    for(i=1;i<55;i++)//����ÿ���Ƹı�Ķ�Ӧλ�ã������Ƹ�ֵ  
    {  
        scanf("%d",&set[i]);  
        end[i]=i;  
    }  
    for(i=0;i<n;i++)//n��ϴ��  
    {  
        for(j=1;j<55;j++)//��end����Ԫ�ش���start������׼��ϴ��  
        {  
            start[j]=end[j];  
        }  
        for(k=1;k<55;k++)  
        {  
            end[set[k]]=start[k];//ϴ�ƣ�set[k]����Ӧ�Ƹı���λ��  
        }  
    }  
    for(i=1;i<55;i++)  
    {  
        end[i]=end[i]-1;//����ĸ�洢����a��Ӧ��a��0��ʼ  
        printf("%c%d",a[end[i]/13],end[i]%13+1);  
        if(i!=54)  
            printf(" ");//���һ���ƺ��޿ո�  
  
    }  
    return 0;  
}  

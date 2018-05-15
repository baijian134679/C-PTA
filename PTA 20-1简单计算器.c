#include"stdio.h"  
int main()  
{  
    int value1,value2;  
    int sum=0;  
    char ch;  
    if( scanf("%d",&value1)>-2E31 && value1< 2E31)
    while((ch=getchar())!='=')  
    {  
        if(scanf("%d",&value2)< 2E31 && value2>-2E31) {
		   	if(ch=='/'&&value2==0){  
                printf("ERROR\n");  
                return 0;  
  
        }  
        switch(ch)  
        {  
            case '+':sum=value1+value2;break;  
            case '-':sum=value1-value2;break;  
            case '*':sum=value1*value2;break;  
            case '/':sum=value1/value2;break;  
            default:printf("ERROR\n");return 0;  
  
        }  
        value1=sum; 
		} 
    }  
    printf("%d\n",value1);  
    return 0;  
}  

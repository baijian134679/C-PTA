#include<stdio.h>  
#include<string.h>  
#include<math.h>  

int main(void){  
    int n;  
    scanf("%d",&n);  
    char s[n][5][100];  
    int i,j;
	  
    for(i=0;i<n;i++){  
        for(j=0;j<5;j++){  
            scanf("%s",s[i][j]);  
        }  
    }  
    int num;int k;int max=0;int index=0;  
    for(i=0;i<n;i++){  
        int sum=0;   
        for(j=2;j<5;j++){  
            num=strlen(s[i][j]);  
            for(k=0;s[i][j][k]!='\0';k++){  
                sum+=(s[i][j][k]-'0')*pow(10,num-1);  
                num--;  
            }  
        }  
        if(sum>max){  
            max=sum;  
            index=i;  
        }  
    }  
    printf("%s %s %d",s[index][1],s[index][0],max);  
    
    return 0;  
}  

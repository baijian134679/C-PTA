#include<stdio.h>  

int main (void)
{  
    double x1,x2,x3,y1,y2,y3;  
    
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    x3=x1+x2;  
    y3=y1+y2;  
    if(x3<0&&x3>-0.05){  
        if(y3>=0||y3<=-0.05)  
        printf("(0.0, %.1lf)",y3);  
        else  
        printf("(0.0, 0.0)");  
    }  
    else if(y3<0&&y3>-0.05){  
        printf("(%.1lf, 0.0)",x3);  
    }  
    else   
    printf("(%.1lf, %.1lf)",x3,y3);  
      
    return 0;  
}  

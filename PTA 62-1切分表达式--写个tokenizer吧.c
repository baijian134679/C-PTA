#include <stdio.h>
#include <string.h>

char ch[50];

int main(void)
{
    scanf("%s",&ch);
    int len = strlen(ch);
    int i;
    for(i=0 ; i<len ; i++)
    {
        if(ch[i]>='0' && ch[i]<='9')
        {
            if(i>0 && ch[i-1]>='0' && ch[i-1]<='9')printf("%c",ch[i]);
            else
            {
                if(i)printf("\n");
                printf("%c",ch[i]);
            }
        }
        else if(ch[i] == '-')
        {
            if(i == 0 || ch[i-1] == '(')
            {
                if(i)printf("\n");
                printf("-");
                i++;
                while(1)
                {
                    if(ch[i]>='0' && ch[i]<='9')
                    {
                        printf("%c",ch[i]);
                        i++;
                    }
                    else break;
                }
                i--;
            }
            else printf("\n-");
        }
        else if(ch[i] == '.')
        {
            printf(".");
            i++;
            while(1)
            {
                if(ch[i]>='0' && ch[i]<='9')
                {
                    printf("%c",ch[i]);
                    i++;
                }
                else break;
            }
            i--;
        }
        else if(ch[i] == '+')
        {
            if(i == 0)
            {
                printf("+");
                i++;
                while(1)
                {
                    if(ch[i]>='0' && ch[i]<='9')
                    {
                        printf("%c",ch[i]);
                        i++;
                    }
                    else break;
                }
                i--;
            }
            else printf("\n+");
        }
        else printf("\n%c",ch[i]);
    }
    return 0;
}

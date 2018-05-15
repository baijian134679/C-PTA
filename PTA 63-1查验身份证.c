#include <stdio.h>

int main(){
    int n,count=0,flag=0,sum;
    char a[110][19],m[]={'1','0','X','9','8','7','6','5','4','3','2'};
    int quan[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        getchar();
        scanf("%s",a[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<17;j++){
            if (a[i][j]>'9'||a[i][j]<'0'){
                printf("%s\n",a[i]);
                count++;
                flag=1;
                break;
            }
        }
        if (flag){
            flag=0;
            continue;
        }
        sum=0;
        for (int j=0;j<17;j++){
            sum+=quan[j]*(a[i][j]-'0');
        }
        if (m[sum%11]!=a[i][17]){
            printf("%s\n",a[i]);
            count++;
        }
    }
    if (count==0){
        printf("All passed\n");
    }
    return 0;
}

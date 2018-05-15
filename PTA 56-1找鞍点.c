#include <stdio.h>

int main()
{	
	int i,j;
	int isSP = 0;
	int n;
	int Max=0,Min=0;
	
	if(scanf("%d", &n) && n>=1 && n<=6 ){
	int A[n][n];
	int B[2][n];
	
// 读入矩阵
	for ( i=0; i<n; i++ ){
		for ( j=0; j<n; j++ ){
			if(scanf("%d",&A[i][j]));
		}
	} 
//  比较各行的最大数并记录到[0][i] 。 
	for ( i=0; i<n; i++){
		for ( j=0; j<n; j++){
			if (Max-A[i][j] >= 0){
				B[0][i] = Max;
			}else{
				Max = A[i][j];
				B[0][i] = Max;
			}
		}
		Max = 0;
	}
//  比较各列的最小数并记录到[1][j]。 
	for ( j=0; j<n; j++){
		for ( i=0; i<n; i++){
			if(i==0){Min = A[i][j];}
			if(Min-A[i][j] <=0 ){
				B[1][j] = Min; 
			}else{
				Min = A[i][j];
				B[1][j] = Min;
			}
		}
		Min = 0;
	} 	
//  比较B数组里两组数组，输出鞍点的坐标[i,j]，如果没有输出NONE。
	for ( i=0; i<n; i++){
		for ( j=0; j<n; j++ ){
			if( B[0][i] == B[1][j]){
				printf("%d %d\n",i,j);
				isSP = 1;
				break;
			}
		}
		if(isSP==1){break;}
	}
	if(isSP == 0){
		printf("NONE\n");
	}		
	}
	
	return 0;
}

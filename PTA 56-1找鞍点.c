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
	
// �������
	for ( i=0; i<n; i++ ){
		for ( j=0; j<n; j++ ){
			if(scanf("%d",&A[i][j]));
		}
	} 
//  �Ƚϸ��е����������¼��[0][i] �� 
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
//  �Ƚϸ��е���С������¼��[1][j]�� 
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
//  �Ƚ�B�������������飬������������[i,j]�����û�����NONE��
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

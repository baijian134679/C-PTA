#include <stdio.h>

int main()
{
	int cnt=0;
	int N,Number,x,y,z=0;
	int a=0;
	
	if( scanf("%d %d", &Number, &N) <=100 && Number>0 && N>0){
	do{
		if(scanf("%d", &x)>-2E31 && x<2E31){
			if(cnt>N || (cnt<N && x<0 && z==0)){
			a=1;
			break;
		}
		y = x - Number;
		if(z==0){
			if (y>0){
			printf("Too big\n");
			cnt++;
		}else if (y<0){
			printf("Too small\n");
			cnt++;
		}else {
			cnt++;
			z=1;
		}
		}
		}
	}while( x >0);
	if( a==1 ){
		printf("Game Over\n");
	}else{
		if(cnt == 1){
			printf("Bingo!\n");
		}else if(cnt <= 3){
			printf("Lucky You!\n");
		}else if(cnt>3 && cnt<=N ){
			printf("Good Guess!\n");
		}
	}	
	}
	
	return 0;
}

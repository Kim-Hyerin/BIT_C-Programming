#include <stdio.h>
// 구구단 세로버전 
main(){
	int i, j, n; // 정수 i,j,n 선언 
	
	for(i=2; i<=9; i++){ // for(i의 초기값=2 ; i가 9보다 크거나 같을 때까지 반복 ; 반복할 때마다 i값 1씩 증가)
		for(j=1; j<=9; j++){ // for(j의 초기값=1 ; j가 9보다 크거나 같을 때까지 반복 ; 반복할 때마다 j값 1씩 증가) 
			printf("%d * %d = %d \n",i,j,i*j); // i값 * j값 = i*j값 출력 (ex) 2 * 1 = 2 
		}
		printf("\n"); // 줄 바꿈 
	}
}

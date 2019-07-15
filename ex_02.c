#include <stdio.h>
// 세개의 숫자 중 가장 큰 값  찾 기 
main(){
	int a, b, c, max=0; // 정수 a,b,c, 최대값 선언 
	printf("3개의 숫자를 입력 : ");
	scanf("%d %d %d", &a,&b,&c); // 정수 3개 입력받음 
	if(a>b){ // a가 b보다 클 경우  
		max= a; // a는 최대값에 저장 
		if(max<c) // 저장된 최대값(a)보다 c가 클 경우 
		max=c;} // c를 최대값에 저장 
		else{  // a가 b보다 작을 경우 
			max=b; // b를 최대값에 저장 
			if(max<c) // 저장된 최대값(b)보다 c가 클 경우 
			max=c; // c를 최대값에 저장 
			}
			printf("가장 큰 값 : %d \n", max);
		}

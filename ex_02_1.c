#include <stdio.h>
// 다섯개의 숫자 중 가장 큰 값  찾 기 
main(){
	int a, i, max=0; // 정수 a, i, 최대값 선언 
	printf("5개의 정수 입력 : ");
	for(i=1;i<=5;i++){ /* for조건문(초기식;조건식;변화식) 
	                    for(반복에 사용할 변수i 선언후 1로 초기화; i가 5보다 크거나 같을때까지 반복; 반복할 때마다 i값 1씩 증가) */ 
	scanf("%d", &a);   // scanf입력문->사용자로부터 정보를 입력받는 함수 / scanf("서식문자열",&변수) / scanf(정수형(%d),앞에서 선언한 변수(a))
	
	if(a>max){ 		// if(조건문)->참일 경우 수행 / a가 max값보다 클 경우 
		max=a; 		// 최대값에 a값 저장 
	}
}
	printf("가장 큰 값은 %d\n",max); 
}
	
	
	/*if(a>b){
		max= a;
		if(max<c)
		max=c;}
		else{
			max=b;
			if(max<c)
			max=c;}
			printf("%d \n", max);
		} */

#include <stdio.h>
// switch문을 이용한 성적환산 프로그램 
main(){
	int score=0; // 정수형 선언(점수) 
	int grade=0; // 정수형 선언(등급환산) 
	
	printf("점수를 입력하세요. : "); // 점수 입력받아 출력 
	scanf("%d", &score); // 입력한 점수를 정수형(%d)으로 받아 score값에 저장  >> scanf("입력받을 형태" , & 입력받을 공간의 주소)  
	
	grade = score / 5; // 점수를 5로 나누어 grade값에 저장(이후 switch문에 쓰임) 
	
	switch(grade) // switch문 : grade값에 따른 수행 결과는 아래와 같다. 
	{
		case 20 : printf("A+ 입니다."); break; // 100 = A+   > grade값이 20일경우 문장을 수행한다. > 수행 멈춤 
		case 19 : printf("A+ 입니다."); break; // 99~95 = A+ > grade값이 19일경우 문장을 수행한다. > 수행 멈춤
		case 18 : printf("A0 입니다."); break; // 94~90 = A0 > grade값이 18일경우 문장을 수행한다. > 수행 멈춤
		case 17 : printf("B+ 입니다."); break; // 89~85 = B+ > grade값이 17일경우 문장을 수행한다. > 수행 멈춤
		case 16 : printf("B+ 입니다."); break; // 84~80 = B+ > grade값이 16일경우 문장을 수행한다. > 수행 멈춤
		case 15 : printf("B0 입니다."); break; // 79~75 = B0 > grade값이 15일경우 문장을 수행한다. > 수행 멈춤
		case 14 : printf("B0 입니다."); break; // 74~70 = B0 > grade값이 14일경우 문장을 수행한다. > 수행 멈춤
		case 13 : printf("C+ 입니다."); break; // 69~65 = C+ > grade값이 13일경우 문장을 수행한다. > 수행 멈춤
		case 12 : printf("C0 입니다."); break; // 64~60 = C0 > grade값이 12일경우 문장을 수행한다. > 수행 멈춤
		case 11 : printf("D+ 입니다."); break; // 59~55 = D+ > grade값이 11일경우 문장을 수행한다. > 수행 멈춤
		case 10 : printf("D0 입니다."); break; // 54~50 = D0 > grade값이 10일경우 문장을 수행한다. > 수행 멈춤
		default : printf("F 입니다."); break; // 49~0 = F    > grade값이 그 외일경우 문장을 수행한다. > 수행 멈춤
	}
	return 0;
}

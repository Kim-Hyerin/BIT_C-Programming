#include <stdio.h>
// 사용자로부터 두개의 수와 연산자를 입력받고, 연산자의 종류를 if문으로 비교하여 결과를 출력하는 프로그램 
int main(void)
{
	int num1, num2; //정수형 선언 
	char op;  // 단일 문자형 선언 
	
	printf("첫번째 숫자를 입력하세요. : "); // 첫번째 숫자 입력받아 출력  >> printf("출력")
	scanf("%d",&num1); // 입력한 수를 정수형(%d)으로 받아 num1에 저장  >> scanf("입력받을 형태" , & 입력받을 공간의 주소) 
	printf("두번째 숫자를 입력하세요. : "); // 두번째 숫자 입력받아 출력  
	scanf("%d", &num2); // 입력한 수를 정수형(%d)으로 받아 num2에 저장 
	printf("연산자를 입력하세요. [+, -, *, /] : "); // 연산자 입력받아 출력 
	scanf(" %c", &op); // 입력한 연산자를 단일 문자형(%c)으로 받아 op에 저장 
	
	if(op == '+') // op값이 +와 같으면 결과값은 아래와 같다. 
		printf("%d + %d = %d \n",num1, num2, num1+num2); // num1값 + num2값 = (num1+num2) 
	else if (op == '-') // op값이 -와 같으면 결과값은 아래와 같다. 
		printf("%d - %d = %d \n",num1, num2, num1-num2); // num1값 - num2값 = (num1-num2)
	else if (op == '*') // op값이 *와 같으면 결과값은 아래와 같다.
		printf("%d * %d = %d \n",num1, num2, num1*num2); // num1값 * num2값 = (num1*num2)
	else if (op == '/') // op값이 /와 같으면 결과값은 아래와 같다.
		printf("%d / %d = %d \n",num1, num2, num1/num2); // num1값 / num2값 = (num1/num2)
	else // 그 외 나머지 값을 받았을 때 결과값은 아래와 같다. 
		printf("연산자를 잘못 입력하셨습니다."); // error .
		
		return 0; 
}

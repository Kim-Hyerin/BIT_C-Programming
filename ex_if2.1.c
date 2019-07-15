#include <stdio.h>

main(){
	int a=10, b=20, result;
	char ysj;
	
	printf("a=10 , b=20 입니다. \n");
	printf("연산자를 입력하세요. [+, -, *, /, %%] : ");
	ysj = getchar(); // scanf("%c", &ysj);
	
	if(ysj == '+')
		result = a+b;
	else if(ysj == '-')
		result = a-b;
		else if(ysj == '*')
		result = a*b;
		else if(ysj == '/')
		result = a/b;
		else if(ysj == '%')
		result = a%b;
	else{
		printf("연산자 입력 오류\n");
		exit(1);
	}
	printf("%d", result);
} 

#include <stdio.h>

main(){
	int a=10, b=20, result;
	char ysj;
	
	printf("a=10 , b=20 �Դϴ�. \n");
	printf("�����ڸ� �Է��ϼ���. [+, -, *, /, %%] : ");
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
		printf("������ �Է� ����\n");
		exit(1);
	}
	printf("%d", result);
} 

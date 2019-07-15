#include <stdio.h>
//숫자 맞추기 놀이
quiz_01(){
	int no1=55, no2, L=1, R=100, cnt=1;
	//printf("1~100 입력 : ");
	while(1){
		printf("%d~%d 입력 : ",L,R);
		scanf("%d", &no2);
		if(no1 == no2){
			printf("정답\n");
			message(cnt);
			break;
		}
		else if(no2 < no1){
			printf(" 보다 큽니다.\n");
			L = no2;
		}
		else{
			printf(" 보다 작습니다.\n");
			R = no2;
		}
		cnt=cnt+1;
	}
}

#include <stdio.h>
//���� ���߱� ����
quiz_01(){
	int no1=55, no2, L=1, R=100, cnt=1;
	//printf("1~100 �Է� : ");
	while(1){
		printf("%d~%d �Է� : ",L,R);
		scanf("%d", &no2);
		if(no1 == no2){
			printf("����\n");
			message(cnt);
			break;
		}
		else if(no2 < no1){
			printf(" ���� Ů�ϴ�.\n");
			L = no2;
		}
		else{
			printf(" ���� �۽��ϴ�.\n");
			R = no2;
		}
		cnt=cnt+1;
	}
}

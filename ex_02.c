#include <stdio.h>
// ������ ���� �� ���� ū ��  ã �� 
main(){
	int a, b, c, max=0; // ���� a,b,c, �ִ밪 ���� 
	printf("3���� ���ڸ� �Է� : ");
	scanf("%d %d %d", &a,&b,&c); // ���� 3�� �Է¹��� 
	if(a>b){ // a�� b���� Ŭ ���  
		max= a; // a�� �ִ밪�� ���� 
		if(max<c) // ����� �ִ밪(a)���� c�� Ŭ ��� 
		max=c;} // c�� �ִ밪�� ���� 
		else{  // a�� b���� ���� ��� 
			max=b; // b�� �ִ밪�� ���� 
			if(max<c) // ����� �ִ밪(b)���� c�� Ŭ ��� 
			max=c; // c�� �ִ밪�� ���� 
			}
			printf("���� ū �� : %d \n", max);
		}
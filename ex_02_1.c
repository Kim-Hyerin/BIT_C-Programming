#include <stdio.h>
// �ټ����� ���� �� ���� ū ��  ã �� 
main(){
	int a, i, max=0; // ���� a, i, �ִ밪 ���� 
	printf("5���� ���� �Է� : ");
	for(i=1;i<=5;i++){ /* for���ǹ�(�ʱ��;���ǽ�;��ȭ��) 
	                    for(�ݺ��� ����� ����i ������ 1�� �ʱ�ȭ; i�� 5���� ũ�ų� ���������� �ݺ�; �ݺ��� ������ i�� 1�� ����) */ 
	scanf("%d", &a);   // scanf�Է¹�->����ڷκ��� ������ �Է¹޴� �Լ� / scanf("���Ĺ��ڿ�",&����) / scanf(������(%d),�տ��� ������ ����(a))
	
	if(a>max){ 		// if(���ǹ�)->���� ��� ���� / a�� max������ Ŭ ��� 
		max=a; 		// �ִ밪�� a�� ���� 
	}
}
	printf("���� ū ���� %d\n",max); 
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
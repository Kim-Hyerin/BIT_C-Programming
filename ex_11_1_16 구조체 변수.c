#include <stdio.h>

#define MAXLEN 21 // �ִ� ���ڿ� ���� + 1

// �񱳴�� - ù��° ����ü
struct phone {
				char name[MAXLEN];
				char phoneno[MAXLEN];
};

int main()
{
	struct phone mhyphone1 = { "Hong, Gil-Dong", "02-111-1234"};
	
	//�񱳴�� - �ι�° ����ü
	struct {
				char name[MAXLEN];
				char phoneno[MAXLEN];
	} myphone2 = {"Jang, Gil-San", "02-222-1234"};
	
	return 0;
}

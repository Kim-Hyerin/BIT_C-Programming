#include <stdio.h>

#define MAXLEN 21 // 최대 문자열 길이 + 1

// 비교대상 - 첫번째 구조체
struct phone {
				char name[MAXLEN];
				char phoneno[MAXLEN];
};

int main()
{
	struct phone mhyphone1 = { "Hong, Gil-Dong", "02-111-1234"};
	
	//비교대상 - 두번째 구조체
	struct {
				char name[MAXLEN];
				char phoneno[MAXLEN];
	} myphone2 = {"Jang, Gil-San", "02-222-1234"};
	
	return 0;
}

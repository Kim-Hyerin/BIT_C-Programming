#include <stdio.h>
#include <string.h>
 
#define MAXLEN 21 // 최대 문자열 길이 + 1 

struct phone { char name[MAXLEN];
				char phoneno[MAXLEN]; };
int main(void)
{
	struct phone myphone1 = {"Hong, Gil-Dong", "02-111-1234"};
	struct phone myphone2 = myphone1;  //같은 구조체 변수로 초기화가 가능하다
	struct phone myphone3;
	
	puts("[myphone1]");
	puts(myphone1.name); //myphone1의 name멤버에 접근
	puts(myphone1.phoneno); //myphone1의 phoneno멤버에 접근
	
	puts("[myphone2]");
	puts(myphone2.name); //myphone2의 name멤버에 접근
	puts(myphone2.phoneno); //myphone2의 phoneno멤버에 접근
	
	puts("[myphone3]");
	puts(myphone3.name); //myphone3의 name멤버에 접근
	puts(myphone3.phoneno); //myphone3의 phoneno멤버에 접근
	
	return 0;
}

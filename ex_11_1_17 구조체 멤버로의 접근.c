#include <stdio.h>
#include <string.h>
 
#define MAXLEN 21 // �ִ� ���ڿ� ���� + 1 

struct phone { char name[MAXLEN];
				char phoneno[MAXLEN]; };
int main(void)
{
	struct phone myphone1 = {"Hong, Gil-Dong", "02-111-1234"};
	struct phone myphone2 = myphone1;  //���� ����ü ������ �ʱ�ȭ�� �����ϴ�
	struct phone myphone3;
	
	puts("[myphone1]");
	puts(myphone1.name); //myphone1�� name����� ����
	puts(myphone1.phoneno); //myphone1�� phoneno����� ����
	
	puts("[myphone2]");
	puts(myphone2.name); //myphone2�� name����� ����
	puts(myphone2.phoneno); //myphone2�� phoneno����� ����
	
	puts("[myphone3]");
	puts(myphone3.name); //myphone3�� name����� ����
	puts(myphone3.phoneno); //myphone3�� phoneno����� ����
	
	return 0;
}

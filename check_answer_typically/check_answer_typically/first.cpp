#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

int main1(){
	char p1[15] = "abcd";
	char* p2 = "ABCD";
	char str[15] = "xyz";
	strcpy(str + 2, strcat(p1 + 2, p2 + 1));
	//strcat�ĵ�һ����������ָ��������Ǵ����cat��
	//ֻ�Ƿ���ֵ��ǰ�߼�p1 + 2 = abcdBCD;
	cout << str << endl;
	return 0;
}
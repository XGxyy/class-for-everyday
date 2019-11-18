#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

int main1(){
	char p1[15] = "abcd";
	char* p2 = "ABCD";
	char str[15] = "xyz";
	strcpy(str + 2, strcat(p1 + 2, p2 + 1));
	//strcat的第一个参数不管指向哪里，都是从最后cat，
	//只是返回值是前者及p1 + 2 = abcdBCD;
	cout << str << endl;
	return 0;
}
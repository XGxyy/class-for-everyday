/*printf��scanf�ڴ���float����ʱ��ֱ�Ӵ����double��

*/
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int a;
	float b, c;
	
	scanf("%2d%3f%4f", &a, &b, &c);
	printf("a = %d, b = %d, c = %f", a, b, c);


  	return 0;
}
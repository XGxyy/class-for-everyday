//һ������������n����ÿ�������涼��һ������
//(ӵ����ͬ����������������)�����һ��������
//���˵ĵ��ҽ���������ĺ���ĺʹ���������ĺ���Ļ���
//���� : ��������������ĺ�����{ 1, 1, 2, 3 }��
//������Ӿ������˵ģ���Ϊ1 + 1 + 2 + 3>1 * 1 * 2 * 3
//������ʵ��Ӵ������Ƴ�һЩ��(�����Ƴ�0�������Ǳ��Ƴ�
//��)��Ҫʹ�Ƴ���Ĵ��������˵ġ����������̼���һ��
//����Ի�õĶ����ֲ�ͬ�����˵Ĵ��ӡ�
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1000;
int a[N];
int n;

int getnum(int a[], int pos, long sum, long multi)
{
	int cnt = 0;
	for (int i = pos; i<n; i++)
	{
		sum += a[i];
		multi *= a[i];
		if (sum>multi)
			cnt += 1 + getnum(a, i + 1, sum, multi);
		else if (a[i] == 1)
			cnt += getnum(a, i + 1, sum, multi);
		else
			break;
		sum = sum - a[i];
		multi = multi / a[i];
		for (; i<n - 1 && a[i] == a[i + 1]; i++);
	}
	return cnt;
}
int main1()
{
	while (scanf("%d", &n)>0)
	{
		for (int i = 0; i<n; i++)
			scanf("%d", &a[i]);
		sort(a, a + n);
		cout << getnum(a, 0, 0, 1);
	}
	return 0;
}

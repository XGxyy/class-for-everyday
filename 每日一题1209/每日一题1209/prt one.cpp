#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	/**
	*  ����λ�϶�����������ż��λ�϶���ż��
	*  ���룺����arr�����ȴ���2
	*  len��arr�ĳ���
	*  ��arr����������λ�϶�����������ż��λ�϶���ż��
	*/
	//1234
	void oddInOddEvenInEven(vector<int>& arr, int len) {
		int i = 0, j = 1;

		while (i < len && j < len){
			if ((arr[i] % 2) == 0){
				i += 2;
				continue;
			}
			if ((arr[j] % 2) == 1){
				j += 2;
				continue;
			}
			swap(arr[i], arr[j]);
			i += 2;
			j += 2;
		}
	}
};

int main(){
	int len = 0;
	while (cin >> len){
		vector<int> arr(len);
		for (int i = 0; i < len; i++){
			cin >> arr[i];

		}
		Solution a;
		cout << a.oddInOddEvenInEven(arr, len) << endl;
	}
	return 0;
}
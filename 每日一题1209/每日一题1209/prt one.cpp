#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	/**
	*  奇数位上都是奇数或者偶数位上都是偶数
	*  输入：数组arr，长度大于2
	*  len：arr的长度
	*  将arr调整成奇数位上都是奇数或者偶数位上都是偶数
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
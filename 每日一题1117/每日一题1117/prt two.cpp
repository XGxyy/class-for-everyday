#include <iostream>
using namespace std;

int main(){
	int num = 0;
	while (cin >> num){
		/*int dev = 1;
		int count = 1;
		int mid = 0;
		for (int i = num; i; i /= 2){
			int tmp = i % 2;
			if (dev == tmp){
				count++;
				if (count > mid){
					mid = count;
				}
			}
			else{
				count = 1;
				continue;
			}
		}
		cout << mid << endl;*/
		int count = 0;
		int sum[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
		for (int i = num; i; i /= 2){
			sum[count] = i % 2;
			count++;
		}
		count = 1;
		int tmp = 1;
		for (int j = 1; j < 8; j++){
			if (sum[j] == 0){
				count = 1;
				continue;
			}
			if (sum[j - 1] == sum[j] && sum[j] == 1){
				count++;
				if (tmp < count){
					tmp = count;
				}
			}
		}
		cout << tmp << endl;
	}
	return 0;
}
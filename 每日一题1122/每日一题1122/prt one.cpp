#include <iostream>

using namespace std;

int findNumberOf1(int num){
	int count = 0;
	int sum = 0;
	for (int i = num; i; i /= 2){
		sum = i % 2;
		if (sum == 1){
			count++;
		}
	}
	return count;
}

int main1(){
	int num = 0;
	while (cin >> num){
		cout << findNumberOf1(num) << endl;
	}
	return 0;
}
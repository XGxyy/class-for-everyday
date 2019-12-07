#include <iostream>
using namespace std;

const int count_of_per(const int n){
	int i, j;
	int count = 0;
	if (n <= 0 || n > 500000){
		return -1;
	}
	//10
	for (i = 1; i <= n; ++i){
		int sum = 0;
		for (j = 1; j < i; ++j){

			int tmp = i % j;

			if (tmp == 0){
				sum += j;
			}
		}
		if (sum == i){
			count++;
		}
	}
	return count;
}

int main1(){

	int n = 0;
	while (cin >> n){
		cout << count_of_per(n) << endl;
	}
	return 0;
}
#include <iostream>
#include <assert.h>
#include <math.h>
using namespace std;


bool is_prime(int n){
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){//只要有一个约数，就说明不是素数
			return false;
		}
	}
	return true;
}

int main1(){
	int num = 0;
	while (cin >> num){
		assert(num > 2);	
		int left = num / 2 - 1;	
		int right = num / 2 + 1; 	
		while (!is_prime(left) || !is_prime(right)){
			left++;		
			right--;	
		}	//说明两个都是素数	
		cout << left << endl;	
		cout << right << endl;

	}

	return 0;
}
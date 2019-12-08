#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
	int jumpFloorII(int number) {
		if (number == 1)
			return 1;
		else
			return pow(2, number - 1);
	}
};

int main1(){
	int n = 0;
	while (cin >> n){
		Solution a;
		cout << a.jumpFloorII(n) << endl;
	}
	return 0;
}
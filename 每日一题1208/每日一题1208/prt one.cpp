#include <iostream>

using namespace std;
//0001 + 0010 = 0011 0001+0001=0010 0000  0010
class Solution {
public:
	int Add(int num1, int num2){

		while (num2 != 0){
			int tmp = num1 ^ num2;//1^1 = 0
			num2 = (num1 & num2) << 1;//1&1 = 1<<1 = 2
			num1 = tmp;
		}
		return num1;
	}
};

int main1(){
	int a, b;
	while (cin >> a >> b){
		Solution nmsl;
		cout << nmsl.Add(a, b) << endl;
	}
	return 0;
}
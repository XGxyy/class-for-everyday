#include <iostream>

using namespace std;
//1               1
//2             1 1 1=3
//3           1 2 3 2 1=7
//4          1 3 6 7 6 3 1=19 
//5     1 4 10 16 19 16 10 4 1=81
//6  1 5 15 30 45 81 45 30 15 5 1
//7 1 6 21 ....
//当n<3时，没有偶数，输出 - 1；
//	当n为奇数时，第一个偶数位置在第二，输出2；
//	当n为偶数且能被4整除时，第一个偶数位置在第三，输出3；
//	当n为偶数但不能被4整除时，偶数位置在第四，输出4
const int find_NUM(const int n){
	if (n > 100000000 || n < 3){
		return -1;
	}
	if (n % 2 == 1){
		return 2;
	}
	if (n % 2 == 0 && n % 4 == 0){
		return 3;
	}
	if (n % 2 == 0 && n % 4 != 0){
		return 4;
	}
}

int main1(){
	int n = 0;
	while (cin >> n){
		cout << find_NUM(n) << endl;
	}
	return 0;
}
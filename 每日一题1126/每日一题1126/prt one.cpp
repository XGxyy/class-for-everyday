#include <iostream>

using namespace std;

int get_Total_count(int month_Count){
	int m = month_Count;
	if (m < 3){
		return 1;
	}
	return get_Total_count(m - 1) + get_Total_count(m - 2);
}

int main1(){
	int num = 0;
	while (cin >> num){

		cout << get_Total_count(num) << endl;
	}

	return 0;
}
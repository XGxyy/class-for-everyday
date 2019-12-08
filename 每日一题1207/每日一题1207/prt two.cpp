#include <iostream>

using namespace std;

int main(){
	double n, r;
	while (cin >> n >> r){
		double c = 2 * 3.14 * r;
		if (n < c){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
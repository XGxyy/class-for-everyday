#include <iostream>
#include <vector>
using namespace std;

int get_GYS(int n, int m){
	if (m < n){
		int tmp = m;
		m = n;
		n = tmp;
	}

	if (n == 0){
		return m;
	}
	else{
		return get_GYS(n, m % n);
	}
}

int main1(){
	int n = 0, a = 0;
	while (cin >> n >> a){
		vector<int> b(n);
		int c = a;
		for (int j = 0; j < n; j++){
			cin >> b[j];
		}
////<pre>3 50
//		50 105 200
//			5 20
//			30 20 15 40 100< / pre>
		//110 205
		for (int i = 0; i < n; i++){
			if (b[i] <= c){
				c = c + b[i];
			}
			else{
				c = c + get_GYS(c, b[i]);
			}
		}
		cout << c << endl;
	}
	return 0;
}
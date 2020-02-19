#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	int n;
	while (cin >> n){
		for (int i = 0; i < n; i++){
			int a = 0;
			cin >> a;
			v.push_back(a);
		}
		int max = 0;
		for (int i = 0; i < n; i++){
			int tmp = 0;
			for (int j = i; j < n; j++){
				
				tmp += v[j];
				if (tmp > max){
					max = tmp;
				}
			}
		}
		cout << max;
	}


	return 0;
}
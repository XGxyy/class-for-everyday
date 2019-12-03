#include <iostream>
#include <vector>

using namespace std;

class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		// NMSL
		vector<int> g = gifts;
		int count = 1;
		int ans = 0;
		int i;
		for (i = 0; i < n; ++i){
			int tmp = 0;
			for (int j = 0; j < n; ++j){
				if (i == j){
					continue;
				}
				if (g[i] == g[j]){
					tmp++;
				}
				if (tmp >= (n / 2) && tmp > count){
					count = tmp;
					ans = g[i];
					break;
				}
			}
		}
		if (count == 1){
			return 0;
		}
		else{
			return ans;
		}
	}
};

int main(){
	Gift a;

	int n;

	while (cin >> n){
		vector<int> g(n);
		for (int i = 0; i < n; i++){
			cin >> g[i];
		}
		int ans =  a.getValue(g, n);
		cout << g[ans] << endl;
	}
	return 0;
}
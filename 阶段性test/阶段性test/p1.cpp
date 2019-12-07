#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Gift {
public:

	int getValue(vector<int> gifts, int n) {
		//sort(gifts.begin(), gifts.end());
		for (int a = 0; a < n; a++){
			for (int b = a; b < n - 1; b++){
				if (gifts[b] > gifts[b + 1]){
					int tmp = gifts[b];
					gifts[b] = gifts[b + 1];
					gifts[b + 1] = tmp;
				}
			}
		}
		int half = gifts[n / 2];
		int count = 0;
		for (int i = 0; i < n; i++){

			if (gifts[i] == half){
				count++;
			}
		}

		if (count > n / 2){
			return half;
		}
		else{
			return 0;
		}


			


	}
};

int main(){
	int n = 0;
	while (cin >> n){
		vector<int> g(n);
		for (int i = 0; i < n; i++){
			cin >> g[i];
		}
		Gift a;
		cout << a.getValue(g, n) << endl;
	}

	return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int num = 0;
	string choice;
	while (cin >> num >> choice){
		vector<int> home(num);
		for (int i = 0; i < num; i++){
			home[i] = i + 1;
		}
		int tmp = 0;
		int flag = 0;
		for (int j = 0; j < choice.size(); j++){
			if (choice[j] == 'U'){
				tmp--;
				if (tmp < 0){
					tmp = num + tmp;
					flag = 1;
				}
			}
			if (choice[j] == 'D'){
				tmp++;
				if (tmp > num - 1){
					tmp = tmp % num;
					flag = 0;
				}
			}
		}
		if (num < 4){
			for (int i = 0; i < num; i++){
				cout << home[i] << ' ';
			}
			cout << endl;
		}
		else{
			if (tmp >= num - 4 && flag == 1){
				cout << home[num - 4] << ' ' << home[num - 3] << ' ' << home[num - 2] << ' ' << home[num - 1] << endl;
			}
			else if (tmp < 3 && flag == 0){
				cout << home[0] << ' ' << home[1] << ' ' << home[2] << ' ' << home[3] << endl;
			}
			else if (flag == 0) {
				cout << home[tmp - 3] << ' ' << home[tmp - 2] << ' ' << home[tmp - 1] << ' ' << home[tmp] << endl;
			}
			else if (flag == 1 && tmp < num - 4){
				cout << home[tmp] << ' ' << home[tmp + 1] << ' ' << home[tmp + 2] << ' ' << home[tmp + 3] << endl;
			}
		}
		cout << home[tmp] << endl;
	}
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main1(){
	string s;
	while (cin >> s){
		int tmp = s.size();
		char c;
		for (int i = 0; i < tmp / 2; i++){
			c = s[i];
			s[i] = s[tmp - i - 1];
			s[tmp - i - 1] = c;
		}
		cout << s << endl;
	}
	return 0;
}
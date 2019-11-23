#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	string str ;
	getline(cin, str);
	char* v = new char(str.size());
	int count = 0;
	for (int i = 0; i < str.size(); i++){
		if (str[i] == ' '){
			count++;
		}
	}
	cout << count << endl;
	for (int i = 0; i < str.size(); i++){
		v[i] = str[i];
		if (str[i] == ' '){
			cout << *v << endl;
			v = nullptr;
		}

		/*if (str[i + 1] == '"'){
			cin >> str[]
		}
		*/
	}
	return 0;
}
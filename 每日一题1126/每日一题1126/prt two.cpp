#include <iostream>
#include <string>

using namespace std;

bool all_str(const char* str1, const char* str2){
	if (*str1 == '\0' && *str2 == '\0'){
		return true;
	}
	if (*str1 == '\0' || *str2 == '\0'){
		return false;
	}

	if (*str1 == '?'){
		return all_str(str1 + 1, str2 + 1);
	}
	else if (*str1 == '*') {
		return all_str(str1 + 1, str2) || all_str(str1 + 1, str2 + 1) || all_str(str1, str2 + 1);
	}
	else if (*str1 == *str2){ 
		return all_str(str1 + 1, str2 + 1); 
	}

		return false;

}

int main(){
	string s1, s2;
	while (cin >> s1 >> s2){
		int ret = all_str(s1.c_str(), s2.c_str());
		if (ret){
			cout << "true" << endl;
		}
		else{
			cout << "false" << endl;
		}
	}

	return 0;
}
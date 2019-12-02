#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;
//输入一个字符串，输出第一个只出现一次的字母

//const char find_first(const string str){
//	for (int i = 0; i < str.size(); i++){
//		for (int j = 0; j < str.size(); j++){
//			if (str[i] == str[j]){
//				break;
//			}
//			else{
//				return str[i];
//			}
//		}
//	}
//	return -1;
//}

class Solution {
public: 
	int FirstNotRepeatingChar(string str) { 
		if (str.size() == 0) 
			return -1;
		unordered_map<char, int> countMap;     
		for (int i = 0; i < str.size(); i++){ 
			countMap[str[i]]++;
		}
		int pos = -1;    
		for (int i = 0; i < str.size(); i++){ 
			if (countMap[str[i]] == 1){
				pos = i;
				break;
			}
		}
		return str[pos];
	}
};


int main(){
	string str;
	while (cin >> str){
		Solution a;
		int n = a.FirstNotRepeatingChar(str);
		cout << str[n] << endl;
	}
	return 0;
}
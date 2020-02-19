#include<iostream>
#include <string>
using namespace std;

void del(string &str1, string str2){
	int len = str1.size();
	int len2 = str2.size();
	int i = 0;
	while (i < len){
		for (int j = 0; j < len2; j++){
			if (str1[i] == str2[j]){
				if (i != len - 1){
					for (int q = i; q < len - 1; q++){
						str1[q] = str1[q + 1];		
					}
					str1[len - 1] = '\0';
				}
				else {
					str1[i] = '\0';
				}
			}
		}
		i++;
	}
}

int main1(){
	string str1, str2;

	while (getline(cin, str1)){

		getline(cin, str2);
		//del(str1, str2);
		int len = str1.size();
		int len2 = str2.size();
		int i = 0;
		while (i < len){
			for (int j = 0; j < len2; j++){
				if (str1[i] == str2[j]){
					if (i != len - 1){
						for (int q = i; q < len - 1; q++){
							str1[q] = str1[q + 1];
						}
						str1[len - 1] = '\0';
					}
					else {
						str1[i] = '\0';
					}
				}
			}
			i++;
		}
		cout << str1 << endl;
	}




	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1, str2;
	while (cin >> str1 >> str2){
		string max_s;

		if (str1.size()>str2.size())   
			swap(str1, str2);  
		for (int i = 0; i<str1.size(); i++){ 
			for (int j = i; j<str1.size(); j++) { 
				string newstr = str1.substr(i, j - i + 1);
				if (int(str2.find(newstr))<0)   
					break;      
				else if (newstr.size()>max_s.size())   
					max_s = newstr;
			} 
		}     
		cout << max_s << endl;
	}
	return 0;
}
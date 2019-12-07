#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const void bigger_one(const string& str){
	string s = str;
	string poker = { "12345678910JQKA2joker JOKER" };

	if (s.find("joker JOKER") != -1){
		cout << "joker JOKER" << endl;
		return;
	}
	int mid = s.find('-');

	string hand_one = s.substr(0, mid);
	string hand_two = s.substr(mid + 1);
	//空格个数
	int count_one = count(hand_one.begin(), hand_one.end(), ' ');

	int count_two = count(hand_two.begin(), hand_two.end(), ' ');
	//先找第一张
	string first_one = hand_one.substr(0, hand_one.find(' '));
	string first_two = hand_two.substr(0, hand_two.find(' '));
	if (count_one == count_two){
		if (poker.find(first_one) > poker.find(first_two)){
			cout << hand_one << endl;
		}
		else{
			cout << hand_two << endl;
		}
	}

	else{
		if (count_one == 3){
			cout << hand_one << endl;
		}
		else if (count_two == 3){
			cout << hand_two << endl;
		}
		else{
			cout << "ERROR" << endl;
		}
	}
	
}

int main(){

	string s;
	getline(cin, s);
	
	bigger_one(s);

	return 0;
}
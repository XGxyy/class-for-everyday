//#include <iostream>
//#include <string>
//
//using namespace std;
////1024 + 32   
////1024  4201
////32    83
//string Add_Longintager(string a, string b){
//	string back_a;
//	string back_b;
//	int len1 = a.size();
//	int len2 = b.size();
//	int i, j;
//	for (i = 0; i < len1; i++){
//		back_a[i] = a[len1 - i - 1];
//	}
//	for (j = 0; j < len2; j++){
//		back_b[j] = b[len2 - j - 1];
//	}
//	int len = 0;
//	if (len1 > len2){
//		for (i = len2; i < len1; i++){
//			back_b[i] = 0;
//		}
//		len = len1;
//	}
//	else if(len1 < len2){
//		for (i = len1; i < len2; i++){
//			back_a[i] = 0;
//		}
//		len = len2;
//	}
//	else{
//		len = len1;
//	}
//
//	string ans;
//	int flag = 0;
//	for (int tmp = 0; tmp < len; tmp++){
//		ans[tmp] = back_a[tmp] + back_b[tmp] + flag;
//		flag = 0;
//		if (ans[tmp] >= 10){
//			ans[tmp] = ans[tmp] % 10;
//			flag = 1;
//		}
//	}
//
//	if (flag == 1){
//		ans.push_back(1);
//		len++;
//	}
//
//	for (j = 0; j < len; j++){
//		a[j] = ans[len2 - j - 1];
//	}
//	return a;
//}
//
//
//int main(){
//	string a;
//	string b;
//	cin >> a;
//	cin >> b;
//	cout << Add_Longintager(a, b) << endl;
//	return 0;
//}

#include<iostream>  
#include<cstring>  
#include<string>  
using namespace std;
char s1[210], s2[210];
int a[210], b[210], c[210];

int main()
{
	while (cin >> s1){
		cin >> s2;
		int i, j, lena, lenb, lenc, max, x;
		lena = strlen(s1);
		lenb = strlen(s2);


		for (i = 0; i <= lena; i++)    //逆序存储于数组中
			a[lena - i] = s1[i] - '0';
		for (i = 0; i <= lenb; i++)
			b[lenb - i] = s2[i] - '0';

		x = 0;    //x用来进位
		lenc = 1;
		while ((lenc <= lena) || (lenc <= lenb))
		{
			c[lenc] = a[lenc] + b[lenc] + x;
			x = c[lenc] / 10;
			c[lenc] = c[lenc] % 10;
			lenc++;
		}
		c[lenc] = x;  //最后这个位也要进，别忘了
		while (c[lenc] == 0)   //删除前导零
			lenc--;

		for (i = lenc; i > 0; i--)  //逆序输出数组c
			cout << c[i];
		cout << endl;
	}
	return 0;
}

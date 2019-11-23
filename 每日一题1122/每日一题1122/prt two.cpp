#include <iostream>
#include <vector>
using namespace std;

//测试样例：4, [0, 7, 1, 6], [1, 5, 0, 6]
//返回：10(解释：可以左手手套取2只，右手手套取8只)

//解题思路：本题的意思是随意取出的手套至少可
//以形成一组组合的最少手套数量。题目给的两个数
//组对应位置表示同一种颜色的左右手套数量。对于
//非0递增序列a1, a2…an，要想最终取值覆盖每一个
//种类 n = sum(a1…an) - a1 + 1（也就是总数减去
//最小值之后加一） 所以对于左右手手套颜色都有数
//量的序列，想要覆盖每一种颜色，则最小数量
//leftsum = 左边数量和 - 左边最小值 + 1，
//rightsum = 右边数量和 - 右边的最小值 + 1。
//而对于有0存在的，则需要做累加，保证覆盖每一种颜色。


class Gloves {
public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
		// NMSL
		int l_max = 0, r_max = 0;
		
		int mini = 0;
		vector<int> l = left;
		vector<int> r = right;
		int l_min = 26, r_min = 26;
		for (int i = 0; i < n; i++){
			if (l[i] > l_max){
				l_max = l[i];
			}
			if (r[i] > r_max){
				r_max = r[i];
			}
			if (l[i] < l_min && l[i] != 0){
				l_min = l[i];
			}
			if (r[i] < r_min && r[i] != 0){
				r_min = r[i];
			}
		}
		int tmp = l_min + r_min + r_max + 1;
		mini = r_min + l_min + l_max + 1;
		if (mini > tmp){
			mini = tmp;
		}
		return mini + 1;
	}
};

int main(){
	int n = 0;
	cin >> n;
	vector<int> l(n);
	vector<int> r(n);
	for (int i = 0; i < n; i++){
		cin >> l[i];
	
	}
	for (int i = 0; i < n; i++){
		cin >> r[i];
	}
	Gloves a;
	cout << a.findMinimum(n, l, r) << endl;
	return 0;
}
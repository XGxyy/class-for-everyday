#include <iostream>
#include <vector>
using namespace std;

//����������4, [0, 7, 1, 6], [1, 5, 0, 6]
//���أ�10(���ͣ�������������ȡ2ֻ����������ȡ8ֻ)

//����˼·���������˼������ȡ�����������ٿ�
//���γ�һ����ϵ�����������������Ŀ����������
//���Ӧλ�ñ�ʾͬһ����ɫ��������������������
//��0��������a1, a2��an��Ҫ������ȡֵ����ÿһ��
//���� n = sum(a1��an) - a1 + 1��Ҳ����������ȥ
//��Сֵ֮���һ�� ���Զ���������������ɫ������
//�������У���Ҫ����ÿһ����ɫ������С����
//leftsum = ��������� - �����Сֵ + 1��
//rightsum = �ұ������� - �ұߵ���Сֵ + 1��
//��������0���ڵģ�����Ҫ���ۼӣ���֤����ÿһ����ɫ��


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
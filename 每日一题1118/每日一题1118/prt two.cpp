#include <iostream>
//11/17�շ� - 11/20�մ�
using namespace std;

class BinInsert {
public:
	int binInsert(int n, int m, int j, int i) {
		m <<= j;

		return n | m;//NMSL
	}
};

int main(){

	return 0;
}
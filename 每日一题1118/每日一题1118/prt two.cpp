#include <iostream>
//11/17ÈÕ·¢ - 11/20ÈÕ´ğ
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
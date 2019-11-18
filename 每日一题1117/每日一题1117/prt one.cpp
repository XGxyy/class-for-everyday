#include <iostream>
using namespace std;

class LCA {
public:
	int getLCA(int a, int b) {
		while (a != b){

			if (a>b) a /= 2;

			else
				b /= 2;

		}

		return a; //NMSL
	}
};

int main1(){

	return 0;
}
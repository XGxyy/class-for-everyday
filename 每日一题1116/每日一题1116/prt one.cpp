#include <iostream>
#include <vector>
using namespace std;

class Board {
public:
	bool checkWon(int board[3][3]) {
		if (board[0][0] == board[0][1] == board[0][2] == 1 ||
			board[0][0] == board[1][0] == board[2][0] == 1 ||
			board[0][0] == board[1][1] == board[2][2] == 1 ||
			board[0][3] == board[1][1] == board[2][0] == 1 ||
			board[1][1] == board[1][0] == board[1][2] == 1 ||
			board[2][0] == board[2][1] == board[2][2] == 1 ||
			board[0][1] == board[1][1] == board[2][1] == 1 ||
			board[0][2] == board[1][2] == board[2][2] == 1){
			return true;
		}
		else{
			return false;
		}
	}
};

int main(){
	int bd[3][3] = { 0 };
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cin >> bd[i][j];
		}
	}
	Board ans;
	cout << ans.checkWon(bd) << endl;
	return 0;
}
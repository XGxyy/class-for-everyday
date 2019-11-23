#include <iostream>

using namespace std;

typedef unsigned int uint;
class Data{
	int m_year;
	uint m_month;
	uint m_day;
public:
	Data(int y, uint m, uint d) :
		m_year(y),
		m_month(m),
		m_day(d){}

	/*int leapyear(int y){
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
			return 366;
		}
		else
			return 365;
	}*/


	uint getMonthDay(int y, uint m){
		if (m > 12 || m < 1){
			return 0;
		}

		if (m == 4 || m == 6 || m == 9 || m == 11){

			return 30;

		}

		else if (m == 2){

			return 28 + (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));

		}

		else{
			return 31;
		}
	}

	int outday(){
		int y = m_year ;
		uint m = m_month;
		uint d = m_day;
		if (m < 1 || m > 12 || d < 1 || d > 31){
			return 0;
		}
		int daily = 0;
		m = m - 1;
		while (m)
		{
			daily += getMonthDay(y, m);
			m--;
		} 
		return daily + d;
	}
};

int main(){
	int y = 0;
	uint m = 0, d = 0;
	cin >> y;
	cin >> m;
	cin >> d;
	Data a(y, m, d);
	cout << a.outday() << endl;
	return 0;
}
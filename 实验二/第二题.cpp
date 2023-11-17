#include <iostream>
using namespace std;
int main() {
	float x;
	float y;
	cout << "ÇëÊäÈëÒ»¸öx" << endl;
	cin >> x;
	if (x > 0)
	{
		if (x < 1) {
			y = 3 - x * 2;
			cout << y << endl;
		}
		else if (x < 5) {
			y = 2 / (4 * x) + 1;
			cout << y << endl;
		}
		else if( x<10){
			y = x * x;
			cout << y << endl;
		}
		else {
			cout << "wrong" << endl;
		}
	}
	else {
		cout << "wrong" << endl;
	}
	return 0;
}
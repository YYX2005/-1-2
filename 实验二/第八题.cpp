#include <iostream>
using namespace std;
int main() {
	float a;
	cout << "ÇëÊäÈëÒ»¸öx" << endl;
	cin >> a;
	if (a < 0) {
		cout << "wrong" << endl;
	}
	else {
		for (float i = a; ;) {
	
			
			float  ii = (i + a / i)/2;
	
			if (fabs(ii - i) < 1e-5) {
				cout << ii;
				break;
			}
			i = ii;
		}
	}
	return 0;
}
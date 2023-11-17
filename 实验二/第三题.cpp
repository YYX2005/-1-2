#include <iostream>
using namespace std;
int main() {
float  a, b, c ,sum;
	cout << "请输入三角形的三条边" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b <= c || c + b <= a || a + c <= b) {
		cout << "您输入的三角形不存在" << endl;
	}
	else {
		sum = a + b + c;
		cout << "您输入的三角形周长是：" << sum << endl;
		if (a == b || b == c || c == a) {
			cout << "您输入的三角形是等腰三角形" << endl;
		}
	}
	
	return 0;
}
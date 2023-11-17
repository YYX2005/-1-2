#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cout << "请输入第一个数" << endl;
	cin >> a;
	cout << "请输入第二个数" << endl;
	cin >> b;
	//找最小公倍数
	c = (a > b ? a : b);
	for (int i = c; ;i++) {
		if (i % a == 0 &&i%b==0){
			cout << "最小公倍数" << i << endl;
			break;
		}
	}
	//找最大公因数
	d = (a > b ? b : a);
	for (int i = d; ;i--) {
		if (a% i == 0 && b %i==0){
			
			cout << "最大公约数" << i << endl;
		}
	}
	return 0;
}
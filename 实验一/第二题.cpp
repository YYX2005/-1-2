#include <iostream>
#define pai 3.14//定义一个Π
using namespace std;
int main(){
	int a = 0;
	int b = 0;
	float c = 0;
	cout << "请输入圆锥的底的半径" << endl;
	cin >> a;
	cout << "请输入圆锥锥高" << endl;
	cin >> b;
	c = a * a * b * pai / 3;
	cout << c << endl;

	cout << endl;
}	


#include <iostream>
using namespace std;
int main() {
float  a, b, c ,sum;
	cout << "�����������ε�������" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b <= c || c + b <= a || a + c <= b) {
		cout << "������������β�����" << endl;
	}
	else {
		sum = a + b + c;
		cout << "��������������ܳ��ǣ�" << sum << endl;
		if (a == b || b == c || c == a) {
			cout << "��������������ǵ���������" << endl;
		}
	}
	
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cout << "�������һ����" << endl;
	cin >> a;
	cout << "������ڶ�����" << endl;
	cin >> b;
	//����С������
	c = (a > b ? a : b);
	for (int i = c; ;i++) {
		if (i % a == 0 &&i%b==0){
			cout << "��С������" << i << endl;
			break;
		}
	}
	//���������
	d = (a > b ? b : a);
	for (int i = d; ;i--) {
		if (a% i == 0 && b %i==0){
			
			cout << "���Լ��" << i << endl;
		}
	}
	return 0;
}
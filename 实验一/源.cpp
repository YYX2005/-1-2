#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	float hua = 0;//���廪���¶�
	cout << "�����뻪���¶�" << endl;
	cin >> hua;//���뻪���¶�
	float she = 0;//���������¶�
	she = (hua - 32) * 5 / 9;
	
	cout << "��������¶�" << fixed<< setprecision(2) << she << endl;
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	char a;
	cout << "������һ���ַ�" << endl;
	cin >> a;
	
	if (a >90) {
		cout <<(char)( a - 32 )<<endl;
	}
	else {
		cout << a + 1 << endl;
	}
	return 0;
}
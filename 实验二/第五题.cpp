#include <iostream>
using namespace std;
int main() {
	int eng = 0;
	int  sp = 0;
	int num = 0;
	int yun = 0;
	char c;
	cout << "������һ���ַ�";
	while ((c = getchar() )!= '\n') {
		if ((c >= 'a' && c <= 'z')||(c>='A'&&c<='Z')) {
			eng = ++eng;
		}//
		else if (c >= '0' && c <= '9') {
			num = num++;
		}
		else if (c ==' ') {
			sp = sp++;
		}
		else {
			yun = yun++;
		}
	}
	cout << "Ӣ���ַ�����Ϊ;" << eng << endl;
	cout << "���ָ���Ϊ;" << num << endl;
	cout << "�ո����Ϊ;" << sp << endl;
	cout << "�����ַ�����Ϊ;" << yun  << endl;
	return 0;
	

}
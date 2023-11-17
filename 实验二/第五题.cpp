#include <iostream>
using namespace std;
int main() {
	int eng = 0;
	int  sp = 0;
	int num = 0;
	int yun = 0;
	char c;
	cout << "请输入一串字符";
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
	cout << "英文字符个数为;" << eng << endl;
	cout << "数字个数为;" << num << endl;
	cout << "空格个数为;" << sp << endl;
	cout << "其他字符个数为;" << yun  << endl;
	return 0;
	

}
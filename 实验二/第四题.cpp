#include <iostream>
using namespace std;
int main() {
	int a, b;
	char c;
	cout << "请输入第一个数a=";
	cin >> a;
	cout << "请输入运算符"  ;
	cin >> c;
	cout << "请输入第二个数b=";
	cin >> b;
	  if (c == 43) 
	  {
		cout << "a+b=" << a+b<<endl;
	}
	  else if (c == 45)
	  {
		cout << "a-b=" << a-b<<endl;
	}
	  else  if (c == 42) 
	  {
		cout << "a*b=" << a * b << endl;
	}
	  else  if (c == 47) {
	 	if (b == 0)
		{
			cout << "wrong" << endl;
			
		}
		
		else
		{ cout << "a/b=" << a / b << endl; }
	}
	  else {
		cout << "运算符错误" << endl;
	}
	return 0;
}
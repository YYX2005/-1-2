#include <iostream>
using namespace std;
int main() {
	int a, b;
	char c;
	cout << "�������һ����a=";
	cin >> a;
	cout << "�����������"  ;
	cin >> c;
	cout << "������ڶ�����b=";
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
		cout << "���������" << endl;
	}
	return 0;
}
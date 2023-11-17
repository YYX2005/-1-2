#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	float hua = 0;//定义华氏温度
	cout << "请输入华氏温度" << endl;
	cin >> hua;//输入华氏温度
	float she = 0;//定义摄氏温度
	she = (hua - 32) * 5 / 9;
	
	cout << "输出摄氏温度" << fixed<< setprecision(2) << she << endl;
	return 0;
}
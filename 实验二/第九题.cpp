#include <iostream>
using namespace std;
int main() {
	int a = 2;
	int sum = 0;
	int i = 0;
	for (;;) {
		
		if (sum > 100) {
			
			i = i - 1;
			float suml =(sum-a/2) * 0.8;
			float ava = suml / i;
			cout << ava;
			break;
		}
		sum = sum + a;
		a = a * 2;
		i = i + 1;
		
	}
	
	return 0;
}
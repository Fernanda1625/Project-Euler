#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	long long n;
	int x = 2, r;
	cin >> n;
	r = 0;

	while (n != 1) {
		if (n % x == 0) {
			n = n / x;
			if (r != x) {
				cout << x << endl ;
				r = x;
			}
		}
		x = x + 1;
	}
	cout << endl;
	system("PAUSE");
	return 0;
}

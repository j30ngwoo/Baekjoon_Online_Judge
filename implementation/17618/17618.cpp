#include <iostream>
using namespace std;

int main(void) {
	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int temp = i;
		int sum = 0;
		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}
		if (i % sum == 0)
			count++;
	}
	cout << count;
	return (0);
}
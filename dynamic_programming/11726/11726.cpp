#include <iostream>

using namespace std;

int arr[1001];
int n;

int main(void) {
	cin >> n;

	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= n; i++)
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	cout << arr[n];

	return (0);
}
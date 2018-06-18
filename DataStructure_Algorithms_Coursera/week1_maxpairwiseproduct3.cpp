#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int total = 0;
	cin >> total;
	long long numbers[total];
	for (int i = 0; i < total;i++) {
		cin >> numbers[i];
	}
	size_t size = sizeof(numbers)/sizeof(numbers[0]);
	sort(numbers, numbers + size);
	
	long long result = numbers[total-1] * numbers[total-2];
	cout << result;
	return 1;
}

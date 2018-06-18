#include <iostream>
#include <string>

using namespace std;
using std::max;

long long MaxProduct(const long long *num, const int n) {
	long long product = 0; 
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			product = max(product, num[i] * num[j]);
   		}
	}
	return product;
}

int main() {
	int total = 0;
	cin >> total;
	long long numbers[total];
	for (int i = 0; i < total;i++) {
		cin >> numbers[i];
	}
	
	long long product = MaxProduct(numbers, total);
	cout << product;
	return 1;
}

#include <iostream>
#include <string>

using namespace std;

long int MaxProduct(const long int *num, const int n) {
	long int product = 0; 
	int index1 = 0, i = 0;
	for (i = 0; i < n; i++) {
		if (num[i] > num[index1]) {
			index1 = i;
		}
	}
	int index2 = 0;	
	if (index1 == 0) {
		index2 = 1;
	} else {
		index2 = 0;
	}
	
	for (i = 0; i < n; i++) {
		if ((num[i] != num[index1]) && (num[i] > num[index2])) {
			index2 = i;
		}
	}
	
	product = num[index1] * num[index2];
	return product;
}

int main() {
	int total = 0;
	cin >> total;
	long int numbers[total];
	for (int i = 0; i < total;i++) {
		cin >> numbers[i];
	}
	
	long int product = MaxProduct(numbers, total);
	cout << product;
	return 1;
}

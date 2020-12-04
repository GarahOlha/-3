#include <iostream>
#include <math.h>

int Fact(int a) {
	int fact = 1;
	
	for (int i = 1; i <= a; i++)
		fact *= i;

	return fact;
}

int main() {
	int n;
	double sum = 0;

	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		sum += (1 / Fact(pow(i, 2)));
	}

	std::cout << "Result ";
	std::cout << sum << std::endl;
	return 0;
}
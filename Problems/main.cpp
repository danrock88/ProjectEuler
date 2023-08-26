#include <iostream>

using namespace std;

int SumOfMultiplesOf3or5(int range) {
	int sum = 0;
	for (int i = 0; i < range; i++) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			sum += i;
		}
	}
	return sum;
}

int main() {
	int range = 1000;
	cout << "The Sum of all multiples of 3 or 5 below " << range << " is " << SumOfMultiplesOf3or5(range) << endl;
}